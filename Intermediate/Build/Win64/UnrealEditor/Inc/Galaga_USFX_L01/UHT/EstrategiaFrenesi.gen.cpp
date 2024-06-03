// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/EstrategiaFrenesi.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEstrategiaFrenesi() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AEstrategiaFrenesi();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AEstrategiaFrenesi_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_UEstrategiasNavePawn_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_UIEstrategiaFrenesi_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
// End Cross Module References
	void AEstrategiaFrenesi::StaticRegisterNativesAEstrategiaFrenesi()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEstrategiaFrenesi);
	UClass* Z_Construct_UClass_AEstrategiaFrenesi_NoRegister()
	{
		return AEstrategiaFrenesi::StaticClass();
	}
	struct Z_Construct_UClass_AEstrategiaFrenesi_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEstrategiaFrenesi_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEstrategiaFrenesi_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EstrategiaFrenesi.h" },
		{ "ModuleRelativePath", "EstrategiaFrenesi.h" },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AEstrategiaFrenesi_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UIEstrategiaFrenesi_NoRegister, (int32)VTABLE_OFFSET(AEstrategiaFrenesi, IIEstrategiaFrenesi), false },  // 388543675
			{ Z_Construct_UClass_UEstrategiasNavePawn_NoRegister, (int32)VTABLE_OFFSET(AEstrategiaFrenesi, IEstrategiasNavePawn), false },  // 4251754168
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEstrategiaFrenesi_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEstrategiaFrenesi>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEstrategiaFrenesi_Statics::ClassParams = {
		&AEstrategiaFrenesi::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AEstrategiaFrenesi_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEstrategiaFrenesi_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEstrategiaFrenesi()
	{
		if (!Z_Registration_Info_UClass_AEstrategiaFrenesi.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEstrategiaFrenesi.OuterSingleton, Z_Construct_UClass_AEstrategiaFrenesi_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AEstrategiaFrenesi.OuterSingleton;
	}
	template<> GALAGA_USFX_L01_API UClass* StaticClass<AEstrategiaFrenesi>()
	{
		return AEstrategiaFrenesi::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEstrategiaFrenesi);
	AEstrategiaFrenesi::~AEstrategiaFrenesi() {}
	struct Z_CompiledInDeferFile_FID_Users_marco_Documents_3er_Semestre_Programacion_Avanzada_Patrones_Galaga_USFX_L01_Galaga_USFX_L01_master_Source_Galaga_USFX_L01_EstrategiaFrenesi_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_marco_Documents_3er_Semestre_Programacion_Avanzada_Patrones_Galaga_USFX_L01_Galaga_USFX_L01_master_Source_Galaga_USFX_L01_EstrategiaFrenesi_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AEstrategiaFrenesi, AEstrategiaFrenesi::StaticClass, TEXT("AEstrategiaFrenesi"), &Z_Registration_Info_UClass_AEstrategiaFrenesi, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEstrategiaFrenesi), 3843773055U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_marco_Documents_3er_Semestre_Programacion_Avanzada_Patrones_Galaga_USFX_L01_Galaga_USFX_L01_master_Source_Galaga_USFX_L01_EstrategiaFrenesi_h_1195083229(TEXT("/Script/Galaga_USFX_L01"),
		Z_CompiledInDeferFile_FID_Users_marco_Documents_3er_Semestre_Programacion_Avanzada_Patrones_Galaga_USFX_L01_Galaga_USFX_L01_master_Source_Galaga_USFX_L01_EstrategiaFrenesi_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_marco_Documents_3er_Semestre_Programacion_Avanzada_Patrones_Galaga_USFX_L01_Galaga_USFX_L01_master_Source_Galaga_USFX_L01_EstrategiaFrenesi_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
