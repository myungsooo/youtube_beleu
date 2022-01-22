// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef QUICKSTART_Fire_generated_h
#error "Fire.generated.h already included, missing '#pragma once' in Fire.h"
#endif
#define QUICKSTART_Fire_generated_h

#define QuickStart_Source_QuickStart_2_Fire_h_13_SPARSE_DATA
#define QuickStart_Source_QuickStart_2_Fire_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOffFire);


#define QuickStart_Source_QuickStart_2_Fire_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOffFire);


#define QuickStart_Source_QuickStart_2_Fire_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFire(); \
	friend struct Z_Construct_UClass_AFire_Statics; \
public: \
	DECLARE_CLASS(AFire, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/QuickStart"), NO_API) \
	DECLARE_SERIALIZER(AFire)


#define QuickStart_Source_QuickStart_2_Fire_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAFire(); \
	friend struct Z_Construct_UClass_AFire_Statics; \
public: \
	DECLARE_CLASS(AFire, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/QuickStart"), NO_API) \
	DECLARE_SERIALIZER(AFire)


#define QuickStart_Source_QuickStart_2_Fire_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFire(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFire) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFire); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFire); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFire(AFire&&); \
	NO_API AFire(const AFire&); \
public:


#define QuickStart_Source_QuickStart_2_Fire_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFire(AFire&&); \
	NO_API AFire(const AFire&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFire); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFire); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFire)


#define QuickStart_Source_QuickStart_2_Fire_h_13_PRIVATE_PROPERTY_OFFSET
#define QuickStart_Source_QuickStart_2_Fire_h_10_PROLOG
#define QuickStart_Source_QuickStart_2_Fire_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	QuickStart_Source_QuickStart_2_Fire_h_13_PRIVATE_PROPERTY_OFFSET \
	QuickStart_Source_QuickStart_2_Fire_h_13_SPARSE_DATA \
	QuickStart_Source_QuickStart_2_Fire_h_13_RPC_WRAPPERS \
	QuickStart_Source_QuickStart_2_Fire_h_13_INCLASS \
	QuickStart_Source_QuickStart_2_Fire_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define QuickStart_Source_QuickStart_2_Fire_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	QuickStart_Source_QuickStart_2_Fire_h_13_PRIVATE_PROPERTY_OFFSET \
	QuickStart_Source_QuickStart_2_Fire_h_13_SPARSE_DATA \
	QuickStart_Source_QuickStart_2_Fire_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	QuickStart_Source_QuickStart_2_Fire_h_13_INCLASS_NO_PURE_DECLS \
	QuickStart_Source_QuickStart_2_Fire_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> QUICKSTART_API UClass* StaticClass<class AFire>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID QuickStart_Source_QuickStart_2_Fire_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
