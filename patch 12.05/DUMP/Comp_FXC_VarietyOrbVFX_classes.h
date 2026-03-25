// BlueprintGeneratedClass Comp_FXC_VarietyOrbVFX.Comp_FXC_VarietyOrbVFX_C
// Size: 0x100 (Inherited: 0xe8)
struct UComp_FXC_VarietyOrbVFX_C : UEffectComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe8(0x08)
	struct UParticleSystem* EffectTemplate; // 0xf0(0x08)
	struct UParticleSystemComponent* OrbFX; // 0xf8(0x08)

	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function Comp_FXC_VarietyOrbVFX.Comp_FXC_VarietyOrbVFX_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void StopEffect(enum class EStopEffectType StopEffectType); // Function Comp_FXC_VarietyOrbVFX.Comp_FXC_VarietyOrbVFX_C.StopEffect // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function Comp_FXC_VarietyOrbVFX.Comp_FXC_VarietyOrbVFX_C.ReceiveEndPlay // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_Comp_FXC_VarietyOrbVFX(int32_t EntryPoint); // Function Comp_FXC_VarietyOrbVFX.Comp_FXC_VarietyOrbVFX_C.ExecuteUbergraph_Comp_FXC_VarietyOrbVFX // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

