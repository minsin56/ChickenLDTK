// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LDtkSpawnEntity.h"

#ifdef CHICKENLDTK_LDtkSpawnEntity_generated_h
#error "LDtkSpawnEntity.generated.h already included, missing '#pragma once' in LDtkSpawnEntity.h"
#endif
#define CHICKENLDTK_LDtkSpawnEntity_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ALDtkSpawnEntity *********************************************************
#define FID_Unreal_Projects_CookingGame_Plugins_ChickenLDTK_Source_ChickenLDTK_Public_LDtkSpawnEntity_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SetFields_Implementation(const FString& Key, const FString& Value); \
	DECLARE_FUNCTION(execSetFields);


#define FID_Unreal_Projects_CookingGame_Plugins_ChickenLDTK_Source_ChickenLDTK_Public_LDtkSpawnEntity_h_13_CALLBACK_WRAPPERS
CHICKENLDTK_API UClass* Z_Construct_UClass_ALDtkSpawnEntity_NoRegister();

#define FID_Unreal_Projects_CookingGame_Plugins_ChickenLDTK_Source_ChickenLDTK_Public_LDtkSpawnEntity_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALDtkSpawnEntity(); \
	friend struct Z_Construct_UClass_ALDtkSpawnEntity_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CHICKENLDTK_API UClass* Z_Construct_UClass_ALDtkSpawnEntity_NoRegister(); \
public: \
	DECLARE_CLASS2(ALDtkSpawnEntity, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ChickenLDTK"), Z_Construct_UClass_ALDtkSpawnEntity_NoRegister) \
	DECLARE_SERIALIZER(ALDtkSpawnEntity)


#define FID_Unreal_Projects_CookingGame_Plugins_ChickenLDTK_Source_ChickenLDTK_Public_LDtkSpawnEntity_h_13_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ALDtkSpawnEntity(ALDtkSpawnEntity&&) = delete; \
	ALDtkSpawnEntity(const ALDtkSpawnEntity&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALDtkSpawnEntity); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALDtkSpawnEntity); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALDtkSpawnEntity) \
	NO_API virtual ~ALDtkSpawnEntity();


#define FID_Unreal_Projects_CookingGame_Plugins_ChickenLDTK_Source_ChickenLDTK_Public_LDtkSpawnEntity_h_10_PROLOG
#define FID_Unreal_Projects_CookingGame_Plugins_ChickenLDTK_Source_ChickenLDTK_Public_LDtkSpawnEntity_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_CookingGame_Plugins_ChickenLDTK_Source_ChickenLDTK_Public_LDtkSpawnEntity_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_CookingGame_Plugins_ChickenLDTK_Source_ChickenLDTK_Public_LDtkSpawnEntity_h_13_CALLBACK_WRAPPERS \
	FID_Unreal_Projects_CookingGame_Plugins_ChickenLDTK_Source_ChickenLDTK_Public_LDtkSpawnEntity_h_13_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_CookingGame_Plugins_ChickenLDTK_Source_ChickenLDTK_Public_LDtkSpawnEntity_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ALDtkSpawnEntity;

// ********** End Class ALDtkSpawnEntity ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_CookingGame_Plugins_ChickenLDTK_Source_ChickenLDTK_Public_LDtkSpawnEntity_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
