// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB02/Generador_de_Barreras.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGenerador_de_Barreras() {}
// Cross Module References
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_AGenerador_de_Barreras_NoRegister();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_AGenerador_de_Barreras();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB02();
// End Cross Module References
	void AGenerador_de_Barreras::StaticRegisterNativesAGenerador_de_Barreras()
	{
	}
	UClass* Z_Construct_UClass_AGenerador_de_Barreras_NoRegister()
	{
		return AGenerador_de_Barreras::StaticClass();
	}
	struct Z_Construct_UClass_AGenerador_de_Barreras_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGenerador_de_Barreras_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGenerador_de_Barreras_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Generador_de_Barreras.h" },
		{ "ModuleRelativePath", "Generador_de_Barreras.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGenerador_de_Barreras_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGenerador_de_Barreras>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGenerador_de_Barreras_Statics::ClassParams = {
		&AGenerador_de_Barreras::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AGenerador_de_Barreras_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGenerador_de_Barreras_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGenerador_de_Barreras()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGenerador_de_Barreras_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGenerador_de_Barreras, 3684967550);
	template<> PVZ_USFX_LAB02_API UClass* StaticClass<AGenerador_de_Barreras>()
	{
		return AGenerador_de_Barreras::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGenerador_de_Barreras(Z_Construct_UClass_AGenerador_de_Barreras, &AGenerador_de_Barreras::StaticClass, TEXT("/Script/PVZ_USFX_LAB02"), TEXT("AGenerador_de_Barreras"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGenerador_de_Barreras);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
