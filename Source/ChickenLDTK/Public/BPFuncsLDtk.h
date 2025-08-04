// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "LDtkMapAsset.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BPFuncsLDtk.generated.h"

/**
 * 
 */

UENUM(BlueprintType)
enum class ELDtkEntityFieldType : uint8
{
	Float,
	Int,
	Bool,
	String,
	Point,
	Enum,
	EntityRef
};

UCLASS()
class CHICKENLDTK_API UBPFuncsLDtk : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable,BlueprintPure, Category = "LDtk")
	static FVector LDtKPosToUEPos(FVector2D In);

	UFUNCTION(BlueprintCallable,Category="LDtk", Meta = (ExpandEnumAsExecs = "Branches"))
	static FString BranchOnLDTKFieldType(FLDtkEntity Entity, FString FieldName, ELDtkEntityFieldType& Branches);

	
};
