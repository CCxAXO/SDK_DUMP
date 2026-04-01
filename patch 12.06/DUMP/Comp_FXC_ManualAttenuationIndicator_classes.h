// BlueprintGeneratedClass Comp_FXC_ManualAttenuationIndicator.Comp_FXC_ManualAttenuationIndicator_C
// Size: 0x110 (Inherited: 0xe8)
struct UComp_FXC_ManualAttenuationIndicator_C : UEffectComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe8(0x08)
	double Radius; // 0xf0(0x08)
	enum class Enum_AttenuationVisualization AttenuationType; // 0xf8(0x01)
	char pad_F9[0x7]; // 0xf9(0x07)
	struct AShooterCharacter* CachedShooterCharacter; // 0x100(0x08)
	double VisualizationDurationOverride; // 0x108(0x08)

	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function Comp_FXC_ManualAttenuationIndicator.Comp_FXC_ManualAttenuationIndicator_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void StopEffect(enum class EStopEffectType StopEffectType); // Function Comp_FXC_ManualAttenuationIndicator.Comp_FXC_ManualAttenuationIndicator_C.StopEffect // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ResetEffect(); // Function Comp_FXC_ManualAttenuationIndicator.Comp_FXC_ManualAttenuationIndicator_C.ResetEffect // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_Comp_FXC_ManualAttenuationIndicator(int32_t EntryPoint); // Function Comp_FXC_ManualAttenuationIndicator.Comp_FXC_ManualAttenuationIndicator_C.ExecuteUbergraph_Comp_FXC_ManualAttenuationIndicator // (Final|UbergraphFunction) // @ game+0x1b42740
};

