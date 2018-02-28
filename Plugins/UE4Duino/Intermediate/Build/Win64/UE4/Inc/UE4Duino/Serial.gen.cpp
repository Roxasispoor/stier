// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/Serial.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSerial() {}
// Cross Module References
	UE4DUINO_API UEnum* Z_Construct_UEnum_UE4Duino_ELineEnd();
	UPackage* Z_Construct_UPackage__Script_UE4Duino();
	UE4DUINO_API UFunction* Z_Construct_UFunction_USerial_BytesToFloat();
	UE4DUINO_API UClass* Z_Construct_UClass_USerial();
	UE4DUINO_API UFunction* Z_Construct_UFunction_USerial_BytesToInt();
	UE4DUINO_API UFunction* Z_Construct_UFunction_USerial_Close();
	UE4DUINO_API UFunction* Z_Construct_UFunction_USerial_FloatToBytes();
	UE4DUINO_API UFunction* Z_Construct_UFunction_USerial_Flush();
	UE4DUINO_API UFunction* Z_Construct_UFunction_USerial_GetBaud();
	UE4DUINO_API UFunction* Z_Construct_UFunction_USerial_GetPort();
	UE4DUINO_API UFunction* Z_Construct_UFunction_USerial_IntToBytes();
	UE4DUINO_API UFunction* Z_Construct_UFunction_USerial_IsOpened();
	UE4DUINO_API UFunction* Z_Construct_UFunction_USerial_LineEndToStr();
	UE4DUINO_API UFunction* Z_Construct_UFunction_USerial_Open();
	UE4DUINO_API UFunction* Z_Construct_UFunction_USerial_OpenComPort();
	UE4DUINO_API UClass* Z_Construct_UClass_USerial_NoRegister();
	UE4DUINO_API UFunction* Z_Construct_UFunction_USerial_Print();
	UE4DUINO_API UFunction* Z_Construct_UFunction_USerial_Println();
	UE4DUINO_API UFunction* Z_Construct_UFunction_USerial_ReadByte();
	UE4DUINO_API UFunction* Z_Construct_UFunction_USerial_ReadBytes();
	UE4DUINO_API UFunction* Z_Construct_UFunction_USerial_ReadFloat();
	UE4DUINO_API UFunction* Z_Construct_UFunction_USerial_ReadInt();
	UE4DUINO_API UFunction* Z_Construct_UFunction_USerial_Readln();
	UE4DUINO_API UFunction* Z_Construct_UFunction_USerial_ReadString();
	UE4DUINO_API UFunction* Z_Construct_UFunction_USerial_WriteByte();
	UE4DUINO_API UFunction* Z_Construct_UFunction_USerial_WriteBytes();
	UE4DUINO_API UFunction* Z_Construct_UFunction_USerial_WriteFloat();
	UE4DUINO_API UFunction* Z_Construct_UFunction_USerial_WriteInt();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
