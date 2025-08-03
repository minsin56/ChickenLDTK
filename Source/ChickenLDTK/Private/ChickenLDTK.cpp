// Copyright Epic Games, Inc. All Rights Reserved.

#include "ChickenLDTK.h"



#define LOCTEXT_NAMESPACE "FChickenLDTKModule"

void FChickenLDTKModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
#if WITH_EDITOR

	
#endif
}

void FChickenLDTKModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FChickenLDTKModule, ChickenLDTK)