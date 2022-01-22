// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef QUICKSTART_CameraDirector_generated_h
#error "CameraDirector.generated.h already included, missing '#pragma once' in CameraDirector.h"
#endif
#define QUICKSTART_CameraDirector_generated_h

#define QuickStart_Source_QuickStart_CameraDirector_h_12_SPARSE_DATA
#define QuickStart_Source_QuickStart_CameraDirector_h_12_RPC_WRAPPERS
#define QuickStart_Source_QuickStart_CameraDirector_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define QuickStart_Source_QuickStart_CameraDirector_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACameraDirector(); \
	friend struct Z_Construct_UClass_ACameraDirector_Statics; \
public: \
	DECLARE_CLASS(ACameraDirector, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/QuickStart"), NO_API) \
	DECLARE_SERIALIZER(ACameraDirector)


#define QuickStart_Source_QuickStart_CameraDirector_h_12_INCLASS \
private: \
	static void StaticRegisterNativesACameraDirector(); \
	friend struct Z_Construct_UClass_ACameraDirector_Statics; \
public: \
	DECLARE_CLASS(ACameraDirector, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/QuickStart"), NO_API) \
	DECLARE_SERIALIZER(ACameraDirector)


#define QuickStart_Source_QuickStart_CameraDirector_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACameraDirector(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACameraDirector) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACameraDirector); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACameraDirector); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACameraDirector(ACameraDirector&&); \
	NO_API ACameraDirector(const ACameraDirector&); \
public:


#define QuickStart_Source_QuickStart_CameraDirector_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACameraDirector(ACameraDirector&&); \
	NO_API ACameraDirector(const ACameraDirector&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACameraDirector); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACameraDirector); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACameraDirector)


#define QuickStart_Source_QuickStart_CameraDirector_h_12_PRIVATE_PROPERTY_OFFSET
#define QuickStart_Source_QuickStart_CameraDirector_h_9_PROLOG
#define QuickStart_Source_QuickStart_CameraDirector_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	QuickStart_Source_QuickStart_CameraDirector_h_12_PRIVATE_PROPERTY_OFFSET \
	QuickStart_Source_QuickStart_CameraDirector_h_12_SPARSE_DATA \
	QuickStart_Source_QuickStart_CameraDirector_h_12_RPC_WRAPPERS \
	QuickStart_Source_QuickStart_CameraDirector_h_12_INCLASS \
	QuickStart_Source_QuickStart_CameraDirector_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define QuickStart_Source_QuickStart_CameraDirector_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	QuickStart_Source_QuickStart_CameraDirector_h_12_PRIVATE_PROPERTY_OFFSET \
	QuickStart_Source_QuickStart_CameraDirector_h_12_SPARSE_DATA \
	QuickStart_Source_QuickStart_CameraDirector_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	QuickStart_Source_QuickStart_CameraDirector_h_12_INCLASS_NO_PURE_DECLS \
	QuickStart_Source_QuickStart_CameraDirector_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> QUICKSTART_API UClass* StaticClass<class ACameraDirector>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID QuickStart_Source_QuickStart_CameraDirector_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
