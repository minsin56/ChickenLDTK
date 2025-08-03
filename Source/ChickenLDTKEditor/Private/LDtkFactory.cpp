// Fill out your copyright notice in the Description page of Project Settings.

#if WITH_EDITORONLY_DATA

#include "LDtkFactory.h"

#include "LDtkMapAsset.h"
#include "AssetRegistry/AssetRegistryModule.h"
#include "Factories/TextureFactory.h"
#include "Misc/FileHelper.h"
#include "HAL/PlatformFileManager.h"
#include "Misc/Paths.h"


#include "LDtkLoader/Project.hpp"
#include "UObject/SavePackage.h"
TMap<FString,UPaperTileSet*>  ULDtkFactory::ImportedTileSets;

ULDtkFactory* ULDtkFactory::Instance;

ULDtkFactory::ULDtkFactory()
{
	bEditorImport = true;
	bCreateNew = false;
	bText = false;
	ImportPriority = DefaultImportPriority;
	SupportedClass = ULDtkMapAsset::StaticClass();
	Formats.Add(TEXT("ldtk;LDtk Map File"));
	Instance = this;
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
	Proj.loadFromMemory(reinterpret_cast<const unsigned char*>(TCHAR_TO_UTF8(*FileContents)),FileContents.GetAllocatedSize());
	FString ParentPath = InParent->GetPathName();
	FString PackagePath = FPackageName::GetLongPackagePath(ParentPath);
	FString BasePackagePath = FPackageName::GetLongPackagePath(InParent->GetOutermost()->GetName());

	int32 LevelIndex = 0;
	int LevelCount = Proj.getWorld().allLevels().size();
	for (int i = 0; i < LevelCount; i++)
	{
		FName LevelName(Proj.getWorld().allLevels()[i].name.c_str());
		FString FullObjectName = PackagePath + "/" + LevelName.ToString();
		const FString PackageName = BasePackagePath / LevelName.ToString();

		UPackage* Pkg = CreatePackage(*PackageName);
		Pkg->FullyLoad();
		EObjectFlags FixedFlags = Flags | RF_Standalone;

		ULDtkMapAsset* NewAsset = NewObject<ULDtkMapAsset>(Pkg,ULDtkMapAsset::StaticClass(),*LevelName.ToString(),FixedFlags);
		Import(NewAsset,FileContents,Filename,&Proj,i);

		
		NewAsset->AssetImportData = NewObject<UAssetImportData>(NewAsset);
		NewAsset->AssetImportData->Update(Filename);
		
		NewAsset->MarkPackageDirty();
		Pkg->MarkPackageDirty();
		FAssetRegistryModule::AssetCreated(NewAsset);
		FSavePackageArgs SaveArgs;
		SaveArgs.TopLevelFlags = Flags;
		SaveArgs.SaveFlags = SAVE_None;
		SaveArgs.Error = GError;
		
		FString PackageFileName = FPackageName::LongPackageNameToFilename(PackageName, FPackageName::GetAssetPackageExtension());
		bool bSuccess = UPackage::SavePackage(Pkg, NewAsset, *PackageFileName,SaveArgs);
		LevelIndex++;
	}

	return nullptr;
}

UTexture2D* ULDtkFactory::FindExistingTexture(const FString& AssetPath)
{
	FString ObjectPath = FString::Printf(TEXT("/Game/%s.%s"),
			*AssetPath.Replace(TEXT("\\"), TEXT("/")), *FPaths::GetBaseFilename(AssetPath));

	return Cast<UTexture2D>(StaticLoadObject(UTexture2D::StaticClass(), nullptr, *ObjectPath));
}

