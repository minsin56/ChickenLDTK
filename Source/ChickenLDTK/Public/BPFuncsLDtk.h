// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BPFuncsLDtk.generated.h"

/**
 * 
 */
UCLASS()
class CHICKENLDTK_API UBPFuncsLDtk : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable,BlueprintPure, Category = "LDtk")
	static FVector LDtKPosToUEPos(FVector2D In);

	
};
