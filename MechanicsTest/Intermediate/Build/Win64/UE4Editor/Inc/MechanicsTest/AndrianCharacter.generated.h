// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MECHANICSTEST_AndrianCharacter_generated_h
#error "AndrianCharacter.generated.h already included, missing '#pragma once' in AndrianCharacter.h"
#endif
#define MECHANICSTEST_AndrianCharacter_generated_h

#define MechanicsTest_Source_MechanicsTest_AndrianCharacter_h_16_SPARSE_DATA
#define MechanicsTest_Source_MechanicsTest_AndrianCharacter_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLaunchOrb) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LaunchOrb(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAttachOrbToHand) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AttachOrbToHand(); \
		P_NATIVE_END; \
	}


#define MechanicsTest_Source_MechanicsTest_AndrianCharacter_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLaunchOrb) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LaunchOrb(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAttachOrbToHand) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AttachOrbToHand(); \
		P_NATIVE_END; \
	}


#define MechanicsTest_Source_MechanicsTest_AndrianCharacter_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAndrianCharacter(); \
	friend struct Z_Construct_UClass_AAndrianCharacter_Statics; \
public: \
	DECLARE_CLASS(AAndrianCharacter, AMechanicsTestCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MechanicsTest"), NO_API) \
	DECLARE_SERIALIZER(AAndrianCharacter)


#define MechanicsTest_Source_MechanicsTest_AndrianCharacter_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAAndrianCharacter(); \
	friend struct Z_Construct_UClass_AAndrianCharacter_Statics; \
public: \
	DECLARE_CLASS(AAndrianCharacter, AMechanicsTestCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MechanicsTest"), NO_API) \
	DECLARE_SERIALIZER(AAndrianCharacter)


#define MechanicsTest_Source_MechanicsTest_AndrianCharacter_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAndrianCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAndrianCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAndrianCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAndrianCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAndrianCharacter(AAndrianCharacter&&); \
	NO_API AAndrianCharacter(const AAndrianCharacter&); \
public:


#define MechanicsTest_Source_MechanicsTest_AndrianCharacter_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAndrianCharacter(AAndrianCharacter&&); \
	NO_API AAndrianCharacter(const AAndrianCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAndrianCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAndrianCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAndrianCharacter)


#define MechanicsTest_Source_MechanicsTest_AndrianCharacter_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__isCastingAbility1() { return STRUCT_OFFSET(AAndrianCharacter, isCastingAbility1); } \
	FORCEINLINE static uint32 __PPO__Abality1Coldown() { return STRUCT_OFFSET(AAndrianCharacter, Abality1Coldown); } \
	FORCEINLINE static uint32 __PPO__isCastingAbility2() { return STRUCT_OFFSET(AAndrianCharacter, isCastingAbility2); } \
	FORCEINLINE static uint32 __PPO__Abality2Coldown() { return STRUCT_OFFSET(AAndrianCharacter, Abality2Coldown); } \
	FORCEINLINE static uint32 __PPO__isCastingAbility3() { return STRUCT_OFFSET(AAndrianCharacter, isCastingAbility3); } \
	FORCEINLINE static uint32 __PPO__Abality3Coldown() { return STRUCT_OFFSET(AAndrianCharacter, Abality3Coldown); } \
	FORCEINLINE static uint32 __PPO__isCastingAbility5() { return STRUCT_OFFSET(AAndrianCharacter, isCastingAbility5); } \
	FORCEINLINE static uint32 __PPO__Abality5Coldown() { return STRUCT_OFFSET(AAndrianCharacter, Abality5Coldown); } \
	FORCEINLINE static uint32 __PPO__isCastingAbility6() { return STRUCT_OFFSET(AAndrianCharacter, isCastingAbility6); } \
	FORCEINLINE static uint32 __PPO__Abality6Coldown() { return STRUCT_OFFSET(AAndrianCharacter, Abality6Coldown); } \
	FORCEINLINE static uint32 __PPO__bulletType() { return STRUCT_OFFSET(AAndrianCharacter, bulletType); } \
	FORCEINLINE static uint32 __PPO__orbType() { return STRUCT_OFFSET(AAndrianCharacter, orbType); } \
	FORCEINLINE static uint32 __PPO__SpawnProjectile() { return STRUCT_OFFSET(AAndrianCharacter, SpawnProjectile); } \
	FORCEINLINE static uint32 __PPO__SpawnArea() { return STRUCT_OFFSET(AAndrianCharacter, SpawnArea); } \
	FORCEINLINE static uint32 __PPO__AnimMontageFireBall() { return STRUCT_OFFSET(AAndrianCharacter, AnimMontageFireBall); } \
	FORCEINLINE static uint32 __PPO__AnimMontageOrb() { return STRUCT_OFFSET(AAndrianCharacter, AnimMontageOrb); } \
	FORCEINLINE static uint32 __PPO__tickDamage() { return STRUCT_OFFSET(AAndrianCharacter, tickDamage); } \
	FORCEINLINE static uint32 __PPO__VFX_Buff() { return STRUCT_OFFSET(AAndrianCharacter, VFX_Buff); } \
	FORCEINLINE static uint32 __PPO__AreaBuff() { return STRUCT_OFFSET(AAndrianCharacter, AreaBuff); } \
	FORCEINLINE static uint32 __PPO__invisibleMaterial() { return STRUCT_OFFSET(AAndrianCharacter, invisibleMaterial); } \
	FORCEINLINE static uint32 __PPO__DefaultMaterial() { return STRUCT_OFFSET(AAndrianCharacter, DefaultMaterial); }


#define MechanicsTest_Source_MechanicsTest_AndrianCharacter_h_13_PROLOG
#define MechanicsTest_Source_MechanicsTest_AndrianCharacter_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MechanicsTest_Source_MechanicsTest_AndrianCharacter_h_16_PRIVATE_PROPERTY_OFFSET \
	MechanicsTest_Source_MechanicsTest_AndrianCharacter_h_16_SPARSE_DATA \
	MechanicsTest_Source_MechanicsTest_AndrianCharacter_h_16_RPC_WRAPPERS \
	MechanicsTest_Source_MechanicsTest_AndrianCharacter_h_16_INCLASS \
	MechanicsTest_Source_MechanicsTest_AndrianCharacter_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MechanicsTest_Source_MechanicsTest_AndrianCharacter_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MechanicsTest_Source_MechanicsTest_AndrianCharacter_h_16_PRIVATE_PROPERTY_OFFSET \
	MechanicsTest_Source_MechanicsTest_AndrianCharacter_h_16_SPARSE_DATA \
	MechanicsTest_Source_MechanicsTest_AndrianCharacter_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	MechanicsTest_Source_MechanicsTest_AndrianCharacter_h_16_INCLASS_NO_PURE_DECLS \
	MechanicsTest_Source_MechanicsTest_AndrianCharacter_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MECHANICSTEST_API UClass* StaticClass<class AAndrianCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MechanicsTest_Source_MechanicsTest_AndrianCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
