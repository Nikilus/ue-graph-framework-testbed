using UnrealBuildTool;
using System.Collections.Generic;

public class TESTEditorTarget : TargetRules
{
    public TESTEditorTarget(TargetInfo Target) : base(Target)
    {
        Type = TargetType.Editor;
        DefaultBuildSettings = BuildSettingsVersion.V5;
        IncludeOrderVersion = EngineIncludeOrderVersion.Latest;

        ExtraModuleNames.AddRange(new string[] { "TEST", "TESTEditor" });
    }
}
