// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/EstadoNaveDefensa.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEstadoNaveDefensa() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AEstadoNaveDefensa();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AEstadoNaveDefensa_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_UIEstados_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
// End Cross Module References
	void AEstadoNaveDefensa::StaticRegisterNativesAEstadoNaveDefensa()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEstadoNaveDefensa);
	UClass* Z_Construct_UClass_AEstadoNaveDefensa_NoRegister()
	{
		return AEstadoNaveDefensa::StaticClass();
	}
	struct Z_Construct_UClass_AEstadoNaveDefensa_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEstadoNaveDefensa_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEstadoNaveDefensa_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EstadoNaveDefensa.h" },
		{ "ModuleRelativePath", "EstadoNaveDefensa.h" },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AEstadoNaveDefensa_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UIEstados_NoRegister, (int32)VTABLE_OFFSET(AEstadoNaveDefensa, IIEstados), false },  // 299208120
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEstadoNaveDefensa_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEstadoNaveDefensa>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEstadoNaveDefensa_Statics::ClassParams = {
		&AEstadoNaveDefensa::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AEstadoNaveDefensa_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEstadoNaveDefensa_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEstadoNaveDefensa()
	{
		if (!Z_Registration_Info_UClass_AEstadoNaveDefensa.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEstadoNaveDefensa.OuterSingleton, Z_Construct_UClass_AEstadoNaveDefensa_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AEstadoNaveDefensa.OuterSingleton;
	}
	template<> GALAGA_USFX_L01_API UClass* StaticClass<AEstadoNaveDefensa>()
	{
		return AEstadoNaveDefensa::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEstadoNaveDefensa);
	AEstadoNaveDefensa::~AEstadoNaveDefensa() {}
	struct Z_CompiledInDeferFile_FID_Users_marco_Documents_3er_Semestre_Programacion_Avanzada_Patrones_Galaga_USFX_L01_Galaga_USFX_L01_master_Source_Galaga_USFX_L01_EstadoNaveDefensa_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_marco_Documents_3er_Semestre_Programacion_Avanzada_Patrones_Galaga_USFX_L01_Galaga_USFX_L01_master_Source_Galaga_USFX_L01_EstadoNaveDefensa_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AEstadoNaveDefensa, AEstadoNaveDefensa::StaticClass, TEXT("AEstadoNaveDefensa"), &Z_Registration_Info_UClass_AEstadoNaveDefensa, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEstadoNaveDefensa), 6771272U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_marco_Documents_3er_Semestre_Programacion_Avanzada_Patrones_Galaga_USFX_L01_Galaga_USFX_L01_master_Source_Galaga_USFX_L01_EstadoNaveDefensa_h_1543715448(TEXT("/Script/Galaga_USFX_L01"),
		Z_CompiledInDeferFile_FID_Users_marco_Documents_3er_Semestre_Programacion_Avanzada_Patrones_Galaga_USFX_L01_Galaga_USFX_L01_master_Source_Galaga_USFX_L01_EstadoNaveDefensa_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_marco_Documents_3er_Semestre_Programacion_Avanzada_Patrones_Galaga_USFX_L01_Galaga_USFX_L01_master_Source_Galaga_USFX_L01_EstadoNaveDefensa_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
