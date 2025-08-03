// Fill out your copyright notice in the Description page of Project Settings.


#include "AssetTypeActions_LDtkAsset.h"


#include "LDtkFactory.h"
#include "ChickenLDTK/Public/LDtkMapAsset.h"
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

void FAssetTypeActions_LDtkAsset::GetActions(const TArray<UObject*>& InObjects, FMenuBuilder& MenuBuilder)
{
	FText ButtonLabel=FText::FromString("Reimport/Replace");
	FText ButtonToolTip=FText::FromString("Replaces From Disk");

	auto LDtkAssets = GetTypedWeakObjectPtrs<ULDtkMapAsset>(InObjects);


	auto ExecAction = FExecuteAction::CreateSP(this,&FAssetTypeActions_LDtkAsset::ReimportAssets,LDtkAssets);

	auto UIAction = FUIAction(ExecAction);

	MenuBuilder.AddMenuEntry(ButtonLabel,ButtonToolTip,FSlateIcon(),UIAction);

}

void FAssetTypeActions_LDtkAsset::ReimportAssets(TArray<TWeakObjectPtr<ULDtkMapAsset>> Assets)
{
	for (auto Asset:Assets)
	{
		ULDtkMapAsset* LDTKAsset = Asset.Get();

		if (LDTKAsset)
		{
			ULDtkFactory::Instance->Reimport(LDTKAsset);
		}
	}
}

#undef LOCTEXT_NAMESPACE
