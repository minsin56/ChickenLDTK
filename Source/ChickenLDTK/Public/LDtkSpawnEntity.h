// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "LDtkMapAsset.h"
#include "GameFramework/Actor.h"
#include "LDtkSpawnEntity.generated.h"

UCLASS()
class CHICKENLDTK_API ALDtkSpawnEntity : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ALDtkSpawnEntity();

	UPROPERTY(EditAnywhere,BlueprintReadOnly)
	FLDtkEntity EntityRef;
	UFUNCTION(BlueprintNativeEvent, Category="LDTK")
	void SetFields(const FString& Key, const FString& Value);
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
};
