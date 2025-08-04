// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LDtkSpawnEntity.h"
#include "LDtkEntityReplacementDef.generated.h"

/**
 * 
 */
UCLASS(Blueprintable,Blueprintable)
class CHICKENLDTK_API ULDtkEntityReplacementDef : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FString,TSubclassOf<ALDtkSpawnEntity>> EntityLookup;

};
