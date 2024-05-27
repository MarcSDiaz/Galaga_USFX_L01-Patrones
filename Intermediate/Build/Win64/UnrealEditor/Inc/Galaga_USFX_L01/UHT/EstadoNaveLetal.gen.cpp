// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/EstadoNaveLetal.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEstadoNaveLetal() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AEstadoNaveLetal();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AEstadoNaveLetal_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_UIEstados_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
// End Cross Module References
	void AEstadoNaveLetal::StaticRegisterNativesAEstadoNaveLetal()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEstadoNaveLetal);
	UClass* Z_Construct_UClass_AEstadoNaveLetal_NoRegister()
	{
		return AEstadoNaveLetal::StaticClass();
	}
	struct Z_Construct_UClass_AEstadoNaveLetal_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEstadoNaveLetal_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEstadoNaveLetal_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EstadoNaveLetal.h" },
		{ "ModuleRelativePath", "EstadoNaveLetal.h" },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AEstadoNaveLetal_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UIEstados_NoRegister, (int32)VTABLE_OFFSET(AEstadoNaveLetal, IIEstados), false },  // 299208120
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEstadoNaveLetal_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEstadoNaveLetal>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEstadoNaveLetal_Statics::ClassParams = {
		&AEstadoNaveLetal::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AEstadoNaveLetal_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEstadoNaveLetal_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEstadoNaveLetal()
	{
		if (!Z_Registration_Info_UClass_AEstadoNaveLetal.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEstadoNaveLetal.OuterSingleton, Z_Construct_UClass_AEstadoNaveLetal_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AEstadoNaveLetal.OuterSingleton;
	}
	template<> GALAGA_USFX_L01_API UClass* StaticClass<AEstadoNaveLetal>()
	{
		return AEstadoNaveLetal::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEstadoNaveLetal);
	AEstadoNaveLetal::~AEstadoNaveLetal() {}
	struct Z_CompiledInDeferFile_FID_Users_marco_Documents_3er_Semestre_Programacion_Avanzada_Patrones_Galaga_USFX_L01_Galaga_USFX_L01_master_Source_Galaga_USFX_L01_EstadoNaveLetal_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_marco_Documents_3er_Semestre_Programacion_Avanzada_Patrones_Galaga_USFX_L01_Galaga_USFX_L01_master_Source_Galaga_USFX_L01_EstadoNaveLetal_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AEstadoNaveLetal, AEstadoNaveLetal::StaticClass, TEXT("AEstadoNaveLetal"), &Z_Registration_Info_UClass_AEstadoNaveLetal, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEstadoNaveLetal), 368920196U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_marco_Documents_3er_Semestre_Programacion_Avanzada_Patrones_Galaga_USFX_L01_Galaga_USFX_L01_master_Source_Galaga_USFX_L01_EstadoNaveLetal_h_1054340277(TEXT("/Script/Galaga_USFX_L01"),
		Z_CompiledInDeferFile_FID_Users_marco_Documents_3er_Semestre_Programacion_Avanzada_Patrones_Galaga_USFX_L01_Galaga_USFX_L01_master_Source_Galaga_USFX_L01_EstadoNaveLetal_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_marco_Documents_3er_Semestre_Programacion_Avanzada_Patrones_Galaga_USFX_L01_Galaga_USFX_L01_master_Source_Galaga_USFX_L01_EstadoNaveLetal_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
