// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MechanicsTest/AndrianCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAndrianCharacter() {}
// Cross Module References
	MECHANICSTEST_API UClass* Z_Construct_UClass_AAndrianCharacter_NoRegister();
	MECHANICSTEST_API UClass* Z_Construct_UClass_AAndrianCharacter();
	MECHANICSTEST_API UClass* Z_Construct_UClass_AMechanicsTestCharacter();
	UPackage* Z_Construct_UPackage__Script_MechanicsTest();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	MECHANICSTEST_API UClass* Z_Construct_UClass_AProjectileClass_NoRegister();
// End Cross Module References
	void AAndrianCharacter::StaticRegisterNativesAAndrianCharacter()
	{
	}
	UClass* Z_Construct_UClass_AAndrianCharacter_NoRegister()
	{
		return AAndrianCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AAndrianCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnProjectile_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnProjectile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bulletType_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_bulletType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isCastingAbility2_MetaData[];
#endif
		static void NewProp_isCastingAbility2_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isCastingAbility2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Abality1Coldown_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Abality1Coldown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isCastingAbility1_MetaData[];
#endif
		static void NewProp_isCastingAbility1_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isCastingAbility1;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAndrianCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMechanicsTestCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_MechanicsTest,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAndrianCharacter_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AndrianCharacter.h" },
		{ "ModuleRelativePath", "AndrianCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAndrianCharacter_Statics::NewProp_AnimMontage_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "InfoCharacter" },
		{ "ModuleRelativePath", "AndrianCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAndrianCharacter_Statics::NewProp_AnimMontage = { "AnimMontage", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAndrianCharacter, AnimMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAndrianCharacter_Statics::NewProp_AnimMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAndrianCharacter_Statics::NewProp_AnimMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAndrianCharacter_Statics::NewProp_SpawnProjectile_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "InfoCharacter" },
		{ "Comment", "//root component of the projectile\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AndrianCharacter.h" },
		{ "ToolTip", "root component of the projectile" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAndrianCharacter_Statics::NewProp_SpawnProjectile = { "SpawnProjectile", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAndrianCharacter, SpawnProjectile), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAndrianCharacter_Statics::NewProp_SpawnProjectile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAndrianCharacter_Statics::NewProp_SpawnProjectile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAndrianCharacter_Statics::NewProp_bulletType_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AbilityVariables" },
		{ "ModuleRelativePath", "AndrianCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AAndrianCharacter_Statics::NewProp_bulletType = { "bulletType", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAndrianCharacter, bulletType), Z_Construct_UClass_AProjectileClass_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AAndrianCharacter_Statics::NewProp_bulletType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAndrianCharacter_Statics::NewProp_bulletType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAndrianCharacter_Statics::NewProp_isCastingAbility2_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AbilityVariables" },
		{ "ModuleRelativePath", "AndrianCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AAndrianCharacter_Statics::NewProp_isCastingAbility2_SetBit(void* Obj)
	{
		((AAndrianCharacter*)Obj)->isCastingAbility2 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAndrianCharacter_Statics::NewProp_isCastingAbility2 = { "isCastingAbility2", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AAndrianCharacter), &Z_Construct_UClass_AAndrianCharacter_Statics::NewProp_isCastingAbility2_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAndrianCharacter_Statics::NewProp_isCastingAbility2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAndrianCharacter_Statics::NewProp_isCastingAbility2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAndrianCharacter_Statics::NewProp_Abality1Coldown_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AbilityVariables" },
		{ "ModuleRelativePath", "AndrianCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAndrianCharacter_Statics::NewProp_Abality1Coldown = { "Abality1Coldown", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAndrianCharacter, Abality1Coldown), METADATA_PARAMS(Z_Construct_UClass_AAndrianCharacter_Statics::NewProp_Abality1Coldown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAndrianCharacter_Statics::NewProp_Abality1Coldown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAndrianCharacter_Statics::NewProp_isCastingAbility1_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AbilityVariables" },
		{ "ModuleRelativePath", "AndrianCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AAndrianCharacter_Statics::NewProp_isCastingAbility1_SetBit(void* Obj)
	{
		((AAndrianCharacter*)Obj)->isCastingAbility1 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAndrianCharacter_Statics::NewProp_isCastingAbility1 = { "isCastingAbility1", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AAndrianCharacter), &Z_Construct_UClass_AAndrianCharacter_Statics::NewProp_isCastingAbility1_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAndrianCharacter_Statics::NewProp_isCastingAbility1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAndrianCharacter_Statics::NewProp_isCastingAbility1_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAndrianCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAndrianCharacter_Statics::NewProp_AnimMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAndrianCharacter_Statics::NewProp_SpawnProjectile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAndrianCharacter_Statics::NewProp_bulletType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAndrianCharacter_Statics::NewProp_isCastingAbility2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAndrianCharacter_Statics::NewProp_Abality1Coldown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAndrianCharacter_Statics::NewProp_isCastingAbility1,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAndrianCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAndrianCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAndrianCharacter_Statics::ClassParams = {
		&AAndrianCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAndrianCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AAndrianCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAndrianCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAndrianCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAndrianCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAndrianCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAndrianCharacter, 2413623766);
	template<> MECHANICSTEST_API UClass* StaticClass<AAndrianCharacter>()
	{
		return AAndrianCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAndrianCharacter(Z_Construct_UClass_AAndrianCharacter, &AAndrianCharacter::StaticClass, TEXT("/Script/MechanicsTest"), TEXT("AAndrianCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAndrianCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
