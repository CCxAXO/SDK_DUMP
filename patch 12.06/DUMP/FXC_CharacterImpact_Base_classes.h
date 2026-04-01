// BlueprintGeneratedClass FXC_CharacterImpact_Base.FXC_CharacterImpact_Base_C
// Size: 0xb88 (Inherited: 0x630)
struct AFXC_CharacterImpact_Base_C : AEffectContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x630(0x08)
	struct UParticleSystemComponent* ParticleSystem; // 0x638(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x640(0x08)
	struct FRotator ParticleRotation; // 0x648(0x18)
	double ParticleScale; // 0x660(0x08)
	struct FCharacterImpactParticle Shooter Particles; // 0x668(0x90)
	struct FCharacterImpactParticle Victim Particles; // 0x6f8(0x90)
	struct FCharacterImpactParticle Non-Blood 3P Particles; // 0x788(0x90)
	struct FCharacterImpactParticle 3P Particles; // 0x818(0x90)
	double SplatterDistance; // 0x8a8(0x08)
	struct FCharacterImpactParticle Non Human Particles; // 0x8b0(0x90)
	struct FCharacterImpactParticle Non Blood Particles; // 0x940(0x90)
	bool bIsSpawnedAndLocallyControlled; // 0x9d0(0x01)
	bool TargetMakesBloodSplatters; // 0x9d1(0x01)
	bool TargetIsFirstPerson; // 0x9d2(0x01)
	char pad_9D3[0x5]; // 0x9d3(0x05)
	struct FCharacterImpactParticle AttachedImpactParticles; // 0x9d8(0x90)
	bool PlayAttachedVFX; // 0xa68(0x01)
	char pad_A69[0x7]; // 0xa69(0x07)
	struct AShooterCharacter* AttachedToCharacter; // 0xa70(0x08)
	struct FExplicitFloatCurve HeadshotParticleScaleByNormalizedDamage; // 0xa78(0x88)
	struct FExplicitFloatCurve ParticleScaleByNormalizedDamage; // 0xb00(0x88)

	double GetParticleScaleMultiplier(struct UDamageResponse* Response); // Function FXC_CharacterImpact_Base.FXC_CharacterImpact_Base_C.GetParticleScaleMultiplier // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void IsTransitioningToDeathCamera(struct AShooterCharacter* DamagedCharacter, bool& output); // Function FXC_CharacterImpact_Base.FXC_CharacterImpact_Base_C.IsTransitioningToDeathCamera // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void MaybePlayFragileEffects(struct UDamageResponse* DamageResponse); // Function FXC_CharacterImpact_Base.FXC_CharacterImpact_Base_C.MaybePlayFragileEffects // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function FXC_CharacterImpact_Base.FXC_CharacterImpact_Base_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void SpawnParticle(struct FAresHitImpactParticle Particle, struct UDamageResponse* Response, bool AttachToVictim, struct UParticleSystemComponent* Particle System); // Function FXC_CharacterImpact_Base.FXC_CharacterImpact_Base_C.SpawnParticle // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SelectParticle(struct FCharacterImpactParticle Particle, struct UDamageResponse* Response, bool AttachToVictim, struct UParticleSystemComponent* ParticleSystem); // Function FXC_CharacterImpact_Base.FXC_CharacterImpact_Base_C.SelectParticle // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ResetEffect(); // Function FXC_CharacterImpact_Base.FXC_CharacterImpact_Base_C.ResetEffect // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnCharacterDeathEvent(struct AShooterCharacter* Character, struct UDamageResponse* Response); // Function FXC_CharacterImpact_Base.FXC_CharacterImpact_Base_C.OnCharacterDeathEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void DetachFromCharacter(struct AShooterCharacter* Character); // Function FXC_CharacterImpact_Base.FXC_CharacterImpact_Base_C.DetachFromCharacter // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnCharacterDestroyedEvent(struct AActor* DestroyedActor); // Function FXC_CharacterImpact_Base.FXC_CharacterImpact_Base_C.OnCharacterDestroyedEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_FXC_CharacterImpact_Base(int32_t EntryPoint); // Function FXC_CharacterImpact_Base.FXC_CharacterImpact_Base_C.ExecuteUbergraph_FXC_CharacterImpact_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

