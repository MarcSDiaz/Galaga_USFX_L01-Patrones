// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/EscudoNodriza.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEscudoNodriza() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AEscudoNodriza();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AEscudoNodriza_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
// End Cross Module References
	void AEscudoNodriza::StaticRegisterNativesAEscudoNodriza()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEscudoNodriza);
	UClass* Z_Construct_UClass_AEscudoNodriza_NoRegister()
	{
		return AEscudoNodriza::StaticClass();
	}
	struct Z_Construct_UClass_AEscudoNodriza_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MallaEscudoNodriza_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MallaEscudoNodriza;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEscudoNodriza_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEscudoNodriza_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EscudoNodriza.h" },
		{ "ModuleRelativePath", "EscudoNodriza.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEscudoNodriza_Statics::NewProp_MallaEscudoNodriza_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Projectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EscudoNodriza.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEscudoNodriza_Statics::NewProp_MallaEscudoNodriza = { "MallaEscudoNodriza", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AEscudoNodriza, MallaEscudoNodriza), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEscudoNodriza_Statics::NewProp_MallaEscudoNodriza_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEscudoNodriza_Statics::NewProp_MallaEscudoNodriza_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEscudoNodriza_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEscudoNodriza_Statics::NewProp_MallaEscudoNodriza,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEscudoNodriza_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEscudoNodriza>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEscudoNodriza_Statics::ClassParams = {
		&AEscudoNodriza::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEscudoNodriza_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AEscudoNodriza_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEscudoNodriza_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEscudoNodriza_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEscudoNodriza()
	{
		if (!Z_Registration_Info_UClass_AEscudoNodriza.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEscudoNodriza.OuterSingleton, Z_Construct_UClass_AEscudoNodriza_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AEscudoNodriza.OuterSingleton;
	}
	template<> GALAGA_USFX_L01_API UClass* StaticClass<AEscudoNodriza>()
	{
		return AEscudoNodriza::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEscudoNodriza);
	AEscudoNodriza::~AEscudoNodriza() {}
	struct Z_CompiledInDeferFile_FID_Users_marco_Documents_3er_Semestre_Programacion_Avanzada_Patrones_Galaga_USFX_L01_Galaga_USFX_L01_master_Source_Galaga_USFX_L01_EscudoNodriza_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_marco_Documents_3er_Semestre_Programacion_Avanzada_Patrones_Galaga_USFX_L01_Galaga_USFX_L01_master_Source_Galaga_USFX_L01_EscudoNodriza_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AEscudoNodriza, AEscudoNodriza::StaticClass, TEXT("AEscudoNodriza"), &Z_Registration_Info_UClass_AEscudoNodriza, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEscudoNodriza), 876685834U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_marco_Documents_3er_Semestre_Programacion_Avanzada_Patrones_Galaga_USFX_L01_Galaga_USFX_L01_master_Source_Galaga_USFX_L01_EscudoNodriza_h_3334316785(TEXT("/Script/Galaga_USFX_L01"),
		Z_CompiledInDeferFile_FID_Users_marco_Documents_3er_Semestre_Programacion_Avanzada_Patrones_Galaga_USFX_L01_Galaga_USFX_L01_master_Source_Galaga_USFX_L01_EscudoNodriza_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_marco_Documents_3er_Semestre_Programacion_Avanzada_Patrones_Galaga_USFX_L01_Galaga_USFX_L01_master_Source_Galaga_USFX_L01_EscudoNodriza_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
