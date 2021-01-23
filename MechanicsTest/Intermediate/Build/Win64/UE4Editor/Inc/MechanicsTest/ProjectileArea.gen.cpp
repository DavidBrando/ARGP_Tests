// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MechanicsTest/ProjectileArea.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectileArea() {}
// Cross Module References
	MECHANICSTEST_API UClass* Z_Construct_UClass_AProjectileArea_NoRegister();
	MECHANICSTEST_API UClass* Z_Construct_UClass_AProjectileArea();
	MECHANICSTEST_API UClass* Z_Construct_UClass_AProjectileClass();
	UPackage* Z_Construct_UPackage__Script_MechanicsTest();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	MECHANICSTEST_API UClass* Z_Construct_UClass_AAreaClass_NoRegister();
// End Cross Module References
	void AProjectileArea::StaticRegisterNativesAProjectileArea()
	{
	}
	UClass* Z_Construct_UClass_AProjectileArea_NoRegister()
	{
		return AProjectileArea::StaticClass();
	}
	struct Z_Construct_UClass_AProjectileArea_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AreaSpawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_AreaSpawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProjectileArea_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AProjectileClass,
		(UObject* (*)())Z_Construct_UPackage__Script_MechanicsTest,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectileArea_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ProjectileArea.h" },
		{ "ModuleRelativePath", "ProjectileArea.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectileArea_Statics::NewProp_AreaSpawn_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AbilityVariables" },
		{ "Comment", "//type of area for spawning when this projectile dead\n" },
		{ "ModuleRelativePath", "ProjectileArea.h" },
		{ "ToolTip", "type of area for spawning when this projectile dead" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AProjectileArea_Statics::NewProp_AreaSpawn = { "AreaSpawn", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProjectileArea, AreaSpawn), Z_Construct_UClass_AAreaClass_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AProjectileArea_Statics::NewProp_AreaSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileArea_Statics::NewProp_AreaSpawn_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AProjectileArea_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectileArea_Statics::NewProp_AreaSpawn,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProjectileArea_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProjectileArea>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AProjectileArea_Statics::ClassParams = {
		&AProjectileArea::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AProjectileArea_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileArea_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AProjectileArea_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AProjectileArea_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProjectileArea()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AProjectileArea_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AProjectileArea, 4085372646);
	template<> MECHANICSTEST_API UClass* StaticClass<AProjectileArea>()
	{
		return AProjectileArea::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProjectileArea(Z_Construct_UClass_AProjectileArea, &AProjectileArea::StaticClass, TEXT("/Script/MechanicsTest"), TEXT("AProjectileArea"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProjectileArea);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
