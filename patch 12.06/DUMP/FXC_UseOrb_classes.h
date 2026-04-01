// BlueprintGeneratedClass FXC_UseOrb.FXC_UseOrb_C
// Size: 0x668 (Inherited: 0x630)
struct AFXC_UseOrb_C : AEffectContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x630(0x08)
	struct UComp_FXC_SpawnParticle_ShooterCharacter_C* Comp_FXC_SpawnParticle_ShooterCharacter; // 0x638(0x08)
	struct UComp_FXC_PlayAnimation_ShooterCharacter_C* Comp_FXC_PlayAnimation_ShooterCharacter; // 0x640(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x648(0x08)
	struct UParticleSystemComponent* OrbVFX; // 0x650(0x08)
	struct UInteractableUserComponent* InteractableUser; // 0x658(0x08)
	double UseTime; // 0x660(0x08)

	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function FXC_UseOrb.FXC_UseOrb_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void StopEffect(enum class EStopEffectType StopEffectType); // Function FXC_UseOrb.FXC_UseOrb_C.StopEffect // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ReceiveTick(float DeltaSeconds); // Function FXC_UseOrb.FXC_UseOrb_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_FXC_UseOrb(int32_t EntryPoint); // Function FXC_UseOrb.FXC_UseOrb_C.ExecuteUbergraph_FXC_UseOrb // (Final|UbergraphFunction) // @ game+0x1b42740
};

