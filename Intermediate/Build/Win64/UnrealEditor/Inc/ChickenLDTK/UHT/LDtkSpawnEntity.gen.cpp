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
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_ChickenLDTK();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ALDtkSpawnEntity Function GetBoolField ***********************************
struct Z_Construct_UFunction_ALDtkSpawnEntity_GetBoolField_Statics
{
	struct LDtkSpawnEntity_eventGetBoolField_Parms
	{
		FString Name;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LDTK" },
		{ "ModuleRelativePath", "Public/LDtkSpawnEntity.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ALDtkSpawnEntity_GetBoolField_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LDtkSpawnEntity_eventGetBoolField_Parms, Name), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ALDtkSpawnEntity_GetBoolField_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((LDtkSpawnEntity_eventGetBoolField_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALDtkSpawnEntity_GetBoolField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LDtkSpawnEntity_eventGetBoolField_Parms), &Z_Construct_UFunction_ALDtkSpawnEntity_GetBoolField_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALDtkSpawnEntity_GetBoolField_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALDtkSpawnEntity_GetBoolField_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALDtkSpawnEntity_GetBoolField_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALDtkSpawnEntity_GetBoolField_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALDtkSpawnEntity_GetBoolField_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ALDtkSpawnEntity, nullptr, "GetBoolField", Z_Construct_UFunction_ALDtkSpawnEntity_GetBoolField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALDtkSpawnEntity_GetBoolField_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALDtkSpawnEntity_GetBoolField_Statics::LDtkSpawnEntity_eventGetBoolField_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALDtkSpawnEntity_GetBoolField_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALDtkSpawnEntity_GetBoolField_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ALDtkSpawnEntity_GetBoolField_Statics::LDtkSpawnEntity_eventGetBoolField_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALDtkSpawnEntity_GetBoolField()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALDtkSpawnEntity_GetBoolField_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALDtkSpawnEntity::execGetBoolField)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetBoolField(Z_Param_Name);
	P_NATIVE_END;
}
// ********** End Class ALDtkSpawnEntity Function GetBoolField *************************************

// ********** Begin Class ALDtkSpawnEntity Function GetEntityRefField ******************************
struct Z_Construct_UFunction_ALDtkSpawnEntity_GetEntityRefField_Statics
{
	struct LDtkSpawnEntity_eventGetEntityRefField_Parms
	{
		FString Name;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LDTK" },
		{ "ModuleRelativePath", "Public/LDtkSpawnEntity.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ALDtkSpawnEntity_GetEntityRefField_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LDtkSpawnEntity_eventGetEntityRefField_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ALDtkSpawnEntity_GetEntityRefField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LDtkSpawnEntity_eventGetEntityRefField_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALDtkSpawnEntity_GetEntityRefField_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALDtkSpawnEntity_GetEntityRefField_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALDtkSpawnEntity_GetEntityRefField_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALDtkSpawnEntity_GetEntityRefField_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALDtkSpawnEntity_GetEntityRefField_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ALDtkSpawnEntity, nullptr, "GetEntityRefField", Z_Construct_UFunction_ALDtkSpawnEntity_GetEntityRefField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALDtkSpawnEntity_GetEntityRefField_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALDtkSpawnEntity_GetEntityRefField_Statics::LDtkSpawnEntity_eventGetEntityRefField_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALDtkSpawnEntity_GetEntityRefField_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALDtkSpawnEntity_GetEntityRefField_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ALDtkSpawnEntity_GetEntityRefField_Statics::LDtkSpawnEntity_eventGetEntityRefField_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALDtkSpawnEntity_GetEntityRefField()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALDtkSpawnEntity_GetEntityRefField_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALDtkSpawnEntity::execGetEntityRefField)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetEntityRefField(Z_Param_Name);
	P_NATIVE_END;
}
// ********** End Class ALDtkSpawnEntity Function GetEntityRefField ********************************

// ********** Begin Class ALDtkSpawnEntity Function GetEnumField ***********************************
struct Z_Construct_UFunction_ALDtkSpawnEntity_GetEnumField_Statics
{
	struct LDtkSpawnEntity_eventGetEnumField_Parms
	{
		FString Name;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LDTK" },
		{ "ModuleRelativePath", "Public/LDtkSpawnEntity.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ALDtkSpawnEntity_GetEnumField_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LDtkSpawnEntity_eventGetEnumField_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ALDtkSpawnEntity_GetEnumField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LDtkSpawnEntity_eventGetEnumField_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALDtkSpawnEntity_GetEnumField_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALDtkSpawnEntity_GetEnumField_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALDtkSpawnEntity_GetEnumField_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALDtkSpawnEntity_GetEnumField_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALDtkSpawnEntity_GetEnumField_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ALDtkSpawnEntity, nullptr, "GetEnumField", Z_Construct_UFunction_ALDtkSpawnEntity_GetEnumField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALDtkSpawnEntity_GetEnumField_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALDtkSpawnEntity_GetEnumField_Statics::LDtkSpawnEntity_eventGetEnumField_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALDtkSpawnEntity_GetEnumField_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALDtkSpawnEntity_GetEnumField_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ALDtkSpawnEntity_GetEnumField_Statics::LDtkSpawnEntity_eventGetEnumField_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALDtkSpawnEntity_GetEnumField()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALDtkSpawnEntity_GetEnumField_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALDtkSpawnEntity::execGetEnumField)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetEnumField(Z_Param_Name);
	P_NATIVE_END;
}
// ********** End Class ALDtkSpawnEntity Function GetEnumField *************************************

// ********** Begin Class ALDtkSpawnEntity Function GetFloatField **********************************
struct Z_Construct_UFunction_ALDtkSpawnEntity_GetFloatField_Statics
{
	struct LDtkSpawnEntity_eventGetFloatField_Parms
	{
		FString Name;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LDTK" },
		{ "ModuleRelativePath", "Public/LDtkSpawnEntity.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ALDtkSpawnEntity_GetFloatField_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LDtkSpawnEntity_eventGetFloatField_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALDtkSpawnEntity_GetFloatField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LDtkSpawnEntity_eventGetFloatField_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALDtkSpawnEntity_GetFloatField_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALDtkSpawnEntity_GetFloatField_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALDtkSpawnEntity_GetFloatField_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALDtkSpawnEntity_GetFloatField_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALDtkSpawnEntity_GetFloatField_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ALDtkSpawnEntity, nullptr, "GetFloatField", Z_Construct_UFunction_ALDtkSpawnEntity_GetFloatField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALDtkSpawnEntity_GetFloatField_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALDtkSpawnEntity_GetFloatField_Statics::LDtkSpawnEntity_eventGetFloatField_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALDtkSpawnEntity_GetFloatField_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALDtkSpawnEntity_GetFloatField_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ALDtkSpawnEntity_GetFloatField_Statics::LDtkSpawnEntity_eventGetFloatField_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALDtkSpawnEntity_GetFloatField()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALDtkSpawnEntity_GetFloatField_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALDtkSpawnEntity::execGetFloatField)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetFloatField(Z_Param_Name);
	P_NATIVE_END;
}
// ********** End Class ALDtkSpawnEntity Function GetFloatField ************************************

// ********** Begin Class ALDtkSpawnEntity Function GetIntField ************************************
struct Z_Construct_UFunction_ALDtkSpawnEntity_GetIntField_Statics
{
	struct LDtkSpawnEntity_eventGetIntField_Parms
	{
		FString Name;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LDTK" },
		{ "ModuleRelativePath", "Public/LDtkSpawnEntity.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ALDtkSpawnEntity_GetIntField_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LDtkSpawnEntity_eventGetIntField_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ALDtkSpawnEntity_GetIntField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LDtkSpawnEntity_eventGetIntField_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALDtkSpawnEntity_GetIntField_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALDtkSpawnEntity_GetIntField_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALDtkSpawnEntity_GetIntField_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALDtkSpawnEntity_GetIntField_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALDtkSpawnEntity_GetIntField_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ALDtkSpawnEntity, nullptr, "GetIntField", Z_Construct_UFunction_ALDtkSpawnEntity_GetIntField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALDtkSpawnEntity_GetIntField_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALDtkSpawnEntity_GetIntField_Statics::LDtkSpawnEntity_eventGetIntField_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALDtkSpawnEntity_GetIntField_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALDtkSpawnEntity_GetIntField_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ALDtkSpawnEntity_GetIntField_Statics::LDtkSpawnEntity_eventGetIntField_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALDtkSpawnEntity_GetIntField()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALDtkSpawnEntity_GetIntField_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALDtkSpawnEntity::execGetIntField)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetIntField(Z_Param_Name);
	P_NATIVE_END;
}
// ********** End Class ALDtkSpawnEntity Function GetIntField **************************************

// ********** Begin Class ALDtkSpawnEntity Function GetPointField **********************************
struct Z_Construct_UFunction_ALDtkSpawnEntity_GetPointField_Statics
{
	struct LDtkSpawnEntity_eventGetPointField_Parms
	{
		FString Name;
		FVector2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LDTK" },
		{ "ModuleRelativePath", "Public/LDtkSpawnEntity.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ALDtkSpawnEntity_GetPointField_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LDtkSpawnEntity_eventGetPointField_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALDtkSpawnEntity_GetPointField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LDtkSpawnEntity_eventGetPointField_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALDtkSpawnEntity_GetPointField_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALDtkSpawnEntity_GetPointField_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALDtkSpawnEntity_GetPointField_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALDtkSpawnEntity_GetPointField_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALDtkSpawnEntity_GetPointField_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ALDtkSpawnEntity, nullptr, "GetPointField", Z_Construct_UFunction_ALDtkSpawnEntity_GetPointField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALDtkSpawnEntity_GetPointField_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALDtkSpawnEntity_GetPointField_Statics::LDtkSpawnEntity_eventGetPointField_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALDtkSpawnEntity_GetPointField_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALDtkSpawnEntity_GetPointField_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ALDtkSpawnEntity_GetPointField_Statics::LDtkSpawnEntity_eventGetPointField_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALDtkSpawnEntity_GetPointField()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALDtkSpawnEntity_GetPointField_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALDtkSpawnEntity::execGetPointField)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2D*)Z_Param__Result=P_THIS->GetPointField(Z_Param_Name);
	P_NATIVE_END;
}
// ********** End Class ALDtkSpawnEntity Function GetPointField ************************************

// ********** Begin Class ALDtkSpawnEntity Function GetStringField *********************************
struct Z_Construct_UFunction_ALDtkSpawnEntity_GetStringField_Statics
{
	struct LDtkSpawnEntity_eventGetStringField_Parms
	{
		FString Name;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "LDTK" },
		{ "ModuleRelativePath", "Public/LDtkSpawnEntity.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ALDtkSpawnEntity_GetStringField_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LDtkSpawnEntity_eventGetStringField_Parms, Name), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ALDtkSpawnEntity_GetStringField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LDtkSpawnEntity_eventGetStringField_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALDtkSpawnEntity_GetStringField_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALDtkSpawnEntity_GetStringField_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALDtkSpawnEntity_GetStringField_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALDtkSpawnEntity_GetStringField_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALDtkSpawnEntity_GetStringField_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ALDtkSpawnEntity, nullptr, "GetStringField", Z_Construct_UFunction_ALDtkSpawnEntity_GetStringField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALDtkSpawnEntity_GetStringField_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALDtkSpawnEntity_GetStringField_Statics::LDtkSpawnEntity_eventGetStringField_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALDtkSpawnEntity_GetStringField_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALDtkSpawnEntity_GetStringField_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ALDtkSpawnEntity_GetStringField_Statics::LDtkSpawnEntity_eventGetStringField_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALDtkSpawnEntity_GetStringField()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALDtkSpawnEntity_GetStringField_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALDtkSpawnEntity::execGetStringField)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetStringField(Z_Param_Name);
	P_NATIVE_END;
}
// ********** End Class ALDtkSpawnEntity Function GetStringField ***********************************

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
		{ "GetBoolField", &ALDtkSpawnEntity::execGetBoolField },
		{ "GetEntityRefField", &ALDtkSpawnEntity::execGetEntityRefField },
		{ "GetEnumField", &ALDtkSpawnEntity::execGetEnumField },
		{ "GetFloatField", &ALDtkSpawnEntity::execGetFloatField },
		{ "GetIntField", &ALDtkSpawnEntity::execGetIntField },
		{ "GetPointField", &ALDtkSpawnEntity::execGetPointField },
		{ "GetStringField", &ALDtkSpawnEntity::execGetStringField },
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
		{ &Z_Construct_UFunction_ALDtkSpawnEntity_GetBoolField, "GetBoolField" }, // 2375958958
		{ &Z_Construct_UFunction_ALDtkSpawnEntity_GetEntityRefField, "GetEntityRefField" }, // 546957308
		{ &Z_Construct_UFunction_ALDtkSpawnEntity_GetEnumField, "GetEnumField" }, // 3740283855
		{ &Z_Construct_UFunction_ALDtkSpawnEntity_GetFloatField, "GetFloatField" }, // 2694439746
		{ &Z_Construct_UFunction_ALDtkSpawnEntity_GetIntField, "GetIntField" }, // 700411619
		{ &Z_Construct_UFunction_ALDtkSpawnEntity_GetPointField, "GetPointField" }, // 2786854436
		{ &Z_Construct_UFunction_ALDtkSpawnEntity_GetStringField, "GetStringField" }, // 1463882251
		{ &Z_Construct_UFunction_ALDtkSpawnEntity_InitEntity, "InitEntity" }, // 1271264683
		{ &Z_Construct_UFunction_ALDtkSpawnEntity_SetFields, "SetFields" }, // 1973040014
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALDtkSpawnEntity>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALDtkSpawnEntity_Statics::NewProp_EntityRef = { "EntityRef", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALDtkSpawnEntity, EntityRef), Z_Construct_UScriptStruct_FLDtkEntity, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EntityRef_MetaData), NewProp_EntityRef_MetaData) }; // 686704704
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
		{ Z_Construct_UClass_ALDtkSpawnEntity, ALDtkSpawnEntity::StaticClass, TEXT("ALDtkSpawnEntity"), &Z_Registration_Info_UClass_ALDtkSpawnEntity, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALDtkSpawnEntity), 1488508598U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_CookingGame_Plugins_ChickenLDTK_Source_ChickenLDTK_Public_LDtkSpawnEntity_h__Script_ChickenLDTK_4234980116(TEXT("/Script/ChickenLDTK"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_CookingGame_Plugins_ChickenLDTK_Source_ChickenLDTK_Public_LDtkSpawnEntity_h__Script_ChickenLDTK_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_CookingGame_Plugins_ChickenLDTK_Source_ChickenLDTK_Public_LDtkSpawnEntity_h__Script_ChickenLDTK_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
