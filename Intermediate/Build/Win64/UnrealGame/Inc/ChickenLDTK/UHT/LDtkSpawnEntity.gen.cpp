// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LDtkSpawnEntity.h"
#include "LDtkMapAsset.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeLDtkSpawnEntity() {}

// ********** Begin Cross Module References ********************************************************
CHICKENLDTK_API UClass* Z_Construct_UClass_ALDtkSpawnEntity();
CHICKENLDTK_API UClass* Z_Construct_UClass_ALDtkSpawnEntity_NoRegister();
CHICKENLDTK_API UScriptStruct* Z_Construct_UScriptStruct_FLDtkEntity();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_ChickenLDTK();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ALDtkSpawnEntity Function InitEntity *************************************
static FName NAME_ALDtkSpawnEntity_InitEntity = FName(TEXT("InitEntity"));
void ALDtkSpawnEntity::InitEntity()
{
	UFunction* Func = FindFunctionChecked(NAME_ALDtkSpawnEntity_InitEntity);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		InitEntity_Implementation();
	}
}
struct Z_Construct_UFunction_ALDtkSpawnEntity_InitEntity_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LDTK" },
		{ "ModuleRelativePath", "Public/LDtkSpawnEntity.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALDtkSpawnEntity_InitEntity_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ALDtkSpawnEntity, nullptr, "InitEntity", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALDtkSpawnEntity_InitEntity_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALDtkSpawnEntity_InitEntity_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ALDtkSpawnEntity_InitEntity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALDtkSpawnEntity_InitEntity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALDtkSpawnEntity::execInitEntity)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitEntity_Implementation();
	P_NATIVE_END;
}
// ********** End Class ALDtkSpawnEntity Function InitEntity ***************************************

