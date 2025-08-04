// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LDtkLevelRenderer.h"
#include "LDtkMapAsset.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeLDtkLevelRenderer() {}

// ********** Begin Cross Module References ********************************************************
CHICKENLDTK_API UClass* Z_Construct_UClass_ALDtkLevelRenderer();
CHICKENLDTK_API UClass* Z_Construct_UClass_ALDtkLevelRenderer_NoRegister();
CHICKENLDTK_API UClass* Z_Construct_UClass_ULDtkEntityReplacementDef_NoRegister();
CHICKENLDTK_API UClass* Z_Construct_UClass_ULDtkMapAsset_NoRegister();
CHICKENLDTK_API UScriptStruct* Z_Construct_UScriptStruct_FLDtkEntity();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
PROCEDURALMESHCOMPONENT_API UClass* Z_Construct_UClass_UProceduralMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_ChickenLDTK();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ALDtkLevelRenderer Function OnOverrideEntity *****************************
struct LDtkLevelRenderer_eventOnOverrideEntity_Parms
{
	FLDtkEntity Entity;
};
static FName NAME_ALDtkLevelRenderer_OnOverrideEntity = FName(TEXT("OnOverrideEntity"));
void ALDtkLevelRenderer::OnOverrideEntity(FLDtkEntity Entity)
{
	LDtkLevelRenderer_eventOnOverrideEntity_Parms Parms;
	Parms.Entity=Entity;
	UFunction* Func = FindFunctionChecked(NAME_ALDtkLevelRenderer_OnOverrideEntity);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ALDtkLevelRenderer_OnOverrideEntity_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LDTK" },
		{ "ModuleRelativePath", "Public/LDtkLevelRenderer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Entity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALDtkLevelRenderer_OnOverrideEntity_Statics::NewProp_Entity = { "Entity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LDtkLevelRenderer_eventOnOverrideEntity_Parms, Entity), Z_Construct_UScriptStruct_FLDtkEntity, METADATA_PARAMS(0, nullptr) }; // 686704704
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALDtkLevelRenderer_OnOverrideEntity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALDtkLevelRenderer_OnOverrideEntity_Statics::NewProp_Entity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALDtkLevelRenderer_OnOverrideEntity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALDtkLevelRenderer_OnOverrideEntity_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ALDtkLevelRenderer, nullptr, "OnOverrideEntity", Z_Construct_UFunction_ALDtkLevelRenderer_OnOverrideEntity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALDtkLevelRenderer_OnOverrideEntity_Statics::PropPointers), sizeof(LDtkLevelRenderer_eventOnOverrideEntity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALDtkLevelRenderer_OnOverrideEntity_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALDtkLevelRenderer_OnOverrideEntity_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(LDtkLevelRenderer_eventOnOverrideEntity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALDtkLevelRenderer_OnOverrideEntity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALDtkLevelRenderer_OnOverrideEntity_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class ALDtkLevelRenderer Function OnOverrideEntity *******************************

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
		{ "ModuleRelativePath", "Public/LDtkLevelRenderer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapAsset_MetaData[] = {
		{ "Category", "LDtkLevelRenderer" },
		{ "ModuleRelativePath", "Public/LDtkLevelRenderer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[] = {
		{ "Category", "LDtkLevelRenderer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LDtkLevelRenderer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[] = {
		{ "Category", "LDtkLevelRenderer" },
		{ "ModuleRelativePath", "Public/LDtkLevelRenderer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EntityLookup_MetaData[] = {
		{ "Category", "LDtkLevelRenderer" },
		{ "ModuleRelativePath", "Public/LDtkLevelRenderer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayerHeightLookup_MetaData[] = {
		{ "Category", "Map" },
		{ "ModuleRelativePath", "Public/LDtkLevelRenderer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MapAsset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EntityLookup;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LayerHeightLookup_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LayerHeightLookup_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_LayerHeightLookup;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ALDtkLevelRenderer_OnOverrideEntity, "OnOverrideEntity" }, // 2580136732
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALDtkLevelRenderer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALDtkLevelRenderer_Statics::NewProp_MapAsset = { "MapAsset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALDtkLevelRenderer, MapAsset), Z_Construct_UClass_ULDtkMapAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapAsset_MetaData), NewProp_MapAsset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALDtkLevelRenderer_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALDtkLevelRenderer, MeshComponent), Z_Construct_UClass_UProceduralMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComponent_MetaData), NewProp_MeshComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALDtkLevelRenderer_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALDtkLevelRenderer, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Material_MetaData), NewProp_Material_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALDtkLevelRenderer_Statics::NewProp_EntityLookup = { "EntityLookup", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALDtkLevelRenderer, EntityLookup), Z_Construct_UClass_ULDtkEntityReplacementDef_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EntityLookup_MetaData), NewProp_EntityLookup_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALDtkLevelRenderer_Statics::NewProp_LayerHeightLookup_ValueProp = { "LayerHeightLookup", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ALDtkLevelRenderer_Statics::NewProp_LayerHeightLookup_Key_KeyProp = { "LayerHeightLookup_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ALDtkLevelRenderer_Statics::NewProp_LayerHeightLookup = { "LayerHeightLookup", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALDtkLevelRenderer, LayerHeightLookup), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayerHeightLookup_MetaData), NewProp_LayerHeightLookup_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALDtkLevelRenderer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALDtkLevelRenderer_Statics::NewProp_MapAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALDtkLevelRenderer_Statics::NewProp_MeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALDtkLevelRenderer_Statics::NewProp_Material,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALDtkLevelRenderer_Statics::NewProp_EntityLookup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALDtkLevelRenderer_Statics::NewProp_LayerHeightLookup_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALDtkLevelRenderer_Statics::NewProp_LayerHeightLookup_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALDtkLevelRenderer_Statics::NewProp_LayerHeightLookup,
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
	FuncInfo,
	Z_Construct_UClass_ALDtkLevelRenderer_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
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
struct Z_CompiledInDeferFile_FID_Unreal_Projects_CookingGame_Plugins_ChickenLDTK_Source_ChickenLDTK_Public_LDtkLevelRenderer_h__Script_ChickenLDTK_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALDtkLevelRenderer, ALDtkLevelRenderer::StaticClass, TEXT("ALDtkLevelRenderer"), &Z_Registration_Info_UClass_ALDtkLevelRenderer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALDtkLevelRenderer), 2682884237U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_CookingGame_Plugins_ChickenLDTK_Source_ChickenLDTK_Public_LDtkLevelRenderer_h__Script_ChickenLDTK_204165994(TEXT("/Script/ChickenLDTK"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_CookingGame_Plugins_ChickenLDTK_Source_ChickenLDTK_Public_LDtkLevelRenderer_h__Script_ChickenLDTK_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_CookingGame_Plugins_ChickenLDTK_Source_ChickenLDTK_Public_LDtkLevelRenderer_h__Script_ChickenLDTK_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
