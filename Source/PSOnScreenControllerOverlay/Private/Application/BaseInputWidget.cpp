// Copyright (c) 2025 Rafael Valoto/Publisher. All rights reserved.
// Created for: FPSOnScreenControllerOverlay - Plugin to widget overlay DualSense devices
// Planned Release Year: 2025


#include "Application/BaseInputWidget.h"
#include "Engine/Texture2D.h"

void UBaseInputWidget::NativeOnInitialized()
{
	Super::NativeOnInitialized();

	SetIsFocusable(true);
	SetFocus();
	SetKeyboardFocus();
	if (bEnableDebugLogs_Gamepad)
	{
		UE_LOG(LogTemp, Log, TEXT("Widget BaseInputWidget inicializado!"));
	}
}

FReply UBaseInputWidget::NativeOnKeyDown(const FGeometry& InGeometry, const FKeyEvent& InKeyEvent)
{
	const FKey PressedKey = InKeyEvent.GetKey(); 
	if (!PressedKey.IsGamepadKey())
	{
		SetFocus();
		SetKeyboardFocus();
		return FReply::Unhandled();
	}

	HandleGamepadButtonPressed(PressedKey, true);
	return FReply::Unhandled();
}

FReply UBaseInputWidget::NativeOnKeyUp(const FGeometry& InGeometry, const FKeyEvent& InKeyEvent)
{
	const FKey PressedKey = InKeyEvent.GetKey(); 
	if (!PressedKey.IsGamepadKey())
	{
		SetFocus();
		SetKeyboardFocus();
		return FReply::Unhandled();
	}

	HandleGamepadButtonPressed(PressedKey, false);
	return FReply::Unhandled();
}

FReply UBaseInputWidget::NativeOnAnalogValueChanged(const FGeometry& InGeometry, const FAnalogInputEvent& InAnalogEvent)
{
	const FKey Key = InAnalogEvent.GetKey();
	const float AnalogValue = InAnalogEvent.GetAnalogValue();

	if (Key.IsGamepadKey() == false)
	{
		return FReply::Unhandled();
	}
	
	if (Key == EKeys::Gamepad_LeftX || Key == EKeys::Gamepad_LeftY)
	{
		HandleGamepadAnalogLeft2D(Key, AnalogValue);
	}

	if (Key == EKeys::Gamepad_RightX || Key == EKeys::Gamepad_RightY)
	{
		HandleGamepadAnalogRight2D(Key, AnalogValue);
	}

	if (Key == EKeys::Gamepad_LeftTrigger)
	{
		RenderGamepadLeftTrigger = AnalogValue;
	}

	if (Key == EKeys::Gamepad_RightTrigger)
	{
		RenderGamepadRightTrigger = AnalogValue;
	}
	
	return FReply::Unhandled();
}

void UBaseInputWidget::HandleGamepadButtonPressed(const FKey PressedKey, bool bIsPressed)
{
	ButtonStates.Add(PressedKey.GetFName(), bIsPressed);
	if (bEnableDebugLogs_Gamepad)
	{
		UE_LOG(LogTemp, Log, TEXT("Tecla de Gamepad Pressionada: %s"), *PressedKey.ToString());
	}
}

void UBaseInputWidget::HandleGamepadAnalogLeft2D(const FKey& Key, const float AnalogValue)
{
	FVector2D LeftStickOffset;
	if (Key == EKeys::Gamepad_LeftX)
	{
		LeftStickOffset.X = -AnalogValue * -1.f;
	}
	
	if (Key == EKeys::Gamepad_LeftY)
	{
		LeftStickOffset.Y = AnalogValue * -1.f;
	}

	const float DeadZone = 0.02f;
	if (FMath::Abs(LeftStickOffset.X) < DeadZone && FMath::Abs(LeftStickOffset.Y) < DeadZone)
	{
		RenderGamepadAnalogLeft2D = FVector2D::ZeroVector;
		return;
	}

	float DeltaTime = GetWorld()->GetDeltaSeconds();
	const float InterpSpeed = 80.0f; // Controla a velocidade da interpolação
	FVector2D TargetValue = RenderGamepadAnalogLeft2D; // Valor final que você quer atingir
	FVector2D SmoothedValue = FMath::Vector2DInterpTo(LeftStickOffset, TargetValue, DeltaTime, InterpSpeed);
	RenderGamepadAnalogLeft2D = SmoothedValue * 1.f;
}