// ********** Begin Class ALDtkSpawnEntity Function SetFields **************************************
struct LDtkSpawnEntity_eventSetFields_Parms
{
	FString Key;
	FString Value;
};
static FName NAME_ALDtkSpawnEntity_SetFields = FName(TEXT("SetFields"));
void ALDtkSpawnEntity::SetFields(const FString& Key, const FString& Value)
{
	UFunction* Func = FindFunctionChecked(NAME_ALDtkSpawnEntity_SetFields);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		LDtkSpawnEntity_eventSetFields_Parms Parms;
		Parms.Key=Key;
		Parms.Value=Value;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		SetFields_Implementation(Key, Value);
	}
}
struct Z_Construct_UFunction_ALDtkSpawnEntity_SetFields_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LDTK" },
		{ "ModuleRelativePath", "Public/LDtkSpawnEntity.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ALDtkSpawnEntity_SetFields_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LDtkSpawnEntity_eventSetFields_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ALDtkSpawnEntity_SetFields_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LDtkSpawnEntity_eventSetFields_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALDtkSpawnEntity_SetFields_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALDtkSpawnEntity_SetFields_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALDtkSpawnEntity_SetFields_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALDtkSpawnEntity_SetFields_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALDtkSpawnEntity_SetFields_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ALDtkSpawnEntity, nullptr, "SetFields", Z_Construct_UFunction_ALDtkSpawnEntity_SetFields_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALDtkSpawnEntity_SetFields_Statics::PropPointers), sizeof(LDtkSpawnEntity_eventSetFields_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALDtkSpawnEntity_SetFields_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALDtkSpawnEntity_SetFields_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(LDtkSpawnEntity_eventSetFields_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALDtkSpawnEntity_SetFields()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALDtkSpawnEntity_SetFields_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALDtkSpawnEntity::execSetFields)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFields_Implementation(Z_Param_Key,Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class ALDtkSpawnEntity Function SetFields ****************************************

// ********** Begin Class ALDtkSpawnEntity *********************************************************
void ALDtkSpawnEntity::StaticRegisterNativesALDtkSpawnEntity()
{
	UClass* Class = ALDtkSpawnEntity::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "InitEntity", &ALDtkSpawnEntity::execInitEntity },
		{ "SetFields", &ALDtkSpawnEntity::execSetFields },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ALDtkSpawnEntity;
UClass* ALDtkSpawnEntity::GetPrivateStaticClass()
{
	using TClass = ALDtkSpawnEntity;
	if (!Z_Registration_Info_UClass_ALDtkSpawnEntity.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("LDtkSpawnEntity"),
			Z_Registration_Info_UClass_ALDtkSpawnEntity.InnerSingleton,
			StaticRegisterNativesALDtkSpawnEntity,
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
	return Z_Registration_Info_UClass_ALDtkSpawnEntity.InnerSingleton;
}
UClass* Z_Construct_UClass_ALDtkSpawnEntity_NoRegister()
{
	return ALDtkSpawnEntity::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ALDtkSpawnEntity_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "LDtkSpawnEntity.h" },
		{ "ModuleRelativePath", "Public/LDtkSpawnEntity.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EntityRef_MetaData[] = {
		{ "Category", "LDtkSpawnEntity" },
		{ "ModuleRelativePath", "Public/LDtkSpawnEntity.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IID_MetaData[] = {
		{ "Category", "LDtkSpawnEntity" },
		{ "ModuleRelativePath", "Public/LDtkSpawnEntity.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EntityRef;
	static const UECodeGen_Private::FStrPropertyParams NewProp_IID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ALDtkSpawnEntity_InitEntity, "InitEntity" }, // 1271264683
		{ &Z_Construct_UFunction_ALDtkSpawnEntity_SetFields, "SetFields" }, // 1973040014
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALDtkSpawnEntity>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALDtkSpawnEntity_Statics::NewProp_EntityRef = { "EntityRef", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALDtkSpawnEntity, EntityRef), Z_Construct_UScriptStruct_FLDtkEntity, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EntityRef_MetaData), NewProp_EntityRef_MetaData) }; // 3070829396
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ALDtkSpawnEntity_Statics::NewProp_IID = { "IID", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALDtkSpawnEntity, IID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IID_MetaData), NewProp_IID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALDtkSpawnEntity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALDtkSpawnEntity_Statics::NewProp_EntityRef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALDtkSpawnEntity_Statics::NewProp_IID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALDtkSpawnEntity_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ALDtkSpawnEntity_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ChickenLDTK,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALDtkSpawnEntity_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALDtkSpawnEntity_Statics::ClassParams = {
	&ALDtkSpawnEntity::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ALDtkSpawnEntity_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ALDtkSpawnEntity_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALDtkSpawnEntity_Statics::Class_MetaDataParams), Z_Construct_UClass_ALDtkSpawnEntity_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ALDtkSpawnEntity()
{
	if (!Z_Registration_Info_UClass_ALDtkSpawnEntity.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALDtkSpawnEntity.OuterSingleton, Z_Construct_UClass_ALDtkSpawnEntity_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALDtkSpawnEntity.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ALDtkSpawnEntity);
ALDtkSpawnEntity::~ALDtkSpawnEntity() {}
// ********** End Class ALDtkSpawnEntity ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Unreal_Projects_CookingGame_Plugins_ChickenLDTK_Source_ChickenLDTK_Public_LDtkSpawnEntity_h__Script_ChickenLDTK_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALDtkSpawnEntity, ALDtkSpawnEntity::StaticClass, TEXT("ALDtkSpawnEntity"), &Z_Registration_Info_UClass_ALDtkSpawnEntity, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALDtkSpawnEntity), 627358958U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_CookingGame_Plugins_ChickenLDTK_Source_ChickenLDTK_Public_LDtkSpawnEntity_h__Script_ChickenLDTK_3837589696(TEXT("/Script/ChickenLDTK"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_CookingGame_Plugins_ChickenLDTK_Source_ChickenLDTK_Public_LDtkSpawnEntity_h__Script_ChickenLDTK_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_CookingGame_Plugins_ChickenLDTK_Source_ChickenLDTK_Public_LDtkSpawnEntity_h__Script_ChickenLDTK_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
