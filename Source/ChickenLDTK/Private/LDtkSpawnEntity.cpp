// Fill out your copyright notice in the Description page of Project Settings.


#include "LDtkSpawnEntity.h"


// Sets default values
ALDtkSpawnEntity::ALDtkSpawnEntity()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

void ALDtkSpawnEntity::SetFields_Implementation(const FString& Key, const FString& Value)
{
	
}

void ALDtkSpawnEntity::InitEntity_Implementation()
{
	
}

// Called when the game starts or when spawned
void ALDtkSpawnEntity::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ALDtkSpawnEntity::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

FVector2D ALDtkSpawnEntity::GetPointField(FString Name)
{
	if (EntityRef.PointFields.Contains(Name))
	{
		return EntityRef.PointFields[Name];
	}
	return FVector2D::ZeroVector;
}

int ALDtkSpawnEntity::GetIntField(FString Name)
{
	if (EntityRef.IntFields.Contains(Name))
	{
		return EntityRef.IntFields[Name];
	}
	return 0;
}

float ALDtkSpawnEntity::GetFloatField(FString Name)
{
	if (EntityRef.FloatFields.Contains(Name))
	{
		return EntityRef.FloatFields[Name];
	}
	return 0;
}

FString ALDtkSpawnEntity::GetEnumField(FString Name)
{
	if (EntityRef.EnumFields.Contains(Name))
	{
		return EntityRef.EnumFields[Name];
	}
	return TEXT("");
}

FString ALDtkSpawnEntity::GetEntityRefField(FString Name)
{
	if (EntityRef.EntityRefFields.Contains(Name))
	{
		return EntityRef.EntityRefFields[Name];
	}
	return TEXT("");
}

bool ALDtkSpawnEntity::GetBoolField(FString Name)
{
	if (EntityRef.BoolFields.Contains(Name))
	{
		return EntityRef.BoolFields[Name];
	}
	return false;
}

FString ALDtkSpawnEntity::GetStringField(FString Name)
{
	if (EntityRef.StringFields.Contains(Name))
	{
		return EntityRef.StringFields[Name];
	}
	return TEXT("");
}
