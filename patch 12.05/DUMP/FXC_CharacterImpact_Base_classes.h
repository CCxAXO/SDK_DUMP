// BlueprintGeneratedClass FXC_CharacterImpact_Base.FXC_CharacterImpact_Base_C
// Size: 0xb78 (Inherited: 0x620)
struct AFXC_CharacterImpact_Base_C : AEffectContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x620(0x08)
	struct UParticleSystemComponent* ParticleSystem; // 0x628(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x630(0x08)
	struct FRotator ParticleRotation; // 0x638(0x18)
	double ParticleScale; // 0x650(0x08)
	struct FCharacterImpactParticle Shooter Particles; // 0x658(0x90)
	struct FCharacterImpactParticle Victim Particles; // 0x6e8(0x90)
	struct FCharacterImpactParticle Non-Blood 3P Particles; // 0x778(0x90)
	struct FCharacterImpactParticle 3P Particles; // 0x808(0x90)
	double SplatterDistance; // 0x898(0x08)
	struct FCharacterImpactParticle Non Human Particles; // 0x8a0(0x90)
	struct FCharacterImpactParticle Non Blood Particles; // 0x930(0x90)
	bool bIsSpawnedAndLocallyControlled; // 0x9c0(0x01)
	bool TargetMakesBloodSplatters; // 0x9c1(0x01)
	bool TargetIsFirstPerson; // 0x9c2(0x01)
	char pad_9C3[0x5]; // 0x9c3(0x05)
	struct FCharacterImpactParticle AttachedImpactParticles; // 0x9c8(0x90)
	bool PlayAttachedVFX; // 0xa58(0x01)
	char pad_A59[0x7]; // 0xa59(0x07)
	struct AShooterCharacter* AttachedToCharacter; // 0xa60(0x08)
	struct FExplicitFloatCurve HeadshotParticleScaleByNormalizedDamage; // 0xa68(0x88)
	struct FExplicitFloatCurve ParticleScaleByNormalizedDamage; // 0xaf0(0x88)

	double GetParticleScaleMultiplier(struct UDamageResponse* Response); // Function FXC_CharacterImpact_Base.FXC_CharacterImpact_Base_C.GetParticleScaleMultiplier // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void IsTransitioningToDeathCamera(struct AShooterCharacter* DamagedCharacter, bool& output); // Function FXC_CharacterImpact_Base.FXC_CharacterImpact_Base_C.IsTransitioningToDeathCamera // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void MaybePlayFragileEffects(struct UDamageResponse* DamageResponse); // Function FXC_CharacterImpact_Base.FXC_CharacterImpact_Base_C.MaybePlayFragileEffects // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function FXC_CharacterImpact_Base.FXC_CharacterImpact_Base_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void SpawnParticle(struct FAresHitImpactParticle Particle, struct UDamageResponse* Response, bool AttachToVictim, struct UParticleSystemComponent* Particle System); // Function FXC_CharacterImpact_Base.FXC_CharacterImpact_Base_C.SpawnParticle // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SelectParticle(struct FCharacterImpactParticle Particle, struct UDamageResponse* Response, bool AttachToVictim, struct UParticleSystemComponent* ParticleSystem); // Function FXC_CharacterImpact_Base.FXC_CharacterImpact_Base_C.SelectParticle // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ResetEffect(); // Function FXC_CharacterImpact_Base.FXC_CharacterImpact_Base_C.ResetEffect // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnCharacterDeathEvent(struct AShooterCharacter* Character, struct UDamageResponse* Response); // Function FXC_CharacterImpact_Base.FXC_CharacterImpact_Base_C.OnCharacterDeathEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void DetachFromCharacter(struct AShooterCharacter* Character); // Function FXC_CharacterImpact_Base.FXC_CharacterImpact_Base_C.DetachFromCharacter // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnCharacterDestroyedEvent(struct AActor* DestroyedActor); // Function FXC_CharacterImpact_Base.FXC_CharacterImpact_Base_C.OnCharacterDestroyedEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_FXC_CharacterImpact_Base(int32_t EntryPoint); // Function FXC_CharacterImpact_Base.FXC_CharacterImpact_Base_C.ExecuteUbergraph_FXC_CharacterImpact_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

