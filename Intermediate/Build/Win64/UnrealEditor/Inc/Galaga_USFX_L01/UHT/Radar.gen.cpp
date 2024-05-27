// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/Radar.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRadar() {}
// Cross Module References
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_APublicadorObserver();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_ARadar();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_ARadar_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
// End Cross Module References
	void ARadar::StaticRegisterNativesARadar()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARadar);
	UClass* Z_Construct_UClass_ARadar_NoRegister()
	{
		return ARadar::StaticClass();
	}
	struct Z_Construct_UClass_ARadar_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARadar_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APublicadorObserver,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARadar_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Radar.h" },
		{ "ModuleRelativePath", "Radar.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARadar_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARadar>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARadar_Statics::ClassParams = {
		&ARadar::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARadar_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARadar_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARadar()
	{
		if (!Z_Registration_Info_UClass_ARadar.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARadar.OuterSingleton, Z_Construct_UClass_ARadar_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARadar.OuterSingleton;
	}
	template<> GALAGA_USFX_L01_API UClass* StaticClass<ARadar>()
	{
		return ARadar::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARadar);
	ARadar::~ARadar() {}
	struct Z_CompiledInDeferFile_FID_Users_marco_Documents_3er_Semestre_Programacion_Avanzada_Patrones_Galaga_USFX_L01_Galaga_USFX_L01_master_Source_Galaga_USFX_L01_Radar_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_marco_Documents_3er_Semestre_Programacion_Avanzada_Patrones_Galaga_USFX_L01_Galaga_USFX_L01_master_Source_Galaga_USFX_L01_Radar_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARadar, ARadar::StaticClass, TEXT("ARadar"), &Z_Registration_Info_UClass_ARadar, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARadar), 4290336526U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_marco_Documents_3er_Semestre_Programacion_Avanzada_Patrones_Galaga_USFX_L01_Galaga_USFX_L01_master_Source_Galaga_USFX_L01_Radar_h_2015791082(TEXT("/Script/Galaga_USFX_L01"),
		Z_CompiledInDeferFile_FID_Users_marco_Documents_3er_Semestre_Programacion_Avanzada_Patrones_Galaga_USFX_L01_Galaga_USFX_L01_master_Source_Galaga_USFX_L01_Radar_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_marco_Documents_3er_Semestre_Programacion_Avanzada_Patrones_Galaga_USFX_L01_Galaga_USFX_L01_master_Source_Galaga_USFX_L01_Radar_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
