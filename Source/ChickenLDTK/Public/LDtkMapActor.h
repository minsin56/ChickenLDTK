// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "LDtkLevelRenderer.h"
#include "LDtkMapAsset.h"
#include "GameFramework/Actor.h"
#include "LDtkMapActor.generated.h"

UCLASS()
class CHICKENLDTK_API ALDtkMapActor : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ALDtkMapActor();

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Map")
	TArray<ULDtkMapAsset*> Maps;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Rendering")
	UMaterialInterface* Material;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings")
	bool ConstructInEditor = false;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings")
	TSubclassOf<ALDtkLevelRenderer> RendererClass;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void GenerateMaps();

	UPROPERTY()
	TArray<ALDtkLevelRenderer*> Renderers;


public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void OnConstruction(const FTransform& Transform) override;

};
