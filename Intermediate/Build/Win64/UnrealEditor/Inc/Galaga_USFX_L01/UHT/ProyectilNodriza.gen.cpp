// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/ProyectilNodriza.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProyectilNodriza() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AProyectilNodriza();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AProyectilNodriza_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
// End Cross Module References
	void AProyectilNodriza::StaticRegisterNativesAProyectilNodriza()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AProyectilNodriza);
	UClass* Z_Construct_UClass_AProyectilNodriza_NoRegister()
	{
		return AProyectilNodriza::StaticClass();
	}
	struct Z_Construct_UClass_AProyectilNodriza_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MallaProyectilNodriza_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MallaProyectilNodriza;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProyectilNodriza_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProyectilNodriza_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ProyectilNodriza.h" },
		{ "ModuleRelativePath", "ProyectilNodriza.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProyectilNodriza_Statics::NewProp_MallaProyectilNodriza_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Projectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ProyectilNodriza.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProyectilNodriza_Statics::NewProp_MallaProyectilNodriza = { "MallaProyectilNodriza", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AProyectilNodriza, MallaProyectilNodriza), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProyectilNodriza_Statics::NewProp_MallaProyectilNodriza_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProyectilNodriza_Statics::NewProp_MallaProyectilNodriza_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AProyectilNodriza_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProyectilNodriza_Statics::NewProp_MallaProyectilNodriza,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProyectilNodriza_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProyectilNodriza>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AProyectilNodriza_Statics::ClassParams = {
		&AProyectilNodriza::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AProyectilNodriza_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AProyectilNodriza_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AProyectilNodriza_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AProyectilNodriza_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProyectilNodriza()
	{
		if (!Z_Registration_Info_UClass_AProyectilNodriza.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AProyectilNodriza.OuterSingleton, Z_Construct_UClass_AProyectilNodriza_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AProyectilNodriza.OuterSingleton;
	}
	template<> GALAGA_USFX_L01_API UClass* StaticClass<AProyectilNodriza>()
	{
		return AProyectilNodriza::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProyectilNodriza);
	AProyectilNodriza::~AProyectilNodriza() {}
	struct Z_CompiledInDeferFile_FID_Users_marco_Documents_3er_Semestre_Programacion_Avanzada_Patrones_Galaga_USFX_L01_Galaga_USFX_L01_master_Source_Galaga_USFX_L01_ProyectilNodriza_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_marco_Documents_3er_Semestre_Programacion_Avanzada_Patrones_Galaga_USFX_L01_Galaga_USFX_L01_master_Source_Galaga_USFX_L01_ProyectilNodriza_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AProyectilNodriza, AProyectilNodriza::StaticClass, TEXT("AProyectilNodriza"), &Z_Registration_Info_UClass_AProyectilNodriza, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AProyectilNodriza), 1314042650U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_marco_Documents_3er_Semestre_Programacion_Avanzada_Patrones_Galaga_USFX_L01_Galaga_USFX_L01_master_Source_Galaga_USFX_L01_ProyectilNodriza_h_3478286570(TEXT("/Script/Galaga_USFX_L01"),
		Z_CompiledInDeferFile_FID_Users_marco_Documents_3er_Semestre_Programacion_Avanzada_Patrones_Galaga_USFX_L01_Galaga_USFX_L01_master_Source_Galaga_USFX_L01_ProyectilNodriza_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_marco_Documents_3er_Semestre_Programacion_Avanzada_Patrones_Galaga_USFX_L01_Galaga_USFX_L01_master_Source_Galaga_USFX_L01_ProyectilNodriza_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
