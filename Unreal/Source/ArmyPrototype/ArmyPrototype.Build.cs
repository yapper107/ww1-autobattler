using UnrealBuildTool;
using System;
using System.IO;
using System.Linq;
using System.Text;
public class ArmyPrototype : ModuleRules
{
    public ArmyPrototype(ReadOnlyTargetRules Target) : base(Target)
    {
        // Sim translation units intentionally reuse private helper names.
        // Preserve their linkage boundaries in Unreal's builds too.
        bUseUnity = false;
        using (var Bytes = new MemoryStream())
        {
            foreach (var File in Directory.GetFiles(Path.Combine(ModuleDirectory, "Sim")).Where(P => P.EndsWith(".h") || P.EndsWith(".cpp")).OrderBy(P => Path.GetFileName(P), StringComparer.Ordinal))
            {
                var Name = Encoding.UTF8.GetBytes(Path.GetFileName(File)); Bytes.Write(Name, 0, Name.Length);
                var Content = System.IO.File.ReadAllBytes(File); Bytes.Write(Content, 0, Content.Length);
            }
            ulong Hash = 1469598103934665603UL;
            foreach (byte Value in Bytes.ToArray()) Hash = unchecked((Hash ^ Value) * 1099511628211UL);
            PublicDefinitions.Add("ARMY_BUILD_ID=\"" + Hash.ToString("x16") + "\"");
        }
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "RenderCore", "AnimationCore", "AnimGraphRuntime" });
    }
}
