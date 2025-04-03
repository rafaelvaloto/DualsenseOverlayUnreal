// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Application/BaseInputWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 
class UTexture2D;
enum class EDualSenseModel : uint8;
struct FKey;
#ifdef PSONSCREENCONTROLLEROVERLAY_BaseInputWidget_generated_h
#error "BaseInputWidget.generated.h already included, missing '#pragma once' in BaseInputWidget.h"
#endif
#define PSONSCREENCONTROLLEROVERLAY_BaseInputWidget_generated_h

#define FID_Users_rafae_Documents_Unreal_Projects_PluginTeste_Plugins_PSOnScreenControllerOverlay_Source_PSOnScreenControllerOverlay_Public_Application_BaseInputWidget_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleGamepadAnalogRight2D); \
	DECLARE_FUNCTION(execHandleGamepadAnalogLeft2D); \
	DECLARE_FUNCTION(execNativeOnInitialized); \
	DECLARE_FUNCTION(execHandleGamepadButtonPressed); \
	DECLARE_FUNCTION(execSetImage); \
	DECLARE_FUNCTION(execGetDeviceSelected); \
	DECLARE_FUNCTION(execSelectDevice); \
	DECLARE_FUNCTION(execGetGamepadRightTrigger); \
	DECLARE_FUNCTION(execGetGamepadLeftTrigger); \
	DECLARE_FUNCTION(execGetGamepadFaceButtonRight); \
	DECLARE_FUNCTION(execGetGamepadFaceButtonLeft); \
	DECLARE_FUNCTION(execGetGamepadFaceButtonTop); \
	DECLARE_FUNCTION(execGetGamepadLeftShoulder); \
	DECLARE_FUNCTION(execGetGamepadRightShoulder); \
	DECLARE_FUNCTION(execGetGamepadFaceButtonBottom); \
	DECLARE_FUNCTION(execGetGamepadDPadRight); \
	DECLARE_FUNCTION(execGetGamepadDPadLeft); \
	DECLARE_FUNCTION(execGetGamepadDPadDown); \
	DECLARE_FUNCTION(execGetGamepadDPadUp); \
	DECLARE_FUNCTION(execGetGamepadPS_PushLeftStick); \
	DECLARE_FUNCTION(execGetGamepadPS_PushRightStick); \
	DECLARE_FUNCTION(execGetGamepadPS_Button); \
	DECLARE_FUNCTION(execGetGamepadPS_Mic); \
	DECLARE_FUNCTION(execGetGamepadPS_TouchButtom); \
	DECLARE_FUNCTION(execGetGamepadPS_Share); \
	DECLARE_FUNCTION(execGetGamepadPS_Menu); \
	DECLARE_FUNCTION(execGetGamepadAnalogRight2D); \
	DECLARE_FUNCTION(execGetGamepadAnalogLeft2D); \
	DECLARE_FUNCTION(execGetButtonStates);


#define FID_Users_rafae_Documents_Unreal_Projects_PluginTeste_Plugins_PSOnScreenControllerOverlay_Source_PSOnScreenControllerOverlay_Public_Application_BaseInputWidget_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBaseInputWidget(); \
	friend struct Z_Construct_UClass_UBaseInputWidget_Statics; \
public: \
	DECLARE_CLASS(UBaseInputWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PSOnScreenControllerOverlay"), NO_API) \
	DECLARE_SERIALIZER(UBaseInputWidget)


#define FID_Users_rafae_Documents_Unreal_Projects_PluginTeste_Plugins_PSOnScreenControllerOverlay_Source_PSOnScreenControllerOverlay_Public_Application_BaseInputWidget_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBaseInputWidget(UBaseInputWidget&&); \
	UBaseInputWidget(const UBaseInputWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseInputWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseInputWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBaseInputWidget) \
	NO_API virtual ~UBaseInputWidget();


#define FID_Users_rafae_Documents_Unreal_Projects_PluginTeste_Plugins_PSOnScreenControllerOverlay_Source_PSOnScreenControllerOverlay_Public_Application_BaseInputWidget_h_25_PROLOG
#define FID_Users_rafae_Documents_Unreal_Projects_PluginTeste_Plugins_PSOnScreenControllerOverlay_Source_PSOnScreenControllerOverlay_Public_Application_BaseInputWidget_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_rafae_Documents_Unreal_Projects_PluginTeste_Plugins_PSOnScreenControllerOverlay_Source_PSOnScreenControllerOverlay_Public_Application_BaseInputWidget_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_rafae_Documents_Unreal_Projects_PluginTeste_Plugins_PSOnScreenControllerOverlay_Source_PSOnScreenControllerOverlay_Public_Application_BaseInputWidget_h_28_INCLASS_NO_PURE_DECLS \
	FID_Users_rafae_Documents_Unreal_Projects_PluginTeste_Plugins_PSOnScreenControllerOverlay_Source_PSOnScreenControllerOverlay_Public_Application_BaseInputWidget_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PSONSCREENCONTROLLEROVERLAY_API UClass* StaticClass<class UBaseInputWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_rafae_Documents_Unreal_Projects_PluginTeste_Plugins_PSOnScreenControllerOverlay_Source_PSOnScreenControllerOverlay_Public_Application_BaseInputWidget_h


#define FOREACH_ENUM_EDUALSENSEMODEL(op) \
	op(EDualSenseModel::Default) \
	op(EDualSenseModel::CosmicRed) \
	op(EDualSenseModel::MidnightBlack) \
	op(EDualSenseModel::StarlightBlue) \
	op(EDualSenseModel::NovaPink) \
	op(EDualSenseModel::GalacticPurple) 

enum class EDualSenseModel : uint8;
template<> struct TIsUEnumClass<EDualSenseModel> { enum { Value = true }; };
template<> PSONSCREENCONTROLLEROVERLAY_API UEnum* StaticEnum<EDualSenseModel>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
