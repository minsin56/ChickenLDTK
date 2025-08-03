// Fill out your copyright notice in the Description page of Project Settings.


#include "ChickenLDTKEditor/Public/ChickenLDTKEditorModule.h"

#include "AssetTypeActions_LDtkAsset.h"
#include "LDtkFactory.h"
#define LOCTEXT_NAMESPACE "FChickenLDTKEditorModule"


void FChickenLDTKEditorModule::StartupModule()
{
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

void FChickenLDTKEditorModule::ShutdownModule()
{
	IModuleInterface::ShutdownModule();
}
#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FChickenLDTKEditorModule, ChickenLDTKEditor)
