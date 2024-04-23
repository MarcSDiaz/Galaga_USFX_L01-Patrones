// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX_L01/FabricaNaves.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFabricaNaves() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AFabricaNaves();
	GALAGA_USFX_L01_API UClass* Z_Construct_UClass_AFabricaNaves_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX_L01();
// End Cross Module References
	void AFabricaNaves::StaticRegisterNativesAFabricaNaves()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFabricaNaves);
	UClass* Z_Construct_UClass_AFabricaNaves_NoRegister()
	{
		return AFabricaNaves::StaticClass();
	}
	struct Z_Construct_UClass_AFabricaNaves_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFabricaNaves_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX_L01,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFabricaNaves_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FabricaNaves.h" },
		{ "ModuleRelativePath", "FabricaNaves.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFabricaNaves_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFabricaNaves>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFabricaNaves_Statics::ClassParams = {
		&AFabricaNaves::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AFabricaNaves_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFabricaNaves_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFabricaNaves()
	{
		if (!Z_Registration_Info_UClass_AFabricaNaves.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFabricaNaves.OuterSingleton, Z_Construct_UClass_AFabricaNaves_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFabricaNaves.OuterSingleton;
	}
	template<> GALAGA_USFX_L01_API UClass* StaticClass<AFabricaNaves>()
	{
		return AFabricaNaves::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFabricaNaves);
	AFabricaNaves::~AFabricaNaves() {}
	struct Z_CompiledInDeferFile_FID_Users_marco_Documents_3er_Semestre_Programacion_Avanzada_Patrones_Galaga_USFX_L01_Galaga_USFX_L01_master_Source_Galaga_USFX_L01_FabricaNaves_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_marco_Documents_3er_Semestre_Programacion_Avanzada_Patrones_Galaga_USFX_L01_Galaga_USFX_L01_master_Source_Galaga_USFX_L01_FabricaNaves_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFabricaNaves, AFabricaNaves::StaticClass, TEXT("AFabricaNaves"), &Z_Registration_Info_UClass_AFabricaNaves, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFabricaNaves), 4211972475U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_marco_Documents_3er_Semestre_Programacion_Avanzada_Patrones_Galaga_USFX_L01_Galaga_USFX_L01_master_Source_Galaga_USFX_L01_FabricaNaves_h_2058259266(TEXT("/Script/Galaga_USFX_L01"),
		Z_CompiledInDeferFile_FID_Users_marco_Documents_3er_Semestre_Programacion_Avanzada_Patrones_Galaga_USFX_L01_Galaga_USFX_L01_master_Source_Galaga_USFX_L01_FabricaNaves_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_marco_Documents_3er_Semestre_Programacion_Avanzada_Patrones_Galaga_USFX_L01_Galaga_USFX_L01_master_Source_Galaga_USFX_L01_FabricaNaves_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
