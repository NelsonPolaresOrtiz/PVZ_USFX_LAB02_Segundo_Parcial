// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB02/Barrera_Metal.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBarrera_Metal() {}
// Cross Module References
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_ABarrera_Metal_NoRegister();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_ABarrera_Metal();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_ABarreras();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB02();
// End Cross Module References
	void ABarrera_Metal::StaticRegisterNativesABarrera_Metal()
	{
	}
	UClass* Z_Construct_UClass_ABarrera_Metal_NoRegister()
	{
		return ABarrera_Metal::StaticClass();
	}
	struct Z_Construct_UClass_ABarrera_Metal_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABarrera_Metal_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABarreras,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABarrera_Metal_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Barrera_Metal.h" },
		{ "ModuleRelativePath", "Barrera_Metal.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABarrera_Metal_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABarrera_Metal>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABarrera_Metal_Statics::ClassParams = {
		&ABarrera_Metal::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ABarrera_Metal_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABarrera_Metal_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABarrera_Metal()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABarrera_Metal_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABarrera_Metal, 308008441);
	template<> PVZ_USFX_LAB02_API UClass* StaticClass<ABarrera_Metal>()
	{
		return ABarrera_Metal::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABarrera_Metal(Z_Construct_UClass_ABarrera_Metal, &ABarrera_Metal::StaticClass, TEXT("/Script/PVZ_USFX_LAB02"), TEXT("ABarrera_Metal"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABarrera_Metal);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
