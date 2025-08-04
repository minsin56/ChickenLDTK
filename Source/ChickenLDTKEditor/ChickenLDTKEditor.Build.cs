// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.IO;

public class ChickenLDTKEditor : ModuleRules
{
	public ChickenLDTKEditor(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		
		PublicIncludePaths.AddRange(
			new string[] {
				// ... add public include paths required here ...
			}
			);
		
		/*PublicIncludePaths.Add(Path.Combine(ModuleDirectory,"ThirdParty","include"));
		PublicAdditionalLibraries.Add(Path.Combine(ModuleDirectory,"ThirdParty","lib","LDtkLoader.lib"));*/



		
		PrivateIncludePaths.AddRange(
			new string[] {
				// ... add other private include paths required here ...
			}
			);
			
		
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				"CoreUObject",
				"Engine",
				"InputCore",
				"Json",
				"JsonUtilities",
				"Paper2D", "ChickenLDTK"
				// ... add other public dependencies that you statically link with here ...
			}
			);
		

		PrivateDependencyModuleNames.Add("UnrealEd");
		PrivateDependencyModuleNames.Add("AssetTools");
		PrivateDependencyModuleNames.Add("EditorStyle");
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine",
				"Slate",
				"SlateCore",
				"ProceduralMeshComponent"
				// ... add private dependencies that you statically link with here ...	
			}
			);
		
		
		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				// ... add any modules that your module loads dynamically here ...
			}
			);
		
		bEnableUndefinedIdentifierWarnings = false; // Optional cleanup
		PublicDefinitions.Add("DISABLE_C4702");
	}
}
