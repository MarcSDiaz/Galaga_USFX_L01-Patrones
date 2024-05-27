// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/EstadoNaveNeutro.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEstadoNaveNeutro() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AEstadoNaveNeutro();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AEstadoNaveNeutro_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_UIEstados_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
// End Cross Module References
	void AEstadoNaveNeutro::StaticRegisterNativesAEstadoNaveNeutro()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEstadoNaveNeutro);
	UClass* Z_Construct_UClass_AEstadoNaveNeutro_NoRegister()
	{
		return AEstadoNaveNeutro::StaticClass();
	}
	struct Z_Construct_UClass_AEstadoNaveNeutro_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEstadoNaveNeutro_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEstadoNaveNeutro_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EstadoNaveNeutro.h" },
		{ "ModuleRelativePath", "EstadoNaveNeutro.h" },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AEstadoNaveNeutro_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UIEstados_NoRegister, (int32)VTABLE_OFFSET(AEstadoNaveNeutro, IIEstados), false },  // 299208120
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEstadoNaveNeutro_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEstadoNaveNeutro>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEstadoNaveNeutro_Statics::ClassParams = {
		&AEstadoNaveNeutro::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AEstadoNaveNeutro_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEstadoNaveNeutro_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEstadoNaveNeutro()
	{
		if (!Z_Registration_Info_UClass_AEstadoNaveNeutro.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEstadoNaveNeutro.OuterSingleton, Z_Construct_UClass_AEstadoNaveNeutro_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AEstadoNaveNeutro.OuterSingleton;
	}
	template<> GALAGA_USFX_L01_API UClass* StaticClass<AEstadoNaveNeutro>()
	{
		return AEstadoNaveNeutro::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEstadoNaveNeutro);
	AEstadoNaveNeutro::~AEstadoNaveNeutro() {}
	struct Z_CompiledInDeferFile_FID_Users_marco_Documents_3er_Semestre_Programacion_Avanzada_Patrones_Galaga_USFX_L01_Galaga_USFX_L01_master_Source_Galaga_USFX_L01_EstadoNaveNeutro_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_marco_Documents_3er_Semestre_Programacion_Avanzada_Patrones_Galaga_USFX_L01_Galaga_USFX_L01_master_Source_Galaga_USFX_L01_EstadoNaveNeutro_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AEstadoNaveNeutro, AEstadoNaveNeutro::StaticClass, TEXT("AEstadoNaveNeutro"), &Z_Registration_Info_UClass_AEstadoNaveNeutro, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEstadoNaveNeutro), 4218646540U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_marco_Documents_3er_Semestre_Programacion_Avanzada_Patrones_Galaga_USFX_L01_Galaga_USFX_L01_master_Source_Galaga_USFX_L01_EstadoNaveNeutro_h_1334873311(TEXT("/Script/Galaga_USFX_L01"),
		Z_CompiledInDeferFile_FID_Users_marco_Documents_3er_Semestre_Programacion_Avanzada_Patrones_Galaga_USFX_L01_Galaga_USFX_L01_master_Source_Galaga_USFX_L01_EstadoNaveNeutro_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_marco_Documents_3er_Semestre_Programacion_Avanzada_Patrones_Galaga_USFX_L01_Galaga_USFX_L01_master_Source_Galaga_USFX_L01_EstadoNaveNeutro_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
