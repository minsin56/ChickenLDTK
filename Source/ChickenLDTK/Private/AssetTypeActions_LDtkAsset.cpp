// Fill out your copyright notice in the Description page of Project Settings.


#include "AssetTypeActions_LDtkAsset.h"


#include "LDtkMapAsset.h"
#include "Editor/UnrealEd/Public/Toolkits/AssetEditorToolkit.h"

#define LOCTEXT_NAMESPACE "AssetTypeActions"

FText FAssetTypeActions_LDtkAsset::GetName() const
{
	return LOCTEXT("FAssetTypeActions_LDtkAsset", "LDtk Map Asset");
}

FColor FAssetTypeActions_LDtkAsset::GetTypeColor() const
{
	return FColor(100, 200, 255); // Light blue
}

UClass* FAssetTypeActions_LDtkAsset::GetSupportedClass() const
{
	return ULDtkMapAsset::StaticClass();
}

uint32 FAssetTypeActions_LDtkAsset::GetCategories()
{
	return MyAssetCategory;
}

bool FAssetTypeActions_LDtkAsset::HasActions(const TArray<UObject*>&) const
{
	return false;
}

void FAssetTypeActions_LDtkAsset::OpenAssetEditor(const TArray<UObject*>& InObjects, TSharedPtr<IToolkitHost> EditWithinLevelEditor)
{
	for (auto ObjIt = InObjects.CreateConstIterator(); ObjIt; ++ObjIt)
	{
		if (ULDtkMapAsset* LDtkAsset = Cast<ULDtkMapAsset>(*ObjIt))
		{
			// Just use default DataAsset editor

			
		}
	}
}

#undef LOCTEXT_NAMESPACE