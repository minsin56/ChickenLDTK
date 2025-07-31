// Fill out your copyright notice in the Description page of Project Settings.


#include "LDtkFactory.h"

#include "LDtkMapAsset.h"
#include "AssetRegistry/AssetRegistryModule.h"
#include "Factories/TextureFactory.h"
#include "Misc/FileHelper.h"
#include "HAL/PlatformFileManager.h"
#include "Misc/Paths.h"


#include "LDtkLoader/Project.hpp"
TMap<FString,UPaperTileSet*>  ULDtkFactory::ImportedTileSets;

ULDtkFactory::ULDtkFactory()
{
	bEditorImport = true;
	bText = false;
	SupportedClass = ULDtkMapAsset::StaticClass();
	Formats.Add(TEXT("ldtk;LDtk Map File"));
}

UObject* ULDtkFactory::FactoryCreateFile(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, const FString& Filename, const TCHAR* Parms, FFeedbackContext* Warn, bool& bOutOperationCanceled)
{
	FString FileContents;

	if (!FFileHelper::LoadFileToString(FileContents, *Filename))
	{
		UE_LOG(LogTemp,Error,TEXT("Failed To Load File"));
		return nullptr;
	}

	ldtk::Project Proj;
	Proj.loadFromMemory(reinterpret_cast<const unsigned char*>(TCHAR_TO_UTF8(*FileContents)),FileContents.Len());
	const auto& Level = Proj.getWorld().allLevels()[0];

	ULDtkMapAsset* NewAsset = NewObject<ULDtkMapAsset>(InParent,InClass,InName,Flags);
	NewAsset->LevelName = FString(Level.name.c_str());



	for (const auto& TileSet : Proj.allTilesets())
	{
		FString RelPath = FString(TileSet.path.c_str());
		FString AbsPath = FPaths::ConvertRelativePathToFull(FPaths::GetPath(Filename),RelPath);
		FString PackagePath = TEXT("LDtkTileSets");

		UPaperTileSet* TS = ImportAndCreateTileSet(
			AbsPath,
			PackagePath,
			TileSet.tile_size,
			TileSet.tile_size);

		if (TS)
		{
			FString TileSetKey = FString::FromInt(TileSet.uid);
			ImportedTileSets.Add(TileSetKey, TS);
		}
		
	}
	
	for (const auto& Layer : Level.allLayers())
	{
		if (Layer.getType() == ldtk::LayerType::Entities)
		{
			for (const auto& Entity: Layer.allEntities())
			{
				FLdtkEntity Ent;
				Ent.Name = FString(Entity.getName().c_str());
				Ent.Position = FVector2D(Entity.getPosition().x, Entity.getPosition().y);

				for (const auto& Field: Entity.allFields())
				{
				}


				NewAsset->Entities.Add(Ent);
			}
		}


		if (Layer.getType() == ldtk::LayerType::Tiles)
		{
			FLDtkTileLayer TileLayer;
			TileLayer.LayerName = FString(Layer.getName().c_str());
			TileLayer.TileSetID = Layer.getTileset().path.c_str();
			TileLayer.IID = FText::FromString(Layer.iid.str().c_str());
			for (const auto& Tile: Layer.allTiles())
			{
				FLDtkTile LTile;
				LTile.TileID = Tile.coordId;
				LTile.Position = FVector2D(Tile.getPosition().x,Tile.getPosition().y);
				LTile.TileSetPath = Layer.getTileset().name.c_str();
				LTile.TileSourcePos = FVector2D(Tile.getTextureRect().x,Tile.getTextureRect().y);
				
				TileLayer.Tiles.Add(LTile);
			}
			
			NewAsset->TileLayers.Add(TileLayer);
		}
	}
	NewAsset->LevelWidth = Level.size.x;
	NewAsset->LevelHeight = Level.size.y;

	NewAsset->TileSizeX = 16;
	NewAsset->TileSizeY = 16;


	return NewAsset;
}

