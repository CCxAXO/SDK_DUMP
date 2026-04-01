// BlueprintGeneratedClass Comp_FXC_HUD_Particle.Comp_FXC_HUD_Particle_C
// Size: 0x15b (Inherited: 0xe8)
struct UComp_FXC_HUD_Particle_C : UEffectComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe8(0x08)
	struct UParticleSystemComponent* HUD_VFX; // 0xf0(0x08)
	struct UParticleSystem* HUD_Particle_Template; // 0xf8(0x08)
	double ParticleDuration; // 0x100(0x08)
	bool AutoDestroyParticle; // 0x108(0x01)
	char pad_109[0x7]; // 0x109(0x07)
	struct FMulticastInlineDelegate HUD_ParticleCreated; // 0x110(0x10)
	bool DestroyHUD_OnFXC_Stop; // 0x120(0x01)
	char pad_121[0x7]; // 0x121(0x07)
	struct AShooterCharacter* OwningShooterCharacter; // 0x128(0x08)
	bool HUD_ParticleActive; // 0x130(0x01)
	bool StartActive; // 0x131(0x01)
	bool DestroyHUD_OnFXC_End; // 0x132(0x01)
	bool InFirstPerson; // 0x133(0x01)
	struct FName AttachSocket; // 0x134(0x0c)
	struct FVector ParticleOffset; // 0x140(0x18)
	bool UpdateVisibilityDuringTailTime; // 0x158(0x01)
	bool AlwaysStartAtBeginning; // 0x159(0x01)
	bool RenderInTargetViewMode; // 0x15a(0x01)

	void UpdateVisibility(); // Function Comp_FXC_HUD_Particle.Comp_FXC_HUD_Particle_C.UpdateVisibility // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void StopParticle(); // Function Comp_FXC_HUD_Particle.Comp_FXC_HUD_Particle_C.StopParticle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetHUD_VFX(struct UParticleSystemComponent* HUD_VFX); // Function Comp_FXC_HUD_Particle.Comp_FXC_HUD_Particle_C.SetHUD_VFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	bool ShouldBeVisible(); // Function Comp_FXC_HUD_Particle.Comp_FXC_HUD_Particle_C.ShouldBeVisible // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void CreateHUD_Particle(bool AllowFastForward); // Function Comp_FXC_HUD_Particle.Comp_FXC_HUD_Particle_C.CreateHUD_Particle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetHUD_VFX(struct UParticleSystemComponent*& HUD_VFX); // Function Comp_FXC_HUD_Particle.Comp_FXC_HUD_Particle_C.GetHUD_VFX // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function Comp_FXC_HUD_Particle.Comp_FXC_HUD_Particle_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void StopEffect(enum class EStopEffectType StopEffectType); // Function Comp_FXC_HUD_Particle.Comp_FXC_HUD_Particle_C.StopEffect // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void UpdateEffectPerspective(float CurrentTime, bool FirstPerson); // Function Comp_FXC_HUD_Particle.Comp_FXC_HUD_Particle_C.UpdateEffectPerspective // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ManualActivateHUD_Particle(); // Function Comp_FXC_HUD_Particle.Comp_FXC_HUD_Particle_C.ManualActivateHUD_Particle // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ManualDeactivateHUD_Particle(); // Function Comp_FXC_HUD_Particle.Comp_FXC_HUD_Particle_C.ManualDeactivateHUD_Particle // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ResetEffect(); // Function Comp_FXC_HUD_Particle.Comp_FXC_HUD_Particle_C.ResetEffect // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void PerspectiveChanged(struct AShooterCharacter* Character); // Function Comp_FXC_HUD_Particle.Comp_FXC_HUD_Particle_C.PerspectiveChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function Comp_FXC_HUD_Particle.Comp_FXC_HUD_Particle_C.ReceiveEndPlay // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_Comp_FXC_HUD_Particle(int32_t EntryPoint); // Function Comp_FXC_HUD_Particle.Comp_FXC_HUD_Particle_C.ExecuteUbergraph_Comp_FXC_HUD_Particle // (Final|UbergraphFunction) // @ game+0x1af5410
	void HUD_ParticleCreated__DelegateSignature(struct UParticleSystemComponent* ParticleSystem); // Function Comp_FXC_HUD_Particle.Comp_FXC_HUD_Particle_C.HUD_ParticleCreated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

