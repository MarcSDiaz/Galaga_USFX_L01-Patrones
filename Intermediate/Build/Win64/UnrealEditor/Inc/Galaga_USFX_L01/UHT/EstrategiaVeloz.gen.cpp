// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/EstrategiaVeloz.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEstrategiaVeloz() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AEstrategiaVeloz();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AEstrategiaVeloz_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_UEstrategiasNavePawn_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_UIEstrategiaVeloz_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
// End Cross Module References
	void AEstrategiaVeloz::StaticRegisterNativesAEstrategiaVeloz()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEstrategiaVeloz);
	UClass* Z_Construct_UClass_AEstrategiaVeloz_NoRegister()
	{
		return AEstrategiaVeloz::StaticClass();
	}
	struct Z_Construct_UClass_AEstrategiaVeloz_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEstrategiaVeloz_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEstrategiaVeloz_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EstrategiaVeloz.h" },
		{ "ModuleRelativePath", "EstrategiaVeloz.h" },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AEstrategiaVeloz_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UIEstrategiaVeloz_NoRegister, (int32)VTABLE_OFFSET(AEstrategiaVeloz, IIEstrategiaVeloz), false },  // 440470984
			{ Z_Construct_UClass_UEstrategiasNavePawn_NoRegister, (int32)VTABLE_OFFSET(AEstrategiaVeloz, IEstrategiasNavePawn), false },  // 4251754168
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEstrategiaVeloz_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEstrategiaVeloz>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEstrategiaVeloz_Statics::ClassParams = {
		&AEstrategiaVeloz::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AEstrategiaVeloz_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEstrategiaVeloz_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEstrategiaVeloz()
	{
		if (!Z_Registration_Info_UClass_AEstrategiaVeloz.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEstrategiaVeloz.OuterSingleton, Z_Construct_UClass_AEstrategiaVeloz_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AEstrategiaVeloz.OuterSingleton;
	}
	template<> GALAGA_USFX_L01_API UClass* StaticClass<AEstrategiaVeloz>()
	{
		return AEstrategiaVeloz::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEstrategiaVeloz);
	AEstrategiaVeloz::~AEstrategiaVeloz() {}
	struct Z_CompiledInDeferFile_FID_Users_marco_Documents_3er_Semestre_Programacion_Avanzada_Patrones_Galaga_USFX_L01_Galaga_USFX_L01_master_Source_Galaga_USFX_L01_EstrategiaVeloz_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_marco_Documents_3er_Semestre_Programacion_Avanzada_Patrones_Galaga_USFX_L01_Galaga_USFX_L01_master_Source_Galaga_USFX_L01_EstrategiaVeloz_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AEstrategiaVeloz, AEstrategiaVeloz::StaticClass, TEXT("AEstrategiaVeloz"), &Z_Registration_Info_UClass_AEstrategiaVeloz, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEstrategiaVeloz), 3247019418U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_marco_Documents_3er_Semestre_Programacion_Avanzada_Patrones_Galaga_USFX_L01_Galaga_USFX_L01_master_Source_Galaga_USFX_L01_EstrategiaVeloz_h_2126474333(TEXT("/Script/Galaga_USFX_L01"),
		Z_CompiledInDeferFile_FID_Users_marco_Documents_3er_Semestre_Programacion_Avanzada_Patrones_Galaga_USFX_L01_Galaga_USFX_L01_master_Source_Galaga_USFX_L01_EstrategiaVeloz_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_marco_Documents_3er_Semestre_Programacion_Avanzada_Patrones_Galaga_USFX_L01_Galaga_USFX_L01_master_Source_Galaga_USFX_L01_EstrategiaVeloz_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