void UBaseInputWidget::HandleGamepadAnalogRight2D(const FKey& Key, const float AnalogValue)
{

	FVector2D RightStickOffset;
	if (Key == EKeys::Gamepad_RightX)
	{
		RightStickOffset.X = -AnalogValue * -1.f;
	}
	
	if (Key == EKeys::Gamepad_RightY)
	{
		RightStickOffset.Y = AnalogValue * -1.f;
	}

	const float DeadZone = 0.02f;
	if (FMath::Abs(RightStickOffset.X) < DeadZone && FMath::Abs(RightStickOffset.Y) < DeadZone)
	{
		RenderGamepadAnalogRight2D = FVector2D::ZeroVector;
		return;
	}
	
	float DeltaTime = GetWorld()->GetDeltaSeconds();
	const float InterpSpeed = 80.0f; // Controla a velocidade da interpolação
	FVector2D TargetValue = RenderGamepadAnalogRight2D; // Valor final que você quer atingir
	FVector2D SmoothedValue = FMath::Vector2DInterpTo(RightStickOffset, TargetValue, DeltaTime, InterpSpeed);
	RenderGamepadAnalogRight2D = SmoothedValue * 1.f;
}

bool UBaseInputWidget::GetGamepadPS_Menu()
{
	return ButtonStates.Contains(TEXT("PS_Menu")) ? ButtonStates[TEXT("PS_Menu")] : false;
}

bool UBaseInputWidget::GetGamepadPS_Share()
{
	return ButtonStates.Contains(TEXT("PS_Share")) ? ButtonStates[TEXT("PS_Share")] : false;
}

bool UBaseInputWidget::GetGamepadPS_TouchButtom()
{
	return ButtonStates.Contains(TEXT("PS_TouchButtom")) ? ButtonStates[TEXT("PS_TouchButtom")] : false;
}

bool UBaseInputWidget::GetGamepadPS_Mic()
{
	return ButtonStates.Contains(TEXT("PS_Mic")) ? ButtonStates[TEXT("PS_Mic")] : false;
}

bool UBaseInputWidget::GetGamepadPS_Button()
{
	return ButtonStates.Contains(TEXT("PS_Button")) ? ButtonStates[TEXT("PS_Button")] : false;
}

FVector2D UBaseInputWidget::GetGamepadAnalogLeft2D()
{
	return RenderGamepadAnalogLeft2D;
}

FVector2D UBaseInputWidget::GetGamepadAnalogRight2D()
{
	return RenderGamepadAnalogRight2D;
}

bool UBaseInputWidget::GetGamepadRightShoulder()
{
	return ButtonStates.Contains(TEXT("Gamepad_RightShoulder")) ? ButtonStates[TEXT("Gamepad_RightShoulder")] : false;
}

bool UBaseInputWidget::GetGamepadLeftShoulder()
{
	return ButtonStates.Contains(TEXT("Gamepad_LeftShoulder")) ? ButtonStates[TEXT("Gamepad_LeftShoulder")] : false;
}

bool UBaseInputWidget::GetGamepadLeftTrigger() const
{
	return RenderGamepadLeftTrigger > 0.01f;
}

bool UBaseInputWidget::GetGamepadRightTrigger() const
{
	return RenderGamepadRightTrigger > 0.01f;
}

