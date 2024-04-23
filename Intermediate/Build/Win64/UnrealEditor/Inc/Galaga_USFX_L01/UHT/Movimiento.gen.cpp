// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/Movimiento.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovimiento() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_UMovimiento();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_UMovimiento_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
// End Cross Module References
	void UMovimiento::StaticRegisterNativesUMovimiento()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMovimiento);
	UClass* Z_Construct_UClass_UMovimiento_NoRegister()
	{
		return UMovimiento::StaticClass();
	}
	struct Z_Construct_UClass_UMovimiento_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovimiento_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovimiento_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Movimiento.h" },
		{ "ModuleRelativePath", "Movimiento.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovimiento_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovimiento>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMovimiento_Statics::ClassParams = {
		&UMovimiento::StaticClass,
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
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMovimiento_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovimiento_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovimiento()
	{
		if (!Z_Registration_Info_UClass_UMovimiento.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMovimiento.OuterSingleton, Z_Construct_UClass_UMovimiento_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMovimiento.OuterSingleton;
	}
	template<> GALAGA_USFX_L01_API UClass* StaticClass<UMovimiento>()
	{
		return UMovimiento::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovimiento);
	UMovimiento::~UMovimiento() {}
	struct Z_CompiledInDeferFile_FID_Users_marco_Documents_3er_Semestre_Programacion_Avanzada_Patrones_Galaga_USFX_L01_Galaga_USFX_L01_master_Source_Galaga_USFX_L01_Movimiento_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_marco_Documents_3er_Semestre_Programacion_Avanzada_Patrones_Galaga_USFX_L01_Galaga_USFX_L01_master_Source_Galaga_USFX_L01_Movimiento_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMovimiento, UMovimiento::StaticClass, TEXT("UMovimiento"), &Z_Registration_Info_UClass_UMovimiento, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMovimiento), 2678492678U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_marco_Documents_3er_Semestre_Programacion_Avanzada_Patrones_Galaga_USFX_L01_Galaga_USFX_L01_master_Source_Galaga_USFX_L01_Movimiento_h_2366200746(TEXT("/Script/Galaga_USFX_L01"),
		Z_CompiledInDeferFile_FID_Users_marco_Documents_3er_Semestre_Programacion_Avanzada_Patrones_Galaga_USFX_L01_Galaga_USFX_L01_master_Source_Galaga_USFX_L01_Movimiento_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_marco_Documents_3er_Semestre_Programacion_Avanzada_Patrones_Galaga_USFX_L01_Galaga_USFX_L01_master_Source_Galaga_USFX_L01_Movimiento_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
