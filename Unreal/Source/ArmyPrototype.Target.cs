using UnrealBuildTool;
public class ArmyPrototypeTarget : TargetRules
{
    public ArmyPrototypeTarget(TargetInfo Target) : base(Target)
    {
        Type = TargetType.Game;
        DefaultBuildSettings = BuildSettingsVersion.V7;
        IncludeOrderVersion = EngineIncludeOrderVersion.Unreal5_8;
        ExtraModuleNames.Add("ArmyPrototype");
    }
}