void UBaseInputWidget::SelectDevice(EDualSenseModel DeviceModel, float Opacity)
{
	FString* FoundString = Device.Find(DeviceModel);
	if (FoundString)
	{
		UTexture2D* Texture0 = Cast<UTexture2D>(StaticLoadObject(UTexture2D::StaticClass(), nullptr, TEXT("/PSOnScreenControllerOverlay/DS_Icons/DualSense.DualSense")));
		UTexture2D* Texture1 = Cast<UTexture2D>(StaticLoadObject(UTexture2D::StaticClass(), nullptr, TEXT("/PSOnScreenControllerOverlay/DS_Icons/DualSenseNovaPink.DualSenseNovaPink")));
		UTexture2D* Texture2 = Cast<UTexture2D>(StaticLoadObject(UTexture2D::StaticClass(), nullptr, TEXT("/PSOnScreenControllerOverlay/DS_Icons/DualSenseGalacticPurple.DualSenseGalacticPurple")));
		UTexture2D* Texture3 = Cast<UTexture2D>(StaticLoadObject(UTexture2D::StaticClass(), nullptr, TEXT("/PSOnScreenControllerOverlay/DS_Icons/DualSenseMidnightBlack.DualSenseMidnightBlack")));
		UTexture2D* Texture4 = Cast<UTexture2D>(StaticLoadObject(UTexture2D::StaticClass(), nullptr, TEXT("/PSOnScreenControllerOverlay/DS_Icons/DualSenseStarlightBlue.DualSenseStarlightBlue")));
		UTexture2D* Texture5 = Cast<UTexture2D>(StaticLoadObject(UTexture2D::StaticClass(), nullptr, TEXT("/PSOnScreenControllerOverlay/DS_Icons/DualSenseCosmicRed.DualSenseCosmicRed")));
		if (!Texture0)
		{
			UE_LOG(LogTemp, Warning, TEXT("Texture0 Failed to load texture: /PSOnScreenControllerOverlay/DS_Icons/DualSense.DualSense"));
		}
		if (!Texture1)
		{
			UE_LOG(LogTemp, Warning, TEXT("Texture1 Failed to load texture: /PSOnScreenControllerOverlay/DS_Icons/DualSenseNovaPink.DualSenseNovaPink"));
		}
		if (!Texture2)
		{
			UE_LOG(LogTemp, Warning, TEXT("Texture2 Failed to load texture: /PSOnScreenControllerOverlay/DS_Icons/DualSenseGalacticPurple.DualSenseGalacticPurple"));
		}
		if (!Texture3)
		{
			UE_LOG(LogTemp, Warning, TEXT("Texture3 Failed to load texture: /PSOnScreenControllerOverlay/DS_Icons/DualSenseMidnightBlack.DualSenseMidnightBlack"));
		}
		if (!Texture4)
		{
			UE_LOG(LogTemp, Warning, TEXT("Texture4 Failed to load texture: /PSOnScreenControllerOverlay/DS_Icons/DualSenseStarlightBlue.DualSenseStarlightBlue"));
		}
		if (!Texture5)
		{
			UE_LOG(LogTemp, Warning, TEXT("Texture5 Failed to load texture: /PSOnScreenControllerOverlay/DS_Icons/DualSenseCosmicRed.DualSenseCosmicRed"));
		}

		UE_LOG(LogTemp, Log, TEXT("Device selecionado: %s"), **FoundString);
		UTexture2D* Texture = FindObject<UTexture2D>(nullptr, **FoundString);
		if (Texture)
		{
			UE_LOG(LogTemp, Log, TEXT("Textura carregada: %s"), **FoundString);


			SetImage(Texture);
			SetOpacity(Opacity);
		}
	}
}

UTexture2D* UBaseInputWidget::GetDeviceSelected()
{
	return InitialTexture;
}

float UBaseInputWidget::GetOpacity()
{
	return OpacityBrush;
}

void UBaseInputWidget::SetImage(UTexture2D* NewImage)
{
	InitialTexture = NewImage;
}

void UBaseInputWidget::SetOpacity(float NewOpacity)
{
	OpacityBrush = NewOpacity;
}

bool UBaseInputWidget::GetGamepadPS_PushLeftStick()
{
	return ButtonStates.Contains(TEXT("PS_PushLeftStick")) ? ButtonStates[TEXT("PS_PushLeftStick")] : false;
}
bool UBaseInputWidget::GetGamepadPS_PushRightStick()
{
	return ButtonStates.Contains(TEXT("PS_PushRightStick")) ? ButtonStates[TEXT("PS_PushRightStick")] : false;
}

bool UBaseInputWidget::GetGamepadDPadUp()
{
	return ButtonStates.Contains(TEXT("Gamepad_DPad_Up")) ? ButtonStates[TEXT("Gamepad_DPad_Up")] : false;
}

bool UBaseInputWidget::GetGamepadDPadDown()
{
	return ButtonStates.Contains(TEXT("Gamepad_DPad_Down")) ? ButtonStates[TEXT("Gamepad_DPad_Down")] : false;
}

bool UBaseInputWidget::GetGamepadDPadLeft()
{
	return ButtonStates.Contains(TEXT("Gamepad_DPad_Left")) ? ButtonStates[TEXT("Gamepad_DPad_Left")] : false;
}

bool UBaseInputWidget::GetGamepadDPadRight()
{
	return ButtonStates.Contains(TEXT("Gamepad_DPad_Right")) ? ButtonStates[TEXT("Gamepad_DPad_Right")] : false;
}

bool UBaseInputWidget::GetGamepadFaceButtonBottom()
{
	return ButtonStates.Contains(TEXT("Gamepad_FaceButton_Bottom")) ? ButtonStates[TEXT("Gamepad_FaceButton_Bottom")] : false;
}

bool UBaseInputWidget::GetGamepadFaceButtonTop()
{
	return ButtonStates.Contains(TEXT("Gamepad_FaceButton_Top")) ? ButtonStates[TEXT("Gamepad_FaceButton_Top")] : false;
}

bool UBaseInputWidget::GetGamepadFaceButtonLeft()
{
	return ButtonStates.Contains(TEXT("Gamepad_FaceButton_Left")) ? ButtonStates[TEXT("Gamepad_FaceButton_Left")] : false;
}

bool UBaseInputWidget::GetGamepadFaceButtonRight()
{
	return ButtonStates.Contains(TEXT("Gamepad_FaceButton_Right")) ? ButtonStates[TEXT("Gamepad_FaceButton_Right")] : false;
}
