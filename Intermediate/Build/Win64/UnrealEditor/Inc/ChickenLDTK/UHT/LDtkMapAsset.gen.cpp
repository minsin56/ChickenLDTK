// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LDtkMapAsset.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeLDtkMapAsset() {}

// ********** Begin Cross Module References ********************************************************
CHICKENLDTK_API UClass* Z_Construct_UClass_ULDtkMapAsset();
CHICKENLDTK_API UClass* Z_Construct_UClass_ULDtkMapAsset_NoRegister();
CHICKENLDTK_API UScriptStruct* Z_Construct_UScriptStruct_FLDtkEntity();
CHICKENLDTK_API UScriptStruct* Z_Construct_UScriptStruct_FLDtkIntGridLayer();
CHICKENLDTK_API UScriptStruct* Z_Construct_UScriptStruct_FLDtkIntGridValue();
CHICKENLDTK_API UScriptStruct* Z_Construct_UScriptStruct_FLDtkTile();
CHICKENLDTK_API UScriptStruct* Z_Construct_UScriptStruct_FLDtkTileLayer();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_UAssetImportData_NoRegister();
UPackage* Z_Construct_UPackage__Script_ChickenLDTK();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FLDtkEntity *******************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FLDtkEntity;
class UScriptStruct* FLDtkEntity::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FLDtkEntity.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FLDtkEntity.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLDtkEntity, (UObject*)Z_Construct_UPackage__Script_ChickenLDTK(), TEXT("LDtkEntity"));
	}
	return Z_Registration_Info_UScriptStruct_FLDtkEntity.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FLDtkEntity_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "ModuleRelativePath", "Public/LDtkMapAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "LDtkEntity" },
		{ "ModuleRelativePath", "Public/LDtkMapAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "Category", "LDtkEntity" },
		{ "ModuleRelativePath", "Public/LDtkMapAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldPosition_MetaData[] = {
		{ "Category", "LDtkEntity" },
		{ "ModuleRelativePath", "Public/LDtkMapAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[] = {
		{ "Category", "LDtkEntity" },
		{ "ModuleRelativePath", "Public/LDtkMapAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Fields_MetaData[] = {
		{ "Category", "LDtkEntity" },
		{ "ModuleRelativePath", "Public/LDtkMapAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IID_MetaData[] = {
		{ "Category", "LDtkEntity" },
		{ "ModuleRelativePath", "Public/LDtkMapAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldPosition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Size;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Fields_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Fields_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Fields;
	static const UECodeGen_Private::FStrPropertyParams NewProp_IID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLDtkEntity>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLDtkEntity_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLDtkEntity, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLDtkEntity_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLDtkEntity, Position), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLDtkEntity_Statics::NewProp_WorldPosition = { "WorldPosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLDtkEntity, WorldPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldPosition_MetaData), NewProp_WorldPosition_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLDtkEntity_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLDtkEntity, Size), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Size_MetaData), NewProp_Size_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLDtkEntity_Statics::NewProp_Fields_ValueProp = { "Fields", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLDtkEntity_Statics::NewProp_Fields_Key_KeyProp = { "Fields_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FLDtkEntity_Statics::NewProp_Fields = { "Fields", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLDtkEntity, Fields), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Fields_MetaData), NewProp_Fields_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLDtkEntity_Statics::NewProp_IID = { "IID", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLDtkEntity, IID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IID_MetaData), NewProp_IID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLDtkEntity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLDtkEntity_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLDtkEntity_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLDtkEntity_Statics::NewProp_WorldPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLDtkEntity_Statics::NewProp_Size,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLDtkEntity_Statics::NewProp_Fields_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLDtkEntity_Statics::NewProp_Fields_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLDtkEntity_Statics::NewProp_Fields,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLDtkEntity_Statics::NewProp_IID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLDtkEntity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLDtkEntity_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ChickenLDTK,
	nullptr,
	&NewStructOps,
	"LDtkEntity",
	Z_Construct_UScriptStruct_FLDtkEntity_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLDtkEntity_Statics::PropPointers),
	sizeof(FLDtkEntity),
	alignof(FLDtkEntity),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLDtkEntity_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLDtkEntity_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLDtkEntity()
{
	if (!Z_Registration_Info_UScriptStruct_FLDtkEntity.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FLDtkEntity.InnerSingleton, Z_Construct_UScriptStruct_FLDtkEntity_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FLDtkEntity.InnerSingleton;
}
// ********** End ScriptStruct FLDtkEntity *********************************************************

// ********** Begin ScriptStruct FLDtkTile *********************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FLDtkTile;
class UScriptStruct* FLDtkTile::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FLDtkTile.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FLDtkTile.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLDtkTile, (UObject*)Z_Construct_UPackage__Script_ChickenLDTK(), TEXT("LDtkTile"));
	}
	return Z_Registration_Info_UScriptStruct_FLDtkTile.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FLDtkTile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LDtkMapAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileID_MetaData[] = {
		{ "Category", "LDtkTile" },
		{ "ModuleRelativePath", "Public/LDtkMapAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "Category", "LDtkTile" },
		{ "ModuleRelativePath", "Public/LDtkMapAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileSourcePos_MetaData[] = {
		{ "Category", "LDtkTile" },
		{ "ModuleRelativePath", "Public/LDtkMapAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileSetPath_MetaData[] = {
		{ "Category", "LDtkTile" },
		{ "ModuleRelativePath", "Public/LDtkMapAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_TileID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TileSourcePos;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TileSetPath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLDtkTile>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLDtkTile_Statics::NewProp_TileID = { "TileID", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLDtkTile, TileID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileID_MetaData), NewProp_TileID_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLDtkTile_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLDtkTile, Position), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLDtkTile_Statics::NewProp_TileSourcePos = { "TileSourcePos", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLDtkTile, TileSourcePos), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileSourcePos_MetaData), NewProp_TileSourcePos_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLDtkTile_Statics::NewProp_TileSetPath = { "TileSetPath", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLDtkTile, TileSetPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileSetPath_MetaData), NewProp_TileSetPath_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLDtkTile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLDtkTile_Statics::NewProp_TileID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLDtkTile_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLDtkTile_Statics::NewProp_TileSourcePos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLDtkTile_Statics::NewProp_TileSetPath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLDtkTile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLDtkTile_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ChickenLDTK,
	nullptr,
	&NewStructOps,
	"LDtkTile",
	Z_Construct_UScriptStruct_FLDtkTile_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLDtkTile_Statics::PropPointers),
	sizeof(FLDtkTile),
	alignof(FLDtkTile),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLDtkTile_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLDtkTile_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLDtkTile()
{
	if (!Z_Registration_Info_UScriptStruct_FLDtkTile.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FLDtkTile.InnerSingleton, Z_Construct_UScriptStruct_FLDtkTile_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FLDtkTile.InnerSingleton;
}
// ********** End ScriptStruct FLDtkTile ***********************************************************

// ********** Begin ScriptStruct FLDtkTileLayer ****************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FLDtkTileLayer;
class UScriptStruct* FLDtkTileLayer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FLDtkTileLayer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FLDtkTileLayer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLDtkTileLayer, (UObject*)Z_Construct_UPackage__Script_ChickenLDTK(), TEXT("LDtkTileLayer"));
	}
	return Z_Registration_Info_UScriptStruct_FLDtkTileLayer.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FLDtkTileLayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LDtkMapAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayerName_MetaData[] = {
		{ "Category", "LDtkTileLayer" },
		{ "ModuleRelativePath", "Public/LDtkMapAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileSetID_MetaData[] = {
		{ "Category", "LDtkTileLayer" },
		{ "ModuleRelativePath", "Public/LDtkMapAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileSizeX_MetaData[] = {
		{ "Category", "LDtkTileLayer" },
		{ "ModuleRelativePath", "Public/LDtkMapAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileSizeY_MetaData[] = {
		{ "Category", "LDtkTileLayer" },
		{ "ModuleRelativePath", "Public/LDtkMapAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tiles_MetaData[] = {
		{ "Category", "LDtkTileLayer" },
		{ "ModuleRelativePath", "Public/LDtkMapAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IID_MetaData[] = {
		{ "Category", "LDtkTileLayer" },
		{ "ModuleRelativePath", "Public/LDtkMapAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_LayerName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TileSetID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TileSizeX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TileSizeY;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tiles_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Tiles;
	static const UECodeGen_Private::FTextPropertyParams NewProp_IID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLDtkTileLayer>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLDtkTileLayer_Statics::NewProp_LayerName = { "LayerName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLDtkTileLayer, LayerName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayerName_MetaData), NewProp_LayerName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLDtkTileLayer_Statics::NewProp_TileSetID = { "TileSetID", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLDtkTileLayer, TileSetID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileSetID_MetaData), NewProp_TileSetID_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLDtkTileLayer_Statics::NewProp_TileSizeX = { "TileSizeX", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLDtkTileLayer, TileSizeX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileSizeX_MetaData), NewProp_TileSizeX_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLDtkTileLayer_Statics::NewProp_TileSizeY = { "TileSizeY", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLDtkTileLayer, TileSizeY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileSizeY_MetaData), NewProp_TileSizeY_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLDtkTileLayer_Statics::NewProp_Tiles_Inner = { "Tiles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLDtkTile, METADATA_PARAMS(0, nullptr) }; // 1626646819
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLDtkTileLayer_Statics::NewProp_Tiles = { "Tiles", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLDtkTileLayer, Tiles), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tiles_MetaData), NewProp_Tiles_MetaData) }; // 1626646819
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FLDtkTileLayer_Statics::NewProp_IID = { "IID", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLDtkTileLayer, IID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IID_MetaData), NewProp_IID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLDtkTileLayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLDtkTileLayer_Statics::NewProp_LayerName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLDtkTileLayer_Statics::NewProp_TileSetID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLDtkTileLayer_Statics::NewProp_TileSizeX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLDtkTileLayer_Statics::NewProp_TileSizeY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLDtkTileLayer_Statics::NewProp_Tiles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLDtkTileLayer_Statics::NewProp_Tiles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLDtkTileLayer_Statics::NewProp_IID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLDtkTileLayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLDtkTileLayer_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ChickenLDTK,
	nullptr,
	&NewStructOps,
	"LDtkTileLayer",
	Z_Construct_UScriptStruct_FLDtkTileLayer_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLDtkTileLayer_Statics::PropPointers),
	sizeof(FLDtkTileLayer),
	alignof(FLDtkTileLayer),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLDtkTileLayer_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLDtkTileLayer_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLDtkTileLayer()
{
	if (!Z_Registration_Info_UScriptStruct_FLDtkTileLayer.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FLDtkTileLayer.InnerSingleton, Z_Construct_UScriptStruct_FLDtkTileLayer_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FLDtkTileLayer.InnerSingleton;
}
// ********** End ScriptStruct FLDtkTileLayer ******************************************************

// ********** Begin ScriptStruct FLDtkIntGridValue *************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FLDtkIntGridValue;
class UScriptStruct* FLDtkIntGridValue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FLDtkIntGridValue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FLDtkIntGridValue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLDtkIntGridValue, (UObject*)Z_Construct_UPackage__Script_ChickenLDTK(), TEXT("LDtkIntGridValue"));
	}
	return Z_Registration_Info_UScriptStruct_FLDtkIntGridValue.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FLDtkIntGridValue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LDtkMapAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "LDtkIntGridValue" },
		{ "ModuleRelativePath", "Public/LDtkMapAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "Category", "LDtkIntGridValue" },
		{ "ModuleRelativePath", "Public/LDtkMapAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLDtkIntGridValue>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLDtkIntGridValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLDtkIntGridValue, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLDtkIntGridValue_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLDtkIntGridValue, Position), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLDtkIntGridValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLDtkIntGridValue_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLDtkIntGridValue_Statics::NewProp_Position,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLDtkIntGridValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLDtkIntGridValue_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ChickenLDTK,
	nullptr,
	&NewStructOps,
	"LDtkIntGridValue",
	Z_Construct_UScriptStruct_FLDtkIntGridValue_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLDtkIntGridValue_Statics::PropPointers),
	sizeof(FLDtkIntGridValue),
	alignof(FLDtkIntGridValue),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLDtkIntGridValue_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLDtkIntGridValue_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLDtkIntGridValue()
{
	if (!Z_Registration_Info_UScriptStruct_FLDtkIntGridValue.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FLDtkIntGridValue.InnerSingleton, Z_Construct_UScriptStruct_FLDtkIntGridValue_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FLDtkIntGridValue.InnerSingleton;
}
// ********** End ScriptStruct FLDtkIntGridValue ***************************************************

// ********** Begin ScriptStruct FLDtkIntGridLayer *************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FLDtkIntGridLayer;
class UScriptStruct* FLDtkIntGridLayer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FLDtkIntGridLayer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FLDtkIntGridLayer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLDtkIntGridLayer, (UObject*)Z_Construct_UPackage__Script_ChickenLDTK(), TEXT("LDtkIntGridLayer"));
	}
	return Z_Registration_Info_UScriptStruct_FLDtkIntGridLayer.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FLDtkIntGridLayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LDtkMapAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayerName_MetaData[] = {
		{ "Category", "LDtkIntGridLayer" },
		{ "ModuleRelativePath", "Public/LDtkMapAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[] = {
		{ "Category", "LDtkIntGridLayer" },
		{ "ModuleRelativePath", "Public/LDtkMapAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[] = {
		{ "Category", "LDtkIntGridLayer" },
		{ "ModuleRelativePath", "Public/LDtkMapAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[] = {
		{ "Category", "LDtkIntGridLayer" },
		{ "ModuleRelativePath", "Public/LDtkMapAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileSizeX_MetaData[] = {
		{ "Category", "LDtkIntGridLayer" },
		{ "ModuleRelativePath", "Public/LDtkMapAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileSizeY_MetaData[] = {
		{ "Category", "LDtkIntGridLayer" },
		{ "ModuleRelativePath", "Public/LDtkMapAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IID_MetaData[] = {
		{ "Category", "LDtkIntGridLayer" },
		{ "ModuleRelativePath", "Public/LDtkMapAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_LayerName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Values_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Width;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Height;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TileSizeX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TileSizeY;
	static const UECodeGen_Private::FTextPropertyParams NewProp_IID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLDtkIntGridLayer>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLDtkIntGridLayer_Statics::NewProp_LayerName = { "LayerName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLDtkIntGridLayer, LayerName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayerName_MetaData), NewProp_LayerName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLDtkIntGridLayer_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLDtkIntGridValue, METADATA_PARAMS(0, nullptr) }; // 4265083498
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLDtkIntGridLayer_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLDtkIntGridLayer, Values), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Values_MetaData), NewProp_Values_MetaData) }; // 4265083498
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLDtkIntGridLayer_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLDtkIntGridLayer, Width), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Width_MetaData), NewProp_Width_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLDtkIntGridLayer_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLDtkIntGridLayer, Height), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Height_MetaData), NewProp_Height_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLDtkIntGridLayer_Statics::NewProp_TileSizeX = { "TileSizeX", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLDtkIntGridLayer, TileSizeX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileSizeX_MetaData), NewProp_TileSizeX_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLDtkIntGridLayer_Statics::NewProp_TileSizeY = { "TileSizeY", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLDtkIntGridLayer, TileSizeY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileSizeY_MetaData), NewProp_TileSizeY_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FLDtkIntGridLayer_Statics::NewProp_IID = { "IID", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLDtkIntGridLayer, IID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IID_MetaData), NewProp_IID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLDtkIntGridLayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLDtkIntGridLayer_Statics::NewProp_LayerName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLDtkIntGridLayer_Statics::NewProp_Values_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLDtkIntGridLayer_Statics::NewProp_Values,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLDtkIntGridLayer_Statics::NewProp_Width,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLDtkIntGridLayer_Statics::NewProp_Height,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLDtkIntGridLayer_Statics::NewProp_TileSizeX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLDtkIntGridLayer_Statics::NewProp_TileSizeY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLDtkIntGridLayer_Statics::NewProp_IID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLDtkIntGridLayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLDtkIntGridLayer_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ChickenLDTK,
	nullptr,
	&NewStructOps,
	"LDtkIntGridLayer",
	Z_Construct_UScriptStruct_FLDtkIntGridLayer_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLDtkIntGridLayer_Statics::PropPointers),
	sizeof(FLDtkIntGridLayer),
	alignof(FLDtkIntGridLayer),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLDtkIntGridLayer_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLDtkIntGridLayer_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLDtkIntGridLayer()
{
	if (!Z_Registration_Info_UScriptStruct_FLDtkIntGridLayer.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FLDtkIntGridLayer.InnerSingleton, Z_Construct_UScriptStruct_FLDtkIntGridLayer_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FLDtkIntGridLayer.InnerSingleton;
}
// ********** End ScriptStruct FLDtkIntGridLayer ***************************************************

// ********** Begin Class ULDtkMapAsset ************************************************************
void ULDtkMapAsset::StaticRegisterNativesULDtkMapAsset()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ULDtkMapAsset;
UClass* ULDtkMapAsset::GetPrivateStaticClass()
{
	using TClass = ULDtkMapAsset;
	if (!Z_Registration_Info_UClass_ULDtkMapAsset.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("LDtkMapAsset"),
			Z_Registration_Info_UClass_ULDtkMapAsset.InnerSingleton,
			StaticRegisterNativesULDtkMapAsset,
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
	return Z_Registration_Info_UClass_ULDtkMapAsset.InnerSingleton;
}
UClass* Z_Construct_UClass_ULDtkMapAsset_NoRegister()
{
	return ULDtkMapAsset::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ULDtkMapAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "LDtkMapAsset.h" },
		{ "ModuleRelativePath", "Public/LDtkMapAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LevelName_MetaData[] = {
		{ "Category", "LDtkMapAsset" },
		{ "ModuleRelativePath", "Public/LDtkMapAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "Category", "LDtkMapAsset" },
		{ "ModuleRelativePath", "Public/LDtkMapAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Entities_MetaData[] = {
		{ "Category", "LDtkMapAsset" },
		{ "ModuleRelativePath", "Public/LDtkMapAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileLayers_MetaData[] = {
		{ "Category", "LDtkMapAsset" },
		{ "ModuleRelativePath", "Public/LDtkMapAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IntGridLayers_MetaData[] = {
		{ "Category", "LDtkMapAsset" },
		{ "ModuleRelativePath", "Public/LDtkMapAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LevelIndex_MetaData[] = {
		{ "Category", "LDtkMapAsset" },
		{ "ModuleRelativePath", "Public/LDtkMapAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetImportData_MetaData[] = {
		{ "Category", "Import" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LDtkMapAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LevelWidth_MetaData[] = {
		{ "Category", "LDtkMapAsset" },
		{ "ModuleRelativePath", "Public/LDtkMapAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LevelHeight_MetaData[] = {
		{ "Category", "LDtkMapAsset" },
		{ "ModuleRelativePath", "Public/LDtkMapAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_LevelName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Entities_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Entities;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TileLayers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TileLayers;
	static const UECodeGen_Private::FStructPropertyParams NewProp_IntGridLayers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_IntGridLayers;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LevelIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AssetImportData;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LevelWidth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LevelHeight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULDtkMapAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULDtkMapAsset_Statics::NewProp_LevelName = { "LevelName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULDtkMapAsset, LevelName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelName_MetaData), NewProp_LevelName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULDtkMapAsset_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULDtkMapAsset, Position), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULDtkMapAsset_Statics::NewProp_Entities_Inner = { "Entities", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLDtkEntity, METADATA_PARAMS(0, nullptr) }; // 3070829396
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULDtkMapAsset_Statics::NewProp_Entities = { "Entities", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULDtkMapAsset, Entities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Entities_MetaData), NewProp_Entities_MetaData) }; // 3070829396
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULDtkMapAsset_Statics::NewProp_TileLayers_Inner = { "TileLayers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLDtkTileLayer, METADATA_PARAMS(0, nullptr) }; // 4167884226
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULDtkMapAsset_Statics::NewProp_TileLayers = { "TileLayers", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULDtkMapAsset, TileLayers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileLayers_MetaData), NewProp_TileLayers_MetaData) }; // 4167884226
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULDtkMapAsset_Statics::NewProp_IntGridLayers_Inner = { "IntGridLayers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLDtkIntGridLayer, METADATA_PARAMS(0, nullptr) }; // 3787058400
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULDtkMapAsset_Statics::NewProp_IntGridLayers = { "IntGridLayers", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULDtkMapAsset, IntGridLayers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IntGridLayers_MetaData), NewProp_IntGridLayers_MetaData) }; // 3787058400
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULDtkMapAsset_Statics::NewProp_LevelIndex = { "LevelIndex", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULDtkMapAsset, LevelIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelIndex_MetaData), NewProp_LevelIndex_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULDtkMapAsset_Statics::NewProp_AssetImportData = { "AssetImportData", nullptr, (EPropertyFlags)0x01160000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULDtkMapAsset, AssetImportData), Z_Construct_UClass_UAssetImportData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetImportData_MetaData), NewProp_AssetImportData_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULDtkMapAsset_Statics::NewProp_LevelWidth = { "LevelWidth", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULDtkMapAsset, LevelWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelWidth_MetaData), NewProp_LevelWidth_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULDtkMapAsset_Statics::NewProp_LevelHeight = { "LevelHeight", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULDtkMapAsset, LevelHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelHeight_MetaData), NewProp_LevelHeight_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULDtkMapAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULDtkMapAsset_Statics::NewProp_LevelName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULDtkMapAsset_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULDtkMapAsset_Statics::NewProp_Entities_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULDtkMapAsset_Statics::NewProp_Entities,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULDtkMapAsset_Statics::NewProp_TileLayers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULDtkMapAsset_Statics::NewProp_TileLayers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULDtkMapAsset_Statics::NewProp_IntGridLayers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULDtkMapAsset_Statics::NewProp_IntGridLayers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULDtkMapAsset_Statics::NewProp_LevelIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULDtkMapAsset_Statics::NewProp_AssetImportData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULDtkMapAsset_Statics::NewProp_LevelWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULDtkMapAsset_Statics::NewProp_LevelHeight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULDtkMapAsset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULDtkMapAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ChickenLDTK,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULDtkMapAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULDtkMapAsset_Statics::ClassParams = {
	&ULDtkMapAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ULDtkMapAsset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ULDtkMapAsset_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULDtkMapAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_ULDtkMapAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULDtkMapAsset()
{
	if (!Z_Registration_Info_UClass_ULDtkMapAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULDtkMapAsset.OuterSingleton, Z_Construct_UClass_ULDtkMapAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULDtkMapAsset.OuterSingleton;
}
ULDtkMapAsset::ULDtkMapAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULDtkMapAsset);
ULDtkMapAsset::~ULDtkMapAsset() {}
// ********** End Class ULDtkMapAsset **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Unreal_Projects_CookingGame_Plugins_ChickenLDTK_Source_ChickenLDTK_Public_LDtkMapAsset_h__Script_ChickenLDTK_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FLDtkEntity::StaticStruct, Z_Construct_UScriptStruct_FLDtkEntity_Statics::NewStructOps, TEXT("LDtkEntity"), &Z_Registration_Info_UScriptStruct_FLDtkEntity, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLDtkEntity), 3070829396U) },
		{ FLDtkTile::StaticStruct, Z_Construct_UScriptStruct_FLDtkTile_Statics::NewStructOps, TEXT("LDtkTile"), &Z_Registration_Info_UScriptStruct_FLDtkTile, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLDtkTile), 1626646819U) },
		{ FLDtkTileLayer::StaticStruct, Z_Construct_UScriptStruct_FLDtkTileLayer_Statics::NewStructOps, TEXT("LDtkTileLayer"), &Z_Registration_Info_UScriptStruct_FLDtkTileLayer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLDtkTileLayer), 4167884226U) },
		{ FLDtkIntGridValue::StaticStruct, Z_Construct_UScriptStruct_FLDtkIntGridValue_Statics::NewStructOps, TEXT("LDtkIntGridValue"), &Z_Registration_Info_UScriptStruct_FLDtkIntGridValue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLDtkIntGridValue), 4265083498U) },
		{ FLDtkIntGridLayer::StaticStruct, Z_Construct_UScriptStruct_FLDtkIntGridLayer_Statics::NewStructOps, TEXT("LDtkIntGridLayer"), &Z_Registration_Info_UScriptStruct_FLDtkIntGridLayer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLDtkIntGridLayer), 3787058400U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULDtkMapAsset, ULDtkMapAsset::StaticClass, TEXT("ULDtkMapAsset"), &Z_Registration_Info_UClass_ULDtkMapAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULDtkMapAsset), 750447033U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_CookingGame_Plugins_ChickenLDTK_Source_ChickenLDTK_Public_LDtkMapAsset_h__Script_ChickenLDTK_3641642655(TEXT("/Script/ChickenLDTK"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_CookingGame_Plugins_ChickenLDTK_Source_ChickenLDTK_Public_LDtkMapAsset_h__Script_ChickenLDTK_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_CookingGame_Plugins_ChickenLDTK_Source_ChickenLDTK_Public_LDtkMapAsset_h__Script_ChickenLDTK_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Unreal_Projects_CookingGame_Plugins_ChickenLDTK_Source_ChickenLDTK_Public_LDtkMapAsset_h__Script_ChickenLDTK_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_CookingGame_Plugins_ChickenLDTK_Source_ChickenLDTK_Public_LDtkMapAsset_h__Script_ChickenLDTK_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
