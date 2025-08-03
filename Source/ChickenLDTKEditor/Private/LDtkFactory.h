// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EditorReimportHandler.h"
#include "LDtkMapAsset.h"
#include "PaperTileSet.h"
#include "Factories/Factory.h"

#include "LDtkFactory.generated.h"

/**
 * 
 */
UCLASS()
class CHICKENLDTKEDITOR_API ULDtkFactory : public UFactory,public FReimportHandler
{
	GENERATED_BODY()

public:
	ULDtkFactory();

	static ULDtkFactory* Instance;

	virtual UObject* FactoryCreateFile(
	UClass* InClass,
	UObject* InParent,
	FName InName,
	EObjectFlags Flags,
	const FString& Filename,
	const TCHAR* Parms,
	FFeedbackContext* Warn,
	bool& bOutOperationCanceled
) override;

	UTexture2D* FindExistingTexture(const FString& AssetPath);

	static UTexture2D* ImportTexture(const FString& SourcePath, const FString& DestFolder);
	
	UPaperTileSet* ImportAndCreateTileSet(const FString& ImagePath, const FString& PackagePath, int TileWidth, int TileHeight);
	

	static TMap<FString,UPaperTileSet*> ImportedTileSets;

	virtual bool FactoryCanImport(const FString& Filename) override;

	void Import(ULDtkMapAsset* NewAsset, FString& Contents,const FString& Filename, ldtk::Project* Proj, int32 LevelIndex = 0);

	// Reimport
	virtual bool CanReimport(UObject* Obj, TArray<FString>& OutFilenames) override;
	virtual void SetReimportPaths(UObject* Obj, const TArray<FString>& NewReimportPaths) override;
	virtual EReimportResult::Type Reimport(UObject* Obj) override;
	virtual int32 GetPriority() const override { return 1; }
};
