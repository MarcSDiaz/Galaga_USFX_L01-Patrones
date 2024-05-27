// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/ISubscriptor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeISubscriptor() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_UISubscriptor();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_UISubscriptor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
// End Cross Module References
	void UISubscriptor::StaticRegisterNativesUISubscriptor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UISubscriptor);
	UClass* Z_Construct_UClass_UISubscriptor_NoRegister()
	{
		return UISubscriptor::StaticClass();
	}
	struct Z_Construct_UClass_UISubscriptor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UISubscriptor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UISubscriptor_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "ISubscriptor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UISubscriptor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IISubscriptor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UISubscriptor_Statics::ClassParams = {
		&UISubscriptor::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UISubscriptor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UISubscriptor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UISubscriptor()
	{
		if (!Z_Registration_Info_UClass_UISubscriptor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UISubscriptor.OuterSingleton, Z_Construct_UClass_UISubscriptor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UISubscriptor.OuterSingleton;
	}
	template<> GALAGA_USFX_L01_API UClass* StaticClass<UISubscriptor>()
	{
		return UISubscriptor::StaticClass();
	}
	UISubscriptor::UISubscriptor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UISubscriptor);
	UISubscriptor::~UISubscriptor() {}
	struct Z_CompiledInDeferFile_FID_Users_marco_Documents_3er_Semestre_Programacion_Avanzada_Patrones_Galaga_USFX_L01_Galaga_USFX_L01_master_Source_Galaga_USFX_L01_ISubscriptor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_marco_Documents_3er_Semestre_Programacion_Avanzada_Patrones_Galaga_USFX_L01_Galaga_USFX_L01_master_Source_Galaga_USFX_L01_ISubscriptor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UISubscriptor, UISubscriptor::StaticClass, TEXT("UISubscriptor"), &Z_Registration_Info_UClass_UISubscriptor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UISubscriptor), 2483374995U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_marco_Documents_3er_Semestre_Programacion_Avanzada_Patrones_Galaga_USFX_L01_Galaga_USFX_L01_master_Source_Galaga_USFX_L01_ISubscriptor_h_500332528(TEXT("/Script/Galaga_USFX_L01"),
		Z_CompiledInDeferFile_FID_Users_marco_Documents_3er_Semestre_Programacion_Avanzada_Patrones_Galaga_USFX_L01_Galaga_USFX_L01_master_Source_Galaga_USFX_L01_ISubscriptor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_marco_Documents_3er_Semestre_Programacion_Avanzada_Patrones_Galaga_USFX_L01_Galaga_USFX_L01_master_Source_Galaga_USFX_L01_ISubscriptor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
