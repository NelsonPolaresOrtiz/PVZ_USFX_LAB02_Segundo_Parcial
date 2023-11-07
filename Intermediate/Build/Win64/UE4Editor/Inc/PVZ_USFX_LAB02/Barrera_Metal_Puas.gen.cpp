// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB02/Barrera_Metal_Puas.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBarrera_Metal_Puas() {}
// Cross Module References
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_ABarrera_Metal_Puas_NoRegister();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_ABarrera_Metal_Puas();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_ABarreras();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB02();
// End Cross Module References
	void ABarrera_Metal_Puas::StaticRegisterNativesABarrera_Metal_Puas()
	{
	}
	UClass* Z_Construct_UClass_ABarrera_Metal_Puas_NoRegister()
	{
		return ABarrera_Metal_Puas::StaticClass();
	}
	struct Z_Construct_UClass_ABarrera_Metal_Puas_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABarrera_Metal_Puas_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABarreras,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABarrera_Metal_Puas_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Barrera_Metal_Puas.h" },
		{ "ModuleRelativePath", "Barrera_Metal_Puas.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABarrera_Metal_Puas_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABarrera_Metal_Puas>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABarrera_Metal_Puas_Statics::ClassParams = {
		&ABarrera_Metal_Puas::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ABarrera_Metal_Puas_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABarrera_Metal_Puas_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABarrera_Metal_Puas()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABarrera_Metal_Puas_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABarrera_Metal_Puas, 2993522262);
	template<> PVZ_USFX_LAB02_API UClass* StaticClass<ABarrera_Metal_Puas>()
	{
		return ABarrera_Metal_Puas::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABarrera_Metal_Puas(Z_Construct_UClass_ABarrera_Metal_Puas, &ABarrera_Metal_Puas::StaticClass, TEXT("/Script/PVZ_USFX_LAB02"), TEXT("ABarrera_Metal_Puas"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABarrera_Metal_Puas);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
