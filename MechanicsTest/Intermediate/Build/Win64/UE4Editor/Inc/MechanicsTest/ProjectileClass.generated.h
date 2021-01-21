// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef MECHANICSTEST_ProjectileClass_generated_h
#error "ProjectileClass.generated.h already included, missing '#pragma once' in ProjectileClass.h"
#endif
#define MECHANICSTEST_ProjectileClass_generated_h

#define MechanicsTest_Source_MechanicsTest_ProjectileClass_h_20_SPARSE_DATA
#define MechanicsTest_Source_MechanicsTest_ProjectileClass_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define MechanicsTest_Source_MechanicsTest_ProjectileClass_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define MechanicsTest_Source_MechanicsTest_ProjectileClass_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProjectileClass(); \
	friend struct Z_Construct_UClass_AProjectileClass_Statics; \
public: \
	DECLARE_CLASS(AProjectileClass, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MechanicsTest"), NO_API) \
	DECLARE_SERIALIZER(AProjectileClass)


#define MechanicsTest_Source_MechanicsTest_ProjectileClass_h_20_INCLASS \
private: \
	static void StaticRegisterNativesAProjectileClass(); \
	friend struct Z_Construct_UClass_AProjectileClass_Statics; \
public: \
	DECLARE_CLASS(AProjectileClass, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MechanicsTest"), NO_API) \
	DECLARE_SERIALIZER(AProjectileClass)


#define MechanicsTest_Source_MechanicsTest_ProjectileClass_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AProjectileClass(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AProjectileClass) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectileClass); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectileClass); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectileClass(AProjectileClass&&); \
	NO_API AProjectileClass(const AProjectileClass&); \
public:


#define MechanicsTest_Source_MechanicsTest_ProjectileClass_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectileClass(AProjectileClass&&); \
	NO_API AProjectileClass(const AProjectileClass&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectileClass); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectileClass); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AProjectileClass)


#define MechanicsTest_Source_MechanicsTest_ProjectileClass_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__capsule() { return STRUCT_OFFSET(AProjectileClass, capsule); } \
	FORCEINLINE static uint32 __PPO__root() { return STRUCT_OFFSET(AProjectileClass, root); } \
	FORCEINLINE static uint32 __PPO__bullet() { return STRUCT_OFFSET(AProjectileClass, bullet); } \
	FORCEINLINE static uint32 __PPO__projectileMovement() { return STRUCT_OFFSET(AProjectileClass, projectileMovement); } \
	FORCEINLINE static uint32 __PPO__explosion() { return STRUCT_OFFSET(AProjectileClass, explosion); } \
	FORCEINLINE static uint32 __PPO__DefaultDamage() { return STRUCT_OFFSET(AProjectileClass, DefaultDamage); } \
	FORCEINLINE static uint32 __PPO__damage() { return STRUCT_OFFSET(AProjectileClass, damage); }


#define MechanicsTest_Source_MechanicsTest_ProjectileClass_h_17_PROLOG
#define MechanicsTest_Source_MechanicsTest_ProjectileClass_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MechanicsTest_Source_MechanicsTest_ProjectileClass_h_20_PRIVATE_PROPERTY_OFFSET \
	MechanicsTest_Source_MechanicsTest_ProjectileClass_h_20_SPARSE_DATA \
	MechanicsTest_Source_MechanicsTest_ProjectileClass_h_20_RPC_WRAPPERS \
	MechanicsTest_Source_MechanicsTest_ProjectileClass_h_20_INCLASS \
	MechanicsTest_Source_MechanicsTest_ProjectileClass_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MechanicsTest_Source_MechanicsTest_ProjectileClass_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MechanicsTest_Source_MechanicsTest_ProjectileClass_h_20_PRIVATE_PROPERTY_OFFSET \
	MechanicsTest_Source_MechanicsTest_ProjectileClass_h_20_SPARSE_DATA \
	MechanicsTest_Source_MechanicsTest_ProjectileClass_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	MechanicsTest_Source_MechanicsTest_ProjectileClass_h_20_INCLASS_NO_PURE_DECLS \
	MechanicsTest_Source_MechanicsTest_ProjectileClass_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MECHANICSTEST_API UClass* StaticClass<class AProjectileClass>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MechanicsTest_Source_MechanicsTest_ProjectileClass_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
