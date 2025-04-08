# Overlay Controllers, Dualsense Series for Unreal Engine  5.4 and 5.5

The **DualSenseOnScreenOverlay** is a versatile and customizable widget for Unreal Engine, designed to seamlessly adapt to various screen sizes and resolutions.

It offers extensive compatibility with multiple DualSense controller models, providing flexible options to enhance integration and user interaction. 

This widget is ideal for developers looking to implement responsive and dynamic overlays with DualSense support directly within Unreal Engine projects.


> **Note:** No need to configure the buttons; they are already mapped to the default gamepad layout.
>
> You can also use the [`WindowsDualsense`](https://github.com/rafaelvaloto/WindowsDualsenseUnreal) plugin for Unreal for better compatibility


# Install Plugin on Fab

You can install the plugin directly from the official page on Fab. Click the link below to access the page:

[Install plugin on Fab](https://fab.com/s/3892fa15cfa1)

# Usage

[Watch the Example Video](https://1drv.ms/v/c/6c07d40187e87b76/EV9sGl0t6-VAnsWXfITYcnEBAJ1vPWZ-L0HXnCdFjkWUzg)

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



# Manual Installation
Download the compiled plugin **Windows x64**

[UE 5.4 download plugin PSOnScreenControllerOverlay_5.4.zip](PSOnScreenControllerOverlay_5.4.zip)

[UE 5.5 download plugin PSOnScreenControllerOverlay_5.5.zip](PSOnScreenControllerOverlay_5.5.zip)


Extract the file to

```C:\Program Files\Epic Games\UE_[version]\Engine\Plugins```

# Installing the Plugin in the Project's Directory

## Steps:

1. **Clone the Repository**  
   Clone the desired GitHub repository to your local machine by running the following command:
   ```bash
   git clone https://github.com/<repository-owner>/<repository-name>.git
   ```
   Replace `<repository-owner>` and `<repository-name>` with the appropriate values.

2. **Move to the Plugins Folder**  
   Move the cloned repository to your Unreal Engine project’s `Plugins` directory. If the folder does not exist, create it manually:
    - Navigate to your Unreal project’s root directory.
    - Create a folder named `Plugins`, if it doesn’t already exist.
    - Move the cloned repository folder into this newly created `Plugins` folder.

3. **Verify Plugin Installation in Unreal Engine**
    - Open your Unreal Engine project.
    - Go to the "Plugins" section under the `Edit` menu (`Edit > Plugins`).
    - Look for the new plugin in the list and enable it if it is not enabled by default.
    - Restart the Unreal Engine editor.

### Example
If you’re cloning a repository, for example, `WindowsDualsenseUnreal`:
```bash
git clone https://github.com/rafaelvaloto/WindowsDualsenseUnreal.git
```
Move the `WindowsDualsenseUnreal` folder into:



# Contributions

Thanks to [Gamepad-Asset-Pack](https://github.com/AL2009man/Gamepad-Asset-Pack) for their valuable assets.
