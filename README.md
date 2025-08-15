# DualSense Overlay Widget for Unreal Engine 5.2 ~ 5.6

![GitHub Release](https://img.shields.io/github/v/release/rafaelvaloto/DualsenseOverlayUnreal)
![GitHub License](https://img.shields.io/github/license/rafaelvaloto/DualsenseOverlayUnreal)
![GitHub Issues or Pull Requests](https://img.shields.io/github/issues/rafaelvaloto/DualsenseOverlayUnreal)

The **DualSenseOnScreenOverlay** is a versatile and customizable widget for Unreal Engine, designed to seamlessly adapt to various screen sizes and resolutions.

It offers extensive compatibility with multiple DualSense controller models, providing flexible options to enhance integration and user interaction. 

This widget is ideal for developers looking to implement responsive and dynamic overlays with DualSense support directly within Unreal Engine projects.


> **Note:** No need to configure the buttons; they are already mapped to the default gamepad layout.
>
> You can also use the [ Windows Dualsense Unreal ](https://github.com/rafaelvaloto/WindowsDualsenseUnreal) plugin for Unreal for better compatibility


# Install Plugin on Fab

You can install the plugin directly from the official page on Fab. Click the link below to access the page:

### [Links for installation](#Install-on-FAB-official-page-plugin)

# Usage Via Blueprint

![](Images/DualsenseWidget.png)

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

# Install on FAB official page plugin ![GitHub Release](https://img.shields.io/github/v/release/rafaelvaloto/DualsenseOverlayUnreal)

To install this plugin directly via FAB (Official Source), follow the steps below:

1. **Access the plugin's official page on FAB**  
   Go to the official plugin page [by clicking here](https://fab.com/s/3892fa15cfa1).

3. **Install the Plugin**
   - On the plugin page, click the **Install** or **Add to Project** button (depending on the FAB interface).
   - Choose your Unreal Engine project where the plugin will be used, or simply download it for manual setup.

4. **Configure in Unreal Engine**
   - Open your project in Unreal Engine.
   - Go to the **Plugins** tab under `Edit > Plugins`.
   - Search for `Windows DualSense Plugin` in the list and enable it if necessary.
   - Restart the project to apply the changes.


# Manual Installation ![GitHub Release](https://img.shields.io/github/v/release/rafaelvaloto/DualsenseOverlayUnreal)

[Download plugin UE_Version ](https://github.com/rafaelvaloto/DualsenseOverlayUnreal/releases/)

Installing the Plugin in the Project's Directory 

### Steps:

Here’s a brief outline of the installation and compilation steps shown in the video:

1. Create a new Unreal Engine project.
   - Navigate to the directory where your Unreal project is located. The default location is typically:
   -      C:\Users\<User>\Documents\Unreal Projects\<ProjectName>\Plugins


2. Copy the extracted plugin folder to your project's `Plugins` directory:
   -      C:\Users\<User>\Documents\Unreal Projects\<ProjectName>\Plugins

**Note**: If the `Plugins` folder does not exist, create it manually in your project's root folder.

3. Activate the Plugin:
   - Go to the **Plugins** section in Unreal Engine:
   -      Edit > Plugins > DualsenseOverlayUnreal

- Enable the plugin if it is not already active.
4. **Restart the Unreal Editor**:
   - After enabling the plugin, close and restart the Unreal Editor to apply the changes.

## Make the Plugin Available for All Projects

If you want to make the plugin available for all Unreal Engine projects, follow these steps:

1. **Compile the Plugin**:
   - Open the Unreal Editor with a project where the plugin is integrated.
   - Navigate to the **Plugins** section:
   -      Edit > Plugins > DualsenseOverlayUnreal
- Click on the **Package** button for the plugin. This will generate the compiled files needed.

2. **Move the Compiled Plugin**:
   - Once the plugin is successfully compiled, navigate to the output directory where the packaged files were generated (typically inside your project directory).
   - Copy the compiled plugin files and move them to the following directory:
   -      C:\Program Files\Epic Games\UE_{Version}\Engine\Plugins


3. **Access the Plugin From Any Project**:
   - Now the plugin is installed globally for all Unreal Engine Version projects. You can enable it in any project directly from the Unreal Editor's **Plugins** menu.



## Contributions
Thanks to,
[Gamepad-Asset-Pack](https://github.com/AL2009man/Gamepad-Asset-Pack) for their valuable assets.
