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
	MECHANICSTEST_API UFunction* Z_Construct_UFunction_AAndrianCharacter_AttachOrbToHand();
	MECHANICSTEST_API UFunction* Z_Construct_UFunction_AAndrianCharacter_LaunchOrb();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	MECHANICSTEST_API UClass* Z_Construct_UClass_AAreaClass_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	MECHANICSTEST_API UClass* Z_Construct_UClass_AProjectileArea_NoRegister();
	MECHANICSTEST_API UClass* Z_Construct_UClass_AProjectileClass_NoRegister();
// End Cross Module References
	void AAndrianCharacter::StaticRegisterNativesAAndrianCharacter()
	{
		UClass* Class = AAndrianCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AttachOrbToHand", &AAndrianCharacter::execAttachOrbToHand },
			{ "LaunchOrb", &AAndrianCharacter::execLaunchOrb },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAndrianCharacter_AttachOrbToHand_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAndrianCharacter_AttachOrbToHand_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AndrianCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAndrianCharacter_AttachOrbToHand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAndrianCharacter, nullptr, "AttachOrbToHand", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAndrianCharacter_AttachOrbToHand_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAndrianCharacter_AttachOrbToHand_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAndrianCharacter_AttachOrbToHand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAndrianCharacter_AttachOrbToHand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAndrianCharacter_LaunchOrb_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAndrianCharacter_LaunchOrb_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AndrianCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAndrianCharacter_LaunchOrb_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAndrianCharacter, nullptr, "LaunchOrb", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAndrianCharacter_LaunchOrb_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAndrianCharacter_LaunchOrb_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAndrianCharacter_LaunchOrb()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAndrianCharacter_LaunchOrb_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AAndrianCharacter_NoRegister()
	{
		return AAndrianCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AAndrianCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_invisibleMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_invisibleMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AreaBuff_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_AreaBuff;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VFX_Buff_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VFX_Buff;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tickDamage_MetaData[];
#endif
		static void NewProp_tickDamage_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_tickDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimMontageOrb_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimMontageOrb;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimMontageFireBall_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimMontageFireBall;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnArea_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnArea;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnProjectile_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnProjectile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_orbType_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_orbType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bulletType_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_bulletType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Abality6Coldown_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Abality6Coldown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isCastingAbility6_MetaData[];
#endif
		static void NewProp_isCastingAbility6_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isCastingAbility6;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Abality5Coldown_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Abality5Coldown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isCastingAbility5_MetaData[];
#endif
		static void NewProp_isCastingAbility5_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isCastingAbility5;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Abality3Coldown_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Abality3Coldown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isCastingAbility3_MetaData[];
#endif
		static void NewProp_isCastingAbility3_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isCastingAbility3;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Abality2Coldown_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Abality2Coldown;
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
	const FClassFunctionLinkInfo Z_Construct_UClass_AAndrianCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAndrianCharacter_AttachOrbToHand, "AttachOrbToHand" }, // 1355320096
		{ &Z_Construct_UFunction_AAndrianCharacter_LaunchOrb, "LaunchOrb" }, // 168729501
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAndrianCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AndrianCharacter.h" },
		{ "ModuleRelativePath", "AndrianCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAndrianCharacter_Statics::NewProp_DefaultMaterial_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VFX" },
		{ "Comment", "//Default material\n" },
		{ "ModuleRelativePath", "AndrianCharacter.h" },
		{ "ToolTip", "Default material" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAndrianCharacter_Statics::NewProp_DefaultMaterial = { "DefaultMaterial", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAndrianCharacter, DefaultMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAndrianCharacter_Statics::NewProp_DefaultMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAndrianCharacter_Statics::NewProp_DefaultMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAndrianCharacter_Statics::NewProp_invisibleMaterial_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VFX" },
		{ "Comment", "//Material for make character invisible\n" },
		{ "ModuleRelativePath", "AndrianCharacter.h" },
		{ "ToolTip", "Material for make character invisible" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAndrianCharacter_Statics::NewProp_invisibleMaterial = { "invisibleMaterial", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAndrianCharacter, invisibleMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAndrianCharacter_Statics::NewProp_invisibleMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAndrianCharacter_Statics::NewProp_invisibleMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAndrianCharacter_Statics::NewProp_AreaBuff_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AbilityVariables" },
		{ "Comment", "//Area buff for spawning.\n" },
		{ "ModuleRelativePath", "AndrianCharacter.h" },
		{ "ToolTip", "Area buff for spawning." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AAndrianCharacter_Statics::NewProp_AreaBuff = { "AreaBuff", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAndrianCharacter, AreaBuff), Z_Construct_UClass_AAreaClass_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AAndrianCharacter_Statics::NewProp_AreaBuff_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAndrianCharacter_Statics::NewProp_AreaBuff_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAndrianCharacter_Statics::NewProp_VFX_Buff_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "VFX" },
		{ "Comment", "//VFX\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AndrianCharacter.h" },
		{ "ToolTip", "VFX" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAndrianCharacter_Statics::NewProp_VFX_Buff = { "VFX_Buff", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAndrianCharacter, VFX_Buff), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAndrianCharacter_Statics::NewProp_VFX_Buff_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAndrianCharacter_Statics::NewProp_VFX_Buff_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAndrianCharacter_Statics::NewProp_tickDamage_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "InfoCharacter" },
		{ "Comment", "//Will change for each spawn of the ability\n" },
		{ "ModuleRelativePath", "AndrianCharacter.h" },
		{ "ToolTip", "Will change for each spawn of the ability" },
	};
#endif
	void Z_Construct_UClass_AAndrianCharacter_Statics::NewProp_tickDamage_SetBit(void* Obj)
	{
		((AAndrianCharacter*)Obj)->tickDamage = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAndrianCharacter_Statics::NewProp_tickDamage = { "tickDamage", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AAndrianCharacter), &Z_Construct_UClass_AAndrianCharacter_Statics::NewProp_tickDamage_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAndrianCharacter_Statics::NewProp_tickDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAndrianCharacter_Statics::NewProp_tickDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAndrianCharacter_Statics::NewProp_AnimMontageOrb_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "InfoCharacter" },
		{ "Comment", "//Anim montage for shooting fire balls\n" },
		{ "ModuleRelativePath", "AndrianCharacter.h" },
		{ "ToolTip", "Anim montage for shooting fire balls" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAndrianCharacter_Statics::NewProp_AnimMontageOrb = { "AnimMontageOrb", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAndrianCharacter, AnimMontageOrb), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAndrianCharacter_Statics::NewProp_AnimMontageOrb_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAndrianCharacter_Statics::NewProp_AnimMontageOrb_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAndrianCharacter_Statics::NewProp_AnimMontageFireBall_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "InfoCharacter" },
		{ "Comment", "//Anim montage for shooting fire balls\n" },
		{ "ModuleRelativePath", "AndrianCharacter.h" },
		{ "ToolTip", "Anim montage for shooting fire balls" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAndrianCharacter_Statics::NewProp_AnimMontageFireBall = { "AnimMontageFireBall", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAndrianCharacter, AnimMontageFireBall), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAndrianCharacter_Statics::NewProp_AnimMontageFireBall_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAndrianCharacter_Statics::NewProp_AnimMontageFireBall_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAndrianCharacter_Statics::NewProp_SpawnArea_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "InfoCharacter" },
		{ "Comment", "// component of the area to spawn\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AndrianCharacter.h" },
		{ "ToolTip", "component of the area to spawn" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAndrianCharacter_Statics::NewProp_SpawnArea = { "SpawnArea", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAndrianCharacter, SpawnArea), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAndrianCharacter_Statics::NewProp_SpawnArea_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAndrianCharacter_Statics::NewProp_SpawnArea_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAndrianCharacter_Statics::NewProp_SpawnProjectile_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "InfoCharacter" },
		{ "Comment", "// component of the projectile to spawn\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AndrianCharacter.h" },
		{ "ToolTip", "component of the projectile to spawn" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAndrianCharacter_Statics::NewProp_SpawnProjectile = { "SpawnProjectile", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAndrianCharacter, SpawnProjectile), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAndrianCharacter_Statics::NewProp_SpawnProjectile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAndrianCharacter_Statics::NewProp_SpawnProjectile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAndrianCharacter_Statics::NewProp_orbType_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AbilityVariables" },
		{ "Comment", "//type of projectile for shooting orb ability\n" },
		{ "ModuleRelativePath", "AndrianCharacter.h" },
		{ "ToolTip", "type of projectile for shooting orb ability" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AAndrianCharacter_Statics::NewProp_orbType = { "orbType", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAndrianCharacter, orbType), Z_Construct_UClass_AProjectileArea_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AAndrianCharacter_Statics::NewProp_orbType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAndrianCharacter_Statics::NewProp_orbType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAndrianCharacter_Statics::NewProp_bulletType_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AbilityVariables" },
		{ "Comment", "//type of projectile for shooting main ability\n" },
		{ "ModuleRelativePath", "AndrianCharacter.h" },
		{ "ToolTip", "type of projectile for shooting main ability" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AAndrianCharacter_Statics::NewProp_bulletType = { "bulletType", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAndrianCharacter, bulletType), Z_Construct_UClass_AProjectileClass_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AAndrianCharacter_Statics::NewProp_bulletType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAndrianCharacter_Statics::NewProp_bulletType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAndrianCharacter_Statics::NewProp_Abality6Coldown_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AbilityVariables" },
		{ "ModuleRelativePath", "AndrianCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAndrianCharacter_Statics::NewProp_Abality6Coldown = { "Abality6Coldown", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAndrianCharacter, Abality6Coldown), METADATA_PARAMS(Z_Construct_UClass_AAndrianCharacter_Statics::NewProp_Abality6Coldown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAndrianCharacter_Statics::NewProp_Abality6Coldown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAndrianCharacter_Statics::NewProp_isCastingAbility6_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AbilityVariables" },
		{ "ModuleRelativePath", "AndrianCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AAndrianCharacter_Statics::NewProp_isCastingAbility6_SetBit(void* Obj)
	{
		((AAndrianCharacter*)Obj)->isCastingAbility6 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAndrianCharacter_Statics::NewProp_isCastingAbility6 = { "isCastingAbility6", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AAndrianCharacter), &Z_Construct_UClass_AAndrianCharacter_Statics::NewProp_isCastingAbility6_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAndrianCharacter_Statics::NewProp_isCastingAbility6_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAndrianCharacter_Statics::NewProp_isCastingAbility6_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAndrianCharacter_Statics::NewProp_Abality5Coldown_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AbilityVariables" },
		{ "ModuleRelativePath", "AndrianCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAndrianCharacter_Statics::NewProp_Abality5Coldown = { "Abality5Coldown", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAndrianCharacter, Abality5Coldown), METADATA_PARAMS(Z_Construct_UClass_AAndrianCharacter_Statics::NewProp_Abality5Coldown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAndrianCharacter_Statics::NewProp_Abality5Coldown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAndrianCharacter_Statics::NewProp_isCastingAbility5_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AbilityVariables" },
		{ "ModuleRelativePath", "AndrianCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AAndrianCharacter_Statics::NewProp_isCastingAbility5_SetBit(void* Obj)
	{
		((AAndrianCharacter*)Obj)->isCastingAbility5 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAndrianCharacter_Statics::NewProp_isCastingAbility5 = { "isCastingAbility5", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AAndrianCharacter), &Z_Construct_UClass_AAndrianCharacter_Statics::NewProp_isCastingAbility5_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAndrianCharacter_Statics::NewProp_isCastingAbility5_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAndrianCharacter_Statics::NewProp_isCastingAbility5_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAndrianCharacter_Statics::NewProp_Abality3Coldown_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AbilityVariables" },
		{ "ModuleRelativePath", "AndrianCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAndrianCharacter_Statics::NewProp_Abality3Coldown = { "Abality3Coldown", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAndrianCharacter, Abality3Coldown), METADATA_PARAMS(Z_Construct_UClass_AAndrianCharacter_Statics::NewProp_Abality3Coldown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAndrianCharacter_Statics::NewProp_Abality3Coldown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAndrianCharacter_Statics::NewProp_isCastingAbility3_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AbilityVariables" },
		{ "ModuleRelativePath", "AndrianCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AAndrianCharacter_Statics::NewProp_isCastingAbility3_SetBit(void* Obj)
	{
		((AAndrianCharacter*)Obj)->isCastingAbility3 = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAndrianCharacter_Statics::NewProp_isCastingAbility3 = { "isCastingAbility3", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AAndrianCharacter), &Z_Construct_UClass_AAndrianCharacter_Statics::NewProp_isCastingAbility3_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAndrianCharacter_Statics::NewProp_isCastingAbility3_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAndrianCharacter_Statics::NewProp_isCastingAbility3_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAndrianCharacter_Statics::NewProp_Abality2Coldown_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AbilityVariables" },
		{ "ModuleRelativePath", "AndrianCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAndrianCharacter_Statics::NewProp_Abality2Coldown = { "Abality2Coldown", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAndrianCharacter, Abality2Coldown), METADATA_PARAMS(Z_Construct_UClass_AAndrianCharacter_Statics::NewProp_Abality2Coldown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAndrianCharacter_Statics::NewProp_Abality2Coldown_MetaData)) };
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
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAndrianCharacter_Statics::NewProp_DefaultMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAndrianCharacter_Statics::NewProp_invisibleMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAndrianCharacter_Statics::NewProp_AreaBuff,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAndrianCharacter_Statics::NewProp_VFX_Buff,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAndrianCharacter_Statics::NewProp_tickDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAndrianCharacter_Statics::NewProp_AnimMontageOrb,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAndrianCharacter_Statics::NewProp_AnimMontageFireBall,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAndrianCharacter_Statics::NewProp_SpawnArea,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAndrianCharacter_Statics::NewProp_SpawnProjectile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAndrianCharacter_Statics::NewProp_orbType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAndrianCharacter_Statics::NewProp_bulletType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAndrianCharacter_Statics::NewProp_Abality6Coldown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAndrianCharacter_Statics::NewProp_isCastingAbility6,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAndrianCharacter_Statics::NewProp_Abality5Coldown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAndrianCharacter_Statics::NewProp_isCastingAbility5,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAndrianCharacter_Statics::NewProp_Abality3Coldown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAndrianCharacter_Statics::NewProp_isCastingAbility3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAndrianCharacter_Statics::NewProp_Abality2Coldown,
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
		FuncInfo,
		Z_Construct_UClass_AAndrianCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(AAndrianCharacter, 1723599511);
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
