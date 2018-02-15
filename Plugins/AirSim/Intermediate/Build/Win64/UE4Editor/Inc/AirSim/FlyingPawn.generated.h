// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIRSIM_FlyingPawn_generated_h
#error "FlyingPawn.generated.h already included, missing '#pragma once' in FlyingPawn.h"
#endif
#define AIRSIM_FlyingPawn_generated_h

#define Blocks_Plugins_AirSim_Source_Multirotor_FlyingPawn_h_13_RPC_WRAPPERS
#define Blocks_Plugins_AirSim_Source_Multirotor_FlyingPawn_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define Blocks_Plugins_AirSim_Source_Multirotor_FlyingPawn_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFlyingPawn(); \
	friend AIRSIM_API class UClass* Z_Construct_UClass_AFlyingPawn(); \
public: \
	DECLARE_CLASS(AFlyingPawn, APawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AirSim"), NO_API) \
	DECLARE_SERIALIZER(AFlyingPawn) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Blocks_Plugins_AirSim_Source_Multirotor_FlyingPawn_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAFlyingPawn(); \
	friend AIRSIM_API class UClass* Z_Construct_UClass_AFlyingPawn(); \
public: \
	DECLARE_CLASS(AFlyingPawn, APawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AirSim"), NO_API) \
	DECLARE_SERIALIZER(AFlyingPawn) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Blocks_Plugins_AirSim_Source_Multirotor_FlyingPawn_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFlyingPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFlyingPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFlyingPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFlyingPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFlyingPawn(AFlyingPawn&&); \
	NO_API AFlyingPawn(const AFlyingPawn&); \
public:


#define Blocks_Plugins_AirSim_Source_Multirotor_FlyingPawn_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFlyingPawn(AFlyingPawn&&); \
	NO_API AFlyingPawn(const AFlyingPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFlyingPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFlyingPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFlyingPawn)


#define Blocks_Plugins_AirSim_Source_Multirotor_FlyingPawn_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__fpv_camera_front_left_() { return STRUCT_OFFSET(AFlyingPawn, fpv_camera_front_left_); } \
	FORCEINLINE static uint32 __PPO__fpv_camera_front_right_() { return STRUCT_OFFSET(AFlyingPawn, fpv_camera_front_right_); } \
	FORCEINLINE static uint32 __PPO__fpv_camera_front_center_() { return STRUCT_OFFSET(AFlyingPawn, fpv_camera_front_center_); } \
	FORCEINLINE static uint32 __PPO__fpv_camera_back_center_() { return STRUCT_OFFSET(AFlyingPawn, fpv_camera_back_center_); } \
	FORCEINLINE static uint32 __PPO__fpv_camera_bottom_center_() { return STRUCT_OFFSET(AFlyingPawn, fpv_camera_bottom_center_); } \
	FORCEINLINE static uint32 __PPO__rotating_movements_() { return STRUCT_OFFSET(AFlyingPawn, rotating_movements_); }


#define Blocks_Plugins_AirSim_Source_Multirotor_FlyingPawn_h_10_PROLOG
#define Blocks_Plugins_AirSim_Source_Multirotor_FlyingPawn_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Blocks_Plugins_AirSim_Source_Multirotor_FlyingPawn_h_13_PRIVATE_PROPERTY_OFFSET \
	Blocks_Plugins_AirSim_Source_Multirotor_FlyingPawn_h_13_RPC_WRAPPERS \
	Blocks_Plugins_AirSim_Source_Multirotor_FlyingPawn_h_13_INCLASS \
	Blocks_Plugins_AirSim_Source_Multirotor_FlyingPawn_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Blocks_Plugins_AirSim_Source_Multirotor_FlyingPawn_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Blocks_Plugins_AirSim_Source_Multirotor_FlyingPawn_h_13_PRIVATE_PROPERTY_OFFSET \
	Blocks_Plugins_AirSim_Source_Multirotor_FlyingPawn_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Blocks_Plugins_AirSim_Source_Multirotor_FlyingPawn_h_13_INCLASS_NO_PURE_DECLS \
	Blocks_Plugins_AirSim_Source_Multirotor_FlyingPawn_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Blocks_Plugins_AirSim_Source_Multirotor_FlyingPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
