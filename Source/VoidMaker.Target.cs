using UnrealBuildTool;

public class VoidMakerTarget : TargetRules {
	public VoidMakerTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange(new string[] {
			"PROA34",
		});
	}
}
