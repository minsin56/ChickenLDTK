// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "Modules/ModuleManager.h"

class CHICKENLDTKEDITOR_API FChickenLDTKEditorModule : public IModuleInterface
{

public:
	// Sets default values for this actor's properties

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
