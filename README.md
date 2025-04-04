# Overlay Controllers, Dualsense Series for Unreal Engine 5.3, 5.4, and 5.5

The **DualSenseOnScreenOverlay** is a versatile and customizable widget for Unreal Engine, designed to seamlessly adapt to various screen sizes and resolutions.

It offers extensive compatibility with multiple DualSense controller models, providing flexible options to enhance integration and user interaction. 

This widget is ideal for developers looking to implement responsive and dynamic overlays with DualSense support directly within Unreal Engine projects.

> **Note:** No need to configure the buttons; they are already mapped to the default gamepad layout. 
>
> You can also use the [`WindowsDualsense`](https://github.com/rafaelvaloto/WindowsDualsenseUnreal) plugin for Unreal for better compatibility


# Usage Via Blueprints

Adding the widget directly to the character's blueprint in the BeginPlay even


![Gif](https://github.com/rafaelvaloto/DualsenseOverlayUnreal/blob/main/Images/OverlayWidgetGif.gif)



![Blueprint](https://github.com/rafaelvaloto/DualsenseOverlayUnreal/blob/main/Images/SinglePlayer.png)


# Usage Via C++


Example of creating 4 players with different widgets


``` MyGameModeBase.h ```
```

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "MyGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class PLUGINTESTE_API AMyGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
public:
	AMyGameModeBase();
	
protected:
	virtual void PostLogin(APlayerController* NewPlayer) override;
	virtual void HandleConnectedControllers(APlayerController* PlayerController);
	TSubclassOf<UUserWidget> DeviceWidgetBlueprintClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "GameMode")
	TSubclassOf<APawn> Player1PawnClass;
};

```
``` MyGameModeBase.cpp ```
```
// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameModeBase.h"

#include "Application/BaseInputWidget.h"
#include "Blueprint/UserWidget.h"
#include "Components/OverlaySlot.h"

AMyGameModeBase::AMyGameModeBase(): DeviceWidgetBlueprintClass(nullptr)
{
	static ConstructorHelpers::FClassFinder<APawn> Player(
		TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter.BP_ThirdPersonCharacter_C"));
	if (Player.Class != nullptr)
	{
		DefaultPawnClass = Player.Class;
	}
	PlayerControllerClass = APlayerController::StaticClass();
}

void AMyGameModeBase::PostLogin(APlayerController* NewPlayer)
{
	Super::PostLogin(NewPlayer);
	const int32 PlayerId = NewPlayer->GetLocalPlayer()->GetControllerId();
	
	UE_LOG(LogTemp, Warning, TEXT("Player local %d login..."), NewPlayer->GetLocalPlayer()->GetControllerId())
	if (constexpr int32 MaxPlayer = 4; NewPlayer->IsLocalController() &&  (PlayerId + 1) < MaxPlayer)
	{
		HandleConnectedControllers(NewPlayer);
	}
	
	if (!DeviceWidgetBlueprintClass)
	{
		DeviceWidgetBlueprintClass = Cast<UClass>(
			StaticLoadObject(UClass::StaticClass(),nullptr,TEXT("/PSOnScreenControllerOverlay/Blueprints/DualSenseWhiteBaseInputWidget.DualSenseWhiteBaseInputWidget_C"))
		);
		if (!DeviceWidgetBlueprintClass)
		{
			UE_LOG(LogTemp, Error, TEXT("Failed to load widget blueprint class from path: /PSOnScreenControllerOverlay/Blueprints/DualSenseWhiteBaseInputWidget.DualSenseWhiteBaseInputWidget_C"));
			return;
		}
	}

	UUserWidget* DeviceWidget = CreateWidget<UUserWidget>(NewPlayer, DeviceWidgetBlueprintClass);
	if (!DeviceWidget)
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to create widget"));
		return;
	}

	UBaseInputWidget* WidgetCasting = Cast<UBaseInputWidget>(DeviceWidget);
	if (!WidgetCasting)
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to cast widget to BaseInputWidget"));
		return;
	}

	if (PlayerId == 0)
	{
		WidgetCasting->SelectDevice(EDualSenseModel::Default);
		UE_LOG(LogTemp, Log, TEXT("Widget loading Default Player: %d"), NewPlayer->GetLocalPlayer()->GetControllerId());
	}
	else if (PlayerId == 1)
	{
		WidgetCasting->SelectDevice(EDualSenseModel::CosmicRed);
		UE_LOG(LogTemp, Log, TEXT("Widget loading CosmicRed Player:: %d"), NewPlayer->GetLocalPlayer()->GetControllerId());
	}
	else if (PlayerId == 2)
	{
		WidgetCasting->SelectDevice(EDualSenseModel::MidnightBlack);
		UE_LOG(LogTemp, Log, TEXT("Widget loading MidnightBlack Player:: %d"), NewPlayer->GetLocalPlayer()->GetControllerId());
	}
	else if (PlayerId == 3)
	{
		WidgetCasting->SelectDevice(EDualSenseModel::GalacticPurple);
		UE_LOG(LogTemp, Log, TEXT("Widget loading GalacticPurple Player: %d"), NewPlayer->GetLocalPlayer()->GetControllerId());
	}

	FInputModeGameAndUI InputMode;
	InputMode.SetWidgetToFocus(WidgetCasting->TakeWidget());
	NewPlayer->SetInputMode(InputMode);

	WidgetCasting->AddToPlayerScreen(PlayerId);
	if (UOverlaySlot* OverlaySlot = Cast<UOverlaySlot>(WidgetCasting->Slot))
	{
		OverlaySlot->SetHorizontalAlignment(HAlign_Center);
		OverlaySlot->SetVerticalAlignment(VAlign_Top);
	}
}

void AMyGameModeBase::HandleConnectedControllers(APlayerController* PlayerController)
{
	UE_LOG(LogTemp, Warning, TEXT("Registering new player..."));
	
	if (!GetWorld() || !GetGameInstance() || !PlayerController)
	{
		UE_LOG(LogTemp, Error, TEXT("GameInstance or World are not available."));
		return;
	}

	FString Error;
	UGameInstance* GameInstance = GetGameInstance();
	if (const ULocalPlayer* NewLocalPlayer = GameInstance->CreateLocalPlayer(PlayerController->GetLocalPlayer()->GetControllerId() + 1, Error, true))
	{
		UE_LOG(LogTemp, Warning, TEXT("New player created for ControllerId: %d"), NewLocalPlayer->GetControllerId());
	}
}

```

![Blueprint](https://github.com/rafaelvaloto/DualsenseOverlayUnreal/blob/main/Images/4Players.png)



# Installation
Download the compiled plugin **Windows x64**

[UE 5.3 download plugin PSOnScreenControllerOverlay_5.3.zip](PSOnScreenControllerOverlay_5.3.zip)

[UE 5.4 download plugin PSOnScreenControllerOverlay_5.4.zip](PSOnScreenControllerOverlay_5.4.zip)

[UE 5.5 download plugin PSOnScreenControllerOverlay_5.5.zip](PSOnScreenControllerOverlay_5.5.zip)


Extract the file to

```C:\Program Files\Epic Games\UE_[version]\Engine\Plugins```

# Contributions

Thanks to [Gamepad-Asset-Pack](https://github.com/AL2009man/Gamepad-Asset-Pack) for their valuable assets.
