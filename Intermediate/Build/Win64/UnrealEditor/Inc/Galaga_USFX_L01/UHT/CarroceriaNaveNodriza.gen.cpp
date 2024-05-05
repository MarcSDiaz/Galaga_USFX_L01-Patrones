// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/CarroceriaNaveNodriza.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCarroceriaNaveNodriza() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_ACarroceriaNaveNodriza();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_ACarroceriaNaveNodriza_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
// End Cross Module References
	void ACarroceriaNaveNodriza::StaticRegisterNativesACarroceriaNaveNodriza()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACarroceriaNaveNodriza);
	UClass* Z_Construct_UClass_ACarroceriaNaveNodriza_NoRegister()
	{
		return ACarroceriaNaveNodriza::StaticClass();
	}
	struct Z_Construct_UClass_ACarroceriaNaveNodriza_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MallaNaveNodriza_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MallaNaveNodriza;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACarroceriaNaveNodriza_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACarroceriaNaveNodriza_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CarroceriaNaveNodriza.h" },
		{ "ModuleRelativePath", "CarroceriaNaveNodriza.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACarroceriaNaveNodriza_Statics::NewProp_MallaNaveNodriza_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Projectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CarroceriaNaveNodriza.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACarroceriaNaveNodriza_Statics::NewProp_MallaNaveNodriza = { "MallaNaveNodriza", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACarroceriaNaveNodriza, MallaNaveNodriza), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACarroceriaNaveNodriza_Statics::NewProp_MallaNaveNodriza_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACarroceriaNaveNodriza_Statics::NewProp_MallaNaveNodriza_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACarroceriaNaveNodriza_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACarroceriaNaveNodriza_Statics::NewProp_MallaNaveNodriza,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACarroceriaNaveNodriza_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACarroceriaNaveNodriza>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACarroceriaNaveNodriza_Statics::ClassParams = {
		&ACarroceriaNaveNodriza::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACarroceriaNaveNodriza_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACarroceriaNaveNodriza_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACarroceriaNaveNodriza_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACarroceriaNaveNodriza_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACarroceriaNaveNodriza()
	{
		if (!Z_Registration_Info_UClass_ACarroceriaNaveNodriza.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACarroceriaNaveNodriza.OuterSingleton, Z_Construct_UClass_ACarroceriaNaveNodriza_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACarroceriaNaveNodriza.OuterSingleton;
	}
	template<> GALAGA_USFX_L01_API UClass* StaticClass<ACarroceriaNaveNodriza>()
	{
		return ACarroceriaNaveNodriza::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACarroceriaNaveNodriza);
	ACarroceriaNaveNodriza::~ACarroceriaNaveNodriza() {}
	struct Z_CompiledInDeferFile_FID_Users_marco_Documents_3er_Semestre_Programacion_Avanzada_Patrones_Galaga_USFX_L01_Galaga_USFX_L01_master_Source_Galaga_USFX_L01_CarroceriaNaveNodriza_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_marco_Documents_3er_Semestre_Programacion_Avanzada_Patrones_Galaga_USFX_L01_Galaga_USFX_L01_master_Source_Galaga_USFX_L01_CarroceriaNaveNodriza_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACarroceriaNaveNodriza, ACarroceriaNaveNodriza::StaticClass, TEXT("ACarroceriaNaveNodriza"), &Z_Registration_Info_UClass_ACarroceriaNaveNodriza, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACarroceriaNaveNodriza), 3919449800U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_marco_Documents_3er_Semestre_Programacion_Avanzada_Patrones_Galaga_USFX_L01_Galaga_USFX_L01_master_Source_Galaga_USFX_L01_CarroceriaNaveNodriza_h_759719106(TEXT("/Script/Galaga_USFX_L01"),
		Z_CompiledInDeferFile_FID_Users_marco_Documents_3er_Semestre_Programacion_Avanzada_Patrones_Galaga_USFX_L01_Galaga_USFX_L01_master_Source_Galaga_USFX_L01_CarroceriaNaveNodriza_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_marco_Documents_3er_Semestre_Programacion_Avanzada_Patrones_Galaga_USFX_L01_Galaga_USFX_L01_master_Source_Galaga_USFX_L01_CarroceriaNaveNodriza_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
