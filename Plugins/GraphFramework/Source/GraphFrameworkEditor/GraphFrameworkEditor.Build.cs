using UnrealBuildTool;

public class GraphFrameworkEditor : ModuleRules
{
    public GraphFrameworkEditor(ReadOnlyTargetRules Target) : base(Target)
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
            "InputCore",
            "Projects",
            "ToolMenus",
            "LevelEditor",
            "PropertyEditor",
            "AssetTools",
            "EditorStyle",
            "GraphFrameworkRuntime",
            "TEST"
        });
    }
}
