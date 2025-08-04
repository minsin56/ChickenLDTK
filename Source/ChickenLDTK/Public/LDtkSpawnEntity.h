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
	UPROPERTY(EditAnywhere,BlueprintReadOnly)
	FString IID;
	
	UFUNCTION(BlueprintNativeEvent, Category="LDTK")
	void SetFields(const FString& Key, const FString& Value);
	UFUNCTION(BlueprintNativeEvent, Category="LDTK")
	void InitEntity();
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, Category="LDTK")
	FVector2D GetPointField(FString Name);

	UFUNCTION(BlueprintCallable, Category="LDTK")
	int GetIntField(FString Name);

	UFUNCTION(BlueprintCallable, Category="LDTK")
	float GetFloatField(FString Name);

	UFUNCTION(BlueprintCallable, Category="LDTK")
	FString GetEnumField(FString Name);

	UFUNCTION(BlueprintCallable, Category="LDTK")
	FString GetEntityRefField(FString Name);

	UFUNCTION(BlueprintCallable, Category="LDTK")
	bool GetBoolField(FString Name);

	
	UFUNCTION(BlueprintCallable, Category="LDTK")
	FString GetStringField(FString Name);
};
