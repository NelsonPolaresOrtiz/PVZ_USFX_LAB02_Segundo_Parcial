// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB02/Barreras.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBarreras() {}
// Cross Module References
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_ABarreras_NoRegister();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_ABarreras();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB02();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
// End Cross Module References
	void ABarreras::StaticRegisterNativesABarreras()
	{
	}
	UClass* Z_Construct_UClass_ABarreras_NoRegister()
	{
		return ABarreras::StaticClass();
	}
	struct Z_Construct_UClass_ABarreras_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BarreraMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BarreraMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BarreraMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BarreraMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABarreras_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABarreras_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Barreras.h" },
		{ "ModuleRelativePath", "Barreras.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABarreras_Statics::NewProp_BarreraMeshComponent_MetaData[] = {
		{ "Category", "Barreras" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Barreras.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABarreras_Statics::NewProp_BarreraMeshComponent = { "BarreraMeshComponent", nullptr, (EPropertyFlags)0x00200800000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABarreras, BarreraMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABarreras_Statics::NewProp_BarreraMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABarreras_Statics::NewProp_BarreraMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABarreras_Statics::NewProp_BarreraMesh_MetaData[] = {
		{ "Category", "Barreras" },
		{ "ModuleRelativePath", "Barreras.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABarreras_Statics::NewProp_BarreraMesh = { "BarreraMesh", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABarreras, BarreraMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABarreras_Statics::NewProp_BarreraMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABarreras_Statics::NewProp_BarreraMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABarreras_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABarreras_Statics::NewProp_BarreraMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABarreras_Statics::NewProp_BarreraMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABarreras_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABarreras>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABarreras_Statics::ClassParams = {
		&ABarreras::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABarreras_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABarreras_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABarreras_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABarreras_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABarreras()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABarreras_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABarreras, 3854795032);
	template<> PVZ_USFX_LAB02_API UClass* StaticClass<ABarreras>()
	{
		return ABarreras::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABarreras(Z_Construct_UClass_ABarreras, &ABarreras::StaticClass, TEXT("/Script/PVZ_USFX_LAB02"), TEXT("ABarreras"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABarreras);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
