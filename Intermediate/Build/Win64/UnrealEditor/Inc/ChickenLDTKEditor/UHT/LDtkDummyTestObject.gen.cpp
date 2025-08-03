// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LDtkDummyTestObject.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeLDtkDummyTestObject() {}

// ********** Begin Cross Module References ********************************************************
CHICKENLDTKEDITOR_API UClass* Z_Construct_UClass_ALDtkDummyTestObject();
CHICKENLDTKEDITOR_API UClass* Z_Construct_UClass_ALDtkDummyTestObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_ChickenLDTKEditor();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ALDtkDummyTestObject *****************************************************
void ALDtkDummyTestObject::StaticRegisterNativesALDtkDummyTestObject()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ALDtkDummyTestObject;
UClass* ALDtkDummyTestObject::GetPrivateStaticClass()
{
	using TClass = ALDtkDummyTestObject;
	if (!Z_Registration_Info_UClass_ALDtkDummyTestObject.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("LDtkDummyTestObject"),
			Z_Registration_Info_UClass_ALDtkDummyTestObject.InnerSingleton,
			StaticRegisterNativesALDtkDummyTestObject,
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
	return Z_Registration_Info_UClass_ALDtkDummyTestObject.InnerSingleton;
}
UClass* Z_Construct_UClass_ALDtkDummyTestObject_NoRegister()
{
	return ALDtkDummyTestObject::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ALDtkDummyTestObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "LDtkDummyTestObject.h" },
		{ "ModuleRelativePath", "Private/LDtkDummyTestObject.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALDtkDummyTestObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ALDtkDummyTestObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ChickenLDTKEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALDtkDummyTestObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALDtkDummyTestObject_Statics::ClassParams = {
	&ALDtkDummyTestObject::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALDtkDummyTestObject_Statics::Class_MetaDataParams), Z_Construct_UClass_ALDtkDummyTestObject_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ALDtkDummyTestObject()
{
	if (!Z_Registration_Info_UClass_ALDtkDummyTestObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALDtkDummyTestObject.OuterSingleton, Z_Construct_UClass_ALDtkDummyTestObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALDtkDummyTestObject.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ALDtkDummyTestObject);
ALDtkDummyTestObject::~ALDtkDummyTestObject() {}
// ********** End Class ALDtkDummyTestObject *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Unreal_Projects_CookingGame_Plugins_ChickenLDTK_Source_ChickenLDTKEditor_Private_LDtkDummyTestObject_h__Script_ChickenLDTKEditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALDtkDummyTestObject, ALDtkDummyTestObject::StaticClass, TEXT("ALDtkDummyTestObject"), &Z_Registration_Info_UClass_ALDtkDummyTestObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALDtkDummyTestObject), 2315305506U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_CookingGame_Plugins_ChickenLDTK_Source_ChickenLDTKEditor_Private_LDtkDummyTestObject_h__Script_ChickenLDTKEditor_501182717(TEXT("/Script/ChickenLDTKEditor"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_CookingGame_Plugins_ChickenLDTK_Source_ChickenLDTKEditor_Private_LDtkDummyTestObject_h__Script_ChickenLDTKEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_CookingGame_Plugins_ChickenLDTK_Source_ChickenLDTKEditor_Private_LDtkDummyTestObject_h__Script_ChickenLDTKEditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
