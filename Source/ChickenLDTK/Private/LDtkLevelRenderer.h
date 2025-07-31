// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "LDtkMapAsset.h"
#include "PaperTileSet.h"
#include "AssetRegistry/AssetRegistryModule.h"
#include "GameFramework/Actor.h"
#include "ProceduralMeshComponent.h"
#include "LDtkLoader/Layer.hpp"
#include "LDtkLevelRenderer.generated.h"

UCLASS(BlueprintType, Blueprintable)
class CHICKENLDTK_API ALDtkLevelRenderer : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ALDtkLevelRenderer();

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	ULDtkMapAsset* MapAsset;

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	UProceduralMeshComponent* MeshComponent;

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	UMaterialInterface* Material;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void BuildMap();

	int LayerIndex = 0;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void OnConstruction(const FTransform& Transform) override;

	void LoadAndGenMesh();
	void GenTileLayer(FLDtkTileLayer LayerAsset);

	UPaperTileSet* FindTileSetByName(const FString& AssetName)
	{
		FAssetRegistryModule& AssetRegistry = FModuleManager::LoadModuleChecked<FAssetRegistryModule>("AssetRegistry");

		FARFilter Filter;
		Filter.ClassPaths.Add(UPaperTileSet::StaticClass()->GetClassPathName());
		Filter.bRecursiveClasses = true;

		TArray<FAssetData> Assets;
		AssetRegistry.Get().GetAssets(Filter, Assets);

		for (const FAssetData& Asset : Assets)
		{
			if (Asset.AssetName.ToString().Equals(AssetName, ESearchCase::IgnoreCase))
			{
				return Cast<UPaperTileSet>(Asset.GetAsset());
			}
		}

		return nullptr;
	}

};
