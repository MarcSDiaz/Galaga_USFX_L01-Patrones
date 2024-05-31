// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/EstadoNaveGiratorio.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEstadoNaveGiratorio() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AEstadoNaveGiratorio();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AEstadoNaveGiratorio_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_UIEstados_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
// End Cross Module References
	void AEstadoNaveGiratorio::StaticRegisterNativesAEstadoNaveGiratorio()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEstadoNaveGiratorio);
	UClass* Z_Construct_UClass_AEstadoNaveGiratorio_NoRegister()
	{
		return AEstadoNaveGiratorio::StaticClass();
	}
	struct Z_Construct_UClass_AEstadoNaveGiratorio_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEstadoNaveGiratorio_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEstadoNaveGiratorio_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EstadoNaveGiratorio.h" },
		{ "ModuleRelativePath", "EstadoNaveGiratorio.h" },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AEstadoNaveGiratorio_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UIEstados_NoRegister, (int32)VTABLE_OFFSET(AEstadoNaveGiratorio, IIEstados), false },  // 299208120
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEstadoNaveGiratorio_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEstadoNaveGiratorio>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEstadoNaveGiratorio_Statics::ClassParams = {
		&AEstadoNaveGiratorio::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEstadoNaveGiratorio_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEstadoNaveGiratorio_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEstadoNaveGiratorio()
	{
		if (!Z_Registration_Info_UClass_AEstadoNaveGiratorio.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEstadoNaveGiratorio.OuterSingleton, Z_Construct_UClass_AEstadoNaveGiratorio_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AEstadoNaveGiratorio.OuterSingleton;
	}
	template<> GALAGA_USFX_L01_API UClass* StaticClass<AEstadoNaveGiratorio>()
	{
		return AEstadoNaveGiratorio::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEstadoNaveGiratorio);
	AEstadoNaveGiratorio::~AEstadoNaveGiratorio() {}
	struct Z_CompiledInDeferFile_FID_Users_marco_Documents_3er_Semestre_Programacion_Avanzada_Patrones_Galaga_USFX_L01_Galaga_USFX_L01_master_Source_Galaga_USFX_L01_EstadoNaveGiratorio_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_marco_Documents_3er_Semestre_Programacion_Avanzada_Patrones_Galaga_USFX_L01_Galaga_USFX_L01_master_Source_Galaga_USFX_L01_EstadoNaveGiratorio_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AEstadoNaveGiratorio, AEstadoNaveGiratorio::StaticClass, TEXT("AEstadoNaveGiratorio"), &Z_Registration_Info_UClass_AEstadoNaveGiratorio, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEstadoNaveGiratorio), 2414061353U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_marco_Documents_3er_Semestre_Programacion_Avanzada_Patrones_Galaga_USFX_L01_Galaga_USFX_L01_master_Source_Galaga_USFX_L01_EstadoNaveGiratorio_h_1013284050(TEXT("/Script/Galaga_USFX_L01"),
		Z_CompiledInDeferFile_FID_Users_marco_Documents_3er_Semestre_Programacion_Avanzada_Patrones_Galaga_USFX_L01_Galaga_USFX_L01_master_Source_Galaga_USFX_L01_EstadoNaveGiratorio_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_marco_Documents_3er_Semestre_Programacion_Avanzada_Patrones_Galaga_USFX_L01_Galaga_USFX_L01_master_Source_Galaga_USFX_L01_EstadoNaveGiratorio_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
