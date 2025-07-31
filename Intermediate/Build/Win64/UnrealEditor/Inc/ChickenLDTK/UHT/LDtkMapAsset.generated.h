// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LDtkMapAsset.h"

#ifdef CHICKENLDTK_LDtkMapAsset_generated_h
#error "LDtkMapAsset.generated.h already included, missing '#pragma once' in LDtkMapAsset.h"
#endif
#define CHICKENLDTK_LDtkMapAsset_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FLdtkEntity *******************************************************
#define FID_Unreal_Projects_CozyCookingGame_Plugins_ChickenLDTK_Source_ChickenLDTK_Public_LDtkMapAsset_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLdtkEntity_Statics; \
	CHICKENLDTK_API static class UScriptStruct* StaticStruct();


struct FLdtkEntity;
// ********** End ScriptStruct FLdtkEntity *********************************************************

// ********** Begin ScriptStruct FLDtkTile *********************************************************
#define FID_Unreal_Projects_CozyCookingGame_Plugins_ChickenLDTK_Source_ChickenLDTK_Public_LDtkMapAsset_h_32_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLDtkTile_Statics; \
	CHICKENLDTK_API static class UScriptStruct* StaticStruct();


struct FLDtkTile;
// ********** End ScriptStruct FLDtkTile ***********************************************************

// ********** Begin ScriptStruct FLDtkTileLayer ****************************************************
#define FID_Unreal_Projects_CozyCookingGame_Plugins_ChickenLDTK_Source_ChickenLDTK_Public_LDtkMapAsset_h_51_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLDtkTileLayer_Statics; \
	CHICKENLDTK_API static class UScriptStruct* StaticStruct();


struct FLDtkTileLayer;
// ********** End ScriptStruct FLDtkTileLayer ******************************************************

// ********** Begin Class ULDtkMapAsset ************************************************************
CHICKENLDTK_API UClass* Z_Construct_UClass_ULDtkMapAsset_NoRegister();

#define FID_Unreal_Projects_CozyCookingGame_Plugins_ChickenLDTK_Source_ChickenLDTK_Public_LDtkMapAsset_h_68_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULDtkMapAsset(); \
	friend struct Z_Construct_UClass_ULDtkMapAsset_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CHICKENLDTK_API UClass* Z_Construct_UClass_ULDtkMapAsset_NoRegister(); \
public: \
	DECLARE_CLASS2(ULDtkMapAsset, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ChickenLDTK"), Z_Construct_UClass_ULDtkMapAsset_NoRegister) \
	DECLARE_SERIALIZER(ULDtkMapAsset)


#define FID_Unreal_Projects_CozyCookingGame_Plugins_ChickenLDTK_Source_ChickenLDTK_Public_LDtkMapAsset_h_68_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULDtkMapAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULDtkMapAsset(ULDtkMapAsset&&) = delete; \
	ULDtkMapAsset(const ULDtkMapAsset&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULDtkMapAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULDtkMapAsset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULDtkMapAsset) \
	NO_API virtual ~ULDtkMapAsset();


#define FID_Unreal_Projects_CozyCookingGame_Plugins_ChickenLDTK_Source_ChickenLDTK_Public_LDtkMapAsset_h_65_PROLOG
#define FID_Unreal_Projects_CozyCookingGame_Plugins_ChickenLDTK_Source_ChickenLDTK_Public_LDtkMapAsset_h_68_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_CozyCookingGame_Plugins_ChickenLDTK_Source_ChickenLDTK_Public_LDtkMapAsset_h_68_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_CozyCookingGame_Plugins_ChickenLDTK_Source_ChickenLDTK_Public_LDtkMapAsset_h_68_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULDtkMapAsset;

// ********** End Class ULDtkMapAsset **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_CozyCookingGame_Plugins_ChickenLDTK_Source_ChickenLDTK_Public_LDtkMapAsset_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
