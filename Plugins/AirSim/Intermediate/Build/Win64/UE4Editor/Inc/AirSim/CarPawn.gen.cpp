// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Car/CarPawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCarPawn() {}
// Cross Module References
	AIRSIM_API UClass* Z_Construct_UClass_ACarPawn_NoRegister();
	AIRSIM_API UClass* Z_Construct_UClass_ACarPawn();
	PHYSXVEHICLES_API UClass* Z_Construct_UClass_AWheeledVehicle();
	UPackage* Z_Construct_UPackage__Script_AirSim();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
	AIRSIM_API UClass* Z_Construct_UClass_APIPCamera_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	void ACarPawn::StaticRegisterNativesACarPawn()
	{
	}
	UClass* Z_Construct_UClass_ACarPawn_NoRegister()
	{
		return ACarPawn::StaticClass();
	}
	UClass* Z_Construct_UClass_ACarPawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AWheeledVehicle,
				(UObject* (*)())Z_Construct_UPackage__Script_AirSim,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "Car/CarPawn.h" },
				{ "ModuleRelativePath", "Car/CarPawn.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GearDisplayReverseColor_MetaData[] = {
				{ "Category", "Display" },
				{ "ModuleRelativePath", "Car/CarPawn.h" },
				{ "ToolTip", "The color of the incar gear text when in reverse" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_GearDisplayReverseColor = { UE4CodeGen_Private::EPropertyClass::Struct, "GearDisplayReverseColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000030015, 1, nullptr, STRUCT_OFFSET(ACarPawn, GearDisplayReverseColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(NewProp_GearDisplayReverseColor_MetaData, ARRAY_COUNT(NewProp_GearDisplayReverseColor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GearDisplayColor_MetaData[] = {
				{ "Category", "Display" },
				{ "ModuleRelativePath", "Car/CarPawn.h" },
				{ "ToolTip", "The color of the incar gear text in forward gears" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_GearDisplayColor = { UE4CodeGen_Private::EPropertyClass::Struct, "GearDisplayColor", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000030015, 1, nullptr, STRUCT_OFFSET(ACarPawn, GearDisplayColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(NewProp_GearDisplayColor_MetaData, ARRAY_COUNT(NewProp_GearDisplayColor_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GearDisplayString_MetaData[] = {
				{ "Category", "Display" },
				{ "ModuleRelativePath", "Car/CarPawn.h" },
				{ "ToolTip", "The current gear as a string (R,N, 1,2 etc)" },
			};
#endif
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_GearDisplayString = { UE4CodeGen_Private::EPropertyClass::Text, "GearDisplayString", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000030015, 1, nullptr, STRUCT_OFFSET(ACarPawn, GearDisplayString), METADATA_PARAMS(NewProp_GearDisplayString_MetaData, ARRAY_COUNT(NewProp_GearDisplayString_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpeedDisplayString_MetaData[] = {
				{ "Category", "Display" },
				{ "ModuleRelativePath", "Car/CarPawn.h" },
				{ "ToolTip", "The current speed as a string eg 10 km/h" },
			};
#endif
			static const UE4CodeGen_Private::FTextPropertyParams NewProp_SpeedDisplayString = { UE4CodeGen_Private::EPropertyClass::Text, "SpeedDisplayString", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000030015, 1, nullptr, STRUCT_OFFSET(ACarPawn, SpeedDisplayString), METADATA_PARAMS(NewProp_SpeedDisplayString_MetaData, ARRAY_COUNT(NewProp_SpeedDisplayString_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EngineSoundComponent_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "Display" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Car/CarPawn.h" },
				{ "ToolTip", "Audio component for the engine sound" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EngineSoundComponent = { UE4CodeGen_Private::EPropertyClass::Object, "EngineSoundComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000b001d, 1, nullptr, STRUCT_OFFSET(ACarPawn, EngineSoundComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(NewProp_EngineSoundComponent_MetaData, ARRAY_COUNT(NewProp_EngineSoundComponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InCarGear_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "Display" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Car/CarPawn.h" },
				{ "ToolTip", "Text component for the In-Car gear" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InCarGear = { UE4CodeGen_Private::EPropertyClass::Object, "InCarGear", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000b001d, 1, nullptr, STRUCT_OFFSET(ACarPawn, InCarGear), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(NewProp_InCarGear_MetaData, ARRAY_COUNT(NewProp_InCarGear_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InCarSpeed_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "Display" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Car/CarPawn.h" },
				{ "ToolTip", "Text component for the In-Car speed" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InCarSpeed = { UE4CodeGen_Private::EPropertyClass::Object, "InCarSpeed", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000b001d, 1, nullptr, STRUCT_OFFSET(ACarPawn, InCarSpeed), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(NewProp_InCarSpeed_MetaData, ARRAY_COUNT(NewProp_InCarSpeed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InternalCamera5_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "Camera" },
				{ "ModuleRelativePath", "Car/CarPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InternalCamera5 = { UE4CodeGen_Private::EPropertyClass::Object, "InternalCamera5", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000030015, 1, nullptr, STRUCT_OFFSET(ACarPawn, InternalCamera5), Z_Construct_UClass_APIPCamera_NoRegister, METADATA_PARAMS(NewProp_InternalCamera5_MetaData, ARRAY_COUNT(NewProp_InternalCamera5_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InternalCamera4_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "Camera" },
				{ "ModuleRelativePath", "Car/CarPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InternalCamera4 = { UE4CodeGen_Private::EPropertyClass::Object, "InternalCamera4", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000030015, 1, nullptr, STRUCT_OFFSET(ACarPawn, InternalCamera4), Z_Construct_UClass_APIPCamera_NoRegister, METADATA_PARAMS(NewProp_InternalCamera4_MetaData, ARRAY_COUNT(NewProp_InternalCamera4_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InternalCamera3_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "Camera" },
				{ "ModuleRelativePath", "Car/CarPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InternalCamera3 = { UE4CodeGen_Private::EPropertyClass::Object, "InternalCamera3", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000030015, 1, nullptr, STRUCT_OFFSET(ACarPawn, InternalCamera3), Z_Construct_UClass_APIPCamera_NoRegister, METADATA_PARAMS(NewProp_InternalCamera3_MetaData, ARRAY_COUNT(NewProp_InternalCamera3_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InternalCamera2_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "Camera" },
				{ "ModuleRelativePath", "Car/CarPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InternalCamera2 = { UE4CodeGen_Private::EPropertyClass::Object, "InternalCamera2", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000030015, 1, nullptr, STRUCT_OFFSET(ACarPawn, InternalCamera2), Z_Construct_UClass_APIPCamera_NoRegister, METADATA_PARAMS(NewProp_InternalCamera2_MetaData, ARRAY_COUNT(NewProp_InternalCamera2_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InternalCamera1_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "Camera" },
				{ "ModuleRelativePath", "Car/CarPawn.h" },
				{ "ToolTip", "Camera component for the In-Car view" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InternalCamera1 = { UE4CodeGen_Private::EPropertyClass::Object, "InternalCamera1", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000030015, 1, nullptr, STRUCT_OFFSET(ACarPawn, InternalCamera1), Z_Construct_UClass_APIPCamera_NoRegister, METADATA_PARAMS(NewProp_InternalCamera1_MetaData, ARRAY_COUNT(NewProp_InternalCamera1_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InternalCameraBase5_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "Camera" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Car/CarPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InternalCameraBase5 = { UE4CodeGen_Private::EPropertyClass::Object, "InternalCameraBase5", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000b001d, 1, nullptr, STRUCT_OFFSET(ACarPawn, InternalCameraBase5), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(NewProp_InternalCameraBase5_MetaData, ARRAY_COUNT(NewProp_InternalCameraBase5_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InternalCameraBase4_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "Camera" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Car/CarPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InternalCameraBase4 = { UE4CodeGen_Private::EPropertyClass::Object, "InternalCameraBase4", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000b001d, 1, nullptr, STRUCT_OFFSET(ACarPawn, InternalCameraBase4), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(NewProp_InternalCameraBase4_MetaData, ARRAY_COUNT(NewProp_InternalCameraBase4_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InternalCameraBase3_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "Camera" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Car/CarPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InternalCameraBase3 = { UE4CodeGen_Private::EPropertyClass::Object, "InternalCameraBase3", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000b001d, 1, nullptr, STRUCT_OFFSET(ACarPawn, InternalCameraBase3), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(NewProp_InternalCameraBase3_MetaData, ARRAY_COUNT(NewProp_InternalCameraBase3_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InternalCameraBase2_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "Camera" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Car/CarPawn.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InternalCameraBase2 = { UE4CodeGen_Private::EPropertyClass::Object, "InternalCameraBase2", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000b001d, 1, nullptr, STRUCT_OFFSET(ACarPawn, InternalCameraBase2), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(NewProp_InternalCameraBase2_MetaData, ARRAY_COUNT(NewProp_InternalCameraBase2_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InternalCameraBase1_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "Camera" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Car/CarPawn.h" },
				{ "ToolTip", "SCene component for the In-Car view origin" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InternalCameraBase1 = { UE4CodeGen_Private::EPropertyClass::Object, "InternalCameraBase1", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000b001d, 1, nullptr, STRUCT_OFFSET(ACarPawn, InternalCameraBase1), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(NewProp_InternalCameraBase1_MetaData, ARRAY_COUNT(NewProp_InternalCameraBase1_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "Camera" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Car/CarPawn.h" },
				{ "ToolTip", "Camera component that will be our viewpoint" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Camera = { UE4CodeGen_Private::EPropertyClass::Object, "Camera", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000b001d, 1, nullptr, STRUCT_OFFSET(ACarPawn, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(NewProp_Camera_MetaData, ARRAY_COUNT(NewProp_Camera_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GearDisplayReverseColor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GearDisplayColor,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_GearDisplayString,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SpeedDisplayString,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EngineSoundComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InCarGear,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InCarSpeed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InternalCamera5,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InternalCamera4,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InternalCamera3,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InternalCamera2,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InternalCamera1,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InternalCameraBase5,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InternalCameraBase4,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InternalCameraBase3,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InternalCameraBase2,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InternalCameraBase1,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Camera,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ACarPawn>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ACarPawn::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00800080u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				"Game",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACarPawn, 1077264802);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACarPawn(Z_Construct_UClass_ACarPawn, &ACarPawn::StaticClass, TEXT("/Script/AirSim"), TEXT("ACarPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACarPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
