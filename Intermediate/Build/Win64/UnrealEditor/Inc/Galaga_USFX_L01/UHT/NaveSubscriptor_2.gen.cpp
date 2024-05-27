// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/NaveSubscriptor_2.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveSubscriptor_2() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AEscudoNodriza_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_ANaveSubscriptor_2();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_ANaveSubscriptor_2_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AProyectilNodriza_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_ARadar_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_UICambiosSubscriptores_NoRegister();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_UISubscriptor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
// End Cross Module References
	void ANaveSubscriptor_2::StaticRegisterNativesANaveSubscriptor_2()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANaveSubscriptor_2);
	UClass* Z_Construct_UClass_ANaveSubscriptor_2_NoRegister()
	{
		return ANaveSubscriptor_2::StaticClass();
	}
	struct Z_Construct_UClass_ANaveSubscriptor_2_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MallaSub2_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MallaSub2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Proyectil_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Proyectil;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EscudoNave_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EscudoNave;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Radar_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Radar;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveSubscriptor_2_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveSubscriptor_2_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NaveSubscriptor_2.h" },
		{ "ModuleRelativePath", "NaveSubscriptor_2.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveSubscriptor_2_Statics::NewProp_MallaSub2_MetaData[] = {
		{ "Category", "Malla" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NaveSubscriptor_2.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANaveSubscriptor_2_Statics::NewProp_MallaSub2 = { "MallaSub2", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ANaveSubscriptor_2, MallaSub2), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANaveSubscriptor_2_Statics::NewProp_MallaSub2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveSubscriptor_2_Statics::NewProp_MallaSub2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveSubscriptor_2_Statics::NewProp_Proyectil_MetaData[] = {
		{ "ModuleRelativePath", "NaveSubscriptor_2.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANaveSubscriptor_2_Statics::NewProp_Proyectil = { "Proyectil", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ANaveSubscriptor_2, Proyectil), Z_Construct_UClass_AProyectilNodriza_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANaveSubscriptor_2_Statics::NewProp_Proyectil_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveSubscriptor_2_Statics::NewProp_Proyectil_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveSubscriptor_2_Statics::NewProp_EscudoNave_MetaData[] = {
		{ "ModuleRelativePath", "NaveSubscriptor_2.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANaveSubscriptor_2_Statics::NewProp_EscudoNave = { "EscudoNave", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ANaveSubscriptor_2, EscudoNave), Z_Construct_UClass_AEscudoNodriza_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANaveSubscriptor_2_Statics::NewProp_EscudoNave_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveSubscriptor_2_Statics::NewProp_EscudoNave_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveSubscriptor_2_Statics::NewProp_Radar_MetaData[] = {
		{ "Category", "Subscriptor" },
		{ "ModuleRelativePath", "NaveSubscriptor_2.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANaveSubscriptor_2_Statics::NewProp_Radar = { "Radar", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ANaveSubscriptor_2, Radar), Z_Construct_UClass_ARadar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANaveSubscriptor_2_Statics::NewProp_Radar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveSubscriptor_2_Statics::NewProp_Radar_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANaveSubscriptor_2_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANaveSubscriptor_2_Statics::NewProp_MallaSub2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANaveSubscriptor_2_Statics::NewProp_Proyectil,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANaveSubscriptor_2_Statics::NewProp_EscudoNave,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANaveSubscriptor_2_Statics::NewProp_Radar,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ANaveSubscriptor_2_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UISubscriptor_NoRegister, (int32)VTABLE_OFFSET(ANaveSubscriptor_2, IISubscriptor), false },  // 2483374995
			{ Z_Construct_UClass_UICambiosSubscriptores_NoRegister, (int32)VTABLE_OFFSET(ANaveSubscriptor_2, IICambiosSubscriptores), false },  // 416805699
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveSubscriptor_2_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveSubscriptor_2>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ANaveSubscriptor_2_Statics::ClassParams = {
		&ANaveSubscriptor_2::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ANaveSubscriptor_2_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ANaveSubscriptor_2_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANaveSubscriptor_2_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveSubscriptor_2_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveSubscriptor_2()
	{
		if (!Z_Registration_Info_UClass_ANaveSubscriptor_2.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANaveSubscriptor_2.OuterSingleton, Z_Construct_UClass_ANaveSubscriptor_2_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ANaveSubscriptor_2.OuterSingleton;
	}
	template<> GALAGA_USFX_L01_API UClass* StaticClass<ANaveSubscriptor_2>()
	{
		return ANaveSubscriptor_2::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveSubscriptor_2);
	ANaveSubscriptor_2::~ANaveSubscriptor_2() {}
	struct Z_CompiledInDeferFile_FID_Users_marco_Documents_3er_Semestre_Programacion_Avanzada_Patrones_Galaga_USFX_L01_Galaga_USFX_L01_master_Source_Galaga_USFX_L01_NaveSubscriptor_2_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_marco_Documents_3er_Semestre_Programacion_Avanzada_Patrones_Galaga_USFX_L01_Galaga_USFX_L01_master_Source_Galaga_USFX_L01_NaveSubscriptor_2_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ANaveSubscriptor_2, ANaveSubscriptor_2::StaticClass, TEXT("ANaveSubscriptor_2"), &Z_Registration_Info_UClass_ANaveSubscriptor_2, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANaveSubscriptor_2), 3418018589U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_marco_Documents_3er_Semestre_Programacion_Avanzada_Patrones_Galaga_USFX_L01_Galaga_USFX_L01_master_Source_Galaga_USFX_L01_NaveSubscriptor_2_h_2190224958(TEXT("/Script/Galaga_USFX_L01"),
		Z_CompiledInDeferFile_FID_Users_marco_Documents_3er_Semestre_Programacion_Avanzada_Patrones_Galaga_USFX_L01_Galaga_USFX_L01_master_Source_Galaga_USFX_L01_NaveSubscriptor_2_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_marco_Documents_3er_Semestre_Programacion_Avanzada_Patrones_Galaga_USFX_L01_Galaga_USFX_L01_master_Source_Galaga_USFX_L01_NaveSubscriptor_2_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
