// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AssetTypeActions_Base.h"
#include "AssetTypeActions/AssetTypeActions_DataAsset.h"

/**
 * 
 */
class ULDtkMapAsset;

class  FAssetTypeActions_LDtkAsset : public FAssetTypeActions_Base
{
public:
	FAssetTypeActions_LDtkAsset(EAssetTypeCategories::Type InAssetCategory)
		: MyAssetCategory(InAssetCategory) {}

	virtual FText GetName() const override;
	virtual FColor GetTypeColor() const override;
	virtual UClass* GetSupportedClass() const override;
	virtual uint32 GetCategories() override;
	virtual bool HasActions(const TArray<UObject*>& InObjects) const override;
	

	virtual void GetActions(const TArray<UObject*>& InObjects, FMenuBuilder& MenuBuilder) override;

	void ReimportAssets(TArray<TWeakObjectPtr<ULDtkMapAsset>> Assets);


private:
	EAssetTypeCategories::Type MyAssetCategory;
};
