using UnrealBuildTool;

public class TESTEditor : ModuleRules
{
    public TESTEditor(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[]
        {
            "Core"
        });

        PrivateDependencyModuleNames.AddRange(new string[]
        {
            "CoreUObject",
            "Engine",
            "UnrealEd",
            "Slate",
            "SlateCore",
            "Projects",
            "InputCore",
            "EditorStyle",
            "LevelEditor",
            "ToolMenus",
            "TEST"
        });
    }
}
