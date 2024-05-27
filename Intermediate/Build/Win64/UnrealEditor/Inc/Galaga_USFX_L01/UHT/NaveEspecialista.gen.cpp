// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/NaveEspecialista.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveEspecialista() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_ANaveEspecialista();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_ANaveEspecialista_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
// End Cross Module References
	void ANaveEspecialista::StaticRegisterNativesANaveEspecialista()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANaveEspecialista);
	UClass* Z_Construct_UClass_ANaveEspecialista_NoRegister()
	{
		return ANaveEspecialista::StaticClass();
	}
	struct Z_Construct_UClass_ANaveEspecialista_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveEspecialista_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveEspecialista_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NaveEspecialista.h" },
		{ "ModuleRelativePath", "NaveEspecialista.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveEspecialista_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveEspecialista>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ANaveEspecialista_Statics::ClassParams = {
		&ANaveEspecialista::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ANaveEspecialista_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEspecialista_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveEspecialista()
	{
		if (!Z_Registration_Info_UClass_ANaveEspecialista.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANaveEspecialista.OuterSingleton, Z_Construct_UClass_ANaveEspecialista_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ANaveEspecialista.OuterSingleton;
	}
	template<> GALAGA_USFX_L01_API UClass* StaticClass<ANaveEspecialista>()
	{
		return ANaveEspecialista::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveEspecialista);
	ANaveEspecialista::~ANaveEspecialista() {}
	struct Z_CompiledInDeferFile_FID_Users_marco_Documents_3er_Semestre_Programacion_Avanzada_Patrones_Galaga_USFX_L01_Galaga_USFX_L01_master_Source_Galaga_USFX_L01_NaveEspecialista_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_marco_Documents_3er_Semestre_Programacion_Avanzada_Patrones_Galaga_USFX_L01_Galaga_USFX_L01_master_Source_Galaga_USFX_L01_NaveEspecialista_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ANaveEspecialista, ANaveEspecialista::StaticClass, TEXT("ANaveEspecialista"), &Z_Registration_Info_UClass_ANaveEspecialista, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANaveEspecialista), 3206715718U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_marco_Documents_3er_Semestre_Programacion_Avanzada_Patrones_Galaga_USFX_L01_Galaga_USFX_L01_master_Source_Galaga_USFX_L01_NaveEspecialista_h_1359754364(TEXT("/Script/Galaga_USFX_L01"),
		Z_CompiledInDeferFile_FID_Users_marco_Documents_3er_Semestre_Programacion_Avanzada_Patrones_Galaga_USFX_L01_Galaga_USFX_L01_master_Source_Galaga_USFX_L01_NaveEspecialista_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_marco_Documents_3er_Semestre_Programacion_Avanzada_Patrones_Galaga_USFX_L01_Galaga_USFX_L01_master_Source_Galaga_USFX_L01_NaveEspecialista_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
