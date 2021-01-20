// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MECHANICSTEST_HealthSystemComponent_generated_h
#error "HealthSystemComponent.generated.h already included, missing '#pragma once' in HealthSystemComponent.h"
#endif
#define MECHANICSTEST_HealthSystemComponent_generated_h

#define MechanicsTest_Source_MechanicsTest_HealthSystemComponent_h_13_SPARSE_DATA
#define MechanicsTest_Source_MechanicsTest_HealthSystemComponent_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAlive) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetAlive(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHeal) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_nHeal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Heal(Z_Param_nHeal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTakeDamage) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_dmg); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TakeDamage(Z_Param_dmg); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFactorizedHealth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetFactorizedHealth(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHealth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetHealth(); \
		P_NATIVE_END; \
	}


#define MechanicsTest_Source_MechanicsTest_HealthSystemComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAlive) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetAlive(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHeal) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_nHeal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Heal(Z_Param_nHeal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTakeDamage) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_dmg); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TakeDamage(Z_Param_dmg); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFactorizedHealth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetFactorizedHealth(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHealth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetHealth(); \
		P_NATIVE_END; \
	}


#define MechanicsTest_Source_MechanicsTest_HealthSystemComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHealthSystemComponent(); \
	friend struct Z_Construct_UClass_UHealthSystemComponent_Statics; \
public: \
	DECLARE_CLASS(UHealthSystemComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MechanicsTest"), NO_API) \
	DECLARE_SERIALIZER(UHealthSystemComponent)


#define MechanicsTest_Source_MechanicsTest_HealthSystemComponent_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUHealthSystemComponent(); \
	friend struct Z_Construct_UClass_UHealthSystemComponent_Statics; \
public: \
	DECLARE_CLASS(UHealthSystemComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MechanicsTest"), NO_API) \
	DECLARE_SERIALIZER(UHealthSystemComponent)


#define MechanicsTest_Source_MechanicsTest_HealthSystemComponent_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHealthSystemComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHealthSystemComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHealthSystemComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHealthSystemComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHealthSystemComponent(UHealthSystemComponent&&); \
	NO_API UHealthSystemComponent(const UHealthSystemComponent&); \
public:


#define MechanicsTest_Source_MechanicsTest_HealthSystemComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHealthSystemComponent(UHealthSystemComponent&&); \
	NO_API UHealthSystemComponent(const UHealthSystemComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHealthSystemComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHealthSystemComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHealthSystemComponent)


#define MechanicsTest_Source_MechanicsTest_HealthSystemComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__alive() { return STRUCT_OFFSET(UHealthSystemComponent, alive); } \
	FORCEINLINE static uint32 __PPO__health() { return STRUCT_OFFSET(UHealthSystemComponent, health); } \
	FORCEINLINE static uint32 __PPO__maxHealth() { return STRUCT_OFFSET(UHealthSystemComponent, maxHealth); }


#define MechanicsTest_Source_MechanicsTest_HealthSystemComponent_h_10_PROLOG
#define MechanicsTest_Source_MechanicsTest_HealthSystemComponent_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MechanicsTest_Source_MechanicsTest_HealthSystemComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	MechanicsTest_Source_MechanicsTest_HealthSystemComponent_h_13_SPARSE_DATA \
	MechanicsTest_Source_MechanicsTest_HealthSystemComponent_h_13_RPC_WRAPPERS \
	MechanicsTest_Source_MechanicsTest_HealthSystemComponent_h_13_INCLASS \
	MechanicsTest_Source_MechanicsTest_HealthSystemComponent_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MechanicsTest_Source_MechanicsTest_HealthSystemComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MechanicsTest_Source_MechanicsTest_HealthSystemComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	MechanicsTest_Source_MechanicsTest_HealthSystemComponent_h_13_SPARSE_DATA \
	MechanicsTest_Source_MechanicsTest_HealthSystemComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	MechanicsTest_Source_MechanicsTest_HealthSystemComponent_h_13_INCLASS_NO_PURE_DECLS \
	MechanicsTest_Source_MechanicsTest_HealthSystemComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MECHANICSTEST_API UClass* StaticClass<class UHealthSystemComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MechanicsTest_Source_MechanicsTest_HealthSystemComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
