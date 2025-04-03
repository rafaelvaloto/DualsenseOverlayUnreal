// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/Texture2D.h"
#include "Blueprint/UserWidget.h"
#include "BaseInputWidget.generated.h"

UENUM(BlueprintType)
enum class EDualSenseModel : uint8
{
	Default        UMETA(DisplayName = "Default"),
	CosmicRed      UMETA(DisplayName = "Cosmic Red"),
	MidnightBlack  UMETA(DisplayName = "Midnight Black"),
	StarlightBlue  UMETA(DisplayName = "Starlight Blue"),
	NovaPink       UMETA(DisplayName = "Nova Pink"),
	GalacticPurple UMETA(DisplayName = "Galactic Purple")
};


/**
 * 
 */
UCLASS(Blueprintable)
class PSONSCREENCONTROLLEROVERLAY_API UBaseInputWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	explicit UBaseInputWidget(const FObjectInitializer& ObjectInitializer);
	
	UFUNCTION(BlueprintCallable, Category = "Game Events")
	TMap<FName, bool> GetButtonStates()
	{
		return ButtonStates;
	}

	UPROPERTY(VisibleAnywhere, BlueprintGetter = GetGamepadPS_Menu, Category = "Buttons")
	bool bGamepadPS_Menu;

	UPROPERTY(VisibleAnywhere, BlueprintGetter = GetGamepadPS_Share, Category = "Buttons")
	bool bGamepadPS_Share;

	UPROPERTY(VisibleAnywhere, BlueprintGetter = GetGamepadPS_TouchButtom, Category = "Buttons")
	bool bGamepadPS_TouchButtom;

	UPROPERTY(VisibleAnywhere, BlueprintGetter = GetGamepadPS_Button, Category = "Buttons")
	bool bGamepadPS_Button;

	UPROPERTY(VisibleAnywhere, BlueprintGetter = GetGamepadPS_Mic, Category = "Buttons")
	bool bGamepadPS_Mic;
	
	UPROPERTY(VisibleAnywhere, BlueprintGetter = GetGamepadPS_PushLeftStick, Category = "Buttons")
	bool bGamepadPS_PushLeftStick;

	UPROPERTY(VisibleAnywhere, BlueprintGetter = GetGamepadPS_PushRightStick, Category = "Buttons")
	bool bGamepadPS_PushRightStick;
	
	UPROPERTY(VisibleAnywhere, BlueprintGetter = GetGamepadDPadUp, Category = "Buttons")
	bool bIsGamepadDPadUp;

	UPROPERTY(VisibleAnywhere, BlueprintGetter = GetGamepadDPadDown, Category = "Buttons")
	bool bIsGamepadDPadDown;

	UPROPERTY(VisibleAnywhere, BlueprintGetter = GetGamepadDPadLeft, Category = "Buttons")
	bool bIsGamepadDPadLeft;

	UPROPERTY(VisibleAnywhere, BlueprintGetter = GetGamepadDPadRight, Category = "Buttons")
	bool bIsGamepadDPadRight;
	
	UPROPERTY(VisibleAnywhere, BlueprintGetter = GetGamepadFaceButtonBottom, Category = "Buttons")
	bool bIsGamepadFaceButtonBottom;

	UPROPERTY(VisibleAnywhere, BlueprintGetter = GetGamepadFaceButtonTop, Category = "Buttons")
	bool bIsGamepadFaceButtonTop;
	
	UPROPERTY(VisibleAnywhere, BlueprintGetter = GetGamepadFaceButtonLeft, Category = "Buttons")
	bool bIsGamepadFaceButtonLeft;

	UPROPERTY(VisibleAnywhere, BlueprintGetter = GetGamepadFaceButtonRight, Category = "Buttons")
	bool bIsGamepadFaceButtonRight;

	UPROPERTY(VisibleAnywhere, BlueprintGetter = GetGamepadLeftShoulder, Category = "Buttons")
	bool bIsGamepadLeftShoulder;

	UPROPERTY(VisibleAnywhere, BlueprintGetter = GetGamepadRightShoulder, Category = "Buttons")
	bool bIsGamepadRightShoulder;

	UPROPERTY(VisibleAnywhere, BlueprintGetter = GetGamepadLeftTrigger, Category = "Triggers")
	bool bIsGamepadLeftTrigger;
	
	UPROPERTY(VisibleAnywhere, BlueprintGetter = GetGamepadRightTrigger, Category = "Triggers")
	bool bIsGamepadRightTrigger;

	UPROPERTY(VisibleAnywhere, BlueprintGetter = GetGamepadAnalogLeft2D, Category = "Analog")
	FVector2D BIsGamepadAnalogLeft2D;

	UPROPERTY(VisibleAnywhere, BlueprintGetter = GetGamepadAnalogRight2D, Category = "Analog")
	FVector2D BIsGamepadAnalogRight2D;

	UPROPERTY(VisibleAnywhere, BlueprintGetter = GetDeviceSelected, Category = "Device Selected")
	UTexture2D* BrushDevice;

	UFUNCTION(BlueprintGetter, Category = "Analog")
	FVector2D GetGamepadAnalogLeft2D();
	
	UFUNCTION(BlueprintGetter, Category = "Analog")
	FVector2D GetGamepadAnalogRight2D();

	UFUNCTION(BlueprintGetter, Category = "Buttoms")
	bool GetGamepadPS_Menu();

	UFUNCTION(BlueprintGetter, Category = "Buttoms")
	bool GetGamepadPS_Share();

	UFUNCTION(BlueprintGetter, Category = "Buttoms")
	bool GetGamepadPS_TouchButtom();

	UFUNCTION(BlueprintGetter, Category = "Buttoms")
	bool GetGamepadPS_Mic();

	UFUNCTION(BlueprintGetter, Category = "Buttoms")
	bool GetGamepadPS_Button();
	
	UFUNCTION(BlueprintGetter, Category = "Buttoms")
	bool GetGamepadPS_PushRightStick();

	UFUNCTION(BlueprintGetter, Category = "Buttoms")
	bool GetGamepadPS_PushLeftStick();

	UFUNCTION(BlueprintGetter, Category = "Buttons")
	bool GetGamepadDPadUp();

	UFUNCTION(BlueprintGetter, Category = "Buttons")
	bool GetGamepadDPadDown();

	UFUNCTION(BlueprintGetter, Category = "Buttons")
	bool GetGamepadDPadLeft();

	UFUNCTION(BlueprintGetter, Category = "Buttons")
	bool GetGamepadDPadRight();

	UFUNCTION(BlueprintGetter, Category = "Buttoms")
	bool GetGamepadFaceButtonBottom();
	
	UFUNCTION(BlueprintGetter, Category = "Buttoms")
	bool GetGamepadRightShoulder();

	UFUNCTION(BlueprintGetter, Category = "Buttoms")
	bool GetGamepadLeftShoulder();

	UFUNCTION(BlueprintGetter, Category = "Buttoms")
	bool GetGamepadFaceButtonTop();

	UFUNCTION(BlueprintGetter, Category = "Buttoms")
	bool GetGamepadFaceButtonLeft();

	UFUNCTION(BlueprintGetter, Category = "Buttoms")
	bool GetGamepadFaceButtonRight();

	UFUNCTION(BlueprintGetter, Category = "Triggers")
	bool GetGamepadLeftTrigger() const;
	
	UFUNCTION(BlueprintGetter, Category = "Triggers")
	bool GetGamepadRightTrigger() const;

	UFUNCTION(BlueprintCallable, Category = "UI Device Select")
	void SelectDevice(EDualSenseModel DeviceModel);

	UFUNCTION(BlueprintPure, Category = "UI Device Select")
	UTexture2D* GetDeviceSelected();
	
