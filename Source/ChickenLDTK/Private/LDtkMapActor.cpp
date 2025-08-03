// Fill out your copyright notice in the Description page of Project Settings.


#include "LDtkMapActor.h"

#include "Kismet/GameplayStatics.h"


// Sets default values
ALDtkMapActor::ALDtkMapActor()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ALDtkMapActor::BeginPlay()
{
	Super::BeginPlay();
	GenerateMaps();
}

void ALDtkMapActor::GenerateMaps()
{
	for (ALDtkLevelRenderer* Actor: Renderers)
	{
		Actor->Destroy();
	}
	Renderers.Empty();


	for (auto Map : Maps)
	{
		FTransform Transform;
		Transform.SetLocation(FVector(Map->Position.X,GetActorLocation().Y,-Map->Position.Y));
		Transform.SetScale3D(FVector(1,1,1));
		ALDtkLevelRenderer* Renderer;
		if (RendererClass)
		{
			Renderer = Cast<ALDtkLevelRenderer>(UGameplayStatics::BeginDeferredActorSpawnFromClass(GetWorld(),RendererClass,Transform));
		}
		else
		{
			Renderer = Cast<ALDtkLevelRenderer>(UGameplayStatics::BeginDeferredActorSpawnFromClass(GetWorld(),ALDtkLevelRenderer::StaticClass(),FTransform()));
		}

		Renderer->EntityLookup = EntityLookup;
		Renderer->MapAsset = Map;
		Renderer->Material = Material;
		
		Renderers.Add(Renderer);

		UGameplayStatics::FinishSpawningActor(Renderer, Transform);
		Renderer->AttachToActor(this,FAttachmentTransformRules::KeepWorldTransform);

	}
}

// Called every frame
void ALDtkMapActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ALDtkMapActor::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);
	if (ConstructInEditor)
	{
		GenerateMaps();
	}
}