void ULDtkFactory::Import(ULDtkMapAsset* NewAsset, FString& Contents,const FString& Filename, ldtk::Project* Proj, int32 LevelIndex)
{

	const auto& Level = Proj->getWorld().allLevels()[LevelIndex];

	NewAsset->LevelName = FString(Level.name.c_str());
	NewAsset->LevelIndex = LevelIndex;
	NewAsset->Position = FVector2D(Level.position.x, Level.position.y);



	for (const auto& TileSet : Proj->allTilesets())
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
				FLDtkEntity Ent;
				Ent.Name = FString(Entity.getName().c_str());
				Ent.Position = FVector2D(Entity.getPosition().x, Entity.getPosition().y);
				Ent.WorldPosition = FVector2D(Entity.getWorldPosition().x,Entity.getWorldPosition().y);
				Ent.Size = FVector2D(Entity.getSize().x, Entity.getSize().y);

				for (const auto& Field: Entity.allFields())
				{
					auto Name = ANSI_TO_TCHAR(Field.name.c_str());
					switch (Field.type)
					{
					case ldtk::FieldType::Int:
						{
							int Val = Entity.getField<ldtk::FieldType::Int>(Field.name.c_str()).value_or(0);
							Ent.Fields.Add({FString(Name), FString(std::to_string(Val).c_str())});

							break;
						}
						
					case ldtk::FieldType::Float:
						{
							float Val = Entity.getField<ldtk::FieldType::Float>(Field.name.c_str()).value_or(0.0f);
							Ent.Fields.Add({FString(Name), FString(std::to_string(Val).c_str())});

							break;
						}
					case ldtk::FieldType::Bool:
						{
							bool Val = Entity.getField<ldtk::FieldType::Bool>(Field.name.c_str()).value_or(false);
							Ent.Fields.Add({FString(Name), FString(std::to_string(Val).c_str())});

							break;
						}
					case ldtk::FieldType::String:
						{

							break;
						}
					case ldtk::FieldType::Color:
						break;
					case ldtk::FieldType::Point:
						break;
					case ldtk::FieldType::Enum:
						{
							break;
						}
					case ldtk::FieldType::Tile:
						break;
					case ldtk::FieldType::EntityRef:
						break;
					case ldtk::FieldType::ArrayInt:
						break;
					case ldtk::FieldType::ArrayFloat:
						break;
					case ldtk::FieldType::ArrayBool:
						break;
					case ldtk::FieldType::ArrayString:
						break;
					case ldtk::FieldType::ArrayColor:
						break;
					case ldtk::FieldType::ArrayPoint:
						break;
					case ldtk::FieldType::ArrayEnum:
						break;
					case ldtk::FieldType::ArrayFilePath:
						break;
					case ldtk::FieldType::ArrayTile:
						break;
					case ldtk::FieldType::ArrayEntityRef:
						break;
					}
					
				}


				NewAsset->Entities.Add(Ent);
			}
		}


		if (!Layer.allTiles().empty())
		{
			FLDtkTileLayer TileLayer;
			TileLayer.LayerName = FString(Layer.getName().c_str());
			TileLayer.TileSetID = Layer.getTileset().path.c_str();
			TileLayer.IID = FText::FromString(Layer.iid.str().c_str());
			TileLayer.TileSizeX = Layer.getCellSize();
			TileLayer.TileSizeY = Layer.getCellSize();
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
		if (Layer.getType() == ldtk::LayerType::IntGrid)
		{
			

			FLDtkIntGridLayer IntGrid;
			IntGrid.LayerName = FString(Layer.getName().c_str());
			IntGrid.IID =FText::FromString(Layer.iid.str().c_str());
			IntGrid.Width = Layer.getGridSize().x;
			IntGrid.Height = Layer.getGridSize().y;
			IntGrid.TileSizeX = Layer.getCellSize();
			IntGrid.TileSizeY = Layer.getCellSize();

			for (int x = 0; x < IntGrid.Width; x++)
			{
				for (int y = 0; y < IntGrid.Height; y++)
				{
					auto IValue = Layer.getIntGridVal(x,y);

					FLDtkIntGridValue FValue;
					
					FValue.Value = IValue.value;
					FValue.Position = FVector2D(x,y);

					IntGrid.Values.Add(FValue);
				}
			}

			NewAsset->IntGridLayers.Add(IntGrid);
		}
	}


	// not sure if needed, but it reverses the layer order, will keep just in case
	/*
	auto ReversedTileLayers = NewAsset->TileLayers;
	std::reverse(ReversedTileLayers.begin(), ReversedTileLayers.end());
	NewAsset->TileLayers = ReversedTileLayers;

	auto ReversedIntGridLayers = NewAsset->IntGridLayers;
	std::reverse(ReversedTileLayers.begin(), ReversedTileLayers.end());
	NewAsset->IntGridLayers = ReversedIntGridLayers;
	*/
	
	
	NewAsset->LevelWidth = Level.size.x;
	NewAsset->LevelHeight = Level.size.y;
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

bool ULDtkFactory::FactoryCanImport(const FString& Filename)
{
	return Filename.EndsWith(TEXT(".ldtk"));

}

bool ULDtkFactory::CanReimport(UObject* Obj, TArray<FString>& OutFilenames)
{
	if (ULDtkMapAsset* Asset = Cast<ULDtkMapAsset>(Obj))
	{
		if (Asset->AssetImportData)
		{
			OutFilenames.Add(Asset->AssetImportData->GetFirstFilename());
			return true;
		}
	}
	return false;
}

void ULDtkFactory::SetReimportPaths(UObject* Obj, const TArray<FString>& NewReimportPaths)
{
	
	if (ULDtkMapAsset* Asset = Cast<ULDtkMapAsset>(Obj))
	{
		if (NewReimportPaths.Num() > 0)
		{
			Asset->AssetImportData->UpdateFilenameOnly(NewReimportPaths[0]);
		}
	}
}

EReimportResult::Type ULDtkFactory::Reimport(UObject* Obj)
{
	ULDtkMapAsset* Asset = Cast<ULDtkMapAsset>(Obj);
	if (!Asset || !Asset->AssetImportData) return EReimportResult::Failed;

	const FString Filename = Asset->AssetImportData->GetFirstFilename();
	FString FileContents;
	if (!FFileHelper::LoadFileToString(FileContents, *Filename))
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to reimport LDtk file: %s"), *Filename);
		return EReimportResult::Failed;
	}

	Asset->Entities.Empty();
	Asset->TileLayers.Empty();
	Asset->IntGridLayers.Empty();
	
	ldtk::Project Proj;
	Proj.loadFromMemory(reinterpret_cast<const unsigned char*>(TCHAR_TO_UTF8(*FileContents)),FileContents.GetAllocatedSize());
	Import(Asset,FileContents,Filename,&Proj,Asset->LevelIndex);
	Asset->MarkPackageDirty();
	return EReimportResult::Succeeded;
}


#endif