// Copyright (c) 2025 Rafael Valoto/Publisher. All rights reserved.
// Created for: FPSOnScreenControllerOverlay - Plugin to widget overlay DualSense devices
// Planned Release Year: 2025

#pragma once

#include "Modules/ModuleManager.h"

class FPSOnScreenControllerOverlayModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
