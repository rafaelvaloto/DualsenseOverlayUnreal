// Some copyright should be here...

using UnrealBuildTool;
using System.Collections.Generic;

public class PSOnScreenControllerOverlay : ModuleRules
{
	public PSOnScreenControllerOverlay(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		
		PublicDependencyModuleNames.AddRange(new string[]
		{
			"Core",
			"InputCore",
			"UMG"
		});
			
		
		PrivateDependencyModuleNames.AddRange(new string[]
		{
			"CoreUObject",
			"Engine",
			"Slate",
			"SlateCore"
		});
		
		PublicIncludePaths.AddRange(new string[] {
			"PSOnScreenControllerOverlay/Public"
		});
		
		PrivateIncludePaths.AddRange(new string[] {
			"PSOnScreenControllerOverlay/Private"
		});
	}
}
