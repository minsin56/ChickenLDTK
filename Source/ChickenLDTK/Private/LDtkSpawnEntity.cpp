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
