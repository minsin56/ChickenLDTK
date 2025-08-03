// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LDtkFactory.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeLDtkFactory() {}

// ********** Begin Cross Module References ********************************************************
CHICKENLDTK_API UClass* Z_Construct_UClass_ULDtkFactory();
CHICKENLDTK_API UClass* Z_Construct_UClass_ULDtkFactory_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_ChickenLDTK();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ULDtkFactory *************************************************************
void ULDtkFactory::StaticRegisterNativesULDtkFactory()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ULDtkFactory;
UClass* ULDtkFactory::GetPrivateStaticClass()
{
	using TClass = ULDtkFactory;
	if (!Z_Registration_Info_UClass_ULDtkFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("LDtkFactory"),
			Z_Registration_Info_UClass_ULDtkFactory.InnerSingleton,
			StaticRegisterNativesULDtkFactory,
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
	return Z_Registration_Info_UClass_ULDtkFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_ULDtkFactory_NoRegister()
{
	return ULDtkFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ULDtkFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "LDtkFactory.h" },
		{ "ModuleRelativePath", "Public/LDtkFactory.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULDtkFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULDtkFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_ChickenLDTK,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULDtkFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULDtkFactory_Statics::ClassParams = {
	&ULDtkFactory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULDtkFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_ULDtkFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULDtkFactory()
{
	if (!Z_Registration_Info_UClass_ULDtkFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULDtkFactory.OuterSingleton, Z_Construct_UClass_ULDtkFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULDtkFactory.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULDtkFactory);
ULDtkFactory::~ULDtkFactory() {}
// ********** End Class ULDtkFactory ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Unreal_Projects_CookingGame_Plugins_ChickenLDTK_Source_ChickenLDTK_Public_LDtkFactory_h__Script_ChickenLDTK_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULDtkFactory, ULDtkFactory::StaticClass, TEXT("ULDtkFactory"), &Z_Registration_Info_UClass_ULDtkFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULDtkFactory), 555340494U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_CookingGame_Plugins_ChickenLDTK_Source_ChickenLDTK_Public_LDtkFactory_h__Script_ChickenLDTK_1331408700(TEXT("/Script/ChickenLDTK"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_CookingGame_Plugins_ChickenLDTK_Source_ChickenLDTK_Public_LDtkFactory_h__Script_ChickenLDTK_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_CookingGame_Plugins_ChickenLDTK_Source_ChickenLDTK_Public_LDtkFactory_h__Script_ChickenLDTK_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
