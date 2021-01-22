// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MechanicsTest/AreaClass.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAreaClass() {}
// Cross Module References
	MECHANICSTEST_API UClass* Z_Construct_UClass_AAreaClass_NoRegister();
	MECHANICSTEST_API UClass* Z_Construct_UClass_AAreaClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MechanicsTest();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
// End Cross Module References
	void AAreaClass::StaticRegisterNativesAAreaClass()
	{
	}
	UClass* Z_Construct_UClass_AAreaClass_NoRegister()
	{
		return AAreaClass::StaticClass();
	}
	struct Z_Construct_UClass_AAreaClass_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_areaLife_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_areaLife;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_areaValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_areaValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isDoingDamage_MetaData[];
#endif
		static void NewProp_isDoingDamage_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isDoingDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VFX_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VFX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_root_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_root;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_capsule_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_capsule;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAreaClass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MechanicsTest,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAreaClass_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AreaClass.h" },
		{ "ModuleRelativePath", "AreaClass.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAreaClass_Statics::NewProp_areaLife_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AreaInfo" },
		{ "Comment", "//value that indicates how many time live this object\n" },
		{ "ModuleRelativePath", "AreaClass.h" },
		{ "ToolTip", "value that indicates how many time live this object" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAreaClass_Statics::NewProp_areaLife = { "areaLife", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAreaClass, areaLife), METADATA_PARAMS(Z_Construct_UClass_AAreaClass_Statics::NewProp_areaLife_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAreaClass_Statics::NewProp_areaLife_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAreaClass_Statics::NewProp_areaValue_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AreaInfo" },
		{ "Comment", "//value for damage than apply this area or buff, could be negative for buffs\n" },
		{ "ModuleRelativePath", "AreaClass.h" },
		{ "ToolTip", "value for damage than apply this area or buff, could be negative for buffs" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAreaClass_Statics::NewProp_areaValue = { "areaValue", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAreaClass, areaValue), METADATA_PARAMS(Z_Construct_UClass_AAreaClass_Statics::NewProp_areaValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAreaClass_Statics::NewProp_areaValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAreaClass_Statics::NewProp_isDoingDamage_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AreaInfo" },
		{ "Comment", "//Bool for know if this area apply damage or not\n" },
		{ "ModuleRelativePath", "AreaClass.h" },
		{ "ToolTip", "Bool for know if this area apply damage or not" },
	};
#endif
	void Z_Construct_UClass_AAreaClass_Statics::NewProp_isDoingDamage_SetBit(void* Obj)
	{
		((AAreaClass*)Obj)->isDoingDamage = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAreaClass_Statics::NewProp_isDoingDamage = { "isDoingDamage", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AAreaClass), &Z_Construct_UClass_AAreaClass_Statics::NewProp_isDoingDamage_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAreaClass_Statics::NewProp_isDoingDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAreaClass_Statics::NewProp_isDoingDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAreaClass_Statics::NewProp_Mesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AreaComp" },
		{ "Comment", "//Mesh\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AreaClass.h" },
		{ "ToolTip", "Mesh" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAreaClass_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAreaClass, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAreaClass_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAreaClass_Statics::NewProp_Mesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAreaClass_Statics::NewProp_VFX_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AreaComp" },
		{ "Comment", "//VFX\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AreaClass.h" },
		{ "ToolTip", "VFX" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAreaClass_Statics::NewProp_VFX = { "VFX", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAreaClass, VFX), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAreaClass_Statics::NewProp_VFX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAreaClass_Statics::NewProp_VFX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAreaClass_Statics::NewProp_root_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AreaComp" },
		{ "Comment", "//root component of the projectile\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AreaClass.h" },
		{ "ToolTip", "root component of the projectile" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAreaClass_Statics::NewProp_root = { "root", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAreaClass, root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAreaClass_Statics::NewProp_root_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAreaClass_Statics::NewProp_root_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAreaClass_Statics::NewProp_capsule_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AreaComp" },
		{ "Comment", "//For colision purposes\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AreaClass.h" },
		{ "ToolTip", "For colision purposes" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAreaClass_Statics::NewProp_capsule = { "capsule", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAreaClass, capsule), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAreaClass_Statics::NewProp_capsule_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAreaClass_Statics::NewProp_capsule_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAreaClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAreaClass_Statics::NewProp_areaLife,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAreaClass_Statics::NewProp_areaValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAreaClass_Statics::NewProp_isDoingDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAreaClass_Statics::NewProp_Mesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAreaClass_Statics::NewProp_VFX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAreaClass_Statics::NewProp_root,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAreaClass_Statics::NewProp_capsule,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAreaClass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAreaClass>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAreaClass_Statics::ClassParams = {
		&AAreaClass::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAreaClass_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AAreaClass_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAreaClass_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAreaClass_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAreaClass()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAreaClass_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAreaClass, 4249934349);
	template<> MECHANICSTEST_API UClass* StaticClass<AAreaClass>()
	{
		return AAreaClass::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAreaClass(Z_Construct_UClass_AAreaClass, &AAreaClass::StaticClass, TEXT("/Script/MechanicsTest"), TEXT("AAreaClass"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAreaClass);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
