// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PSOnScreenControllerOverlay/Public/Application/BaseInputWidget.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseInputWidget() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
PSONSCREENCONTROLLEROVERLAY_API UClass* Z_Construct_UClass_UBaseInputWidget();
PSONSCREENCONTROLLEROVERLAY_API UClass* Z_Construct_UClass_UBaseInputWidget_NoRegister();
PSONSCREENCONTROLLEROVERLAY_API UEnum* Z_Construct_UEnum_PSOnScreenControllerOverlay_EDualSenseModel();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_PSOnScreenControllerOverlay();
// End Cross Module References

// Begin Enum EDualSenseModel
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDualSenseModel;
static UEnum* EDualSenseModel_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDualSenseModel.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDualSenseModel.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PSOnScreenControllerOverlay_EDualSenseModel, (UObject*)Z_Construct_UPackage__Script_PSOnScreenControllerOverlay(), TEXT("EDualSenseModel"));
	}
	return Z_Registration_Info_UEnum_EDualSenseModel.OuterSingleton;
}
template<> PSONSCREENCONTROLLEROVERLAY_API UEnum* StaticEnum<EDualSenseModel>()
{
	return EDualSenseModel_StaticEnum();
}
struct Z_Construct_UEnum_PSOnScreenControllerOverlay_EDualSenseModel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CosmicRed.DisplayName", "Cosmic Red" },
		{ "CosmicRed.Name", "EDualSenseModel::CosmicRed" },
		{ "Default.DisplayName", "Default" },
		{ "Default.Name", "EDualSenseModel::Default" },
		{ "GalacticPurple.DisplayName", "Galactic Purple" },
		{ "GalacticPurple.Name", "EDualSenseModel::GalacticPurple" },
		{ "MidnightBlack.DisplayName", "Midnight Black" },
		{ "MidnightBlack.Name", "EDualSenseModel::MidnightBlack" },
		{ "ModuleRelativePath", "Public/Application/BaseInputWidget.h" },
		{ "NovaPink.DisplayName", "Nova Pink" },
		{ "NovaPink.Name", "EDualSenseModel::NovaPink" },
		{ "StarlightBlue.DisplayName", "Starlight Blue" },
		{ "StarlightBlue.Name", "EDualSenseModel::StarlightBlue" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDualSenseModel::Default", (int64)EDualSenseModel::Default },
		{ "EDualSenseModel::CosmicRed", (int64)EDualSenseModel::CosmicRed },
		{ "EDualSenseModel::MidnightBlack", (int64)EDualSenseModel::MidnightBlack },
		{ "EDualSenseModel::StarlightBlue", (int64)EDualSenseModel::StarlightBlue },
		{ "EDualSenseModel::NovaPink", (int64)EDualSenseModel::NovaPink },
		{ "EDualSenseModel::GalacticPurple", (int64)EDualSenseModel::GalacticPurple },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PSOnScreenControllerOverlay_EDualSenseModel_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_PSOnScreenControllerOverlay,
	nullptr,
	"EDualSenseModel",
	"EDualSenseModel",
	Z_Construct_UEnum_PSOnScreenControllerOverlay_EDualSenseModel_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_PSOnScreenControllerOverlay_EDualSenseModel_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_PSOnScreenControllerOverlay_EDualSenseModel_Statics::Enum_MetaDataParams), Z_Construct_UEnum_PSOnScreenControllerOverlay_EDualSenseModel_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_PSOnScreenControllerOverlay_EDualSenseModel()
{
	if (!Z_Registration_Info_UEnum_EDualSenseModel.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDualSenseModel.InnerSingleton, Z_Construct_UEnum_PSOnScreenControllerOverlay_EDualSenseModel_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDualSenseModel.InnerSingleton;
}
// End Enum EDualSenseModel

// Begin Class UBaseInputWidget Function GetButtonStates
struct Z_Construct_UFunction_UBaseInputWidget_GetButtonStates_Statics
{
	struct BaseInputWidget_eventGetButtonStates_Parms
	{
		TMap<FName,bool> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game Events" },
		{ "ModuleRelativePath", "Public/Application/BaseInputWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseInputWidget_GetButtonStates_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBaseInputWidget_GetButtonStates_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UBaseInputWidget_GetButtonStates_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseInputWidget_eventGetButtonStates_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseInputWidget_GetButtonStates_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseInputWidget_GetButtonStates_Statics::NewProp_ReturnValue_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseInputWidget_GetButtonStates_Statics::NewProp_ReturnValue_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseInputWidget_GetButtonStates_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseInputWidget_GetButtonStates_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseInputWidget_GetButtonStates_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseInputWidget, nullptr, "GetButtonStates", nullptr, nullptr, Z_Construct_UFunction_UBaseInputWidget_GetButtonStates_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseInputWidget_GetButtonStates_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseInputWidget_GetButtonStates_Statics::BaseInputWidget_eventGetButtonStates_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseInputWidget_GetButtonStates_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseInputWidget_GetButtonStates_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBaseInputWidget_GetButtonStates_Statics::BaseInputWidget_eventGetButtonStates_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseInputWidget_GetButtonStates()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseInputWidget_GetButtonStates_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseInputWidget::execGetButtonStates)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TMap<FName,bool>*)Z_Param__Result=P_THIS->GetButtonStates();
	P_NATIVE_END;
}
// End Class UBaseInputWidget Function GetButtonStates

// Begin Class UBaseInputWidget Function GetDeviceSelected
struct Z_Construct_UFunction_UBaseInputWidget_GetDeviceSelected_Statics
{
	struct BaseInputWidget_eventGetDeviceSelected_Parms
	{
		UTexture2D* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UI Device Select" },
		{ "ModuleRelativePath", "Public/Application/BaseInputWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseInputWidget_GetDeviceSelected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseInputWidget_eventGetDeviceSelected_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseInputWidget_GetDeviceSelected_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseInputWidget_GetDeviceSelected_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseInputWidget_GetDeviceSelected_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseInputWidget_GetDeviceSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseInputWidget, nullptr, "GetDeviceSelected", nullptr, nullptr, Z_Construct_UFunction_UBaseInputWidget_GetDeviceSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseInputWidget_GetDeviceSelected_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseInputWidget_GetDeviceSelected_Statics::BaseInputWidget_eventGetDeviceSelected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseInputWidget_GetDeviceSelected_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseInputWidget_GetDeviceSelected_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBaseInputWidget_GetDeviceSelected_Statics::BaseInputWidget_eventGetDeviceSelected_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseInputWidget_GetDeviceSelected()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseInputWidget_GetDeviceSelected_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseInputWidget::execGetDeviceSelected)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTexture2D**)Z_Param__Result=P_THIS->GetDeviceSelected();
	P_NATIVE_END;
}
// End Class UBaseInputWidget Function GetDeviceSelected

// Begin Class UBaseInputWidget Function GetGamepadAnalogLeft2D
struct Z_Construct_UFunction_UBaseInputWidget_GetGamepadAnalogLeft2D_Statics
{
	struct BaseInputWidget_eventGetGamepadAnalogLeft2D_Parms
	{
		FVector2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Analog" },
		{ "ModuleRelativePath", "Public/Application/BaseInputWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseInputWidget_GetGamepadAnalogLeft2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseInputWidget_eventGetGamepadAnalogLeft2D_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseInputWidget_GetGamepadAnalogLeft2D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseInputWidget_GetGamepadAnalogLeft2D_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseInputWidget_GetGamepadAnalogLeft2D_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseInputWidget_GetGamepadAnalogLeft2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseInputWidget, nullptr, "GetGamepadAnalogLeft2D", nullptr, nullptr, Z_Construct_UFunction_UBaseInputWidget_GetGamepadAnalogLeft2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseInputWidget_GetGamepadAnalogLeft2D_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseInputWidget_GetGamepadAnalogLeft2D_Statics::BaseInputWidget_eventGetGamepadAnalogLeft2D_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseInputWidget_GetGamepadAnalogLeft2D_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseInputWidget_GetGamepadAnalogLeft2D_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBaseInputWidget_GetGamepadAnalogLeft2D_Statics::BaseInputWidget_eventGetGamepadAnalogLeft2D_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseInputWidget_GetGamepadAnalogLeft2D()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseInputWidget_GetGamepadAnalogLeft2D_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseInputWidget::execGetGamepadAnalogLeft2D)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2D*)Z_Param__Result=P_THIS->GetGamepadAnalogLeft2D();
	P_NATIVE_END;
}
// End Class UBaseInputWidget Function GetGamepadAnalogLeft2D

// Begin Class UBaseInputWidget Function GetGamepadAnalogRight2D
struct Z_Construct_UFunction_UBaseInputWidget_GetGamepadAnalogRight2D_Statics
{
	struct BaseInputWidget_eventGetGamepadAnalogRight2D_Parms
	{
		FVector2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Analog" },
		{ "ModuleRelativePath", "Public/Application/BaseInputWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseInputWidget_GetGamepadAnalogRight2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseInputWidget_eventGetGamepadAnalogRight2D_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseInputWidget_GetGamepadAnalogRight2D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseInputWidget_GetGamepadAnalogRight2D_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseInputWidget_GetGamepadAnalogRight2D_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseInputWidget_GetGamepadAnalogRight2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseInputWidget, nullptr, "GetGamepadAnalogRight2D", nullptr, nullptr, Z_Construct_UFunction_UBaseInputWidget_GetGamepadAnalogRight2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseInputWidget_GetGamepadAnalogRight2D_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseInputWidget_GetGamepadAnalogRight2D_Statics::BaseInputWidget_eventGetGamepadAnalogRight2D_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseInputWidget_GetGamepadAnalogRight2D_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseInputWidget_GetGamepadAnalogRight2D_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBaseInputWidget_GetGamepadAnalogRight2D_Statics::BaseInputWidget_eventGetGamepadAnalogRight2D_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseInputWidget_GetGamepadAnalogRight2D()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseInputWidget_GetGamepadAnalogRight2D_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseInputWidget::execGetGamepadAnalogRight2D)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2D*)Z_Param__Result=P_THIS->GetGamepadAnalogRight2D();
	P_NATIVE_END;
}
// End Class UBaseInputWidget Function GetGamepadAnalogRight2D

// Begin Class UBaseInputWidget Function GetGamepadDPadDown
struct Z_Construct_UFunction_UBaseInputWidget_GetGamepadDPadDown_Statics
{
	struct BaseInputWidget_eventGetGamepadDPadDown_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Buttons" },
		{ "ModuleRelativePath", "Public/Application/BaseInputWidget.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UBaseInputWidget_GetGamepadDPadDown_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BaseInputWidget_eventGetGamepadDPadDown_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseInputWidget_GetGamepadDPadDown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BaseInputWidget_eventGetGamepadDPadDown_Parms), &Z_Construct_UFunction_UBaseInputWidget_GetGamepadDPadDown_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseInputWidget_GetGamepadDPadDown_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseInputWidget_GetGamepadDPadDown_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseInputWidget_GetGamepadDPadDown_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseInputWidget_GetGamepadDPadDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseInputWidget, nullptr, "GetGamepadDPadDown", nullptr, nullptr, Z_Construct_UFunction_UBaseInputWidget_GetGamepadDPadDown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseInputWidget_GetGamepadDPadDown_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseInputWidget_GetGamepadDPadDown_Statics::BaseInputWidget_eventGetGamepadDPadDown_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseInputWidget_GetGamepadDPadDown_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseInputWidget_GetGamepadDPadDown_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBaseInputWidget_GetGamepadDPadDown_Statics::BaseInputWidget_eventGetGamepadDPadDown_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseInputWidget_GetGamepadDPadDown()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseInputWidget_GetGamepadDPadDown_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseInputWidget::execGetGamepadDPadDown)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetGamepadDPadDown();
	P_NATIVE_END;
}
// End Class UBaseInputWidget Function GetGamepadDPadDown

// Begin Class UBaseInputWidget Function GetGamepadDPadLeft
struct Z_Construct_UFunction_UBaseInputWidget_GetGamepadDPadLeft_Statics
{
	struct BaseInputWidget_eventGetGamepadDPadLeft_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Buttons" },
		{ "ModuleRelativePath", "Public/Application/BaseInputWidget.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UBaseInputWidget_GetGamepadDPadLeft_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BaseInputWidget_eventGetGamepadDPadLeft_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseInputWidget_GetGamepadDPadLeft_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BaseInputWidget_eventGetGamepadDPadLeft_Parms), &Z_Construct_UFunction_UBaseInputWidget_GetGamepadDPadLeft_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseInputWidget_GetGamepadDPadLeft_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseInputWidget_GetGamepadDPadLeft_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseInputWidget_GetGamepadDPadLeft_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseInputWidget_GetGamepadDPadLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseInputWidget, nullptr, "GetGamepadDPadLeft", nullptr, nullptr, Z_Construct_UFunction_UBaseInputWidget_GetGamepadDPadLeft_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseInputWidget_GetGamepadDPadLeft_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseInputWidget_GetGamepadDPadLeft_Statics::BaseInputWidget_eventGetGamepadDPadLeft_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseInputWidget_GetGamepadDPadLeft_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseInputWidget_GetGamepadDPadLeft_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBaseInputWidget_GetGamepadDPadLeft_Statics::BaseInputWidget_eventGetGamepadDPadLeft_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseInputWidget_GetGamepadDPadLeft()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseInputWidget_GetGamepadDPadLeft_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseInputWidget::execGetGamepadDPadLeft)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetGamepadDPadLeft();
	P_NATIVE_END;
}
// End Class UBaseInputWidget Function GetGamepadDPadLeft

// Begin Class UBaseInputWidget Function GetGamepadDPadRight
struct Z_Construct_UFunction_UBaseInputWidget_GetGamepadDPadRight_Statics
{
	struct BaseInputWidget_eventGetGamepadDPadRight_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Buttons" },
		{ "ModuleRelativePath", "Public/Application/BaseInputWidget.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UBaseInputWidget_GetGamepadDPadRight_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BaseInputWidget_eventGetGamepadDPadRight_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseInputWidget_GetGamepadDPadRight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BaseInputWidget_eventGetGamepadDPadRight_Parms), &Z_Construct_UFunction_UBaseInputWidget_GetGamepadDPadRight_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseInputWidget_GetGamepadDPadRight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseInputWidget_GetGamepadDPadRight_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseInputWidget_GetGamepadDPadRight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseInputWidget_GetGamepadDPadRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseInputWidget, nullptr, "GetGamepadDPadRight", nullptr, nullptr, Z_Construct_UFunction_UBaseInputWidget_GetGamepadDPadRight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseInputWidget_GetGamepadDPadRight_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseInputWidget_GetGamepadDPadRight_Statics::BaseInputWidget_eventGetGamepadDPadRight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseInputWidget_GetGamepadDPadRight_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseInputWidget_GetGamepadDPadRight_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBaseInputWidget_GetGamepadDPadRight_Statics::BaseInputWidget_eventGetGamepadDPadRight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseInputWidget_GetGamepadDPadRight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseInputWidget_GetGamepadDPadRight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseInputWidget::execGetGamepadDPadRight)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetGamepadDPadRight();
	P_NATIVE_END;
}
// End Class UBaseInputWidget Function GetGamepadDPadRight

// Begin Class UBaseInputWidget Function GetGamepadDPadUp
struct Z_Construct_UFunction_UBaseInputWidget_GetGamepadDPadUp_Statics
{
	struct BaseInputWidget_eventGetGamepadDPadUp_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Buttons" },
		{ "ModuleRelativePath", "Public/Application/BaseInputWidget.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UBaseInputWidget_GetGamepadDPadUp_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BaseInputWidget_eventGetGamepadDPadUp_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseInputWidget_GetGamepadDPadUp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BaseInputWidget_eventGetGamepadDPadUp_Parms), &Z_Construct_UFunction_UBaseInputWidget_GetGamepadDPadUp_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseInputWidget_GetGamepadDPadUp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseInputWidget_GetGamepadDPadUp_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseInputWidget_GetGamepadDPadUp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseInputWidget_GetGamepadDPadUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseInputWidget, nullptr, "GetGamepadDPadUp", nullptr, nullptr, Z_Construct_UFunction_UBaseInputWidget_GetGamepadDPadUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseInputWidget_GetGamepadDPadUp_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseInputWidget_GetGamepadDPadUp_Statics::BaseInputWidget_eventGetGamepadDPadUp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseInputWidget_GetGamepadDPadUp_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseInputWidget_GetGamepadDPadUp_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBaseInputWidget_GetGamepadDPadUp_Statics::BaseInputWidget_eventGetGamepadDPadUp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseInputWidget_GetGamepadDPadUp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseInputWidget_GetGamepadDPadUp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseInputWidget::execGetGamepadDPadUp)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetGamepadDPadUp();
	P_NATIVE_END;
}
// End Class UBaseInputWidget Function GetGamepadDPadUp

// Begin Class UBaseInputWidget Function GetGamepadFaceButtonBottom
struct Z_Construct_UFunction_UBaseInputWidget_GetGamepadFaceButtonBottom_Statics
{
	struct BaseInputWidget_eventGetGamepadFaceButtonBottom_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Buttoms" },
		{ "ModuleRelativePath", "Public/Application/BaseInputWidget.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UBaseInputWidget_GetGamepadFaceButtonBottom_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BaseInputWidget_eventGetGamepadFaceButtonBottom_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseInputWidget_GetGamepadFaceButtonBottom_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BaseInputWidget_eventGetGamepadFaceButtonBottom_Parms), &Z_Construct_UFunction_UBaseInputWidget_GetGamepadFaceButtonBottom_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseInputWidget_GetGamepadFaceButtonBottom_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseInputWidget_GetGamepadFaceButtonBottom_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseInputWidget_GetGamepadFaceButtonBottom_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseInputWidget_GetGamepadFaceButtonBottom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseInputWidget, nullptr, "GetGamepadFaceButtonBottom", nullptr, nullptr, Z_Construct_UFunction_UBaseInputWidget_GetGamepadFaceButtonBottom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseInputWidget_GetGamepadFaceButtonBottom_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseInputWidget_GetGamepadFaceButtonBottom_Statics::BaseInputWidget_eventGetGamepadFaceButtonBottom_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseInputWidget_GetGamepadFaceButtonBottom_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseInputWidget_GetGamepadFaceButtonBottom_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBaseInputWidget_GetGamepadFaceButtonBottom_Statics::BaseInputWidget_eventGetGamepadFaceButtonBottom_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseInputWidget_GetGamepadFaceButtonBottom()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseInputWidget_GetGamepadFaceButtonBottom_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseInputWidget::execGetGamepadFaceButtonBottom)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetGamepadFaceButtonBottom();
	P_NATIVE_END;
}
// End Class UBaseInputWidget Function GetGamepadFaceButtonBottom

// Begin Class UBaseInputWidget Function GetGamepadFaceButtonLeft
struct Z_Construct_UFunction_UBaseInputWidget_GetGamepadFaceButtonLeft_Statics
{
	struct BaseInputWidget_eventGetGamepadFaceButtonLeft_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Buttoms" },
		{ "ModuleRelativePath", "Public/Application/BaseInputWidget.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UBaseInputWidget_GetGamepadFaceButtonLeft_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BaseInputWidget_eventGetGamepadFaceButtonLeft_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseInputWidget_GetGamepadFaceButtonLeft_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BaseInputWidget_eventGetGamepadFaceButtonLeft_Parms), &Z_Construct_UFunction_UBaseInputWidget_GetGamepadFaceButtonLeft_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseInputWidget_GetGamepadFaceButtonLeft_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseInputWidget_GetGamepadFaceButtonLeft_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseInputWidget_GetGamepadFaceButtonLeft_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseInputWidget_GetGamepadFaceButtonLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseInputWidget, nullptr, "GetGamepadFaceButtonLeft", nullptr, nullptr, Z_Construct_UFunction_UBaseInputWidget_GetGamepadFaceButtonLeft_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseInputWidget_GetGamepadFaceButtonLeft_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseInputWidget_GetGamepadFaceButtonLeft_Statics::BaseInputWidget_eventGetGamepadFaceButtonLeft_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseInputWidget_GetGamepadFaceButtonLeft_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseInputWidget_GetGamepadFaceButtonLeft_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBaseInputWidget_GetGamepadFaceButtonLeft_Statics::BaseInputWidget_eventGetGamepadFaceButtonLeft_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseInputWidget_GetGamepadFaceButtonLeft()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseInputWidget_GetGamepadFaceButtonLeft_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseInputWidget::execGetGamepadFaceButtonLeft)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetGamepadFaceButtonLeft();
	P_NATIVE_END;
}
// End Class UBaseInputWidget Function GetGamepadFaceButtonLeft

// Begin Class UBaseInputWidget Function GetGamepadFaceButtonRight
struct Z_Construct_UFunction_UBaseInputWidget_GetGamepadFaceButtonRight_Statics
{
	struct BaseInputWidget_eventGetGamepadFaceButtonRight_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Buttoms" },
		{ "ModuleRelativePath", "Public/Application/BaseInputWidget.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UBaseInputWidget_GetGamepadFaceButtonRight_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BaseInputWidget_eventGetGamepadFaceButtonRight_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseInputWidget_GetGamepadFaceButtonRight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BaseInputWidget_eventGetGamepadFaceButtonRight_Parms), &Z_Construct_UFunction_UBaseInputWidget_GetGamepadFaceButtonRight_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseInputWidget_GetGamepadFaceButtonRight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseInputWidget_GetGamepadFaceButtonRight_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseInputWidget_GetGamepadFaceButtonRight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseInputWidget_GetGamepadFaceButtonRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseInputWidget, nullptr, "GetGamepadFaceButtonRight", nullptr, nullptr, Z_Construct_UFunction_UBaseInputWidget_GetGamepadFaceButtonRight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseInputWidget_GetGamepadFaceButtonRight_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseInputWidget_GetGamepadFaceButtonRight_Statics::BaseInputWidget_eventGetGamepadFaceButtonRight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseInputWidget_GetGamepadFaceButtonRight_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseInputWidget_GetGamepadFaceButtonRight_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBaseInputWidget_GetGamepadFaceButtonRight_Statics::BaseInputWidget_eventGetGamepadFaceButtonRight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseInputWidget_GetGamepadFaceButtonRight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseInputWidget_GetGamepadFaceButtonRight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseInputWidget::execGetGamepadFaceButtonRight)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetGamepadFaceButtonRight();
	P_NATIVE_END;
}
// End Class UBaseInputWidget Function GetGamepadFaceButtonRight

// Begin Class UBaseInputWidget Function GetGamepadFaceButtonTop
struct Z_Construct_UFunction_UBaseInputWidget_GetGamepadFaceButtonTop_Statics
{
	struct BaseInputWidget_eventGetGamepadFaceButtonTop_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Buttoms" },
		{ "ModuleRelativePath", "Public/Application/BaseInputWidget.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UBaseInputWidget_GetGamepadFaceButtonTop_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BaseInputWidget_eventGetGamepadFaceButtonTop_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseInputWidget_GetGamepadFaceButtonTop_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BaseInputWidget_eventGetGamepadFaceButtonTop_Parms), &Z_Construct_UFunction_UBaseInputWidget_GetGamepadFaceButtonTop_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseInputWidget_GetGamepadFaceButtonTop_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseInputWidget_GetGamepadFaceButtonTop_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseInputWidget_GetGamepadFaceButtonTop_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseInputWidget_GetGamepadFaceButtonTop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseInputWidget, nullptr, "GetGamepadFaceButtonTop", nullptr, nullptr, Z_Construct_UFunction_UBaseInputWidget_GetGamepadFaceButtonTop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseInputWidget_GetGamepadFaceButtonTop_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseInputWidget_GetGamepadFaceButtonTop_Statics::BaseInputWidget_eventGetGamepadFaceButtonTop_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseInputWidget_GetGamepadFaceButtonTop_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseInputWidget_GetGamepadFaceButtonTop_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBaseInputWidget_GetGamepadFaceButtonTop_Statics::BaseInputWidget_eventGetGamepadFaceButtonTop_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseInputWidget_GetGamepadFaceButtonTop()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseInputWidget_GetGamepadFaceButtonTop_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseInputWidget::execGetGamepadFaceButtonTop)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetGamepadFaceButtonTop();
	P_NATIVE_END;
}
// End Class UBaseInputWidget Function GetGamepadFaceButtonTop

// Begin Class UBaseInputWidget Function GetGamepadLeftShoulder
struct Z_Construct_UFunction_UBaseInputWidget_GetGamepadLeftShoulder_Statics
{
	struct BaseInputWidget_eventGetGamepadLeftShoulder_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Buttoms" },
		{ "ModuleRelativePath", "Public/Application/BaseInputWidget.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UBaseInputWidget_GetGamepadLeftShoulder_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BaseInputWidget_eventGetGamepadLeftShoulder_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseInputWidget_GetGamepadLeftShoulder_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BaseInputWidget_eventGetGamepadLeftShoulder_Parms), &Z_Construct_UFunction_UBaseInputWidget_GetGamepadLeftShoulder_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseInputWidget_GetGamepadLeftShoulder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseInputWidget_GetGamepadLeftShoulder_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseInputWidget_GetGamepadLeftShoulder_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseInputWidget_GetGamepadLeftShoulder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseInputWidget, nullptr, "GetGamepadLeftShoulder", nullptr, nullptr, Z_Construct_UFunction_UBaseInputWidget_GetGamepadLeftShoulder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseInputWidget_GetGamepadLeftShoulder_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseInputWidget_GetGamepadLeftShoulder_Statics::BaseInputWidget_eventGetGamepadLeftShoulder_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseInputWidget_GetGamepadLeftShoulder_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseInputWidget_GetGamepadLeftShoulder_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBaseInputWidget_GetGamepadLeftShoulder_Statics::BaseInputWidget_eventGetGamepadLeftShoulder_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseInputWidget_GetGamepadLeftShoulder()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseInputWidget_GetGamepadLeftShoulder_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseInputWidget::execGetGamepadLeftShoulder)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetGamepadLeftShoulder();
	P_NATIVE_END;
}
// End Class UBaseInputWidget Function GetGamepadLeftShoulder

// Begin Class UBaseInputWidget Function GetGamepadLeftTrigger
struct Z_Construct_UFunction_UBaseInputWidget_GetGamepadLeftTrigger_Statics
{
	struct BaseInputWidget_eventGetGamepadLeftTrigger_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Triggers" },
		{ "ModuleRelativePath", "Public/Application/BaseInputWidget.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UBaseInputWidget_GetGamepadLeftTrigger_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BaseInputWidget_eventGetGamepadLeftTrigger_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseInputWidget_GetGamepadLeftTrigger_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BaseInputWidget_eventGetGamepadLeftTrigger_Parms), &Z_Construct_UFunction_UBaseInputWidget_GetGamepadLeftTrigger_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseInputWidget_GetGamepadLeftTrigger_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseInputWidget_GetGamepadLeftTrigger_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseInputWidget_GetGamepadLeftTrigger_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseInputWidget_GetGamepadLeftTrigger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseInputWidget, nullptr, "GetGamepadLeftTrigger", nullptr, nullptr, Z_Construct_UFunction_UBaseInputWidget_GetGamepadLeftTrigger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseInputWidget_GetGamepadLeftTrigger_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseInputWidget_GetGamepadLeftTrigger_Statics::BaseInputWidget_eventGetGamepadLeftTrigger_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseInputWidget_GetGamepadLeftTrigger_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseInputWidget_GetGamepadLeftTrigger_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBaseInputWidget_GetGamepadLeftTrigger_Statics::BaseInputWidget_eventGetGamepadLeftTrigger_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseInputWidget_GetGamepadLeftTrigger()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseInputWidget_GetGamepadLeftTrigger_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseInputWidget::execGetGamepadLeftTrigger)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetGamepadLeftTrigger();
	P_NATIVE_END;
}
// End Class UBaseInputWidget Function GetGamepadLeftTrigger

// Begin Class UBaseInputWidget Function GetGamepadPS_Button
struct Z_Construct_UFunction_UBaseInputWidget_GetGamepadPS_Button_Statics
{
	struct BaseInputWidget_eventGetGamepadPS_Button_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Buttoms" },
		{ "ModuleRelativePath", "Public/Application/BaseInputWidget.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UBaseInputWidget_GetGamepadPS_Button_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BaseInputWidget_eventGetGamepadPS_Button_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseInputWidget_GetGamepadPS_Button_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BaseInputWidget_eventGetGamepadPS_Button_Parms), &Z_Construct_UFunction_UBaseInputWidget_GetGamepadPS_Button_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseInputWidget_GetGamepadPS_Button_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseInputWidget_GetGamepadPS_Button_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseInputWidget_GetGamepadPS_Button_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseInputWidget_GetGamepadPS_Button_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseInputWidget, nullptr, "GetGamepadPS_Button", nullptr, nullptr, Z_Construct_UFunction_UBaseInputWidget_GetGamepadPS_Button_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseInputWidget_GetGamepadPS_Button_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseInputWidget_GetGamepadPS_Button_Statics::BaseInputWidget_eventGetGamepadPS_Button_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseInputWidget_GetGamepadPS_Button_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseInputWidget_GetGamepadPS_Button_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBaseInputWidget_GetGamepadPS_Button_Statics::BaseInputWidget_eventGetGamepadPS_Button_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseInputWidget_GetGamepadPS_Button()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseInputWidget_GetGamepadPS_Button_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseInputWidget::execGetGamepadPS_Button)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetGamepadPS_Button();
	P_NATIVE_END;
}
// End Class UBaseInputWidget Function GetGamepadPS_Button

// Begin Class UBaseInputWidget Function GetGamepadPS_Menu
struct Z_Construct_UFunction_UBaseInputWidget_GetGamepadPS_Menu_Statics
{
	struct BaseInputWidget_eventGetGamepadPS_Menu_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Buttoms" },
		{ "ModuleRelativePath", "Public/Application/BaseInputWidget.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UBaseInputWidget_GetGamepadPS_Menu_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BaseInputWidget_eventGetGamepadPS_Menu_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseInputWidget_GetGamepadPS_Menu_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BaseInputWidget_eventGetGamepadPS_Menu_Parms), &Z_Construct_UFunction_UBaseInputWidget_GetGamepadPS_Menu_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseInputWidget_GetGamepadPS_Menu_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseInputWidget_GetGamepadPS_Menu_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseInputWidget_GetGamepadPS_Menu_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseInputWidget_GetGamepadPS_Menu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseInputWidget, nullptr, "GetGamepadPS_Menu", nullptr, nullptr, Z_Construct_UFunction_UBaseInputWidget_GetGamepadPS_Menu_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseInputWidget_GetGamepadPS_Menu_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseInputWidget_GetGamepadPS_Menu_Statics::BaseInputWidget_eventGetGamepadPS_Menu_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseInputWidget_GetGamepadPS_Menu_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseInputWidget_GetGamepadPS_Menu_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBaseInputWidget_GetGamepadPS_Menu_Statics::BaseInputWidget_eventGetGamepadPS_Menu_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseInputWidget_GetGamepadPS_Menu()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseInputWidget_GetGamepadPS_Menu_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseInputWidget::execGetGamepadPS_Menu)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetGamepadPS_Menu();
	P_NATIVE_END;
}
// End Class UBaseInputWidget Function GetGamepadPS_Menu

// Begin Class UBaseInputWidget Function GetGamepadPS_Mic
struct Z_Construct_UFunction_UBaseInputWidget_GetGamepadPS_Mic_Statics
{
	struct BaseInputWidget_eventGetGamepadPS_Mic_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Buttoms" },
		{ "ModuleRelativePath", "Public/Application/BaseInputWidget.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UBaseInputWidget_GetGamepadPS_Mic_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BaseInputWidget_eventGetGamepadPS_Mic_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseInputWidget_GetGamepadPS_Mic_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BaseInputWidget_eventGetGamepadPS_Mic_Parms), &Z_Construct_UFunction_UBaseInputWidget_GetGamepadPS_Mic_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseInputWidget_GetGamepadPS_Mic_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseInputWidget_GetGamepadPS_Mic_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseInputWidget_GetGamepadPS_Mic_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseInputWidget_GetGamepadPS_Mic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseInputWidget, nullptr, "GetGamepadPS_Mic", nullptr, nullptr, Z_Construct_UFunction_UBaseInputWidget_GetGamepadPS_Mic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseInputWidget_GetGamepadPS_Mic_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseInputWidget_GetGamepadPS_Mic_Statics::BaseInputWidget_eventGetGamepadPS_Mic_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseInputWidget_GetGamepadPS_Mic_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseInputWidget_GetGamepadPS_Mic_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBaseInputWidget_GetGamepadPS_Mic_Statics::BaseInputWidget_eventGetGamepadPS_Mic_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseInputWidget_GetGamepadPS_Mic()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseInputWidget_GetGamepadPS_Mic_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseInputWidget::execGetGamepadPS_Mic)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetGamepadPS_Mic();
	P_NATIVE_END;
}
// End Class UBaseInputWidget Function GetGamepadPS_Mic

// Begin Class UBaseInputWidget Function GetGamepadPS_PushLeftStick
struct Z_Construct_UFunction_UBaseInputWidget_GetGamepadPS_PushLeftStick_Statics
{
	struct BaseInputWidget_eventGetGamepadPS_PushLeftStick_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Buttoms" },
		{ "ModuleRelativePath", "Public/Application/BaseInputWidget.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UBaseInputWidget_GetGamepadPS_PushLeftStick_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BaseInputWidget_eventGetGamepadPS_PushLeftStick_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseInputWidget_GetGamepadPS_PushLeftStick_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BaseInputWidget_eventGetGamepadPS_PushLeftStick_Parms), &Z_Construct_UFunction_UBaseInputWidget_GetGamepadPS_PushLeftStick_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseInputWidget_GetGamepadPS_PushLeftStick_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseInputWidget_GetGamepadPS_PushLeftStick_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseInputWidget_GetGamepadPS_PushLeftStick_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseInputWidget_GetGamepadPS_PushLeftStick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseInputWidget, nullptr, "GetGamepadPS_PushLeftStick", nullptr, nullptr, Z_Construct_UFunction_UBaseInputWidget_GetGamepadPS_PushLeftStick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseInputWidget_GetGamepadPS_PushLeftStick_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseInputWidget_GetGamepadPS_PushLeftStick_Statics::BaseInputWidget_eventGetGamepadPS_PushLeftStick_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseInputWidget_GetGamepadPS_PushLeftStick_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseInputWidget_GetGamepadPS_PushLeftStick_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBaseInputWidget_GetGamepadPS_PushLeftStick_Statics::BaseInputWidget_eventGetGamepadPS_PushLeftStick_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseInputWidget_GetGamepadPS_PushLeftStick()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseInputWidget_GetGamepadPS_PushLeftStick_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseInputWidget::execGetGamepadPS_PushLeftStick)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetGamepadPS_PushLeftStick();
	P_NATIVE_END;
}
// End Class UBaseInputWidget Function GetGamepadPS_PushLeftStick

// Begin Class UBaseInputWidget Function GetGamepadPS_PushRightStick
struct Z_Construct_UFunction_UBaseInputWidget_GetGamepadPS_PushRightStick_Statics
{
	struct BaseInputWidget_eventGetGamepadPS_PushRightStick_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Buttoms" },
		{ "ModuleRelativePath", "Public/Application/BaseInputWidget.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UBaseInputWidget_GetGamepadPS_PushRightStick_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BaseInputWidget_eventGetGamepadPS_PushRightStick_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseInputWidget_GetGamepadPS_PushRightStick_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BaseInputWidget_eventGetGamepadPS_PushRightStick_Parms), &Z_Construct_UFunction_UBaseInputWidget_GetGamepadPS_PushRightStick_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseInputWidget_GetGamepadPS_PushRightStick_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseInputWidget_GetGamepadPS_PushRightStick_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseInputWidget_GetGamepadPS_PushRightStick_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseInputWidget_GetGamepadPS_PushRightStick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseInputWidget, nullptr, "GetGamepadPS_PushRightStick", nullptr, nullptr, Z_Construct_UFunction_UBaseInputWidget_GetGamepadPS_PushRightStick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseInputWidget_GetGamepadPS_PushRightStick_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseInputWidget_GetGamepadPS_PushRightStick_Statics::BaseInputWidget_eventGetGamepadPS_PushRightStick_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseInputWidget_GetGamepadPS_PushRightStick_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseInputWidget_GetGamepadPS_PushRightStick_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBaseInputWidget_GetGamepadPS_PushRightStick_Statics::BaseInputWidget_eventGetGamepadPS_PushRightStick_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseInputWidget_GetGamepadPS_PushRightStick()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseInputWidget_GetGamepadPS_PushRightStick_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseInputWidget::execGetGamepadPS_PushRightStick)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetGamepadPS_PushRightStick();
	P_NATIVE_END;
}
// End Class UBaseInputWidget Function GetGamepadPS_PushRightStick

// Begin Class UBaseInputWidget Function GetGamepadPS_Share
struct Z_Construct_UFunction_UBaseInputWidget_GetGamepadPS_Share_Statics
{
	struct BaseInputWidget_eventGetGamepadPS_Share_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Buttoms" },
		{ "ModuleRelativePath", "Public/Application/BaseInputWidget.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UBaseInputWidget_GetGamepadPS_Share_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BaseInputWidget_eventGetGamepadPS_Share_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseInputWidget_GetGamepadPS_Share_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BaseInputWidget_eventGetGamepadPS_Share_Parms), &Z_Construct_UFunction_UBaseInputWidget_GetGamepadPS_Share_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseInputWidget_GetGamepadPS_Share_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseInputWidget_GetGamepadPS_Share_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseInputWidget_GetGamepadPS_Share_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseInputWidget_GetGamepadPS_Share_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseInputWidget, nullptr, "GetGamepadPS_Share", nullptr, nullptr, Z_Construct_UFunction_UBaseInputWidget_GetGamepadPS_Share_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseInputWidget_GetGamepadPS_Share_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseInputWidget_GetGamepadPS_Share_Statics::BaseInputWidget_eventGetGamepadPS_Share_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseInputWidget_GetGamepadPS_Share_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseInputWidget_GetGamepadPS_Share_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBaseInputWidget_GetGamepadPS_Share_Statics::BaseInputWidget_eventGetGamepadPS_Share_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseInputWidget_GetGamepadPS_Share()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseInputWidget_GetGamepadPS_Share_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseInputWidget::execGetGamepadPS_Share)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetGamepadPS_Share();
	P_NATIVE_END;
}
// End Class UBaseInputWidget Function GetGamepadPS_Share

// Begin Class UBaseInputWidget Function GetGamepadPS_TouchButtom
struct Z_Construct_UFunction_UBaseInputWidget_GetGamepadPS_TouchButtom_Statics
{
	struct BaseInputWidget_eventGetGamepadPS_TouchButtom_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Buttoms" },
		{ "ModuleRelativePath", "Public/Application/BaseInputWidget.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UBaseInputWidget_GetGamepadPS_TouchButtom_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BaseInputWidget_eventGetGamepadPS_TouchButtom_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseInputWidget_GetGamepadPS_TouchButtom_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BaseInputWidget_eventGetGamepadPS_TouchButtom_Parms), &Z_Construct_UFunction_UBaseInputWidget_GetGamepadPS_TouchButtom_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseInputWidget_GetGamepadPS_TouchButtom_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseInputWidget_GetGamepadPS_TouchButtom_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseInputWidget_GetGamepadPS_TouchButtom_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseInputWidget_GetGamepadPS_TouchButtom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseInputWidget, nullptr, "GetGamepadPS_TouchButtom", nullptr, nullptr, Z_Construct_UFunction_UBaseInputWidget_GetGamepadPS_TouchButtom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseInputWidget_GetGamepadPS_TouchButtom_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseInputWidget_GetGamepadPS_TouchButtom_Statics::BaseInputWidget_eventGetGamepadPS_TouchButtom_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseInputWidget_GetGamepadPS_TouchButtom_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseInputWidget_GetGamepadPS_TouchButtom_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBaseInputWidget_GetGamepadPS_TouchButtom_Statics::BaseInputWidget_eventGetGamepadPS_TouchButtom_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseInputWidget_GetGamepadPS_TouchButtom()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseInputWidget_GetGamepadPS_TouchButtom_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseInputWidget::execGetGamepadPS_TouchButtom)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetGamepadPS_TouchButtom();
	P_NATIVE_END;
}
// End Class UBaseInputWidget Function GetGamepadPS_TouchButtom

// Begin Class UBaseInputWidget Function GetGamepadRightShoulder
struct Z_Construct_UFunction_UBaseInputWidget_GetGamepadRightShoulder_Statics
{
	struct BaseInputWidget_eventGetGamepadRightShoulder_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Buttoms" },
		{ "ModuleRelativePath", "Public/Application/BaseInputWidget.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UBaseInputWidget_GetGamepadRightShoulder_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BaseInputWidget_eventGetGamepadRightShoulder_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseInputWidget_GetGamepadRightShoulder_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BaseInputWidget_eventGetGamepadRightShoulder_Parms), &Z_Construct_UFunction_UBaseInputWidget_GetGamepadRightShoulder_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseInputWidget_GetGamepadRightShoulder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseInputWidget_GetGamepadRightShoulder_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseInputWidget_GetGamepadRightShoulder_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseInputWidget_GetGamepadRightShoulder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseInputWidget, nullptr, "GetGamepadRightShoulder", nullptr, nullptr, Z_Construct_UFunction_UBaseInputWidget_GetGamepadRightShoulder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseInputWidget_GetGamepadRightShoulder_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseInputWidget_GetGamepadRightShoulder_Statics::BaseInputWidget_eventGetGamepadRightShoulder_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseInputWidget_GetGamepadRightShoulder_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseInputWidget_GetGamepadRightShoulder_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBaseInputWidget_GetGamepadRightShoulder_Statics::BaseInputWidget_eventGetGamepadRightShoulder_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseInputWidget_GetGamepadRightShoulder()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseInputWidget_GetGamepadRightShoulder_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseInputWidget::execGetGamepadRightShoulder)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetGamepadRightShoulder();
	P_NATIVE_END;
}
// End Class UBaseInputWidget Function GetGamepadRightShoulder

// Begin Class UBaseInputWidget Function GetGamepadRightTrigger
struct Z_Construct_UFunction_UBaseInputWidget_GetGamepadRightTrigger_Statics
{
	struct BaseInputWidget_eventGetGamepadRightTrigger_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Triggers" },
		{ "ModuleRelativePath", "Public/Application/BaseInputWidget.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UBaseInputWidget_GetGamepadRightTrigger_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BaseInputWidget_eventGetGamepadRightTrigger_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseInputWidget_GetGamepadRightTrigger_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BaseInputWidget_eventGetGamepadRightTrigger_Parms), &Z_Construct_UFunction_UBaseInputWidget_GetGamepadRightTrigger_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseInputWidget_GetGamepadRightTrigger_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseInputWidget_GetGamepadRightTrigger_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseInputWidget_GetGamepadRightTrigger_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseInputWidget_GetGamepadRightTrigger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseInputWidget, nullptr, "GetGamepadRightTrigger", nullptr, nullptr, Z_Construct_UFunction_UBaseInputWidget_GetGamepadRightTrigger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseInputWidget_GetGamepadRightTrigger_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseInputWidget_GetGamepadRightTrigger_Statics::BaseInputWidget_eventGetGamepadRightTrigger_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseInputWidget_GetGamepadRightTrigger_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseInputWidget_GetGamepadRightTrigger_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBaseInputWidget_GetGamepadRightTrigger_Statics::BaseInputWidget_eventGetGamepadRightTrigger_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseInputWidget_GetGamepadRightTrigger()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseInputWidget_GetGamepadRightTrigger_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseInputWidget::execGetGamepadRightTrigger)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetGamepadRightTrigger();
	P_NATIVE_END;
}
// End Class UBaseInputWidget Function GetGamepadRightTrigger

// Begin Class UBaseInputWidget Function HandleGamepadAnalogLeft2D
struct Z_Construct_UFunction_UBaseInputWidget_HandleGamepadAnalogLeft2D_Statics
{
	struct BaseInputWidget_eventHandleGamepadAnalogLeft2D_Parms
	{
		FKey Key;
		float AnalogValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Application/BaseInputWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AnalogValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseInputWidget_HandleGamepadAnalogLeft2D_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseInputWidget_eventHandleGamepadAnalogLeft2D_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) }; // 658672854
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseInputWidget_HandleGamepadAnalogLeft2D_Statics::NewProp_AnalogValue = { "AnalogValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseInputWidget_eventHandleGamepadAnalogLeft2D_Parms, AnalogValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseInputWidget_HandleGamepadAnalogLeft2D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseInputWidget_HandleGamepadAnalogLeft2D_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseInputWidget_HandleGamepadAnalogLeft2D_Statics::NewProp_AnalogValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseInputWidget_HandleGamepadAnalogLeft2D_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseInputWidget_HandleGamepadAnalogLeft2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseInputWidget, nullptr, "HandleGamepadAnalogLeft2D", nullptr, nullptr, Z_Construct_UFunction_UBaseInputWidget_HandleGamepadAnalogLeft2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseInputWidget_HandleGamepadAnalogLeft2D_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseInputWidget_HandleGamepadAnalogLeft2D_Statics::BaseInputWidget_eventHandleGamepadAnalogLeft2D_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseInputWidget_HandleGamepadAnalogLeft2D_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseInputWidget_HandleGamepadAnalogLeft2D_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBaseInputWidget_HandleGamepadAnalogLeft2D_Statics::BaseInputWidget_eventHandleGamepadAnalogLeft2D_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseInputWidget_HandleGamepadAnalogLeft2D()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseInputWidget_HandleGamepadAnalogLeft2D_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseInputWidget::execHandleGamepadAnalogLeft2D)
{
	P_GET_STRUCT_REF(FKey,Z_Param_Out_Key);
	P_GET_PROPERTY(FFloatProperty,Z_Param_AnalogValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleGamepadAnalogLeft2D(Z_Param_Out_Key,Z_Param_AnalogValue);
	P_NATIVE_END;
}
// End Class UBaseInputWidget Function HandleGamepadAnalogLeft2D

// Begin Class UBaseInputWidget Function HandleGamepadAnalogRight2D
struct Z_Construct_UFunction_UBaseInputWidget_HandleGamepadAnalogRight2D_Statics
{
	struct BaseInputWidget_eventHandleGamepadAnalogRight2D_Parms
	{
		FKey Key;
		float AnalogValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Application/BaseInputWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AnalogValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseInputWidget_HandleGamepadAnalogRight2D_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseInputWidget_eventHandleGamepadAnalogRight2D_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) }; // 658672854
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBaseInputWidget_HandleGamepadAnalogRight2D_Statics::NewProp_AnalogValue = { "AnalogValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseInputWidget_eventHandleGamepadAnalogRight2D_Parms, AnalogValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseInputWidget_HandleGamepadAnalogRight2D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseInputWidget_HandleGamepadAnalogRight2D_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseInputWidget_HandleGamepadAnalogRight2D_Statics::NewProp_AnalogValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseInputWidget_HandleGamepadAnalogRight2D_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseInputWidget_HandleGamepadAnalogRight2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseInputWidget, nullptr, "HandleGamepadAnalogRight2D", nullptr, nullptr, Z_Construct_UFunction_UBaseInputWidget_HandleGamepadAnalogRight2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseInputWidget_HandleGamepadAnalogRight2D_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseInputWidget_HandleGamepadAnalogRight2D_Statics::BaseInputWidget_eventHandleGamepadAnalogRight2D_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseInputWidget_HandleGamepadAnalogRight2D_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseInputWidget_HandleGamepadAnalogRight2D_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBaseInputWidget_HandleGamepadAnalogRight2D_Statics::BaseInputWidget_eventHandleGamepadAnalogRight2D_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseInputWidget_HandleGamepadAnalogRight2D()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseInputWidget_HandleGamepadAnalogRight2D_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseInputWidget::execHandleGamepadAnalogRight2D)
{
	P_GET_STRUCT_REF(FKey,Z_Param_Out_Key);
	P_GET_PROPERTY(FFloatProperty,Z_Param_AnalogValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleGamepadAnalogRight2D(Z_Param_Out_Key,Z_Param_AnalogValue);
	P_NATIVE_END;
}
// End Class UBaseInputWidget Function HandleGamepadAnalogRight2D

// Begin Class UBaseInputWidget Function HandleGamepadButtonPressed
struct Z_Construct_UFunction_UBaseInputWidget_HandleGamepadButtonPressed_Statics
{
	struct BaseInputWidget_eventHandleGamepadButtonPressed_Parms
	{
		FKey PressedKey;
		bool bIsPressed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game Events" },
		{ "ModuleRelativePath", "Public/Application/BaseInputWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PressedKey;
	static void NewProp_bIsPressed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPressed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseInputWidget_HandleGamepadButtonPressed_Statics::NewProp_PressedKey = { "PressedKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseInputWidget_eventHandleGamepadButtonPressed_Parms, PressedKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(0, nullptr) }; // 658672854
void Z_Construct_UFunction_UBaseInputWidget_HandleGamepadButtonPressed_Statics::NewProp_bIsPressed_SetBit(void* Obj)
{
	((BaseInputWidget_eventHandleGamepadButtonPressed_Parms*)Obj)->bIsPressed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseInputWidget_HandleGamepadButtonPressed_Statics::NewProp_bIsPressed = { "bIsPressed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BaseInputWidget_eventHandleGamepadButtonPressed_Parms), &Z_Construct_UFunction_UBaseInputWidget_HandleGamepadButtonPressed_Statics::NewProp_bIsPressed_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseInputWidget_HandleGamepadButtonPressed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseInputWidget_HandleGamepadButtonPressed_Statics::NewProp_PressedKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseInputWidget_HandleGamepadButtonPressed_Statics::NewProp_bIsPressed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseInputWidget_HandleGamepadButtonPressed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseInputWidget_HandleGamepadButtonPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseInputWidget, nullptr, "HandleGamepadButtonPressed", nullptr, nullptr, Z_Construct_UFunction_UBaseInputWidget_HandleGamepadButtonPressed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseInputWidget_HandleGamepadButtonPressed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseInputWidget_HandleGamepadButtonPressed_Statics::BaseInputWidget_eventHandleGamepadButtonPressed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseInputWidget_HandleGamepadButtonPressed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseInputWidget_HandleGamepadButtonPressed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBaseInputWidget_HandleGamepadButtonPressed_Statics::BaseInputWidget_eventHandleGamepadButtonPressed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseInputWidget_HandleGamepadButtonPressed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseInputWidget_HandleGamepadButtonPressed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseInputWidget::execHandleGamepadButtonPressed)
{
	P_GET_STRUCT(FKey,Z_Param_PressedKey);
	P_GET_UBOOL(Z_Param_bIsPressed);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleGamepadButtonPressed(Z_Param_PressedKey,Z_Param_bIsPressed);
	P_NATIVE_END;
}
// End Class UBaseInputWidget Function HandleGamepadButtonPressed

// Begin Class UBaseInputWidget Function NativeOnInitialized
struct Z_Construct_UFunction_UBaseInputWidget_NativeOnInitialized_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Application/BaseInputWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseInputWidget_NativeOnInitialized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseInputWidget, nullptr, "NativeOnInitialized", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseInputWidget_NativeOnInitialized_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseInputWidget_NativeOnInitialized_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UBaseInputWidget_NativeOnInitialized()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseInputWidget_NativeOnInitialized_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseInputWidget::execNativeOnInitialized)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->NativeOnInitialized();
	P_NATIVE_END;
}
// End Class UBaseInputWidget Function NativeOnInitialized

// Begin Class UBaseInputWidget Function SelectDevice
struct Z_Construct_UFunction_UBaseInputWidget_SelectDevice_Statics
{
	struct BaseInputWidget_eventSelectDevice_Parms
	{
		EDualSenseModel DeviceModel;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UI Device Select" },
		{ "ModuleRelativePath", "Public/Application/BaseInputWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_DeviceModel_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DeviceModel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseInputWidget_SelectDevice_Statics::NewProp_DeviceModel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseInputWidget_SelectDevice_Statics::NewProp_DeviceModel = { "DeviceModel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseInputWidget_eventSelectDevice_Parms, DeviceModel), Z_Construct_UEnum_PSOnScreenControllerOverlay_EDualSenseModel, METADATA_PARAMS(0, nullptr) }; // 1522422270
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseInputWidget_SelectDevice_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseInputWidget_SelectDevice_Statics::NewProp_DeviceModel_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseInputWidget_SelectDevice_Statics::NewProp_DeviceModel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseInputWidget_SelectDevice_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseInputWidget_SelectDevice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseInputWidget, nullptr, "SelectDevice", nullptr, nullptr, Z_Construct_UFunction_UBaseInputWidget_SelectDevice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseInputWidget_SelectDevice_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseInputWidget_SelectDevice_Statics::BaseInputWidget_eventSelectDevice_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseInputWidget_SelectDevice_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseInputWidget_SelectDevice_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBaseInputWidget_SelectDevice_Statics::BaseInputWidget_eventSelectDevice_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseInputWidget_SelectDevice()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseInputWidget_SelectDevice_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseInputWidget::execSelectDevice)
{
	P_GET_ENUM(EDualSenseModel,Z_Param_DeviceModel);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SelectDevice(EDualSenseModel(Z_Param_DeviceModel));
	P_NATIVE_END;
}
// End Class UBaseInputWidget Function SelectDevice

// Begin Class UBaseInputWidget Function SetImage
struct Z_Construct_UFunction_UBaseInputWidget_SetImage_Statics
{
	struct BaseInputWidget_eventSetImage_Parms
	{
		UTexture2D* NewImage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/Application/BaseInputWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewImage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseInputWidget_SetImage_Statics::NewProp_NewImage = { "NewImage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseInputWidget_eventSetImage_Parms, NewImage), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseInputWidget_SetImage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseInputWidget_SetImage_Statics::NewProp_NewImage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseInputWidget_SetImage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseInputWidget_SetImage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseInputWidget, nullptr, "SetImage", nullptr, nullptr, Z_Construct_UFunction_UBaseInputWidget_SetImage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseInputWidget_SetImage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseInputWidget_SetImage_Statics::BaseInputWidget_eventSetImage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseInputWidget_SetImage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseInputWidget_SetImage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBaseInputWidget_SetImage_Statics::BaseInputWidget_eventSetImage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseInputWidget_SetImage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseInputWidget_SetImage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseInputWidget::execSetImage)
{
	P_GET_OBJECT(UTexture2D,Z_Param_NewImage);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetImage(Z_Param_NewImage);
	P_NATIVE_END;
}
// End Class UBaseInputWidget Function SetImage

// Begin Class UBaseInputWidget
void UBaseInputWidget::StaticRegisterNativesUBaseInputWidget()
{
	UClass* Class = UBaseInputWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetButtonStates", &UBaseInputWidget::execGetButtonStates },
		{ "GetDeviceSelected", &UBaseInputWidget::execGetDeviceSelected },
		{ "GetGamepadAnalogLeft2D", &UBaseInputWidget::execGetGamepadAnalogLeft2D },
		{ "GetGamepadAnalogRight2D", &UBaseInputWidget::execGetGamepadAnalogRight2D },
		{ "GetGamepadDPadDown", &UBaseInputWidget::execGetGamepadDPadDown },
		{ "GetGamepadDPadLeft", &UBaseInputWidget::execGetGamepadDPadLeft },
		{ "GetGamepadDPadRight", &UBaseInputWidget::execGetGamepadDPadRight },
		{ "GetGamepadDPadUp", &UBaseInputWidget::execGetGamepadDPadUp },
		{ "GetGamepadFaceButtonBottom", &UBaseInputWidget::execGetGamepadFaceButtonBottom },
		{ "GetGamepadFaceButtonLeft", &UBaseInputWidget::execGetGamepadFaceButtonLeft },
		{ "GetGamepadFaceButtonRight", &UBaseInputWidget::execGetGamepadFaceButtonRight },
		{ "GetGamepadFaceButtonTop", &UBaseInputWidget::execGetGamepadFaceButtonTop },
		{ "GetGamepadLeftShoulder", &UBaseInputWidget::execGetGamepadLeftShoulder },
		{ "GetGamepadLeftTrigger", &UBaseInputWidget::execGetGamepadLeftTrigger },
		{ "GetGamepadPS_Button", &UBaseInputWidget::execGetGamepadPS_Button },
		{ "GetGamepadPS_Menu", &UBaseInputWidget::execGetGamepadPS_Menu },
		{ "GetGamepadPS_Mic", &UBaseInputWidget::execGetGamepadPS_Mic },
		{ "GetGamepadPS_PushLeftStick", &UBaseInputWidget::execGetGamepadPS_PushLeftStick },
		{ "GetGamepadPS_PushRightStick", &UBaseInputWidget::execGetGamepadPS_PushRightStick },
		{ "GetGamepadPS_Share", &UBaseInputWidget::execGetGamepadPS_Share },
		{ "GetGamepadPS_TouchButtom", &UBaseInputWidget::execGetGamepadPS_TouchButtom },
		{ "GetGamepadRightShoulder", &UBaseInputWidget::execGetGamepadRightShoulder },
		{ "GetGamepadRightTrigger", &UBaseInputWidget::execGetGamepadRightTrigger },
		{ "HandleGamepadAnalogLeft2D", &UBaseInputWidget::execHandleGamepadAnalogLeft2D },
		{ "HandleGamepadAnalogRight2D", &UBaseInputWidget::execHandleGamepadAnalogRight2D },
		{ "HandleGamepadButtonPressed", &UBaseInputWidget::execHandleGamepadButtonPressed },
		{ "NativeOnInitialized", &UBaseInputWidget::execNativeOnInitialized },
		{ "SelectDevice", &UBaseInputWidget::execSelectDevice },
		{ "SetImage", &UBaseInputWidget::execSetImage },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseInputWidget);
UClass* Z_Construct_UClass_UBaseInputWidget_NoRegister()
{
	return UBaseInputWidget::StaticClass();
}
struct Z_Construct_UClass_UBaseInputWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Application/BaseInputWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Application/BaseInputWidget.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGamepadPS_Menu_MetaData[] = {
		{ "BlueprintGetter", "GetGamepadPS_Menu" },
		{ "Category", "Buttons" },
		{ "ModuleRelativePath", "Public/Application/BaseInputWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGamepadPS_Share_MetaData[] = {
		{ "BlueprintGetter", "GetGamepadPS_Share" },
		{ "Category", "Buttons" },
		{ "ModuleRelativePath", "Public/Application/BaseInputWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGamepadPS_TouchButtom_MetaData[] = {
		{ "BlueprintGetter", "GetGamepadPS_TouchButtom" },
		{ "Category", "Buttons" },
		{ "ModuleRelativePath", "Public/Application/BaseInputWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGamepadPS_Button_MetaData[] = {
		{ "BlueprintGetter", "GetGamepadPS_Button" },
		{ "Category", "Buttons" },
		{ "ModuleRelativePath", "Public/Application/BaseInputWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGamepadPS_Mic_MetaData[] = {
		{ "BlueprintGetter", "GetGamepadPS_Mic" },
		{ "Category", "Buttons" },
		{ "ModuleRelativePath", "Public/Application/BaseInputWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGamepadPS_PushLeftStick_MetaData[] = {
		{ "BlueprintGetter", "GetGamepadPS_PushLeftStick" },
		{ "Category", "Buttons" },
		{ "ModuleRelativePath", "Public/Application/BaseInputWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGamepadPS_PushRightStick_MetaData[] = {
		{ "BlueprintGetter", "GetGamepadPS_PushRightStick" },
		{ "Category", "Buttons" },
		{ "ModuleRelativePath", "Public/Application/BaseInputWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsGamepadDPadUp_MetaData[] = {
		{ "BlueprintGetter", "GetGamepadDPadUp" },
		{ "Category", "Buttons" },
		{ "ModuleRelativePath", "Public/Application/BaseInputWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsGamepadDPadDown_MetaData[] = {
		{ "BlueprintGetter", "GetGamepadDPadDown" },
		{ "Category", "Buttons" },
		{ "ModuleRelativePath", "Public/Application/BaseInputWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsGamepadDPadLeft_MetaData[] = {
		{ "BlueprintGetter", "GetGamepadDPadLeft" },
		{ "Category", "Buttons" },
		{ "ModuleRelativePath", "Public/Application/BaseInputWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsGamepadDPadRight_MetaData[] = {
		{ "BlueprintGetter", "GetGamepadDPadRight" },
		{ "Category", "Buttons" },
		{ "ModuleRelativePath", "Public/Application/BaseInputWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsGamepadFaceButtonBottom_MetaData[] = {
		{ "BlueprintGetter", "GetGamepadFaceButtonBottom" },
		{ "Category", "Buttons" },
		{ "ModuleRelativePath", "Public/Application/BaseInputWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsGamepadFaceButtonTop_MetaData[] = {
		{ "BlueprintGetter", "GetGamepadFaceButtonTop" },
		{ "Category", "Buttons" },
		{ "ModuleRelativePath", "Public/Application/BaseInputWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsGamepadFaceButtonLeft_MetaData[] = {
		{ "BlueprintGetter", "GetGamepadFaceButtonLeft" },
		{ "Category", "Buttons" },
		{ "ModuleRelativePath", "Public/Application/BaseInputWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsGamepadFaceButtonRight_MetaData[] = {
		{ "BlueprintGetter", "GetGamepadFaceButtonRight" },
		{ "Category", "Buttons" },
		{ "ModuleRelativePath", "Public/Application/BaseInputWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsGamepadLeftShoulder_MetaData[] = {
		{ "BlueprintGetter", "GetGamepadLeftShoulder" },
		{ "Category", "Buttons" },
		{ "ModuleRelativePath", "Public/Application/BaseInputWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsGamepadRightShoulder_MetaData[] = {
		{ "BlueprintGetter", "GetGamepadRightShoulder" },
		{ "Category", "Buttons" },
		{ "ModuleRelativePath", "Public/Application/BaseInputWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsGamepadLeftTrigger_MetaData[] = {
		{ "BlueprintGetter", "GetGamepadLeftTrigger" },
		{ "Category", "Triggers" },
		{ "ModuleRelativePath", "Public/Application/BaseInputWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsGamepadRightTrigger_MetaData[] = {
		{ "BlueprintGetter", "GetGamepadRightTrigger" },
		{ "Category", "Triggers" },
		{ "ModuleRelativePath", "Public/Application/BaseInputWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BIsGamepadAnalogLeft2D_MetaData[] = {
		{ "BlueprintGetter", "GetGamepadAnalogLeft2D" },
		{ "Category", "Analog" },
		{ "ModuleRelativePath", "Public/Application/BaseInputWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BIsGamepadAnalogRight2D_MetaData[] = {
		{ "BlueprintGetter", "GetGamepadAnalogRight2D" },
		{ "Category", "Analog" },
		{ "ModuleRelativePath", "Public/Application/BaseInputWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BrushDevice_MetaData[] = {
		{ "BlueprintGetter", "GetDeviceSelected" },
		{ "Category", "Device Selected" },
		{ "ModuleRelativePath", "Public/Application/BaseInputWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Device_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/Application/BaseInputWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ButtonStates_MetaData[] = {
		{ "Category", "Game Events" },
		{ "ModuleRelativePath", "Public/Application/BaseInputWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableDebugLogs_Gamepad_MetaData[] = {
		{ "ModuleRelativePath", "Public/Application/BaseInputWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialTexture_MetaData[] = {
		{ "ModuleRelativePath", "Public/Application/BaseInputWidget.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bGamepadPS_Menu_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGamepadPS_Menu;
	static void NewProp_bGamepadPS_Share_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGamepadPS_Share;
	static void NewProp_bGamepadPS_TouchButtom_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGamepadPS_TouchButtom;
	static void NewProp_bGamepadPS_Button_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGamepadPS_Button;
	static void NewProp_bGamepadPS_Mic_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGamepadPS_Mic;
	static void NewProp_bGamepadPS_PushLeftStick_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGamepadPS_PushLeftStick;
	static void NewProp_bGamepadPS_PushRightStick_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGamepadPS_PushRightStick;
	static void NewProp_bIsGamepadDPadUp_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsGamepadDPadUp;
	static void NewProp_bIsGamepadDPadDown_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsGamepadDPadDown;
	static void NewProp_bIsGamepadDPadLeft_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsGamepadDPadLeft;
	static void NewProp_bIsGamepadDPadRight_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsGamepadDPadRight;
	static void NewProp_bIsGamepadFaceButtonBottom_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsGamepadFaceButtonBottom;
	static void NewProp_bIsGamepadFaceButtonTop_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsGamepadFaceButtonTop;
	static void NewProp_bIsGamepadFaceButtonLeft_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsGamepadFaceButtonLeft;
	static void NewProp_bIsGamepadFaceButtonRight_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsGamepadFaceButtonRight;
	static void NewProp_bIsGamepadLeftShoulder_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsGamepadLeftShoulder;
	static void NewProp_bIsGamepadRightShoulder_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsGamepadRightShoulder;
	static void NewProp_bIsGamepadLeftTrigger_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsGamepadLeftTrigger;
	static void NewProp_bIsGamepadRightTrigger_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsGamepadRightTrigger;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BIsGamepadAnalogLeft2D;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BIsGamepadAnalogRight2D;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BrushDevice;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Device_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Device_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Device_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Device;
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ButtonStates_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ButtonStates_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ButtonStates;
	static void NewProp_bEnableDebugLogs_Gamepad_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDebugLogs_Gamepad;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InitialTexture;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBaseInputWidget_GetButtonStates, "GetButtonStates" }, // 1552654672
		{ &Z_Construct_UFunction_UBaseInputWidget_GetDeviceSelected, "GetDeviceSelected" }, // 2190416082
		{ &Z_Construct_UFunction_UBaseInputWidget_GetGamepadAnalogLeft2D, "GetGamepadAnalogLeft2D" }, // 2781458385
		{ &Z_Construct_UFunction_UBaseInputWidget_GetGamepadAnalogRight2D, "GetGamepadAnalogRight2D" }, // 1418386523
		{ &Z_Construct_UFunction_UBaseInputWidget_GetGamepadDPadDown, "GetGamepadDPadDown" }, // 1014635553
		{ &Z_Construct_UFunction_UBaseInputWidget_GetGamepadDPadLeft, "GetGamepadDPadLeft" }, // 2326727972
		{ &Z_Construct_UFunction_UBaseInputWidget_GetGamepadDPadRight, "GetGamepadDPadRight" }, // 1463908939
		{ &Z_Construct_UFunction_UBaseInputWidget_GetGamepadDPadUp, "GetGamepadDPadUp" }, // 82479161
		{ &Z_Construct_UFunction_UBaseInputWidget_GetGamepadFaceButtonBottom, "GetGamepadFaceButtonBottom" }, // 1239955896
		{ &Z_Construct_UFunction_UBaseInputWidget_GetGamepadFaceButtonLeft, "GetGamepadFaceButtonLeft" }, // 1490973503
		{ &Z_Construct_UFunction_UBaseInputWidget_GetGamepadFaceButtonRight, "GetGamepadFaceButtonRight" }, // 2104218121
		{ &Z_Construct_UFunction_UBaseInputWidget_GetGamepadFaceButtonTop, "GetGamepadFaceButtonTop" }, // 1663833521
		{ &Z_Construct_UFunction_UBaseInputWidget_GetGamepadLeftShoulder, "GetGamepadLeftShoulder" }, // 3223200470
		{ &Z_Construct_UFunction_UBaseInputWidget_GetGamepadLeftTrigger, "GetGamepadLeftTrigger" }, // 2171980826
		{ &Z_Construct_UFunction_UBaseInputWidget_GetGamepadPS_Button, "GetGamepadPS_Button" }, // 3097238564
		{ &Z_Construct_UFunction_UBaseInputWidget_GetGamepadPS_Menu, "GetGamepadPS_Menu" }, // 2921757453
		{ &Z_Construct_UFunction_UBaseInputWidget_GetGamepadPS_Mic, "GetGamepadPS_Mic" }, // 3799082248
		{ &Z_Construct_UFunction_UBaseInputWidget_GetGamepadPS_PushLeftStick, "GetGamepadPS_PushLeftStick" }, // 406274172
		{ &Z_Construct_UFunction_UBaseInputWidget_GetGamepadPS_PushRightStick, "GetGamepadPS_PushRightStick" }, // 4205664689
		{ &Z_Construct_UFunction_UBaseInputWidget_GetGamepadPS_Share, "GetGamepadPS_Share" }, // 980478955
		{ &Z_Construct_UFunction_UBaseInputWidget_GetGamepadPS_TouchButtom, "GetGamepadPS_TouchButtom" }, // 2588740298
		{ &Z_Construct_UFunction_UBaseInputWidget_GetGamepadRightShoulder, "GetGamepadRightShoulder" }, // 453908825
		{ &Z_Construct_UFunction_UBaseInputWidget_GetGamepadRightTrigger, "GetGamepadRightTrigger" }, // 1307889767
		{ &Z_Construct_UFunction_UBaseInputWidget_HandleGamepadAnalogLeft2D, "HandleGamepadAnalogLeft2D" }, // 1438266152
		{ &Z_Construct_UFunction_UBaseInputWidget_HandleGamepadAnalogRight2D, "HandleGamepadAnalogRight2D" }, // 3653444120
		{ &Z_Construct_UFunction_UBaseInputWidget_HandleGamepadButtonPressed, "HandleGamepadButtonPressed" }, // 2155684436
		{ &Z_Construct_UFunction_UBaseInputWidget_NativeOnInitialized, "NativeOnInitialized" }, // 316070846
		{ &Z_Construct_UFunction_UBaseInputWidget_SelectDevice, "SelectDevice" }, // 486777519
		{ &Z_Construct_UFunction_UBaseInputWidget_SetImage, "SetImage" }, // 3293684436
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseInputWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UBaseInputWidget_Statics::NewProp_bGamepadPS_Menu_SetBit(void* Obj)
{
	((UBaseInputWidget*)Obj)->bGamepadPS_Menu = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBaseInputWidget_Statics::NewProp_bGamepadPS_Menu = { "bGamepadPS_Menu", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBaseInputWidget), &Z_Construct_UClass_UBaseInputWidget_Statics::NewProp_bGamepadPS_Menu_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGamepadPS_Menu_MetaData), NewProp_bGamepadPS_Menu_MetaData) };
void Z_Construct_UClass_UBaseInputWidget_Statics::NewProp_bGamepadPS_Share_SetBit(void* Obj)
{
	((UBaseInputWidget*)Obj)->bGamepadPS_Share = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBaseInputWidget_Statics::NewProp_bGamepadPS_Share = { "bGamepadPS_Share", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBaseInputWidget), &Z_Construct_UClass_UBaseInputWidget_Statics::NewProp_bGamepadPS_Share_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGamepadPS_Share_MetaData), NewProp_bGamepadPS_Share_MetaData) };
void Z_Construct_UClass_UBaseInputWidget_Statics::NewProp_bGamepadPS_TouchButtom_SetBit(void* Obj)
{
	((UBaseInputWidget*)Obj)->bGamepadPS_TouchButtom = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBaseInputWidget_Statics::NewProp_bGamepadPS_TouchButtom = { "bGamepadPS_TouchButtom", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBaseInputWidget), &Z_Construct_UClass_UBaseInputWidget_Statics::NewProp_bGamepadPS_TouchButtom_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGamepadPS_TouchButtom_MetaData), NewProp_bGamepadPS_TouchButtom_MetaData) };
void Z_Construct_UClass_UBaseInputWidget_Statics::NewProp_bGamepadPS_Button_SetBit(void* Obj)
{
	((UBaseInputWidget*)Obj)->bGamepadPS_Button = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBaseInputWidget_Statics::NewProp_bGamepadPS_Button = { "bGamepadPS_Button", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBaseInputWidget), &Z_Construct_UClass_UBaseInputWidget_Statics::NewProp_bGamepadPS_Button_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGamepadPS_Button_MetaData), NewProp_bGamepadPS_Button_MetaData) };
void Z_Construct_UClass_UBaseInputWidget_Statics::NewProp_bGamepadPS_Mic_SetBit(void* Obj)
{
	((UBaseInputWidget*)Obj)->bGamepadPS_Mic = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBaseInputWidget_Statics::NewProp_bGamepadPS_Mic = { "bGamepadPS_Mic", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBaseInputWidget), &Z_Construct_UClass_UBaseInputWidget_Statics::NewProp_bGamepadPS_Mic_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGamepadPS_Mic_MetaData), NewProp_bGamepadPS_Mic_MetaData) };
void Z_Construct_UClass_UBaseInputWidget_Statics::NewProp_bGamepadPS_PushLeftStick_SetBit(void* Obj)
{
	((UBaseInputWidget*)Obj)->bGamepadPS_PushLeftStick = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBaseInputWidget_Statics::NewProp_bGamepadPS_PushLeftStick = { "bGamepadPS_PushLeftStick", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBaseInputWidget), &Z_Construct_UClass_UBaseInputWidget_Statics::NewProp_bGamepadPS_PushLeftStick_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGamepadPS_PushLeftStick_MetaData), NewProp_bGamepadPS_PushLeftStick_MetaData) };
void Z_Construct_UClass_UBaseInputWidget_Statics::NewProp_bGamepadPS_PushRightStick_SetBit(void* Obj)
{
	((UBaseInputWidget*)Obj)->bGamepadPS_PushRightStick = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBaseInputWidget_Statics::NewProp_bGamepadPS_PushRightStick = { "bGamepadPS_PushRightStick", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBaseInputWidget), &Z_Construct_UClass_UBaseInputWidget_Statics::NewProp_bGamepadPS_PushRightStick_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGamepadPS_PushRightStick_MetaData), NewProp_bGamepadPS_PushRightStick_MetaData) };
void Z_Construct_UClass_UBaseInputWidget_Statics::NewProp_bIsGamepadDPadUp_SetBit(void* Obj)
{
	((UBaseInputWidget*)Obj)->bIsGamepadDPadUp = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBaseInputWidget_Statics::NewProp_bIsGamepadDPadUp = { "bIsGamepadDPadUp", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBaseInputWidget), &Z_Construct_UClass_UBaseInputWidget_Statics::NewProp_bIsGamepadDPadUp_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsGamepadDPadUp_MetaData), NewProp_bIsGamepadDPadUp_MetaData) };
void Z_Construct_UClass_UBaseInputWidget_Statics::NewProp_bIsGamepadDPadDown_SetBit(void* Obj)
{
	((UBaseInputWidget*)Obj)->bIsGamepadDPadDown = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBaseInputWidget_Statics::NewProp_bIsGamepadDPadDown = { "bIsGamepadDPadDown", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBaseInputWidget), &Z_Construct_UClass_UBaseInputWidget_Statics::NewProp_bIsGamepadDPadDown_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsGamepadDPadDown_MetaData), NewProp_bIsGamepadDPadDown_MetaData) };
void Z_Construct_UClass_UBaseInputWidget_Statics::NewProp_bIsGamepadDPadLeft_SetBit(void* Obj)
{
	((UBaseInputWidget*)Obj)->bIsGamepadDPadLeft = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBaseInputWidget_Statics::NewProp_bIsGamepadDPadLeft = { "bIsGamepadDPadLeft", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBaseInputWidget), &Z_Construct_UClass_UBaseInputWidget_Statics::NewProp_bIsGamepadDPadLeft_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsGamepadDPadLeft_MetaData), NewProp_bIsGamepadDPadLeft_MetaData) };
void Z_Construct_UClass_UBaseInputWidget_Statics::NewProp_bIsGamepadDPadRight_SetBit(void* Obj)
{
	((UBaseInputWidget*)Obj)->bIsGamepadDPadRight = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBaseInputWidget_Statics::NewProp_bIsGamepadDPadRight = { "bIsGamepadDPadRight", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBaseInputWidget), &Z_Construct_UClass_UBaseInputWidget_Statics::NewProp_bIsGamepadDPadRight_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsGamepadDPadRight_MetaData), NewProp_bIsGamepadDPadRight_MetaData) };
void Z_Construct_UClass_UBaseInputWidget_Statics::NewProp_bIsGamepadFaceButtonBottom_SetBit(void* Obj)
{
	((UBaseInputWidget*)Obj)->bIsGamepadFaceButtonBottom = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBaseInputWidget_Statics::NewProp_bIsGamepadFaceButtonBottom = { "bIsGamepadFaceButtonBottom", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBaseInputWidget), &Z_Construct_UClass_UBaseInputWidget_Statics::NewProp_bIsGamepadFaceButtonBottom_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsGamepadFaceButtonBottom_MetaData), NewProp_bIsGamepadFaceButtonBottom_MetaData) };
void Z_Construct_UClass_UBaseInputWidget_Statics::NewProp_bIsGamepadFaceButtonTop_SetBit(void* Obj)
{
	((UBaseInputWidget*)Obj)->bIsGamepadFaceButtonTop = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBaseInputWidget_Statics::NewProp_bIsGamepadFaceButtonTop = { "bIsGamepadFaceButtonTop", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBaseInputWidget), &Z_Construct_UClass_UBaseInputWidget_Statics::NewProp_bIsGamepadFaceButtonTop_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsGamepadFaceButtonTop_MetaData), NewProp_bIsGamepadFaceButtonTop_MetaData) };
void Z_Construct_UClass_UBaseInputWidget_Statics::NewProp_bIsGamepadFaceButtonLeft_SetBit(void* Obj)
{
	((UBaseInputWidget*)Obj)->bIsGamepadFaceButtonLeft = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBaseInputWidget_Statics::NewProp_bIsGamepadFaceButtonLeft = { "bIsGamepadFaceButtonLeft", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBaseInputWidget), &Z_Construct_UClass_UBaseInputWidget_Statics::NewProp_bIsGamepadFaceButtonLeft_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsGamepadFaceButtonLeft_MetaData), NewProp_bIsGamepadFaceButtonLeft_MetaData) };
void Z_Construct_UClass_UBaseInputWidget_Statics::NewProp_bIsGamepadFaceButtonRight_SetBit(void* Obj)
{
	((UBaseInputWidget*)Obj)->bIsGamepadFaceButtonRight = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBaseInputWidget_Statics::NewProp_bIsGamepadFaceButtonRight = { "bIsGamepadFaceButtonRight", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBaseInputWidget), &Z_Construct_UClass_UBaseInputWidget_Statics::NewProp_bIsGamepadFaceButtonRight_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsGamepadFaceButtonRight_MetaData), NewProp_bIsGamepadFaceButtonRight_MetaData) };
void Z_Construct_UClass_UBaseInputWidget_Statics::NewProp_bIsGamepadLeftShoulder_SetBit(void* Obj)
{
	((UBaseInputWidget*)Obj)->bIsGamepadLeftShoulder = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBaseInputWidget_Statics::NewProp_bIsGamepadLeftShoulder = { "bIsGamepadLeftShoulder", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBaseInputWidget), &Z_Construct_UClass_UBaseInputWidget_Statics::NewProp_bIsGamepadLeftShoulder_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsGamepadLeftShoulder_MetaData), NewProp_bIsGamepadLeftShoulder_MetaData) };
void Z_Construct_UClass_UBaseInputWidget_Statics::NewProp_bIsGamepadRightShoulder_SetBit(void* Obj)
{
	((UBaseInputWidget*)Obj)->bIsGamepadRightShoulder = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBaseInputWidget_Statics::NewProp_bIsGamepadRightShoulder = { "bIsGamepadRightShoulder", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBaseInputWidget), &Z_Construct_UClass_UBaseInputWidget_Statics::NewProp_bIsGamepadRightShoulder_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsGamepadRightShoulder_MetaData), NewProp_bIsGamepadRightShoulder_MetaData) };
void Z_Construct_UClass_UBaseInputWidget_Statics::NewProp_bIsGamepadLeftTrigger_SetBit(void* Obj)
{
	((UBaseInputWidget*)Obj)->bIsGamepadLeftTrigger = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBaseInputWidget_Statics::NewProp_bIsGamepadLeftTrigger = { "bIsGamepadLeftTrigger", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBaseInputWidget), &Z_Construct_UClass_UBaseInputWidget_Statics::NewProp_bIsGamepadLeftTrigger_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsGamepadLeftTrigger_MetaData), NewProp_bIsGamepadLeftTrigger_MetaData) };
void Z_Construct_UClass_UBaseInputWidget_Statics::NewProp_bIsGamepadRightTrigger_SetBit(void* Obj)
{
	((UBaseInputWidget*)Obj)->bIsGamepadRightTrigger = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBaseInputWidget_Statics::NewProp_bIsGamepadRightTrigger = { "bIsGamepadRightTrigger", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBaseInputWidget), &Z_Construct_UClass_UBaseInputWidget_Statics::NewProp_bIsGamepadRightTrigger_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsGamepadRightTrigger_MetaData), NewProp_bIsGamepadRightTrigger_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBaseInputWidget_Statics::NewProp_BIsGamepadAnalogLeft2D = { "BIsGamepadAnalogLeft2D", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseInputWidget, BIsGamepadAnalogLeft2D), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BIsGamepadAnalogLeft2D_MetaData), NewProp_BIsGamepadAnalogLeft2D_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBaseInputWidget_Statics::NewProp_BIsGamepadAnalogRight2D = { "BIsGamepadAnalogRight2D", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseInputWidget, BIsGamepadAnalogRight2D), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BIsGamepadAnalogRight2D_MetaData), NewProp_BIsGamepadAnalogRight2D_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseInputWidget_Statics::NewProp_BrushDevice = { "BrushDevice", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseInputWidget, BrushDevice), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BrushDevice_MetaData), NewProp_BrushDevice_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBaseInputWidget_Statics::NewProp_Device_ValueProp = { "Device", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBaseInputWidget_Statics::NewProp_Device_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBaseInputWidget_Statics::NewProp_Device_Key_KeyProp = { "Device_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_PSOnScreenControllerOverlay_EDualSenseModel, METADATA_PARAMS(0, nullptr) }; // 1522422270
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UBaseInputWidget_Statics::NewProp_Device = { "Device", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseInputWidget, Device), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Device_MetaData), NewProp_Device_MetaData) }; // 1522422270
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBaseInputWidget_Statics::NewProp_ButtonStates_ValueProp = { "ButtonStates", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UBaseInputWidget_Statics::NewProp_ButtonStates_Key_KeyProp = { "ButtonStates_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UBaseInputWidget_Statics::NewProp_ButtonStates = { "ButtonStates", nullptr, (EPropertyFlags)0x0020080000020005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseInputWidget, ButtonStates), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ButtonStates_MetaData), NewProp_ButtonStates_MetaData) };
void Z_Construct_UClass_UBaseInputWidget_Statics::NewProp_bEnableDebugLogs_Gamepad_SetBit(void* Obj)
{
	((UBaseInputWidget*)Obj)->bEnableDebugLogs_Gamepad = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBaseInputWidget_Statics::NewProp_bEnableDebugLogs_Gamepad = { "bEnableDebugLogs_Gamepad", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBaseInputWidget), &Z_Construct_UClass_UBaseInputWidget_Statics::NewProp_bEnableDebugLogs_Gamepad_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableDebugLogs_Gamepad_MetaData), NewProp_bEnableDebugLogs_Gamepad_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseInputWidget_Statics::NewProp_InitialTexture = { "InitialTexture", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseInputWidget, InitialTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialTexture_MetaData), NewProp_InitialTexture_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseInputWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseInputWidget_Statics::NewProp_bGamepadPS_Menu,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseInputWidget_Statics::NewProp_bGamepadPS_Share,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseInputWidget_Statics::NewProp_bGamepadPS_TouchButtom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseInputWidget_Statics::NewProp_bGamepadPS_Button,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseInputWidget_Statics::NewProp_bGamepadPS_Mic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseInputWidget_Statics::NewProp_bGamepadPS_PushLeftStick,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseInputWidget_Statics::NewProp_bGamepadPS_PushRightStick,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseInputWidget_Statics::NewProp_bIsGamepadDPadUp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseInputWidget_Statics::NewProp_bIsGamepadDPadDown,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseInputWidget_Statics::NewProp_bIsGamepadDPadLeft,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseInputWidget_Statics::NewProp_bIsGamepadDPadRight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseInputWidget_Statics::NewProp_bIsGamepadFaceButtonBottom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseInputWidget_Statics::NewProp_bIsGamepadFaceButtonTop,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseInputWidget_Statics::NewProp_bIsGamepadFaceButtonLeft,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseInputWidget_Statics::NewProp_bIsGamepadFaceButtonRight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseInputWidget_Statics::NewProp_bIsGamepadLeftShoulder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseInputWidget_Statics::NewProp_bIsGamepadRightShoulder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseInputWidget_Statics::NewProp_bIsGamepadLeftTrigger,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseInputWidget_Statics::NewProp_bIsGamepadRightTrigger,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseInputWidget_Statics::NewProp_BIsGamepadAnalogLeft2D,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseInputWidget_Statics::NewProp_BIsGamepadAnalogRight2D,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseInputWidget_Statics::NewProp_BrushDevice,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseInputWidget_Statics::NewProp_Device_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseInputWidget_Statics::NewProp_Device_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseInputWidget_Statics::NewProp_Device_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseInputWidget_Statics::NewProp_Device,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseInputWidget_Statics::NewProp_ButtonStates_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseInputWidget_Statics::NewProp_ButtonStates_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseInputWidget_Statics::NewProp_ButtonStates,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseInputWidget_Statics::NewProp_bEnableDebugLogs_Gamepad,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseInputWidget_Statics::NewProp_InitialTexture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseInputWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBaseInputWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_PSOnScreenControllerOverlay,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseInputWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseInputWidget_Statics::ClassParams = {
	&UBaseInputWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UBaseInputWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UBaseInputWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseInputWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UBaseInputWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBaseInputWidget()
{
	if (!Z_Registration_Info_UClass_UBaseInputWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseInputWidget.OuterSingleton, Z_Construct_UClass_UBaseInputWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBaseInputWidget.OuterSingleton;
}
template<> PSONSCREENCONTROLLEROVERLAY_API UClass* StaticClass<UBaseInputWidget>()
{
	return UBaseInputWidget::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseInputWidget);
UBaseInputWidget::~UBaseInputWidget() {}
// End Class UBaseInputWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_rafae_Documents_Unreal_Projects_PluginTeste_Plugins_PSOnScreenControllerOverlay_Source_PSOnScreenControllerOverlay_Public_Application_BaseInputWidget_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EDualSenseModel_StaticEnum, TEXT("EDualSenseModel"), &Z_Registration_Info_UEnum_EDualSenseModel, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1522422270U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBaseInputWidget, UBaseInputWidget::StaticClass, TEXT("UBaseInputWidget"), &Z_Registration_Info_UClass_UBaseInputWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseInputWidget), 7034217U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_rafae_Documents_Unreal_Projects_PluginTeste_Plugins_PSOnScreenControllerOverlay_Source_PSOnScreenControllerOverlay_Public_Application_BaseInputWidget_h_2172695939(TEXT("/Script/PSOnScreenControllerOverlay"),
	Z_CompiledInDeferFile_FID_Users_rafae_Documents_Unreal_Projects_PluginTeste_Plugins_PSOnScreenControllerOverlay_Source_PSOnScreenControllerOverlay_Public_Application_BaseInputWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_rafae_Documents_Unreal_Projects_PluginTeste_Plugins_PSOnScreenControllerOverlay_Source_PSOnScreenControllerOverlay_Public_Application_BaseInputWidget_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_rafae_Documents_Unreal_Projects_PluginTeste_Plugins_PSOnScreenControllerOverlay_Source_PSOnScreenControllerOverlay_Public_Application_BaseInputWidget_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_rafae_Documents_Unreal_Projects_PluginTeste_Plugins_PSOnScreenControllerOverlay_Source_PSOnScreenControllerOverlay_Public_Application_BaseInputWidget_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
