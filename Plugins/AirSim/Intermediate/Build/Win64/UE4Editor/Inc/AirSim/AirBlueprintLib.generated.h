// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class LogDebugLevel : uint8;
#ifdef AIRSIM_AirBlueprintLib_generated_h
#error "AirBlueprintLib.generated.h already included, missing '#pragma once' in AirBlueprintLib.h"
#endif
#define AIRSIM_AirBlueprintLib_generated_h

#define Blocks_Plugins_AirSim_Source_AirBlueprintLib_h_33_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLogMessage) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_prefix); \
		P_GET_PROPERTY(UStrProperty,Z_Param_suffix); \
		P_GET_ENUM(LogDebugLevel,Z_Param_level); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_persist_sec); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAirBlueprintLib::LogMessage(Z_Param_prefix,Z_Param_suffix,LogDebugLevel(Z_Param_level),Z_Param_persist_sec); \
		P_NATIVE_END; \
	}


#define Blocks_Plugins_AirSim_Source_AirBlueprintLib_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLogMessage) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_prefix); \
		P_GET_PROPERTY(UStrProperty,Z_Param_suffix); \
		P_GET_ENUM(LogDebugLevel,Z_Param_level); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_persist_sec); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAirBlueprintLib::LogMessage(Z_Param_prefix,Z_Param_suffix,LogDebugLevel(Z_Param_level),Z_Param_persist_sec); \
		P_NATIVE_END; \
	}


#define Blocks_Plugins_AirSim_Source_AirBlueprintLib_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAirBlueprintLib(); \
	friend AIRSIM_API class UClass* Z_Construct_UClass_UAirBlueprintLib(); \
public: \
	DECLARE_CLASS(UAirBlueprintLib, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AirSim"), NO_API) \
	DECLARE_SERIALIZER(UAirBlueprintLib) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Blocks_Plugins_AirSim_Source_AirBlueprintLib_h_33_INCLASS \
private: \
	static void StaticRegisterNativesUAirBlueprintLib(); \
	friend AIRSIM_API class UClass* Z_Construct_UClass_UAirBlueprintLib(); \
public: \
	DECLARE_CLASS(UAirBlueprintLib, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AirSim"), NO_API) \
	DECLARE_SERIALIZER(UAirBlueprintLib) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Blocks_Plugins_AirSim_Source_AirBlueprintLib_h_33_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAirBlueprintLib(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAirBlueprintLib) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAirBlueprintLib); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAirBlueprintLib); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAirBlueprintLib(UAirBlueprintLib&&); \
	NO_API UAirBlueprintLib(const UAirBlueprintLib&); \
public:


#define Blocks_Plugins_AirSim_Source_AirBlueprintLib_h_33_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAirBlueprintLib(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAirBlueprintLib(UAirBlueprintLib&&); \
	NO_API UAirBlueprintLib(const UAirBlueprintLib&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAirBlueprintLib); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAirBlueprintLib); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAirBlueprintLib)


#define Blocks_Plugins_AirSim_Source_AirBlueprintLib_h_33_PRIVATE_PROPERTY_OFFSET
#define Blocks_Plugins_AirSim_Source_AirBlueprintLib_h_30_PROLOG
#define Blocks_Plugins_AirSim_Source_AirBlueprintLib_h_33_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Blocks_Plugins_AirSim_Source_AirBlueprintLib_h_33_PRIVATE_PROPERTY_OFFSET \
	Blocks_Plugins_AirSim_Source_AirBlueprintLib_h_33_RPC_WRAPPERS \
	Blocks_Plugins_AirSim_Source_AirBlueprintLib_h_33_INCLASS \
	Blocks_Plugins_AirSim_Source_AirBlueprintLib_h_33_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Blocks_Plugins_AirSim_Source_AirBlueprintLib_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Blocks_Plugins_AirSim_Source_AirBlueprintLib_h_33_PRIVATE_PROPERTY_OFFSET \
	Blocks_Plugins_AirSim_Source_AirBlueprintLib_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	Blocks_Plugins_AirSim_Source_AirBlueprintLib_h_33_INCLASS_NO_PURE_DECLS \
	Blocks_Plugins_AirSim_Source_AirBlueprintLib_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Blocks_Plugins_AirSim_Source_AirBlueprintLib_h


#define FOREACH_ENUM_LOGDEBUGLEVEL(op) \
	op(LogDebugLevel::Informational) \
	op(LogDebugLevel::Success) \
	op(LogDebugLevel::Failure) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
