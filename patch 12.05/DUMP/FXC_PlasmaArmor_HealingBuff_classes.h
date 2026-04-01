// BlueprintGeneratedClass FXC_PlasmaArmor_HealingBuff.FXC_PlasmaArmor_HealingBuff_C
// Size: 0x638 (Inherited: 0x620)
struct AFXC_PlasmaArmor_HealingBuff_C : AEffectContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x620(0x08)
	struct UParticleSystemComponent* InWorldHealingEffects; // 0x628(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x630(0x08)

	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function FXC_PlasmaArmor_HealingBuff.FXC_PlasmaArmor_HealingBuff_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_FXC_PlasmaArmor_HealingBuff(int32_t EntryPoint); // Function FXC_PlasmaArmor_HealingBuff.FXC_PlasmaArmor_HealingBuff_C.ExecuteUbergraph_FXC_PlasmaArmor_HealingBuff // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

