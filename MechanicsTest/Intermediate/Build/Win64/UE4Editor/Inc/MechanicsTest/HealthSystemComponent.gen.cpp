// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MechanicsTest/HealthSystemComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHealthSystemComponent() {}
// Cross Module References
	MECHANICSTEST_API UClass* Z_Construct_UClass_UHealthSystemComponent_NoRegister();
	MECHANICSTEST_API UClass* Z_Construct_UClass_UHealthSystemComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_MechanicsTest();
	MECHANICSTEST_API UFunction* Z_Construct_UFunction_UHealthSystemComponent_GetAlive();
	MECHANICSTEST_API UFunction* Z_Construct_UFunction_UHealthSystemComponent_GetFactorizedHealth();
	MECHANICSTEST_API UFunction* Z_Construct_UFunction_UHealthSystemComponent_GetHealth();
	MECHANICSTEST_API UFunction* Z_Construct_UFunction_UHealthSystemComponent_Heal();
	MECHANICSTEST_API UFunction* Z_Construct_UFunction_UHealthSystemComponent_TakeDamage();
// End Cross Module References
	void UHealthSystemComponent::StaticRegisterNativesUHealthSystemComponent()
	{
		UClass* Class = UHealthSystemComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAlive", &UHealthSystemComponent::execGetAlive },
			{ "GetFactorizedHealth", &UHealthSystemComponent::execGetFactorizedHealth },
			{ "GetHealth", &UHealthSystemComponent::execGetHealth },
			{ "Heal", &UHealthSystemComponent::execHeal },
			{ "TakeDamage", &UHealthSystemComponent::execTakeDamage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHealthSystemComponent_GetAlive_Statics
	{
		struct HealthSystemComponent_eventGetAlive_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UHealthSystemComponent_GetAlive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HealthSystemComponent_eventGetAlive_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHealthSystemComponent_GetAlive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HealthSystemComponent_eventGetAlive_Parms), &Z_Construct_UFunction_UHealthSystemComponent_GetAlive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHealthSystemComponent_GetAlive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealthSystemComponent_GetAlive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHealthSystemComponent_GetAlive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HealthSystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHealthSystemComponent_GetAlive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHealthSystemComponent, nullptr, "GetAlive", nullptr, nullptr, sizeof(HealthSystemComponent_eventGetAlive_Parms), Z_Construct_UFunction_UHealthSystemComponent_GetAlive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthSystemComponent_GetAlive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHealthSystemComponent_GetAlive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthSystemComponent_GetAlive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHealthSystemComponent_GetAlive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHealthSystemComponent_GetAlive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHealthSystemComponent_GetFactorizedHealth_Statics
	{
		struct HealthSystemComponent_eventGetFactorizedHealth_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHealthSystemComponent_GetFactorizedHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HealthSystemComponent_eventGetFactorizedHealth_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHealthSystemComponent_GetFactorizedHealth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealthSystemComponent_GetFactorizedHealth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHealthSystemComponent_GetFactorizedHealth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HealthSystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHealthSystemComponent_GetFactorizedHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHealthSystemComponent, nullptr, "GetFactorizedHealth", nullptr, nullptr, sizeof(HealthSystemComponent_eventGetFactorizedHealth_Parms), Z_Construct_UFunction_UHealthSystemComponent_GetFactorizedHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthSystemComponent_GetFactorizedHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHealthSystemComponent_GetFactorizedHealth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthSystemComponent_GetFactorizedHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHealthSystemComponent_GetFactorizedHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHealthSystemComponent_GetFactorizedHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHealthSystemComponent_GetHealth_Statics
	{
		struct HealthSystemComponent_eventGetHealth_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHealthSystemComponent_GetHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HealthSystemComponent_eventGetHealth_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHealthSystemComponent_GetHealth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealthSystemComponent_GetHealth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHealthSystemComponent_GetHealth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HealthSystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHealthSystemComponent_GetHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHealthSystemComponent, nullptr, "GetHealth", nullptr, nullptr, sizeof(HealthSystemComponent_eventGetHealth_Parms), Z_Construct_UFunction_UHealthSystemComponent_GetHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthSystemComponent_GetHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHealthSystemComponent_GetHealth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthSystemComponent_GetHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHealthSystemComponent_GetHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHealthSystemComponent_GetHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHealthSystemComponent_Heal_Statics
	{
		struct HealthSystemComponent_eventHeal_Parms
		{
			float nHeal;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_nHeal;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHealthSystemComponent_Heal_Statics::NewProp_nHeal = { "nHeal", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HealthSystemComponent_eventHeal_Parms, nHeal), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHealthSystemComponent_Heal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealthSystemComponent_Heal_Statics::NewProp_nHeal,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHealthSystemComponent_Heal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HealthSystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHealthSystemComponent_Heal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHealthSystemComponent, nullptr, "Heal", nullptr, nullptr, sizeof(HealthSystemComponent_eventHeal_Parms), Z_Construct_UFunction_UHealthSystemComponent_Heal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthSystemComponent_Heal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHealthSystemComponent_Heal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthSystemComponent_Heal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHealthSystemComponent_Heal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHealthSystemComponent_Heal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHealthSystemComponent_TakeDamage_Statics
	{
		struct HealthSystemComponent_eventTakeDamage_Parms
		{
			float dmg;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_dmg;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHealthSystemComponent_TakeDamage_Statics::NewProp_dmg = { "dmg", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HealthSystemComponent_eventTakeDamage_Parms, dmg), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHealthSystemComponent_TakeDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHealthSystemComponent_TakeDamage_Statics::NewProp_dmg,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHealthSystemComponent_TakeDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "HealthSystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHealthSystemComponent_TakeDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHealthSystemComponent, nullptr, "TakeDamage", nullptr, nullptr, sizeof(HealthSystemComponent_eventTakeDamage_Parms), Z_Construct_UFunction_UHealthSystemComponent_TakeDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthSystemComponent_TakeDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHealthSystemComponent_TakeDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHealthSystemComponent_TakeDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHealthSystemComponent_TakeDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHealthSystemComponent_TakeDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UHealthSystemComponent_NoRegister()
	{
		return UHealthSystemComponent::StaticClass();
	}
	struct Z_Construct_UClass_UHealthSystemComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_maxHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_maxHealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_health_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_health;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_alive_MetaData[];
#endif
		static void NewProp_alive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_alive;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHealthSystemComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MechanicsTest,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHealthSystemComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHealthSystemComponent_GetAlive, "GetAlive" }, // 1160395873
		{ &Z_Construct_UFunction_UHealthSystemComponent_GetFactorizedHealth, "GetFactorizedHealth" }, // 3357954721
		{ &Z_Construct_UFunction_UHealthSystemComponent_GetHealth, "GetHealth" }, // 4146817647
		{ &Z_Construct_UFunction_UHealthSystemComponent_Heal, "Heal" }, // 4249114954
		{ &Z_Construct_UFunction_UHealthSystemComponent_TakeDamage, "TakeDamage" }, // 613012547
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHealthSystemComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "HealthSystemComponent.h" },
		{ "ModuleRelativePath", "HealthSystemComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHealthSystemComponent_Statics::NewProp_maxHealth_MetaData[] = {
		{ "Category", "PlayerVariables" },
		{ "ModuleRelativePath", "HealthSystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHealthSystemComponent_Statics::NewProp_maxHealth = { "maxHealth", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHealthSystemComponent, maxHealth), METADATA_PARAMS(Z_Construct_UClass_UHealthSystemComponent_Statics::NewProp_maxHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHealthSystemComponent_Statics::NewProp_maxHealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHealthSystemComponent_Statics::NewProp_health_MetaData[] = {
		{ "Category", "PlayerVariables" },
		{ "ModuleRelativePath", "HealthSystemComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHealthSystemComponent_Statics::NewProp_health = { "health", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHealthSystemComponent, health), METADATA_PARAMS(Z_Construct_UClass_UHealthSystemComponent_Statics::NewProp_health_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHealthSystemComponent_Statics::NewProp_health_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHealthSystemComponent_Statics::NewProp_alive_MetaData[] = {
		{ "Category", "PlayerVariables" },
		{ "ModuleRelativePath", "HealthSystemComponent.h" },
	};
#endif
	void Z_Construct_UClass_UHealthSystemComponent_Statics::NewProp_alive_SetBit(void* Obj)
	{
		((UHealthSystemComponent*)Obj)->alive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHealthSystemComponent_Statics::NewProp_alive = { "alive", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UHealthSystemComponent), &Z_Construct_UClass_UHealthSystemComponent_Statics::NewProp_alive_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHealthSystemComponent_Statics::NewProp_alive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHealthSystemComponent_Statics::NewProp_alive_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHealthSystemComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHealthSystemComponent_Statics::NewProp_maxHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHealthSystemComponent_Statics::NewProp_health,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHealthSystemComponent_Statics::NewProp_alive,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHealthSystemComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHealthSystemComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHealthSystemComponent_Statics::ClassParams = {
		&UHealthSystemComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UHealthSystemComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UHealthSystemComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UHealthSystemComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHealthSystemComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHealthSystemComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHealthSystemComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHealthSystemComponent, 3089663705);
	template<> MECHANICSTEST_API UClass* StaticClass<UHealthSystemComponent>()
	{
		return UHealthSystemComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHealthSystemComponent(Z_Construct_UClass_UHealthSystemComponent, &UHealthSystemComponent::StaticClass, TEXT("/Script/MechanicsTest"), TEXT("UHealthSystemComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHealthSystemComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
