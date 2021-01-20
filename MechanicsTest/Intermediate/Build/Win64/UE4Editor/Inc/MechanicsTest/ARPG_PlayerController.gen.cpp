// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MechanicsTest/ARPG_PlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeARPG_PlayerController() {}
// Cross Module References
	MECHANICSTEST_API UClass* Z_Construct_UClass_AARPG_PlayerController_NoRegister();
	MECHANICSTEST_API UClass* Z_Construct_UClass_AARPG_PlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_MechanicsTest();
// End Cross Module References
	void AARPG_PlayerController::StaticRegisterNativesAARPG_PlayerController()
	{
	}
	UClass* Z_Construct_UClass_AARPG_PlayerController_NoRegister()
	{
		return AARPG_PlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AARPG_PlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AARPG_PlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_MechanicsTest,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AARPG_PlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ARPG_PlayerController.h" },
		{ "ModuleRelativePath", "ARPG_PlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AARPG_PlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AARPG_PlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AARPG_PlayerController_Statics::ClassParams = {
		&AARPG_PlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AARPG_PlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AARPG_PlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AARPG_PlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AARPG_PlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AARPG_PlayerController, 1244527446);
	template<> MECHANICSTEST_API UClass* StaticClass<AARPG_PlayerController>()
	{
		return AARPG_PlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AARPG_PlayerController(Z_Construct_UClass_AARPG_PlayerController, &AARPG_PlayerController::StaticClass, TEXT("/Script/MechanicsTest"), TEXT("AARPG_PlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AARPG_PlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
