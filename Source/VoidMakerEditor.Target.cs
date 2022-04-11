using UnrealBuildTool;

public class VoidMakerEditorTarget : TargetRules {
	public VoidMakerEditorTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange(new string[] {
			"PROA34",
		});
	}
}