UTexture2D* ULDtkFactory::FindExistingTexture(const FString& AssetPath)
{
	FString ObjectPath = FString::Printf(TEXT("/Game/%s.%s"),
			*AssetPath.Replace(TEXT("\\"), TEXT("/")), *FPaths::GetBaseFilename(AssetPath));

	return Cast<UTexture2D>(StaticLoadObject(UTexture2D::StaticClass(), nullptr, *ObjectPath));
}

UTexture2D* ULDtkFactory::ImportTexture(const FString& SourcePath, const FString& DestFolder)
{
	FString AssetName = FPaths::GetBaseFilename(SourcePath);

	UTextureFactory* TextureFactory = NewObject<UTextureFactory>();
	TextureFactory->AddToRoot();
	TextureFactory->SuppressImportOverwriteDialog();

	bool B = false;
	UObject* ImportedAsset = TextureFactory->FactoryCreateFile(
		UTexture2D::StaticClass(),
		CreatePackage(*FString::Printf(TEXT("/Game/%s/%s"), *DestFolder, *AssetName)),
		FName(AssetName),
		RF_Public | RF_Standalone,
		SourcePath,
		nullptr,
		GWarn,B
	);

	return Cast<UTexture2D>(ImportedAsset);
}

UPaperTileSet* ULDtkFactory::ImportAndCreateTileSet(const FString& ImagePath, const FString& PackagePath, int TileWidth,
	int TileHeight)
{
	FString TextureName = FPaths::GetBaseFilename(ImagePath);
    FString FullPackagePath = FString::Printf(TEXT("/Game/%s"), *PackagePath);
    FString FullAssetName = TextureName + TEXT("_TileSet");

    // Try to find existing one first
    FString ExistingPath = FullPackagePath + "/" + FullAssetName;
    UObject* ExistingAsset = LoadObject<UObject>(nullptr, *ExistingPath);
    if (ExistingAsset)
    {
        return Cast<UPaperTileSet>(ExistingAsset);
    }

    // 1. Import the texture if needed
    FString TextureAssetPath = FullPackagePath + "/" + TextureName;
    UTexture2D* Texture = Cast<UTexture2D>(StaticLoadObject(UTexture2D::StaticClass(), nullptr, *TextureAssetPath));

    if (!Texture)
    {
        UTextureFactory* TextureFactory = NewObject<UTextureFactory>();
        TextureFactory->AddToRoot();
        TextureFactory->SuppressImportOverwriteDialog();

        FString AbsoluteTexturePath = FPaths::ConvertRelativePathToFull(ImagePath);

        UPackage* TexturePackage = CreatePackage(*TextureAssetPath);
        TexturePackage->FullyLoad();

    	bool B = false;

        UObject* Imported = TextureFactory->FactoryCreateFile(
            UTexture2D::StaticClass(),
            TexturePackage,
            *TextureName,
            RF_Public | RF_Standalone,
            AbsoluteTexturePath,
            nullptr,
            GWarn,
            B
        );

        Texture = Cast<UTexture2D>(Imported);
        if (!Texture) return nullptr;

        FAssetRegistryModule::AssetCreated(Texture);
        TexturePackage->MarkPackageDirty();
    }

    // 2. Create the PaperTileSet asset
    UPackage* TileSetPackage = CreatePackage(*FString::Printf(TEXT("%s/%s"), *FullPackagePath, *FullAssetName));
    TileSetPackage->FullyLoad();

    UPaperTileSet* TileSet = NewObject<UPaperTileSet>(TileSetPackage, UPaperTileSet::StaticClass(), *FullAssetName, RF_Public | RF_Standalone);
    TileSet->Modify();

    TileSet->SetTileSheetTexture(Texture);
    TileSet->SetTileSize(FIntPoint(TileWidth, TileHeight));

    TileSet->PostEditChange();
    TileSet->MarkPackageDirty();

    FAssetRegistryModule::AssetCreated(TileSet);

    return TileSet;
}

