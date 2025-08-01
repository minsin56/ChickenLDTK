// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LDtkReimportFactory.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeLDtkReimportFactory() {}

// ********** Begin Cross Module References ********************************************************
CHICKENLDTK_API UClass* Z_Construct_UClass_ULDtkReimportFactory();
CHICKENLDTK_API UClass* Z_Construct_UClass_ULDtkReimportFactory_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_ChickenLDTK();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ULDtkReimportFactory *****************************************************
void ULDtkReimportFactory::StaticRegisterNativesULDtkReimportFactory()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ULDtkReimportFactory;
UClass* ULDtkReimportFactory::GetPrivateStaticClass()
{
	using TClass = ULDtkReimportFactory;
	if (!Z_Registration_Info_UClass_ULDtkReimportFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("LDtkReimportFactory"),
			Z_Registration_Info_UClass_ULDtkReimportFactory.InnerSingleton,
			StaticRegisterNativesULDtkReimportFactory,
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
	return Z_Registration_Info_UClass_ULDtkReimportFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_ULDtkReimportFactory_NoRegister()
{
	return ULDtkReimportFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ULDtkReimportFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "LDtkReimportFactory.h" },
		{ "ModuleRelativePath", "Private/LDtkReimportFactory.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULDtkReimportFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULDtkReimportFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_ChickenLDTK,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULDtkReimportFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULDtkReimportFactory_Statics::ClassParams = {
	&ULDtkReimportFactory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULDtkReimportFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_ULDtkReimportFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULDtkReimportFactory()
{
	if (!Z_Registration_Info_UClass_ULDtkReimportFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULDtkReimportFactory.OuterSingleton, Z_Construct_UClass_ULDtkReimportFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULDtkReimportFactory.OuterSingleton;
}
ULDtkReimportFactory::ULDtkReimportFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULDtkReimportFactory);
ULDtkReimportFactory::~ULDtkReimportFactory() {}
// ********** End Class ULDtkReimportFactory *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Unreal_Projects_CozyCookingGame_Plugins_ChickenLDTK_Source_ChickenLDTK_Private_LDtkReimportFactory_h__Script_ChickenLDTK_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULDtkReimportFactory, ULDtkReimportFactory::StaticClass, TEXT("ULDtkReimportFactory"), &Z_Registration_Info_UClass_ULDtkReimportFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULDtkReimportFactory), 4143407986U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_CozyCookingGame_Plugins_ChickenLDTK_Source_ChickenLDTK_Private_LDtkReimportFactory_h__Script_ChickenLDTK_2484761495(TEXT("/Script/ChickenLDTK"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_CozyCookingGame_Plugins_ChickenLDTK_Source_ChickenLDTK_Private_LDtkReimportFactory_h__Script_ChickenLDTK_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_CozyCookingGame_Plugins_ChickenLDTK_Source_ChickenLDTK_Private_LDtkReimportFactory_h__Script_ChickenLDTK_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
