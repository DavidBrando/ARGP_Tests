// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MECHANICSTEST_MechanicsTestCharacter_generated_h
#error "MechanicsTestCharacter.generated.h already included, missing '#pragma once' in MechanicsTestCharacter.h"
#endif
#define MECHANICSTEST_MechanicsTestCharacter_generated_h

#define MechanicsTest_Source_MechanicsTest_MechanicsTestCharacter_h_14_SPARSE_DATA
#define MechanicsTest_Source_MechanicsTest_MechanicsTestCharacter_h_14_RPC_WRAPPERS
#define MechanicsTest_Source_MechanicsTest_MechanicsTestCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define MechanicsTest_Source_MechanicsTest_MechanicsTestCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMechanicsTestCharacter(); \
	friend struct Z_Construct_UClass_AMechanicsTestCharacter_Statics; \
public: \
	DECLARE_CLASS(AMechanicsTestCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MechanicsTest"), NO_API) \
	DECLARE_SERIALIZER(AMechanicsTestCharacter)


#define MechanicsTest_Source_MechanicsTest_MechanicsTestCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAMechanicsTestCharacter(); \
	friend struct Z_Construct_UClass_AMechanicsTestCharacter_Statics; \
public: \
	DECLARE_CLASS(AMechanicsTestCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MechanicsTest"), NO_API) \
	DECLARE_SERIALIZER(AMechanicsTestCharacter)


#define MechanicsTest_Source_MechanicsTest_MechanicsTestCharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMechanicsTestCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMechanicsTestCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMechanicsTestCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMechanicsTestCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMechanicsTestCharacter(AMechanicsTestCharacter&&); \
	NO_API AMechanicsTestCharacter(const AMechanicsTestCharacter&); \
public:


#define MechanicsTest_Source_MechanicsTest_MechanicsTestCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMechanicsTestCharacter(AMechanicsTestCharacter&&); \
	NO_API AMechanicsTestCharacter(const AMechanicsTestCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMechanicsTestCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMechanicsTestCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMechanicsTestCharacter)


#define MechanicsTest_Source_MechanicsTest_MechanicsTestCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AMechanicsTestCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(AMechanicsTestCharacter, FollowCamera); }


#define MechanicsTest_Source_MechanicsTest_MechanicsTestCharacter_h_11_PROLOG
#define MechanicsTest_Source_MechanicsTest_MechanicsTestCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MechanicsTest_Source_MechanicsTest_MechanicsTestCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	MechanicsTest_Source_MechanicsTest_MechanicsTestCharacter_h_14_SPARSE_DATA \
	MechanicsTest_Source_MechanicsTest_MechanicsTestCharacter_h_14_RPC_WRAPPERS \
	MechanicsTest_Source_MechanicsTest_MechanicsTestCharacter_h_14_INCLASS \
	MechanicsTest_Source_MechanicsTest_MechanicsTestCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MechanicsTest_Source_MechanicsTest_MechanicsTestCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MechanicsTest_Source_MechanicsTest_MechanicsTestCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	MechanicsTest_Source_MechanicsTest_MechanicsTestCharacter_h_14_SPARSE_DATA \
	MechanicsTest_Source_MechanicsTest_MechanicsTestCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	MechanicsTest_Source_MechanicsTest_MechanicsTestCharacter_h_14_INCLASS_NO_PURE_DECLS \
	MechanicsTest_Source_MechanicsTest_MechanicsTestCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MECHANICSTEST_API UClass* StaticClass<class AMechanicsTestCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MechanicsTest_Source_MechanicsTest_MechanicsTestCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
