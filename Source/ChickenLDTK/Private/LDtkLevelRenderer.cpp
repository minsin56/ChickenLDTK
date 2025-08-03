// Fill out your copyright notice in the Description page of Project Settings.


#include "LDtkLevelRenderer.h"

#include "EventManager.h"
#include "LDtkMapAsset.h"
#include "PaperTileMapComponent.h"
#include "PaperTileMap.h"
#include "Paper2D/Classes/PaperTileSet.h"
#include "PaperTileLayer.h"
#include "ViewportInteractionTypes.h"
#include "Components/BoxComponent.h"
#include "Kismet/GameplayStatics.h"
#include "LDtkLoader/Level.hpp"
#include "LDtkLoader/Tile.hpp"


// Sets default values
ALDtkLevelRenderer::ALDtkLevelRenderer()	
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	MeshComponent = CreateDefaultSubobject<UProceduralMeshComponent>("MeshComponent");
	MeshComponent->SetupAttachment(RootComponent);
	MeshComponent->bUseAsyncCooking = true;
}

// Called when the game starts or when spawned
void ALDtkLevelRenderer::BeginPlay()
{
	Super::BeginPlay();

	for (FLDtkEntity Element : MapAsset->Entities)
	{
		if (EntityLookup.Find(Element.Name))
		{
			TSubclassOf<ALDtkSpawnEntity> ActorClass = EntityLookup[Element.Name];

			FTransform Transform;
			Transform.SetLocation(FVector(Element.WorldPosition.X,0,-Element.WorldPosition.Y));
			Transform.SetScale3D(FVector(1,1,1));


			ALDtkSpawnEntity* Actor = GetWorld()->SpawnActor<ALDtkSpawnEntity>(ActorClass, Transform);
			Actor->EntityRef = Element;
			for (auto Field : Element.Fields)
			{
				Actor->SetFields(Field.Key,Field.Value);
			}
			UGameplayStatics::FinishSpawningActor(Actor, Transform);
		
		}
	}

	GenCollisionLayer();

}
// Called every frame
void ALDtkLevelRenderer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ALDtkLevelRenderer::OnConstruction(const FTransform& Transform)
{
	//Super::OnConstruction(Transform);

	if (MapAsset)
	{
		if (MeshComponent->GetNumSections() > 0)
		{
			MeshComponent->ClearAllMeshSections();
		}
		LoadAndGenMesh();
	}

}

void ALDtkLevelRenderer::LoadAndGenMesh()
{
	LayerIndex = 0;
	for (auto Layer: MapAsset->TileLayers)
	{
		GenTileLayer(Layer);
		LayerIndex++;
	}
}

void ALDtkLevelRenderer::GenTileLayer(FLDtkTileLayer LayerAsset)
{
	if (LayerAsset.Tiles.Num() == 0)
	{
		return;
	}
	
	TArray<FVector> Vertices;
	TArray<int32> Indices;

	TArray<FVector2D> UVs;
	TArray<FVector> Normals;
	TArray<FProcMeshTangent> Tangents;
	TArray<FLinearColor> Colors;
	FString SourceImage = LayerAsset.Tiles[0].TileSetPath;
	FString AssetName = FPaths::GetBaseFilename(SourceImage) + TEXT("_TileSet");
	UPaperTileSet* TileSet = FindTileSetByName(AssetName);

	if (TileSet)
	{
		TileSet->GetTileSheetTexture()->ConditionalPostLoad();
		TileSet->GetTileSheetTexture()->UpdateResource();
	}

	int32 VertexIndex = 0;

	int32 AtlasWidth = TileSet->GetTileSheetTexture()->GetSizeX();
	int32 AtlasHeight = TileSet->GetTileSheetTexture()->GetSizeY();
	int32 TileSize = LayerAsset.TileSizeX;

	for (auto Tile : LayerAsset.Tiles)
	{
		int32 TileID = Tile.TileID;

		int GridSize = LayerAsset.TileSizeX;
		
		int32 X = Tile.Position.X;
		int32 Y = Tile.Position.Y;
		float SrcX = Tile.TileSourcePos.X;
		float SrcY = Tile.TileSourcePos.Y;

		float U0 = (SrcX) / AtlasWidth;
		float V0 = (SrcY) / AtlasHeight;
		float U1 = (SrcX + TileSize) / AtlasWidth;
		float V1 = (SrcY + TileSize) / AtlasHeight;

		FVector BasePos = FVector(X,LayerIndex * 0.05f,-Y);


		Vertices.Add(BasePos);
		Vertices.Add(BasePos + FVector(TileSize,0,0));
		Vertices.Add(BasePos + FVector(TileSize,0,-TileSize));
		Vertices.Add(BasePos + FVector(0,0,-TileSize));

		UVs.Add(FVector2D(U0,V0));
		UVs.Add(FVector2D(U1,V0));
		UVs.Add(FVector2D(U1,V1));
		UVs.Add(FVector2D(U0,V1));

		Indices.Add(VertexIndex + 0);
		Indices.Add(VertexIndex + 1);
		Indices.Add(VertexIndex + 2);
		Indices.Add(VertexIndex + 0);
		Indices.Add(VertexIndex + 2);
		Indices.Add(VertexIndex + 3);

		
		Normals.Append({ FVector(0, -1, 0), FVector(0, -1, 0), FVector(0, -1, 0), FVector(0, -1, 0) });
		
		Tangents.Append({ FProcMeshTangent(1, 0, 0), FProcMeshTangent(1, 0, 0), FProcMeshTangent(1, 0, 0), FProcMeshTangent(1, 0, 0) });
		Colors.Append({ FLinearColor::White, FLinearColor::White, FLinearColor::White, FLinearColor::White });

		VertexIndex += 4;
	}
	MeshComponent->CreateMeshSection_LinearColor(LayerIndex,Vertices,Indices,Normals,UVs,Colors,Tangents,false);

	if (IsValid(TileSet))
	{
		UMaterialInstanceDynamic* DynMat = UMaterialInstanceDynamic::Create(Material,this);
		DynMat->SetTextureParameterValue("Texture", TileSet->GetTileSheetTexture());
		if (TileSet->GetAdditionalTextures().Num() > 0)
		{
			auto Normal = TileSet->GetAdditionalTextures()[0];
			DynMat->SetTextureParameterValue("Normal", Normal);

		}
		MeshComponent->SetMaterial(LayerIndex, DynMat);
	}
	
}

void ALDtkLevelRenderer::GenCollisionLayer()
{
	for (auto Layer : MapAsset->IntGridLayers)
	{
		if (Layer.LayerName == "Collision")
		{
			for (int x = 0; x < Layer.Width; x++)
			{
				for (int y = 0; y < Layer.Height; y++)
				{
					int Index = (y * Layer.Width) + x;

					FLDtkIntGridValue Value = Layer.Values[Index];

					if (Value.Value > 0)
					{
						UBoxComponent* Box = NewObject<UBoxComponent>(this);
						Box->RegisterComponent();
						Box->SetCollisionProfileName("BlockAll");
						Box->AttachToComponent(RootComponent,FAttachmentTransformRules::SnapToTargetNotIncludingScale);
						Box->SetBoxExtent(FVector(Layer.TileSizeX / 2,16,Layer.TileSizeY / 2));
						Box->SetWorldLocation(GetActorLocation() + FVector(Value.Position.X * Layer.TileSizeX,0,-Value.Position.Y * Layer.TileSizeY) + FVector(Layer.TileSizeX / 2,0, -Layer.TileSizeY / 2));
					}
				}
			}
		}
	}
}

