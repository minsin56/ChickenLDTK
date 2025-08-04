// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EditorFramework/AssetImportData.h"
#include "Engine/DataAsset.h"
#include "LDtkLoader/Layer.hpp"
#include "LDtkMapAsset.generated.h"

/**
 * 
 */

USTRUCT(BlueprintType)
struct FLDtkEntity
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector2D Position;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector2D WorldPosition;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector2D Size;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FString,FString> Fields;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString IID;
};

USTRUCT(BlueprintType)
struct FLDtkTile
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int32 TileID;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FVector2D Position;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FVector2D TileSourcePos;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString TileSetPath;
};


USTRUCT(BlueprintType)
struct FLDtkTileLayer
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString LayerName;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString TileSetID;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int TileSizeX;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int TileSizeY;

	
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TArray<FLDtkTile> Tiles;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FText IID;
};

USTRUCT(BlueprintType)
struct FLDtkIntGridValue
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int32 Value;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FVector2D Position;
};

USTRUCT(BlueprintType)
struct FLDtkIntGridLayer
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString LayerName;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TArray<FLDtkIntGridValue> Values;


	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int32 Width;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int32 Height;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int32 TileSizeX;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int32 TileSizeY;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FText IID;
};


UCLASS(BlueprintType)
class CHICKENLDTK_API ULDtkMapAsset : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString LevelName;

	UPROPERTY(EditAnywhere,BlueprintReadOnly)
	FVector2D Position;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TArray<FLDtkEntity> Entities;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TArray<FLDtkTileLayer> TileLayers;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TArray<FLDtkIntGridLayer> IntGridLayers;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int32 LevelIndex;

	UPROPERTY(VisibleAnywhere, Instanced, Category = Import)
	TObjectPtr<UAssetImportData> AssetImportData;

	virtual void PostInitProperties() override
	{
		Super::PostInitProperties();
		if (!HasAnyFlags(RF_ClassDefaultObject))
		{
			AssetImportData = NewObject<UAssetImportData>(this, TEXT("AssetImportData"));
		}
	}


	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int LevelWidth;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int LevelHeight;
};
