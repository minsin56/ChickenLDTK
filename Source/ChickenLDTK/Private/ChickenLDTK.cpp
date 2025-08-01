// Copyright Epic Games, Inc. All Rights Reserved.

#include "ChickenLDTK.h"

#include "AssetToolsModule.h"
#include "AssetTypeActions_LDtkAsset.h"
#include "LDtkFactory.h"
#include "AssetTypeActions/AssetTypeActions_DataAsset.h"

#define LOCTEXT_NAMESPACE "FChickenLDTKModule"

void FChickenLDTKModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module

	ULDtkFactory* Factory = NewObject<ULDtkFactory>();

	Factory->AddToRoot();

	IAssetTools& AssetTools = 
	FModuleManager::LoadModuleChecked<FAssetToolsModule>(
		"AssetTools").Get();
	auto AssetCategory = AssetTools.RegisterAdvancedAssetCategory(
		FName(TEXT("LDtk")),
		LOCTEXT("LDtkAssetCategory", "LDtk")
	);
	auto AssetTypeAction = MakeShared<FAssetTypeActions_LDtkAsset>(AssetCategory);
	AssetTools.RegisterAssetTypeActions(AssetTypeAction);

}

void FChickenLDTKModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FChickenLDTKModule, ChickenLDTK)