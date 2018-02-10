// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIRSIM_SimModeBase_generated_h
#error "SimModeBase.generated.h already included, missing '#pragma once' in SimModeBase.h"
#endif
#define AIRSIM_SimModeBase_generated_h

#define Blocks_Plugins_AirSim_Source_SimMode_SimModeBase_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(exectoggleRecording) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->toggleRecording(); \
		P_NATIVE_END; \
	}


#define Blocks_Plugins_AirSim_Source_SimMode_SimModeBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(exectoggleRecording) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->toggleRecording(); \
		P_NATIVE_END; \
	}


#define Blocks_Plugins_AirSim_Source_SimMode_SimModeBase_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASimModeBase(); \
	friend AIRSIM_API class UClass* Z_Construct_UClass_ASimModeBase(); \
public: \
	DECLARE_CLASS(ASimModeBase, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AirSim"), NO_API) \
	DECLARE_SERIALIZER(ASimModeBase) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Blocks_Plugins_AirSim_Source_SimMode_SimModeBase_h_16_INCLASS \
private: \
	static void StaticRegisterNativesASimModeBase(); \
	friend AIRSIM_API class UClass* Z_Construct_UClass_ASimModeBase(); \
public: \
	DECLARE_CLASS(ASimModeBase, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AirSim"), NO_API) \
	DECLARE_SERIALIZER(ASimModeBase) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Blocks_Plugins_AirSim_Source_SimMode_SimModeBase_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASimModeBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASimModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASimModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASimModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASimModeBase(ASimModeBase&&); \
	NO_API ASimModeBase(const ASimModeBase&); \
public:


#define Blocks_Plugins_AirSim_Source_SimMode_SimModeBase_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASimModeBase(ASimModeBase&&); \
	NO_API ASimModeBase(const ASimModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASimModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASimModeBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASimModeBase)


#define Blocks_Plugins_AirSim_Source_SimMode_SimModeBase_h_16_PRIVATE_PROPERTY_OFFSET
#define Blocks_Plugins_AirSim_Source_SimMode_SimModeBase_h_13_PROLOG
#define Blocks_Plugins_AirSim_Source_SimMode_SimModeBase_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Blocks_Plugins_AirSim_Source_SimMode_SimModeBase_h_16_PRIVATE_PROPERTY_OFFSET \
	Blocks_Plugins_AirSim_Source_SimMode_SimModeBase_h_16_RPC_WRAPPERS \
	Blocks_Plugins_AirSim_Source_SimMode_SimModeBase_h_16_INCLASS \
	Blocks_Plugins_AirSim_Source_SimMode_SimModeBase_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Blocks_Plugins_AirSim_Source_SimMode_SimModeBase_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Blocks_Plugins_AirSim_Source_SimMode_SimModeBase_h_16_PRIVATE_PROPERTY_OFFSET \
	Blocks_Plugins_AirSim_Source_SimMode_SimModeBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Blocks_Plugins_AirSim_Source_SimMode_SimModeBase_h_16_INCLASS_NO_PURE_DECLS \
	Blocks_Plugins_AirSim_Source_SimMode_SimModeBase_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Blocks_Plugins_AirSim_Source_SimMode_SimModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