static UEnum* ELineEnd_StaticEnum()
{
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		Singleton = GetStaticEnum(Z_Construct_UEnum_UE4Duino_ELineEnd, Z_Construct_UPackage__Script_UE4Duino(), TEXT("ELineEnd"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELineEnd(ELineEnd_StaticEnum, TEXT("/Script/UE4Duino"), TEXT("ELineEnd"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_UE4Duino_ELineEnd()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_UE4Duino();
		extern uint32 Get_Z_Construct_UEnum_UE4Duino_ELineEnd_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELineEnd"), 0, Get_Z_Construct_UEnum_UE4Duino_ELineEnd_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ELineEnd"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("ELineEnd::rn"), 0);
			EnumNames.Emplace(TEXT("ELineEnd::n"), 1);
			EnumNames.Emplace(TEXT("ELineEnd::r"), 2);
			EnumNames.Emplace(TEXT("ELineEnd::nr"), 3);
			EnumNames.Emplace(TEXT("ELineEnd::ELineEnd_MAX"), 4);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
			ReturnEnum->CppType = TEXT("ELineEnd");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnEnum, TEXT("Category"), TEXT("UE4Duino"));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Private/Serial.h"));
			MetaData->SetValue(ReturnEnum, TEXT("n.DisplayName"), TEXT("\\n"));
			MetaData->SetValue(ReturnEnum, TEXT("nr.DisplayName"), TEXT("\\n\\r"));
			MetaData->SetValue(ReturnEnum, TEXT("r.DisplayName"), TEXT("\\r"));
			MetaData->SetValue(ReturnEnum, TEXT("rn.DisplayName"), TEXT("\\r\\n"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_UE4Duino_ELineEnd_CRC() { return 38051570U; }
	void USerial::StaticRegisterNativesUSerial()
	{
		UClass* Class = USerial::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "BytesToFloat", (Native)&USerial::execBytesToFloat },
			{ "BytesToInt", (Native)&USerial::execBytesToInt },
			{ "Close", (Native)&USerial::execClose },
			{ "FloatToBytes", (Native)&USerial::execFloatToBytes },
			{ "Flush", (Native)&USerial::execFlush },
			{ "GetBaud", (Native)&USerial::execGetBaud },
			{ "GetPort", (Native)&USerial::execGetPort },
			{ "IntToBytes", (Native)&USerial::execIntToBytes },
			{ "IsOpened", (Native)&USerial::execIsOpened },
			{ "LineEndToStr", (Native)&USerial::execLineEndToStr },
			{ "Open", (Native)&USerial::execOpen },
			{ "OpenComPort", (Native)&USerial::execOpenComPort },
			{ "Print", (Native)&USerial::execPrint },
			{ "Println", (Native)&USerial::execPrintln },
			{ "ReadByte", (Native)&USerial::execReadByte },
			{ "ReadBytes", (Native)&USerial::execReadBytes },
			{ "ReadFloat", (Native)&USerial::execReadFloat },
			{ "ReadInt", (Native)&USerial::execReadInt },
			{ "Readln", (Native)&USerial::execReadln },
			{ "ReadString", (Native)&USerial::execReadString },
			{ "WriteByte", (Native)&USerial::execWriteByte },
			{ "WriteBytes", (Native)&USerial::execWriteBytes },
			{ "WriteFloat", (Native)&USerial::execWriteFloat },
			{ "WriteInt", (Native)&USerial::execWriteInt },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_USerial_BytesToFloat()
	{
		struct Serial_eventBytesToFloat_Parms
		{
			TArray<uint8> Bytes;
			float ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_USerial();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("BytesToFloat"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14022401, 65535, sizeof(Serial_eventBytesToFloat_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ReturnValue, Serial_eventBytesToFloat_Parms), 0x0010000000000580);
			UProperty* NewProp_Bytes = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Bytes"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Bytes, Serial_eventBytesToFloat_Parms), 0x0010000000000080);
			UProperty* NewProp_Bytes_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Bytes, TEXT("Bytes"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("UE4Duino"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("Bytes to Float"));
			MetaData->SetValue(ReturnFunction, TEXT("Keywords"), TEXT("cast concatenate group bit bitwise"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Private/Serial.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Utility function to convert 4 bytes into a float. If the input array's length is not 4, returns 0.0.\n\n@param Bytes A byte array with 4 values representing the float in IEEE 754 standard format.\n@return The final float value or 0.0 for an invalid array."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USerial_BytesToInt()
	{
		struct Serial_eventBytesToInt_Parms
		{
			TArray<uint8> Bytes;
			int32 ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_USerial();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("BytesToInt"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14022401, 65535, sizeof(Serial_eventBytesToInt_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(ReturnValue, Serial_eventBytesToInt_Parms), 0x0010000000000580);
			UProperty* NewProp_Bytes = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Bytes"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Bytes, Serial_eventBytesToInt_Parms), 0x0010000000000080);
			UProperty* NewProp_Bytes_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Bytes, TEXT("Bytes"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("UE4Duino"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("Bytes to Int"));
			MetaData->SetValue(ReturnFunction, TEXT("Keywords"), TEXT("cast concatenate group bit bitwise"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Private/Serial.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Utility function to convert 4 bytes into an Integer. If the input array's length is not 4, returns 0.\n\n@param Bytes A byte array with 4 values representing the integer in little-endian format.\n@return The final integer value or 0 for an invalid array."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USerial_Close()
	{
		UObject* Outer = Z_Construct_UClass_USerial();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Close"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("UE4Duino"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("Close Port"));
			MetaData->SetValue(ReturnFunction, TEXT("Keywords"), TEXT("com end finish release"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Private/Serial.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Close and end the communication with the serial port. If not open, do nothing."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USerial_FloatToBytes()
	{
		struct Serial_eventFloatToBytes_Parms
		{
			float Float;
			TArray<uint8> ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_USerial();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("FloatToBytes"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14422401, 65535, sizeof(Serial_eventFloatToBytes_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(ReturnValue, Serial_eventFloatToBytes_Parms), 0x0010000000000580);
			UProperty* NewProp_ReturnValue_Inner = new(EC_InternalUseOnlyConstructor, NewProp_ReturnValue, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_Float = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Float"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Float, Serial_eventFloatToBytes_Parms), 0x0010000008000182);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("UE4Duino"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("Float to Bytes"));
			MetaData->SetValue(ReturnFunction, TEXT("Keywords"), TEXT("cast separate bit bitwise"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Private/Serial.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Utility function to get the 4 bytes that make a float.\n\n@param Float The float value to be converted.\n@return A byte array containing the 4 bytes that make the float, in IEEE 754 standard format."));
			MetaData->SetValue(NewProp_Float, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USerial_Flush()
	{
		UObject* Outer = Z_Construct_UClass_USerial();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Flush"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("UE4Duino"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("Flush Port"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Private/Serial.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Clean the serial port by reading everything left to be read."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USerial_GetBaud()
	{
		struct Serial_eventGetBaud_Parms
		{
			int32 ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_USerial();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetBaud"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14020401, 65535, sizeof(Serial_eventGetBaud_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(ReturnValue, Serial_eventGetBaud_Parms), 0x0010000000000580);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("UE4Duino"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("Get Baud Rate"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Private/Serial.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Read the selected BaudRate for this Serial instance.\n@return The baud rate."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USerial_GetPort()
	{
		struct Serial_eventGetPort_Parms
		{
			int32 ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_USerial();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetPort"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14020401, 65535, sizeof(Serial_eventGetPort_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(ReturnValue, Serial_eventGetPort_Parms), 0x0010000000000580);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("UE4Duino"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("Get Port Number"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Private/Serial.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Read the number of the serial port selected for this Serial instance.\n@return The number of the serial port."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USerial_IntToBytes()
	{
		struct Serial_eventIntToBytes_Parms
		{
			int32 Int;
			TArray<uint8> ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_USerial();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("IntToBytes"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14422401, 65535, sizeof(Serial_eventIntToBytes_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(ReturnValue, Serial_eventIntToBytes_Parms), 0x0010000000000580);
			UProperty* NewProp_ReturnValue_Inner = new(EC_InternalUseOnlyConstructor, NewProp_ReturnValue, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_Int = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Int"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(Int, Serial_eventIntToBytes_Parms), 0x0010000008000182);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("UE4Duino"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("Int to Bytes"));
			MetaData->SetValue(ReturnFunction, TEXT("Keywords"), TEXT("cast separate bit bitwise"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Private/Serial.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Utility function to get the 4 bytes that make an integer.\n\n@param Int The integer value to be converted.\n@return A byte array containing the 4 bytes that make the integer, starting from the least significant one (little endian)."));
			MetaData->SetValue(NewProp_Int, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USerial_IsOpened()
	{
		struct Serial_eventIsOpened_Parms
		{
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_USerial();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("IsOpened"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14020401, 65535, sizeof(Serial_eventIsOpened_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, Serial_eventIsOpened_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, Serial_eventIsOpened_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, Serial_eventIsOpened_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("UE4Duino"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("Is Port Open"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Private/Serial.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Check if the serial port is open.\n@return True if the serial port is open."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USerial_LineEndToStr()
	{
		struct Serial_eventLineEndToStr_Parms
		{
			ELineEnd LineEnd;
			FString ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_USerial();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("LineEndToStr"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(Serial_eventLineEndToStr_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(ReturnValue, Serial_eventLineEndToStr_Parms), 0x0010000000000580);
			UProperty* NewProp_LineEnd = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("LineEnd"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(LineEnd, Serial_eventLineEndToStr_Parms), 0x0010000000000080, Z_Construct_UEnum_UE4Duino_ELineEnd());
			UProperty* NewProp_LineEnd_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_LineEnd, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("UE4Duino"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("Line End to String"));
			MetaData->SetValue(ReturnFunction, TEXT("keywords"), TEXT("cast convert"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Private/Serial.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Converts a LineEnd enum value to String.\n@param LineEnd LineEnd enum value.\n@return The LineEnd value in string format."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USerial_Open()
	{
		struct Serial_eventOpen_Parms
		{
			int32 Port;
			int32 BaudRate;
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_USerial();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Open"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(Serial_eventOpen_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, Serial_eventOpen_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, Serial_eventOpen_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, Serial_eventOpen_Parms), sizeof(bool), true);
			UProperty* NewProp_BaudRate = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("BaudRate"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(BaudRate, Serial_eventOpen_Parms), 0x0010000000000080);
			UProperty* NewProp_Port = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Port"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(Port, Serial_eventOpen_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("UE4Duino"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_BaudRate"), TEXT("9600"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_Port"), TEXT("2"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("Open Port"));
			MetaData->SetValue(ReturnFunction, TEXT("Keywords"), TEXT("com start init"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Private/Serial.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Open a serial port. Don't forget to close the port before exiting the game.\nIf this Serial instance has already an opened port,\nreturn false and doesn't change the opened port number.\n\n@param Port The serial port to open.\n@param BaudRate BaudRate to open the serial port with.\n@return If the serial port was successfully opened."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USerial_OpenComPort()
	{
		struct Serial_eventOpenComPort_Parms
		{
			bool bOpened;
			int32 Port;
			int32 BaudRate;
			USerial* ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_USerial();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OpenComPort"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04422401, 65535, sizeof(Serial_eventOpenComPort_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ReturnValue, Serial_eventOpenComPort_Parms), 0x0010000000000580, Z_Construct_UClass_USerial_NoRegister());
			UProperty* NewProp_BaudRate = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("BaudRate"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(BaudRate, Serial_eventOpenComPort_Parms), 0x0010000000000080);
			UProperty* NewProp_Port = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Port"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(Port, Serial_eventOpenComPort_Parms), 0x0010000000000080);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bOpened, Serial_eventOpenComPort_Parms);
			UProperty* NewProp_bOpened = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bOpened"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bOpened, Serial_eventOpenComPort_Parms), 0x0010000000000180, CPP_BOOL_PROPERTY_BITMASK(bOpened, Serial_eventOpenComPort_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("UE4Duino"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_BaudRate"), TEXT("9600"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_Port"), TEXT("1"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("Open Serial Port"));
			MetaData->SetValue(ReturnFunction, TEXT("Keywords"), TEXT("com arduino serial start"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Private/Serial.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Open a serial port and return the created Serial instance.\nDon't forget to close the port before exiting the game.\n\n@param bOpened If the serial port was successfully opened.\n@param Port The serial port to open.\n@param BaudRate BaudRate to open the serial port with.\n@return A Serial instance to work with the opened port."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USerial_Print()
	{
		struct Serial_eventPrint_Parms
		{
			FString String;
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_USerial();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Print"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(Serial_eventPrint_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, Serial_eventPrint_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, Serial_eventPrint_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, Serial_eventPrint_Parms), sizeof(bool), true);
			UProperty* NewProp_String = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("String"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(String, Serial_eventPrint_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("UE4Duino"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("Print"));
			MetaData->SetValue(ReturnFunction, TEXT("keywords"), TEXT("send write string words text characters"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Private/Serial.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Writes a string without newline to the serial port.\n@param String The string to be sent to the serial port.\n@return True if the string was sent."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USerial_Println()
	{
		struct Serial_eventPrintln_Parms
		{
			FString String;
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_USerial();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Println"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(Serial_eventPrintln_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, Serial_eventPrintln_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, Serial_eventPrintln_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, Serial_eventPrintln_Parms), sizeof(bool), true);
			UProperty* NewProp_String = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("String"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(String, Serial_eventPrintln_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("UE4Duino"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("Print Line"));
			MetaData->SetValue(ReturnFunction, TEXT("keywords"), TEXT("send write string words text characters"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Private/Serial.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Writes a string with newline (\\n) appended at the end to the serial port.\n@param String The string to be sent to the serial port.\n@return True if the string was sent."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USerial_ReadByte()
	{
		struct Serial_eventReadByte_Parms
		{
			bool bSuccess;
			uint8 ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_USerial();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ReadByte"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04420401, 65535, sizeof(Serial_eventReadByte_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(ReturnValue, Serial_eventReadByte_Parms), 0x0010000000000580);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bSuccess, Serial_eventReadByte_Parms);
			UProperty* NewProp_bSuccess = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bSuccess"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bSuccess, Serial_eventReadByte_Parms), 0x0010000000000180, CPP_BOOL_PROPERTY_BITMASK(bSuccess, Serial_eventReadByte_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("UE4Duino"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("Read a Byte"));
			MetaData->SetValue(ReturnFunction, TEXT("keywords"), TEXT("get read receive"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Private/Serial.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Reads a byte from the serial port.\n@param bSuccess True if there were 4 bytes to read.\n@return The read value"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USerial_ReadBytes()
	{
		struct Serial_eventReadBytes_Parms
		{
			int32 Limit;
			TArray<uint8> ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_USerial();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ReadBytes"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(Serial_eventReadBytes_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(ReturnValue, Serial_eventReadBytes_Parms), 0x0010000000000580);
			UProperty* NewProp_ReturnValue_Inner = new(EC_InternalUseOnlyConstructor, NewProp_ReturnValue, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			UProperty* NewProp_Limit = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Limit"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(Limit, Serial_eventReadBytes_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("UE4Duino"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_Limit"), TEXT("256"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("Read Bytes"));
			MetaData->SetValue(ReturnFunction, TEXT("keywords"), TEXT("get read receive"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Private/Serial.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Reads up to Limit bytes from the serial port. If there are less than Limit,\nreads all of them and return True.\n@param bSuccess True if there was at least 1 byte to read.\n@return An array containing the read bytes"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USerial_ReadFloat()
	{
		struct Serial_eventReadFloat_Parms
		{
			bool bSuccess;
			float ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_USerial();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ReadFloat"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04420401, 65535, sizeof(Serial_eventReadFloat_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ReturnValue, Serial_eventReadFloat_Parms), 0x0010000000000580);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bSuccess, Serial_eventReadFloat_Parms);
			UProperty* NewProp_bSuccess = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bSuccess"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bSuccess, Serial_eventReadFloat_Parms), 0x0010000000000180, CPP_BOOL_PROPERTY_BITMASK(bSuccess, Serial_eventReadFloat_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("UE4Duino"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("Read a Float"));
			MetaData->SetValue(ReturnFunction, TEXT("keywords"), TEXT("get read receive"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Private/Serial.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Reads a float from the serial port (sent as 4 bytes).\n@param bSuccess True if there were 4 bytes to read.\n@return The read value"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USerial_ReadInt()
	{
		struct Serial_eventReadInt_Parms
		{
			bool bSuccess;
			int32 ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_USerial();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ReadInt"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04420401, 65535, sizeof(Serial_eventReadInt_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(ReturnValue, Serial_eventReadInt_Parms), 0x0010000000000580);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bSuccess, Serial_eventReadInt_Parms);
			UProperty* NewProp_bSuccess = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bSuccess"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bSuccess, Serial_eventReadInt_Parms), 0x0010000000000180, CPP_BOOL_PROPERTY_BITMASK(bSuccess, Serial_eventReadInt_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("UE4Duino"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("Read an Int"));
			MetaData->SetValue(ReturnFunction, TEXT("keywords"), TEXT("get read receive integer"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Private/Serial.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Reads an integer from the serial port (sent as 4 bytes).\n@param bSuccess True if there were 4 bytes to read.\n@return The read value"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USerial_Readln()
	{
		struct Serial_eventReadln_Parms
		{
			bool bSuccess;
			FString ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_USerial();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Readln"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04420401, 65535, sizeof(Serial_eventReadln_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(ReturnValue, Serial_eventReadln_Parms), 0x0010000000000580);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bSuccess, Serial_eventReadln_Parms);
			UProperty* NewProp_bSuccess = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bSuccess"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bSuccess, Serial_eventReadln_Parms), 0x0010000000000180, CPP_BOOL_PROPERTY_BITMASK(bSuccess, Serial_eventReadln_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("UE4Duino"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("Read Line"));
			MetaData->SetValue(ReturnFunction, TEXT("keywords"), TEXT("get read receive string words text characters"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Private/Serial.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Will read characters from Serial port until \\r\\n (Arduino println line end) is found.\n\n@param bSuccess If there was anything to read.\n@return The read string"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USerial_ReadString()
	{
		struct Serial_eventReadString_Parms
		{
			bool bSuccess;
			FString ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_USerial();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ReadString"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04420401, 65535, sizeof(Serial_eventReadString_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(ReturnValue, Serial_eventReadString_Parms), 0x0010000000000580);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bSuccess, Serial_eventReadString_Parms);
			UProperty* NewProp_bSuccess = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bSuccess"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bSuccess, Serial_eventReadString_Parms), 0x0010000000000180, CPP_BOOL_PROPERTY_BITMASK(bSuccess, Serial_eventReadString_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("UE4Duino"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("Read String"));
			MetaData->SetValue(ReturnFunction, TEXT("keywords"), TEXT("get read receive string words text characters"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Private/Serial.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Will read characters from Serial port until \\0 (null char) is found or there are no\ncharacters left to read.\n\n@param bSuccess If there was anything to read.\n@return The read string"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USerial_WriteByte()
	{
		struct Serial_eventWriteByte_Parms
		{
			uint8 Value;
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_USerial();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("WriteByte"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(Serial_eventWriteByte_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, Serial_eventWriteByte_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, Serial_eventWriteByte_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, Serial_eventWriteByte_Parms), sizeof(bool), true);
			UProperty* NewProp_Value = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Value"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(Value, Serial_eventWriteByte_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("UE4Duino"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("Write a Byte"));
			MetaData->SetValue(ReturnFunction, TEXT("keywords"), TEXT("send"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Private/Serial.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Writes a byte value to the serial port.\n@param Value The value to be sent to the serial port.\n@return True if the byte was sent."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USerial_WriteBytes()
	{
		struct Serial_eventWriteBytes_Parms
		{
			TArray<uint8> Buffer;
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_USerial();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("WriteBytes"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(Serial_eventWriteBytes_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, Serial_eventWriteBytes_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, Serial_eventWriteBytes_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, Serial_eventWriteBytes_Parms), sizeof(bool), true);
			UProperty* NewProp_Buffer = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Buffer"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(Buffer, Serial_eventWriteBytes_Parms), 0x0010000000000080);
			UProperty* NewProp_Buffer_Inner = new(EC_InternalUseOnlyConstructor, NewProp_Buffer, TEXT("Buffer"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("UE4Duino"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("Write Bytes"));
			MetaData->SetValue(ReturnFunction, TEXT("keywords"), TEXT("send"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Private/Serial.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Writes a byte array as a sequence of bytes to the serial port.\n@param Buffer The byte array to be sent to the serial port.\n@return True if the bytes were sent."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USerial_WriteFloat()
	{
		struct Serial_eventWriteFloat_Parms
		{
			float Value;
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_USerial();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("WriteFloat"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(Serial_eventWriteFloat_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, Serial_eventWriteFloat_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, Serial_eventWriteFloat_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, Serial_eventWriteFloat_Parms), sizeof(bool), true);
			UProperty* NewProp_Value = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Value"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Value, Serial_eventWriteFloat_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("UE4Duino"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("Write a Float"));
			MetaData->SetValue(ReturnFunction, TEXT("keywords"), TEXT("send"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Private/Serial.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Writes a float value to the serial port as 4 bytes.\n@param Value The value to be sent to the serial port.\n@return True if the bytes were sent."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_USerial_WriteInt()
	{
		struct Serial_eventWriteInt_Parms
		{
			int32 Value;
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_USerial();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("WriteInt"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(Serial_eventWriteInt_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, Serial_eventWriteInt_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, Serial_eventWriteInt_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, Serial_eventWriteInt_Parms), sizeof(bool), true);
			UProperty* NewProp_Value = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Value"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(Value, Serial_eventWriteInt_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("UE4Duino"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("Write an Int"));
			MetaData->SetValue(ReturnFunction, TEXT("keywords"), TEXT("integer send"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Private/Serial.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Writes an integer value to the serial port as 4 bytes.\n@param Value The value to be sent to the serial port.\n@return True if the bytes were sent."));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USerial_NoRegister()
	{
		return USerial::StaticClass();
	}
	UClass* Z_Construct_UClass_USerial()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UObject();
			Z_Construct_UPackage__Script_UE4Duino();
			OuterClass = USerial::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20000080u;

				OuterClass->LinkChild(Z_Construct_UFunction_USerial_BytesToFloat());
				OuterClass->LinkChild(Z_Construct_UFunction_USerial_BytesToInt());
				OuterClass->LinkChild(Z_Construct_UFunction_USerial_Close());
				OuterClass->LinkChild(Z_Construct_UFunction_USerial_FloatToBytes());
				OuterClass->LinkChild(Z_Construct_UFunction_USerial_Flush());
				OuterClass->LinkChild(Z_Construct_UFunction_USerial_GetBaud());
				OuterClass->LinkChild(Z_Construct_UFunction_USerial_GetPort());
				OuterClass->LinkChild(Z_Construct_UFunction_USerial_IntToBytes());
				OuterClass->LinkChild(Z_Construct_UFunction_USerial_IsOpened());
				OuterClass->LinkChild(Z_Construct_UFunction_USerial_LineEndToStr());
				OuterClass->LinkChild(Z_Construct_UFunction_USerial_Open());
				OuterClass->LinkChild(Z_Construct_UFunction_USerial_OpenComPort());
				OuterClass->LinkChild(Z_Construct_UFunction_USerial_Print());
				OuterClass->LinkChild(Z_Construct_UFunction_USerial_Println());
				OuterClass->LinkChild(Z_Construct_UFunction_USerial_ReadByte());
				OuterClass->LinkChild(Z_Construct_UFunction_USerial_ReadBytes());
				OuterClass->LinkChild(Z_Construct_UFunction_USerial_ReadFloat());
				OuterClass->LinkChild(Z_Construct_UFunction_USerial_ReadInt());
				OuterClass->LinkChild(Z_Construct_UFunction_USerial_Readln());
				OuterClass->LinkChild(Z_Construct_UFunction_USerial_ReadString());
				OuterClass->LinkChild(Z_Construct_UFunction_USerial_WriteByte());
				OuterClass->LinkChild(Z_Construct_UFunction_USerial_WriteBytes());
				OuterClass->LinkChild(Z_Construct_UFunction_USerial_WriteFloat());
				OuterClass->LinkChild(Z_Construct_UFunction_USerial_WriteInt());

				UProperty* NewProp_WriteLineEnd = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("WriteLineEnd"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(WriteLineEnd, USerial), 0x0010000000000004, Z_Construct_UEnum_UE4Duino_ELineEnd());
				UProperty* NewProp_WriteLineEnd_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_WriteLineEnd, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USerial_BytesToFloat(), "BytesToFloat"); // 2364652256
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USerial_BytesToInt(), "BytesToInt"); // 3317799230
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USerial_Close(), "Close"); // 2490858217
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USerial_FloatToBytes(), "FloatToBytes"); // 4237175022
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USerial_Flush(), "Flush"); // 3713682756
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USerial_GetBaud(), "GetBaud"); // 2977074836
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USerial_GetPort(), "GetPort"); // 654658125
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USerial_IntToBytes(), "IntToBytes"); // 1804991056
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USerial_IsOpened(), "IsOpened"); // 3862235558
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USerial_LineEndToStr(), "LineEndToStr"); // 3653838480
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USerial_Open(), "Open"); // 1230166260
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USerial_OpenComPort(), "OpenComPort"); // 132146337
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USerial_Print(), "Print"); // 1581006432
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USerial_Println(), "Println"); // 2011764214
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USerial_ReadByte(), "ReadByte"); // 2293201984
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USerial_ReadBytes(), "ReadBytes"); // 1507513963
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USerial_ReadFloat(), "ReadFloat"); // 4189686530
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USerial_ReadInt(), "ReadInt"); // 1918679648
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USerial_Readln(), "Readln"); // 3474220420
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USerial_ReadString(), "ReadString"); // 3337975668
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USerial_WriteByte(), "WriteByte"); // 3872852098
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USerial_WriteBytes(), "WriteBytes"); // 2879368508
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USerial_WriteFloat(), "WriteFloat"); // 436082562
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_USerial_WriteInt(), "WriteInt"); // 3069713506
				static TCppClassTypeInfo<TCppClassTypeTraits<USerial> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintType"), TEXT("true"));
				MetaData->SetValue(OuterClass, TEXT("Category"), TEXT("UE4Duino"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Serial.h"));
				MetaData->SetValue(OuterClass, TEXT("Keywords"), TEXT("com arduino serial"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Private/Serial.h"));
				MetaData->SetValue(NewProp_WriteLineEnd, TEXT("Category"), TEXT("UE4Duino | String"));
				MetaData->SetValue(NewProp_WriteLineEnd, TEXT("ModuleRelativePath"), TEXT("Private/Serial.h"));
				MetaData->SetValue(NewProp_WriteLineEnd, TEXT("ToolTip"), TEXT("Determines the line ending used when writing lines to serial port with PrintLine."));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(USerial, 2215956709);
	static FCompiledInDefer Z_CompiledInDefer_UClass_USerial(Z_Construct_UClass_USerial, &USerial::StaticClass, TEXT("/Script/UE4Duino"), TEXT("USerial"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USerial);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
