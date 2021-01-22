// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MECHANICSTEST_AreaClass_generated_h
#error "AreaClass.generated.h already included, missing '#pragma once' in AreaClass.h"
#endif
#define MECHANICSTEST_AreaClass_generated_h

#define MechanicsTest_Source_MechanicsTest_AreaClass_h_19_SPARSE_DATA
#define MechanicsTest_Source_MechanicsTest_AreaClass_h_19_RPC_WRAPPERS
#define MechanicsTest_Source_MechanicsTest_AreaClass_h_19_RPC_WRAPPERS_NO_PURE_DECLS
#define MechanicsTest_Source_MechanicsTest_AreaClass_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAreaClass(); \
	friend struct Z_Construct_UClass_AAreaClass_Statics; \
public: \
	DECLARE_CLASS(AAreaClass, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MechanicsTest"), NO_API) \
	DECLARE_SERIALIZER(AAreaClass)


#define MechanicsTest_Source_MechanicsTest_AreaClass_h_19_INCLASS \
private: \
	static void StaticRegisterNativesAAreaClass(); \
	friend struct Z_Construct_UClass_AAreaClass_Statics; \
public: \
	DECLARE_CLASS(AAreaClass, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MechanicsTest"), NO_API) \
	DECLARE_SERIALIZER(AAreaClass)


#define MechanicsTest_Source_MechanicsTest_AreaClass_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAreaClass(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAreaClass) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAreaClass); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAreaClass); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAreaClass(AAreaClass&&); \
	NO_API AAreaClass(const AAreaClass&); \
public:


#define MechanicsTest_Source_MechanicsTest_AreaClass_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAreaClass(AAreaClass&&); \
	NO_API AAreaClass(const AAreaClass&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAreaClass); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAreaClass); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAreaClass)


#define MechanicsTest_Source_MechanicsTest_AreaClass_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__capsule() { return STRUCT_OFFSET(AAreaClass, capsule); } \
	FORCEINLINE static uint32 __PPO__root() { return STRUCT_OFFSET(AAreaClass, root); } \
	FORCEINLINE static uint32 __PPO__VFX() { return STRUCT_OFFSET(AAreaClass, VFX); } \
	FORCEINLINE static uint32 __PPO__Mesh() { return STRUCT_OFFSET(AAreaClass, Mesh); } \
	FORCEINLINE static uint32 __PPO__isDoingDamage() { return STRUCT_OFFSET(AAreaClass, isDoingDamage); } \
	FORCEINLINE static uint32 __PPO__areaValue() { return STRUCT_OFFSET(AAreaClass, areaValue); } \
	FORCEINLINE static uint32 __PPO__areaLife() { return STRUCT_OFFSET(AAreaClass, areaLife); }


#define MechanicsTest_Source_MechanicsTest_AreaClass_h_16_PROLOG
#define MechanicsTest_Source_MechanicsTest_AreaClass_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MechanicsTest_Source_MechanicsTest_AreaClass_h_19_PRIVATE_PROPERTY_OFFSET \
	MechanicsTest_Source_MechanicsTest_AreaClass_h_19_SPARSE_DATA \
	MechanicsTest_Source_MechanicsTest_AreaClass_h_19_RPC_WRAPPERS \
	MechanicsTest_Source_MechanicsTest_AreaClass_h_19_INCLASS \
	MechanicsTest_Source_MechanicsTest_AreaClass_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MechanicsTest_Source_MechanicsTest_AreaClass_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MechanicsTest_Source_MechanicsTest_AreaClass_h_19_PRIVATE_PROPERTY_OFFSET \
	MechanicsTest_Source_MechanicsTest_AreaClass_h_19_SPARSE_DATA \
	MechanicsTest_Source_MechanicsTest_AreaClass_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	MechanicsTest_Source_MechanicsTest_AreaClass_h_19_INCLASS_NO_PURE_DECLS \
	MechanicsTest_Source_MechanicsTest_AreaClass_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MECHANICSTEST_API UClass* StaticClass<class AAreaClass>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MechanicsTest_Source_MechanicsTest_AreaClass_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
