// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LDtkMapActor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeLDtkMapActor() {}

// ********** Begin Cross Module References ********************************************************
CHICKENLDTK_API UClass* Z_Construct_UClass_ALDtkLevelRenderer_NoRegister();
CHICKENLDTK_API UClass* Z_Construct_UClass_ALDtkMapActor();
CHICKENLDTK_API UClass* Z_Construct_UClass_ALDtkMapActor_NoRegister();
CHICKENLDTK_API UClass* Z_Construct_UClass_ALDtkSpawnEntity_NoRegister();
CHICKENLDTK_API UClass* Z_Construct_UClass_ULDtkMapAsset_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_ChickenLDTK();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ALDtkMapActor ************************************************************
void ALDtkMapActor::StaticRegisterNativesALDtkMapActor()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ALDtkMapActor;
UClass* ALDtkMapActor::GetPrivateStaticClass()
{
	using TClass = ALDtkMapActor;
	if (!Z_Registration_Info_UClass_ALDtkMapActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("LDtkMapActor"),
			Z_Registration_Info_UClass_ALDtkMapActor.InnerSingleton,
			StaticRegisterNativesALDtkMapActor,
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
	return Z_Registration_Info_UClass_ALDtkMapActor.InnerSingleton;
}
UClass* Z_Construct_UClass_ALDtkMapActor_NoRegister()
{
	return ALDtkMapActor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ALDtkMapActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "LDtkMapActor.h" },
		{ "ModuleRelativePath", "Public/LDtkMapActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Maps_MetaData[] = {
		{ "Category", "Map" },
		{ "ModuleRelativePath", "Public/LDtkMapActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EntityLookup_MetaData[] = {
		{ "Category", "Map" },
		{ "ModuleRelativePath", "Public/LDtkMapActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/LDtkMapActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConstructInEditor_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/LDtkMapActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RendererClass_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/LDtkMapActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Renderers_MetaData[] = {
		{ "ModuleRelativePath", "Public/LDtkMapActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Maps_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Maps;
	static const UECodeGen_Private::FClassPropertyParams NewProp_EntityLookup_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_EntityLookup_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_EntityLookup;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
	static void NewProp_ConstructInEditor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ConstructInEditor;
	static const UECodeGen_Private::FClassPropertyParams NewProp_RendererClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Renderers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Renderers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALDtkMapActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALDtkMapActor_Statics::NewProp_Maps_Inner = { "Maps", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ULDtkMapAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALDtkMapActor_Statics::NewProp_Maps = { "Maps", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALDtkMapActor, Maps), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Maps_MetaData), NewProp_Maps_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ALDtkMapActor_Statics::NewProp_EntityLookup_ValueProp = { "EntityLookup", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UClass, Z_Construct_UClass_ALDtkSpawnEntity_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ALDtkMapActor_Statics::NewProp_EntityLookup_Key_KeyProp = { "EntityLookup_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ALDtkMapActor_Statics::NewProp_EntityLookup = { "EntityLookup", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALDtkMapActor, EntityLookup), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EntityLookup_MetaData), NewProp_EntityLookup_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALDtkMapActor_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALDtkMapActor, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Material_MetaData), NewProp_Material_MetaData) };
void Z_Construct_UClass_ALDtkMapActor_Statics::NewProp_ConstructInEditor_SetBit(void* Obj)
{
	((ALDtkMapActor*)Obj)->ConstructInEditor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALDtkMapActor_Statics::NewProp_ConstructInEditor = { "ConstructInEditor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALDtkMapActor), &Z_Construct_UClass_ALDtkMapActor_Statics::NewProp_ConstructInEditor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConstructInEditor_MetaData), NewProp_ConstructInEditor_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ALDtkMapActor_Statics::NewProp_RendererClass = { "RendererClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALDtkMapActor, RendererClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ALDtkLevelRenderer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RendererClass_MetaData), NewProp_RendererClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALDtkMapActor_Statics::NewProp_Renderers_Inner = { "Renderers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ALDtkLevelRenderer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALDtkMapActor_Statics::NewProp_Renderers = { "Renderers", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALDtkMapActor, Renderers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Renderers_MetaData), NewProp_Renderers_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALDtkMapActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALDtkMapActor_Statics::NewProp_Maps_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALDtkMapActor_Statics::NewProp_Maps,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALDtkMapActor_Statics::NewProp_EntityLookup_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALDtkMapActor_Statics::NewProp_EntityLookup_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALDtkMapActor_Statics::NewProp_EntityLookup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALDtkMapActor_Statics::NewProp_Material,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALDtkMapActor_Statics::NewProp_ConstructInEditor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALDtkMapActor_Statics::NewProp_RendererClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALDtkMapActor_Statics::NewProp_Renderers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALDtkMapActor_Statics::NewProp_Renderers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALDtkMapActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ALDtkMapActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ChickenLDTK,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALDtkMapActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALDtkMapActor_Statics::ClassParams = {
	&ALDtkMapActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ALDtkMapActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ALDtkMapActor_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALDtkMapActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ALDtkMapActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ALDtkMapActor()
{
	if (!Z_Registration_Info_UClass_ALDtkMapActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALDtkMapActor.OuterSingleton, Z_Construct_UClass_ALDtkMapActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALDtkMapActor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ALDtkMapActor);
ALDtkMapActor::~ALDtkMapActor() {}
// ********** End Class ALDtkMapActor **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Unreal_Projects_CookingGame_Plugins_ChickenLDTK_Source_ChickenLDTK_Public_LDtkMapActor_h__Script_ChickenLDTK_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALDtkMapActor, ALDtkMapActor::StaticClass, TEXT("ALDtkMapActor"), &Z_Registration_Info_UClass_ALDtkMapActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALDtkMapActor), 2783414336U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_CookingGame_Plugins_ChickenLDTK_Source_ChickenLDTK_Public_LDtkMapActor_h__Script_ChickenLDTK_2875208502(TEXT("/Script/ChickenLDTK"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_CookingGame_Plugins_ChickenLDTK_Source_ChickenLDTK_Public_LDtkMapActor_h__Script_ChickenLDTK_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_CookingGame_Plugins_ChickenLDTK_Source_ChickenLDTK_Public_LDtkMapActor_h__Script_ChickenLDTK_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
