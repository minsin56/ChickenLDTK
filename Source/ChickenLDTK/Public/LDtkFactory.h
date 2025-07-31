// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PaperTileSet.h"

#include "LDtkFactory.generated.h"

/**
 * 
 */
UCLASS()
class CHICKENLDTK_API ULDtkFactory : public UFactory
{
	GENERATED_BODY()

public:
	ULDtkFactory();

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
};
