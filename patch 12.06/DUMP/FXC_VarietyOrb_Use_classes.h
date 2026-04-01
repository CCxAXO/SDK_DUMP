// BlueprintGeneratedClass FXC_VarietyOrb_Use.FXC_VarietyOrb_Use_C
// Size: 0x680 (Inherited: 0x630)
struct AFXC_VarietyOrb_Use_C : AEffectContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x630(0x08)
	struct UComp_FXC_SpawnParticle_ShooterCharacter_C* Comp_FXC_SpawnParticle_ShooterCharacter; // 0x638(0x08)
	struct UComp_FXC_PlayAnimation_ShooterCharacter_C* Comp_FXC_PlayAnimation_ShooterCharacter; // 0x640(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x648(0x08)
	struct UParticleSystemComponent* OrbVFX; // 0x650(0x08)
	struct UInteractableUserComponent* InteractableUser; // 0x658(0x08)
	double UseTime; // 0x660(0x08)
	struct FLinearColor OrbColor; // 0x668(0x10)
	struct AVarietyCollectableOrb_C* VarietyOrb; // 0x678(0x08)

	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function FXC_VarietyOrb_Use.FXC_VarietyOrb_Use_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void StopEffect(enum class EStopEffectType StopEffectType); // Function FXC_VarietyOrb_Use.FXC_VarietyOrb_Use_C.StopEffect // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ReceiveTick(float DeltaSeconds); // Function FXC_VarietyOrb_Use.FXC_VarietyOrb_Use_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__Comp_FXC_SpawnParticle_ShooterCharacter_K2Node_ComponentBoundEvent_0_OnEmitterSpawned1P__DelegateSignature(struct UParticleSystemComponent* Emitter1P); // Function FXC_VarietyOrb_Use.FXC_VarietyOrb_Use_C.BndEvt__Comp_FXC_SpawnParticle_ShooterCharacter_K2Node_ComponentBoundEvent_0_OnEmitterSpawned1P__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__Comp_FXC_SpawnParticle_ShooterCharacter_K2Node_ComponentBoundEvent_2_OnEmitterSpawned3P__DelegateSignature(struct UParticleSystemComponent* Emitter3P); // Function FXC_VarietyOrb_Use.FXC_VarietyOrb_Use_C.BndEvt__Comp_FXC_SpawnParticle_ShooterCharacter_K2Node_ComponentBoundEvent_2_OnEmitterSpawned3P__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void Initialize Orb Color(); // Function FXC_VarietyOrb_Use.FXC_VarietyOrb_Use_C.Initialize Orb Color // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_FXC_VarietyOrb_Use(int32_t EntryPoint); // Function FXC_VarietyOrb_Use.FXC_VarietyOrb_Use_C.ExecuteUbergraph_FXC_VarietyOrb_Use // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

