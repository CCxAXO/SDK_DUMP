// BlueprintGeneratedClass FXC_SpeedBoostOrb_Applied.FXC_SpeedBoostOrb_Applied_C
// Size: 0x660 (Inherited: 0x630)
struct AFXC_SpeedBoostOrb_Applied_C : AEffectContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x630(0x08)
	struct UComp_FXC_AudioBasic_C* Comp_FXC_AudioBasic_Expired; // 0x638(0x08)
	struct UComp_FXC_AudioBasic_C* Comp_FXC_AudioBasic_Granted; // 0x640(0x08)
	struct UComp_FXC_SpawnParticle_ShooterCharacter_C* Comp_FXC_SpawnParticle_ShooterCharacter; // 0x648(0x08)
	struct UComp_FXC_HUD_Particle_C* Comp_FXC_HUD_Particle; // 0x650(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x658(0x08)

	void StopEffect(enum class EStopEffectType StopEffectType); // Function FXC_SpeedBoostOrb_Applied.FXC_SpeedBoostOrb_Applied_C.StopEffect // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_FXC_SpeedBoostOrb_Applied(int32_t EntryPoint); // Function FXC_SpeedBoostOrb_Applied.FXC_SpeedBoostOrb_Applied_C.ExecuteUbergraph_FXC_SpeedBoostOrb_Applied // (Final|UbergraphFunction) // @ game+0x1b42740
};