protected:
	UFUNCTION(BlueprintCallable, Category = "UI")
	void SetImage(UTexture2D* NewImage);
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "UI")
	TMap<EDualSenseModel, FString> Device = {
		{ EDualSenseModel::Default, TEXT("/PSOnScreenControllerOverlay/DS_Icons/DualSense_Controller_Layout_VSCView__No_Analog_Stick_.DualSense_Controller_Layout_VSCView__No_Analog_Stick_") },
		{ EDualSenseModel::CosmicRed, TEXT("/PSOnScreenControllerOverlay/DS_Icons/DualSenseCosmicRed.DualSenseCosmicRed") },
		{ EDualSenseModel::MidnightBlack, TEXT("/PSOnScreenControllerOverlay/DS_Icons/DualSenseMidnightBlack.DualSenseMidnightBlack") },
		{ EDualSenseModel::StarlightBlue, TEXT("/PSOnScreenControllerOverlay/DS_Icons/DualSenseStarlightBlue.DualSenseStarlightBlue")  },
		{ EDualSenseModel::NovaPink, TEXT("/PSOnScreenControllerOverlay/DS_Icons/DualSenseNovaPink.DualSenseNovaPink") },
		{ EDualSenseModel::GalacticPurple, TEXT("/PSOnScreenControllerOverlay/DS_Icons/DualSenseGalacticPurple.DualSenseGalacticPurple") }
	};

	float RenderGamepadLeftTrigger = 0.0f;
	float RenderGamepadRightTrigger = 0.0f;
	FVector2D RenderGamepadAnalogLeft2D = FVector2D(0.0f, 0.0f);
	FVector2D RenderGamepadAnalogRight2D = FVector2D(0.0f, 0.0f);

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Game Events")
	TMap<FName, bool> ButtonStates;

	UFUNCTION(BlueprintCallable, Category = "Game Events")
	void HandleGamepadButtonPressed(FKey PressedKey, bool bIsPressed);

	UFUNCTION()
	virtual void NativeOnInitialized() override;

	UFUNCTION()
	void HandleGamepadAnalogLeft2D(const FKey& Key, float AnalogValue);

	UFUNCTION()
	void HandleGamepadAnalogRight2D(const FKey& Key, float AnalogValue);
	
	UPROPERTY()
	bool bEnableDebugLogs_Gamepad = false;

	UPROPERTY()
	UTexture2D* InitialTexture;


	virtual FReply NativeOnKeyDown( const FGeometry& InGeometry, const FKeyEvent& InKeyEvent ) override;
	virtual FReply NativeOnKeyUp( const FGeometry& InGeometry, const FKeyEvent& InKeyEvent ) override;
	virtual FReply NativeOnAnalogValueChanged( const FGeometry& InGeometry, const FAnalogInputEvent& InAnalogEvent ) override;
};
