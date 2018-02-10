// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ECameraDirectorMode : uint8;
#ifdef AIRSIM_CameraDirector_generated_h
#error "CameraDirector.generated.h already included, missing '#pragma once' in CameraDirector.h"
#endif
#define AIRSIM_CameraDirector_generated_h

#define Blocks_Plugins_AirSim_Source_CameraDirector_h_27_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execsetMode) \
	{ \
		P_GET_ENUM(ECameraDirectorMode,Z_Param_mode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->setMode(ECameraDirectorMode(Z_Param_mode)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetMode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ECameraDirectorMode*)Z_Param__Result=this->getMode(); \
		P_NATIVE_END; \
	}


#define Blocks_Plugins_AirSim_Source_CameraDirector_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execsetMode) \
	{ \
		P_GET_ENUM(ECameraDirectorMode,Z_Param_mode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->setMode(ECameraDirectorMode(Z_Param_mode)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetMode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ECameraDirectorMode*)Z_Param__Result=this->getMode(); \
		P_NATIVE_END; \
	}


#define Blocks_Plugins_AirSim_Source_CameraDirector_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACameraDirector(); \
	friend AIRSIM_API class UClass* Z_Construct_UClass_ACameraDirector(); \
public: \
	DECLARE_CLASS(ACameraDirector, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AirSim"), NO_API) \
	DECLARE_SERIALIZER(ACameraDirector) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Blocks_Plugins_AirSim_Source_CameraDirector_h_27_INCLASS \
private: \
	static void StaticRegisterNativesACameraDirector(); \
	friend AIRSIM_API class UClass* Z_Construct_UClass_ACameraDirector(); \
public: \
	DECLARE_CLASS(ACameraDirector, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AirSim"), NO_API) \
	DECLARE_SERIALIZER(ACameraDirector) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Blocks_Plugins_AirSim_Source_CameraDirector_h_27_STANDARD_CONSTRUCTORS \
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


#define Blocks_Plugins_AirSim_Source_CameraDirector_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACameraDirector(ACameraDirector&&); \
	NO_API ACameraDirector(const ACameraDirector&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACameraDirector); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACameraDirector); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACameraDirector)


#define Blocks_Plugins_AirSim_Source_CameraDirector_h_27_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__manual_pose_controller_() { return STRUCT_OFFSET(ACameraDirector, manual_pose_controller_); }


#define Blocks_Plugins_AirSim_Source_CameraDirector_h_24_PROLOG
#define Blocks_Plugins_AirSim_Source_CameraDirector_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Blocks_Plugins_AirSim_Source_CameraDirector_h_27_PRIVATE_PROPERTY_OFFSET \
	Blocks_Plugins_AirSim_Source_CameraDirector_h_27_RPC_WRAPPERS \
	Blocks_Plugins_AirSim_Source_CameraDirector_h_27_INCLASS \
	Blocks_Plugins_AirSim_Source_CameraDirector_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Blocks_Plugins_AirSim_Source_CameraDirector_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Blocks_Plugins_AirSim_Source_CameraDirector_h_27_PRIVATE_PROPERTY_OFFSET \
	Blocks_Plugins_AirSim_Source_CameraDirector_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	Blocks_Plugins_AirSim_Source_CameraDirector_h_27_INCLASS_NO_PURE_DECLS \
	Blocks_Plugins_AirSim_Source_CameraDirector_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Blocks_Plugins_AirSim_Source_CameraDirector_h


#define FOREACH_ENUM_ECAMERADIRECTORMODE(op) \
	op(ECameraDirectorMode::CAMERA_DIRECTOR_MODE_FPV) \
	op(ECameraDirectorMode::CAMERA_DIRECTOR_MODE_GROUND_OBSERVER) \
	op(ECameraDirectorMode::CAMERA_DIRECTOR_MODE_FLY_WITH_ME) \
	op(ECameraDirectorMode::CAMERA_DIRECTOR_MODE_MANUAL) \
	op(ECameraDirectorMode::CAMERA_DIRECTOR_MODE_SPRINGARM_CHASE) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
