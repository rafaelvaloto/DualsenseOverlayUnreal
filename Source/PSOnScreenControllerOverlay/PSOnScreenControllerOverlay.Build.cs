// Copyright (c) 2025 Rafael Valoto/Publisher. All rights reserved.
// Created for: FPSOnScreenControllerOverlay - Plugin to widget overlay DualSense devices
// Planned Release Year: 2025

using UnrealBuildTool;

[SupportedPlatforms("Win64")]
public class PSOnScreenControllerOverlay : ModuleRules
{
	public PSOnScreenControllerOverlay(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		
		if (Target.Platform != UnrealTargetPlatform.Win64)
		{
			throw new BuildException("PSOnScreenControllerOverlay not suported platform: " + Target.Platform.ToString());
		}
		
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "UMG"});

		PrivateDependencyModuleNames.AddRange(new string[]
		{
			"Slate",
			"SlateCore"
		});
		
		PublicIncludePaths.AddRange(new string[]
		{
			
		});
		
		PrivateIncludePaths.AddRange(new string[] {
		});
	}
}
