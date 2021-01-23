// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MechanicsTest/MechanicsTestCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMechanicsTestCharacter() {}
// Cross Module References
	MECHANICSTEST_API UClass* Z_Construct_UClass_AMechanicsTestCharacter_NoRegister();
	MECHANICSTEST_API UClass* Z_Construct_UClass_AMechanicsTestCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_MechanicsTest();
	MECHANICSTEST_API UFunction* Z_Construct_UFunction_AMechanicsTestCharacter_BuffControl();
	MECHANICSTEST_API UFunction* Z_Construct_UFunction_AMechanicsTestCharacter_GetHealthComponent();
	MECHANICSTEST_API UClass* Z_Construct_UClass_UHealthSystemComponent_NoRegister();
	MECHANICSTEST_API UFunction* Z_Construct_UFunction_AMechanicsTestCharacter_GetIsEnemy();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
// End Cross Module References
	void AMechanicsTestCharacter::StaticRegisterNativesAMechanicsTestCharacter()
	{
		UClass* Class = AMechanicsTestCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BuffControl", &AMechanicsTestCharacter::execBuffControl },
			{ "GetHealthComponent", &AMechanicsTestCharacter::execGetHealthComponent },
			{ "GetIsEnemy", &AMechanicsTestCharacter::execGetIsEnemy },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMechanicsTestCharacter_BuffControl_Statics
	{
		struct MechanicsTestCharacter_eventBuffControl_Parms
		{
			int32 buffType;
			float factorizedBuff;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_factorizedBuff;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_buffType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMechanicsTestCharacter_BuffControl_Statics::NewProp_factorizedBuff = { "factorizedBuff", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MechanicsTestCharacter_eventBuffControl_Parms, factorizedBuff), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AMechanicsTestCharacter_BuffControl_Statics::NewProp_buffType = { "buffType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MechanicsTestCharacter_eventBuffControl_Parms, buffType), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMechanicsTestCharacter_BuffControl_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMechanicsTestCharacter_BuffControl_Statics::NewProp_factorizedBuff,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMechanicsTestCharacter_BuffControl_Statics::NewProp_buffType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMechanicsTestCharacter_BuffControl_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MechanicsTestCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMechanicsTestCharacter_BuffControl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMechanicsTestCharacter, nullptr, "BuffControl", nullptr, nullptr, sizeof(MechanicsTestCharacter_eventBuffControl_Parms), Z_Construct_UFunction_AMechanicsTestCharacter_BuffControl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMechanicsTestCharacter_BuffControl_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMechanicsTestCharacter_BuffControl_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMechanicsTestCharacter_BuffControl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMechanicsTestCharacter_BuffControl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMechanicsTestCharacter_BuffControl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMechanicsTestCharacter_GetHealthComponent_Statics
	{
		struct MechanicsTestCharacter_eventGetHealthComponent_Parms
		{
			UHealthSystemComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMechanicsTestCharacter_GetHealthComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMechanicsTestCharacter_GetHealthComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MechanicsTestCharacter_eventGetHealthComponent_Parms, ReturnValue), Z_Construct_UClass_UHealthSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AMechanicsTestCharacter_GetHealthComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMechanicsTestCharacter_GetHealthComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMechanicsTestCharacter_GetHealthComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMechanicsTestCharacter_GetHealthComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMechanicsTestCharacter_GetHealthComponent_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Get Health component for make changes\n" },
		{ "ModuleRelativePath", "MechanicsTestCharacter.h" },
		{ "ToolTip", "Get Health component for make changes" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMechanicsTestCharacter_GetHealthComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMechanicsTestCharacter, nullptr, "GetHealthComponent", nullptr, nullptr, sizeof(MechanicsTestCharacter_eventGetHealthComponent_Parms), Z_Construct_UFunction_AMechanicsTestCharacter_GetHealthComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMechanicsTestCharacter_GetHealthComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMechanicsTestCharacter_GetHealthComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMechanicsTestCharacter_GetHealthComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMechanicsTestCharacter_GetHealthComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMechanicsTestCharacter_GetHealthComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMechanicsTestCharacter_GetIsEnemy_Statics
	{
		struct MechanicsTestCharacter_eventGetIsEnemy_Parms
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
	void Z_Construct_UFunction_AMechanicsTestCharacter_GetIsEnemy_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MechanicsTestCharacter_eventGetIsEnemy_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMechanicsTestCharacter_GetIsEnemy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MechanicsTestCharacter_eventGetIsEnemy_Parms), &Z_Construct_UFunction_AMechanicsTestCharacter_GetIsEnemy_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMechanicsTestCharacter_GetIsEnemy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMechanicsTestCharacter_GetIsEnemy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMechanicsTestCharacter_GetIsEnemy_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Check if is enemy or not\n" },
		{ "ModuleRelativePath", "MechanicsTestCharacter.h" },
		{ "ToolTip", "Check if is enemy or not" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMechanicsTestCharacter_GetIsEnemy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMechanicsTestCharacter, nullptr, "GetIsEnemy", nullptr, nullptr, sizeof(MechanicsTestCharacter_eventGetIsEnemy_Parms), Z_Construct_UFunction_AMechanicsTestCharacter_GetIsEnemy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMechanicsTestCharacter_GetIsEnemy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMechanicsTestCharacter_GetIsEnemy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMechanicsTestCharacter_GetIsEnemy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMechanicsTestCharacter_GetIsEnemy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMechanicsTestCharacter_GetIsEnemy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMechanicsTestCharacter_NoRegister()
	{
		return AMechanicsTestCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AMechanicsTestCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsEnemy_MetaData[];
#endif
		static void NewProp_bIsEnemy_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsEnemy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseLookUpRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseLookUpRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseTurnRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseTurnRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMechanicsTestCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_MechanicsTest,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMechanicsTestCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMechanicsTestCharacter_BuffControl, "BuffControl" }, // 4192175502
		{ &Z_Construct_UFunction_AMechanicsTestCharacter_GetHealthComponent, "GetHealthComponent" }, // 3586352488
		{ &Z_Construct_UFunction_AMechanicsTestCharacter_GetIsEnemy, "GetIsEnemy" }, // 3796839940
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMechanicsTestCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MechanicsTestCharacter.h" },
		{ "ModuleRelativePath", "MechanicsTestCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMechanicsTestCharacter_Statics::NewProp_bIsEnemy_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "InfoCharacter" },
		{ "ModuleRelativePath", "MechanicsTestCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AMechanicsTestCharacter_Statics::NewProp_bIsEnemy_SetBit(void* Obj)
	{
		((AMechanicsTestCharacter*)Obj)->bIsEnemy = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMechanicsTestCharacter_Statics::NewProp_bIsEnemy = { "bIsEnemy", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMechanicsTestCharacter), &Z_Construct_UClass_AMechanicsTestCharacter_Statics::NewProp_bIsEnemy_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMechanicsTestCharacter_Statics::NewProp_bIsEnemy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMechanicsTestCharacter_Statics::NewProp_bIsEnemy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMechanicsTestCharacter_Statics::NewProp_BaseLookUpRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */" },
		{ "ModuleRelativePath", "MechanicsTestCharacter.h" },
		{ "ToolTip", "Base look up/down rate, in deg/sec. Other scaling may affect final rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMechanicsTestCharacter_Statics::NewProp_BaseLookUpRate = { "BaseLookUpRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMechanicsTestCharacter, BaseLookUpRate), METADATA_PARAMS(Z_Construct_UClass_AMechanicsTestCharacter_Statics::NewProp_BaseLookUpRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMechanicsTestCharacter_Statics::NewProp_BaseLookUpRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMechanicsTestCharacter_Statics::NewProp_BaseTurnRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */" },
		{ "ModuleRelativePath", "MechanicsTestCharacter.h" },
		{ "ToolTip", "Base turn rate, in deg/sec. Other scaling may affect final turn rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMechanicsTestCharacter_Statics::NewProp_BaseTurnRate = { "BaseTurnRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMechanicsTestCharacter, BaseTurnRate), METADATA_PARAMS(Z_Construct_UClass_AMechanicsTestCharacter_Statics::NewProp_BaseTurnRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMechanicsTestCharacter_Statics::NewProp_BaseTurnRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMechanicsTestCharacter_Statics::NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Follow camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MechanicsTestCharacter.h" },
		{ "ToolTip", "Follow camera" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMechanicsTestCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMechanicsTestCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMechanicsTestCharacter_Statics::NewProp_FollowCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMechanicsTestCharacter_Statics::NewProp_FollowCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMechanicsTestCharacter_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Camera boom positioning the camera behind the character */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MechanicsTestCharacter.h" },
		{ "ToolTip", "Camera boom positioning the camera behind the character" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMechanicsTestCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMechanicsTestCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMechanicsTestCharacter_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMechanicsTestCharacter_Statics::NewProp_CameraBoom_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMechanicsTestCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMechanicsTestCharacter_Statics::NewProp_bIsEnemy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMechanicsTestCharacter_Statics::NewProp_BaseLookUpRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMechanicsTestCharacter_Statics::NewProp_BaseTurnRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMechanicsTestCharacter_Statics::NewProp_FollowCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMechanicsTestCharacter_Statics::NewProp_CameraBoom,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMechanicsTestCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMechanicsTestCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMechanicsTestCharacter_Statics::ClassParams = {
		&AMechanicsTestCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMechanicsTestCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMechanicsTestCharacter_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMechanicsTestCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMechanicsTestCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMechanicsTestCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMechanicsTestCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMechanicsTestCharacter, 801620167);
	template<> MECHANICSTEST_API UClass* StaticClass<AMechanicsTestCharacter>()
	{
		return AMechanicsTestCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMechanicsTestCharacter(Z_Construct_UClass_AMechanicsTestCharacter, &AMechanicsTestCharacter::StaticClass, TEXT("/Script/MechanicsTest"), TEXT("AMechanicsTestCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMechanicsTestCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
