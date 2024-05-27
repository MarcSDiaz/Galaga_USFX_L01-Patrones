// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/PublicadorObserver.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePublicadorObserver() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_APublicadorObserver();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_APublicadorObserver_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
// End Cross Module References
	void APublicadorObserver::StaticRegisterNativesAPublicadorObserver()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APublicadorObserver);
	UClass* Z_Construct_UClass_APublicadorObserver_NoRegister()
	{
		return APublicadorObserver::StaticClass();
	}
	struct Z_Construct_UClass_APublicadorObserver_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Subscriptores_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Subscriptores_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Subscriptores;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APublicadorObserver_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APublicadorObserver_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PublicadorObserver.h" },
		{ "ModuleRelativePath", "PublicadorObserver.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APublicadorObserver_Statics::NewProp_Subscriptores_Inner = { "Subscriptores", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APublicadorObserver_Statics::NewProp_Subscriptores_MetaData[] = {
		{ "Category", "Publicador Observer" },
		{ "ModuleRelativePath", "PublicadorObserver.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APublicadorObserver_Statics::NewProp_Subscriptores = { "Subscriptores", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APublicadorObserver, Subscriptores), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_APublicadorObserver_Statics::NewProp_Subscriptores_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APublicadorObserver_Statics::NewProp_Subscriptores_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APublicadorObserver_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APublicadorObserver_Statics::NewProp_Subscriptores_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APublicadorObserver_Statics::NewProp_Subscriptores,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APublicadorObserver_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APublicadorObserver>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APublicadorObserver_Statics::ClassParams = {
		&APublicadorObserver::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APublicadorObserver_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APublicadorObserver_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APublicadorObserver_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APublicadorObserver_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APublicadorObserver()
	{
		if (!Z_Registration_Info_UClass_APublicadorObserver.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APublicadorObserver.OuterSingleton, Z_Construct_UClass_APublicadorObserver_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APublicadorObserver.OuterSingleton;
	}
	template<> GALAGA_USFX_L01_API UClass* StaticClass<APublicadorObserver>()
	{
		return APublicadorObserver::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APublicadorObserver);
	APublicadorObserver::~APublicadorObserver() {}
	struct Z_CompiledInDeferFile_FID_Users_marco_Documents_3er_Semestre_Programacion_Avanzada_Patrones_Galaga_USFX_L01_Galaga_USFX_L01_master_Source_Galaga_USFX_L01_PublicadorObserver_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_marco_Documents_3er_Semestre_Programacion_Avanzada_Patrones_Galaga_USFX_L01_Galaga_USFX_L01_master_Source_Galaga_USFX_L01_PublicadorObserver_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APublicadorObserver, APublicadorObserver::StaticClass, TEXT("APublicadorObserver"), &Z_Registration_Info_UClass_APublicadorObserver, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APublicadorObserver), 3392980448U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_marco_Documents_3er_Semestre_Programacion_Avanzada_Patrones_Galaga_USFX_L01_Galaga_USFX_L01_master_Source_Galaga_USFX_L01_PublicadorObserver_h_3351930268(TEXT("/Script/Galaga_USFX_L01"),
		Z_CompiledInDeferFile_FID_Users_marco_Documents_3er_Semestre_Programacion_Avanzada_Patrones_Galaga_USFX_L01_Galaga_USFX_L01_master_Source_Galaga_USFX_L01_PublicadorObserver_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_marco_Documents_3er_Semestre_Programacion_Avanzada_Patrones_Galaga_USFX_L01_Galaga_USFX_L01_master_Source_Galaga_USFX_L01_PublicadorObserver_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
