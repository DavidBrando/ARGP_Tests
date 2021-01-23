// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MECHANICSTEST_ProjectileArea_generated_h
#error "ProjectileArea.generated.h already included, missing '#pragma once' in ProjectileArea.h"
#endif
#define MECHANICSTEST_ProjectileArea_generated_h

#define MechanicsTest_Source_MechanicsTest_ProjectileArea_h_14_SPARSE_DATA
#define MechanicsTest_Source_MechanicsTest_ProjectileArea_h_14_RPC_WRAPPERS
#define MechanicsTest_Source_MechanicsTest_ProjectileArea_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define MechanicsTest_Source_MechanicsTest_ProjectileArea_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProjectileArea(); \
	friend struct Z_Construct_UClass_AProjectileArea_Statics; \
public: \
	DECLARE_CLASS(AProjectileArea, AProjectileClass, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MechanicsTest"), NO_API) \
	DECLARE_SERIALIZER(AProjectileArea)


#define MechanicsTest_Source_MechanicsTest_ProjectileArea_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAProjectileArea(); \
	friend struct Z_Construct_UClass_AProjectileArea_Statics; \
public: \
	DECLARE_CLASS(AProjectileArea, AProjectileClass, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MechanicsTest"), NO_API) \
	DECLARE_SERIALIZER(AProjectileArea)


#define MechanicsTest_Source_MechanicsTest_ProjectileArea_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AProjectileArea(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AProjectileArea) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectileArea); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectileArea); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectileArea(AProjectileArea&&); \
	NO_API AProjectileArea(const AProjectileArea&); \
public:


#define MechanicsTest_Source_MechanicsTest_ProjectileArea_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectileArea(AProjectileArea&&); \
	NO_API AProjectileArea(const AProjectileArea&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectileArea); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectileArea); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AProjectileArea)


#define MechanicsTest_Source_MechanicsTest_ProjectileArea_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AreaSpawn() { return STRUCT_OFFSET(AProjectileArea, AreaSpawn); }


#define MechanicsTest_Source_MechanicsTest_ProjectileArea_h_11_PROLOG
#define MechanicsTest_Source_MechanicsTest_ProjectileArea_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MechanicsTest_Source_MechanicsTest_ProjectileArea_h_14_PRIVATE_PROPERTY_OFFSET \
	MechanicsTest_Source_MechanicsTest_ProjectileArea_h_14_SPARSE_DATA \
	MechanicsTest_Source_MechanicsTest_ProjectileArea_h_14_RPC_WRAPPERS \
	MechanicsTest_Source_MechanicsTest_ProjectileArea_h_14_INCLASS \
	MechanicsTest_Source_MechanicsTest_ProjectileArea_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MechanicsTest_Source_MechanicsTest_ProjectileArea_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MechanicsTest_Source_MechanicsTest_ProjectileArea_h_14_PRIVATE_PROPERTY_OFFSET \
	MechanicsTest_Source_MechanicsTest_ProjectileArea_h_14_SPARSE_DATA \
	MechanicsTest_Source_MechanicsTest_ProjectileArea_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	MechanicsTest_Source_MechanicsTest_ProjectileArea_h_14_INCLASS_NO_PURE_DECLS \
	MechanicsTest_Source_MechanicsTest_ProjectileArea_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MECHANICSTEST_API UClass* StaticClass<class AProjectileArea>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MechanicsTest_Source_MechanicsTest_ProjectileArea_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
