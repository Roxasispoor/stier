// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AIRSIM_CarPawn_generated_h
#error "CarPawn.generated.h already included, missing '#pragma once' in CarPawn.h"
#endif
#define AIRSIM_CarPawn_generated_h

#define Blocks_Plugins_AirSim_Source_Car_CarPawn_h_21_RPC_WRAPPERS
#define Blocks_Plugins_AirSim_Source_Car_CarPawn_h_21_RPC_WRAPPERS_NO_PURE_DECLS
#define Blocks_Plugins_AirSim_Source_Car_CarPawn_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACarPawn(); \
	friend AIRSIM_API class UClass* Z_Construct_UClass_ACarPawn(); \
public: \
	DECLARE_CLASS(ACarPawn, AWheeledVehicle, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AirSim"), NO_API) \
	DECLARE_SERIALIZER(ACarPawn) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Blocks_Plugins_AirSim_Source_Car_CarPawn_h_21_INCLASS \
private: \
	static void StaticRegisterNativesACarPawn(); \
	friend AIRSIM_API class UClass* Z_Construct_UClass_ACarPawn(); \
public: \
	DECLARE_CLASS(ACarPawn, AWheeledVehicle, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/AirSim"), NO_API) \
	DECLARE_SERIALIZER(ACarPawn) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Blocks_Plugins_AirSim_Source_Car_CarPawn_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACarPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACarPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACarPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACarPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACarPawn(ACarPawn&&); \
	NO_API ACarPawn(const ACarPawn&); \
public:


#define Blocks_Plugins_AirSim_Source_Car_CarPawn_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACarPawn(ACarPawn&&); \
	NO_API ACarPawn(const ACarPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACarPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACarPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACarPawn)


#define Blocks_Plugins_AirSim_Source_Car_CarPawn_h_21_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Camera() { return STRUCT_OFFSET(ACarPawn, Camera); } \
	FORCEINLINE static uint32 __PPO__InternalCameraBase1() { return STRUCT_OFFSET(ACarPawn, InternalCameraBase1); } \
	FORCEINLINE static uint32 __PPO__InternalCameraBase2() { return STRUCT_OFFSET(ACarPawn, InternalCameraBase2); } \
	FORCEINLINE static uint32 __PPO__InternalCameraBase3() { return STRUCT_OFFSET(ACarPawn, InternalCameraBase3); } \
	FORCEINLINE static uint32 __PPO__InternalCameraBase4() { return STRUCT_OFFSET(ACarPawn, InternalCameraBase4); } \
	FORCEINLINE static uint32 __PPO__InternalCameraBase5() { return STRUCT_OFFSET(ACarPawn, InternalCameraBase5); } \
	FORCEINLINE static uint32 __PPO__InternalCamera1() { return STRUCT_OFFSET(ACarPawn, InternalCamera1); } \
	FORCEINLINE static uint32 __PPO__InternalCamera2() { return STRUCT_OFFSET(ACarPawn, InternalCamera2); } \
	FORCEINLINE static uint32 __PPO__InternalCamera3() { return STRUCT_OFFSET(ACarPawn, InternalCamera3); } \
	FORCEINLINE static uint32 __PPO__InternalCamera4() { return STRUCT_OFFSET(ACarPawn, InternalCamera4); } \
	FORCEINLINE static uint32 __PPO__InternalCamera5() { return STRUCT_OFFSET(ACarPawn, InternalCamera5); } \
	FORCEINLINE static uint32 __PPO__InCarSpeed() { return STRUCT_OFFSET(ACarPawn, InCarSpeed); } \
	FORCEINLINE static uint32 __PPO__InCarGear() { return STRUCT_OFFSET(ACarPawn, InCarGear); } \
	FORCEINLINE static uint32 __PPO__EngineSoundComponent() { return STRUCT_OFFSET(ACarPawn, EngineSoundComponent); }


#define Blocks_Plugins_AirSim_Source_Car_CarPawn_h_18_PROLOG
#define Blocks_Plugins_AirSim_Source_Car_CarPawn_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Blocks_Plugins_AirSim_Source_Car_CarPawn_h_21_PRIVATE_PROPERTY_OFFSET \
	Blocks_Plugins_AirSim_Source_Car_CarPawn_h_21_RPC_WRAPPERS \
	Blocks_Plugins_AirSim_Source_Car_CarPawn_h_21_INCLASS \
	Blocks_Plugins_AirSim_Source_Car_CarPawn_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Blocks_Plugins_AirSim_Source_Car_CarPawn_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Blocks_Plugins_AirSim_Source_Car_CarPawn_h_21_PRIVATE_PROPERTY_OFFSET \
	Blocks_Plugins_AirSim_Source_Car_CarPawn_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	Blocks_Plugins_AirSim_Source_Car_CarPawn_h_21_INCLASS_NO_PURE_DECLS \
	Blocks_Plugins_AirSim_Source_Car_CarPawn_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Blocks_Plugins_AirSim_Source_Car_CarPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
