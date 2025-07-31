// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LDtkLevelRenderer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeLDtkLevelRenderer() {}

// ********** Begin Cross Module References ********************************************************
CHICKENLDTK_API UClass* Z_Construct_UClass_ALDtkLevelRenderer();
CHICKENLDTK_API UClass* Z_Construct_UClass_ALDtkLevelRenderer_NoRegister();
CHICKENLDTK_API UClass* Z_Construct_UClass_ULDtkMapAsset_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
PROCEDURALMESHCOMPONENT_API UClass* Z_Construct_UClass_UProceduralMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_ChickenLDTK();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ALDtkLevelRenderer *******************************************************
void ALDtkLevelRenderer::StaticRegisterNativesALDtkLevelRenderer()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ALDtkLevelRenderer;
UClass* ALDtkLevelRenderer::GetPrivateStaticClass()
{
	using TClass = ALDtkLevelRenderer;
	if (!Z_Registration_Info_UClass_ALDtkLevelRenderer.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("LDtkLevelRenderer"),
			Z_Registration_Info_UClass_ALDtkLevelRenderer.InnerSingleton,
			StaticRegisterNativesALDtkLevelRenderer,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_ALDtkLevelRenderer.InnerSingleton;
}
UClass* Z_Construct_UClass_ALDtkLevelRenderer_NoRegister()
{
	return ALDtkLevelRenderer::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ALDtkLevelRenderer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "LDtkLevelRenderer.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/LDtkLevelRenderer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapAsset_MetaData[] = {
		{ "Category", "LDtkLevelRenderer" },
		{ "ModuleRelativePath", "Private/LDtkLevelRenderer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[] = {
		{ "Category", "LDtkLevelRenderer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/LDtkLevelRenderer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[] = {
		{ "Category", "LDtkLevelRenderer" },
		{ "ModuleRelativePath", "Private/LDtkLevelRenderer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MapAsset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALDtkLevelRenderer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALDtkLevelRenderer_Statics::NewProp_MapAsset = { "MapAsset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALDtkLevelRenderer, MapAsset), Z_Construct_UClass_ULDtkMapAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapAsset_MetaData), NewProp_MapAsset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALDtkLevelRenderer_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALDtkLevelRenderer, MeshComponent), Z_Construct_UClass_UProceduralMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComponent_MetaData), NewProp_MeshComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALDtkLevelRenderer_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALDtkLevelRenderer, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Material_MetaData), NewProp_Material_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALDtkLevelRenderer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALDtkLevelRenderer_Statics::NewProp_MapAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALDtkLevelRenderer_Statics::NewProp_MeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALDtkLevelRenderer_Statics::NewProp_Material,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALDtkLevelRenderer_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ALDtkLevelRenderer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ChickenLDTK,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALDtkLevelRenderer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALDtkLevelRenderer_Statics::ClassParams = {
	&ALDtkLevelRenderer::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ALDtkLevelRenderer_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ALDtkLevelRenderer_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALDtkLevelRenderer_Statics::Class_MetaDataParams), Z_Construct_UClass_ALDtkLevelRenderer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ALDtkLevelRenderer()
{
	if (!Z_Registration_Info_UClass_ALDtkLevelRenderer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALDtkLevelRenderer.OuterSingleton, Z_Construct_UClass_ALDtkLevelRenderer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALDtkLevelRenderer.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ALDtkLevelRenderer);
ALDtkLevelRenderer::~ALDtkLevelRenderer() {}
// ********** End Class ALDtkLevelRenderer *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Unreal_Projects_CozyCookingGame_Plugins_ChickenLDTK_Source_ChickenLDTK_Private_LDtkLevelRenderer_h__Script_ChickenLDTK_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALDtkLevelRenderer, ALDtkLevelRenderer::StaticClass, TEXT("ALDtkLevelRenderer"), &Z_Registration_Info_UClass_ALDtkLevelRenderer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALDtkLevelRenderer), 1131021008U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_CozyCookingGame_Plugins_ChickenLDTK_Source_ChickenLDTK_Private_LDtkLevelRenderer_h__Script_ChickenLDTK_923471336(TEXT("/Script/ChickenLDTK"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_CozyCookingGame_Plugins_ChickenLDTK_Source_ChickenLDTK_Private_LDtkLevelRenderer_h__Script_ChickenLDTK_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_CozyCookingGame_Plugins_ChickenLDTK_Source_ChickenLDTK_Private_LDtkLevelRenderer_h__Script_ChickenLDTK_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
