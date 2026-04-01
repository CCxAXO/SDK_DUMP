// BlueprintGeneratedClass FXC_CharacterNegatedImpact_Base.FXC_CharacterNegatedImpact_Base_C
// Size: 0x9c8 (Inherited: 0x620)
struct AFXC_CharacterNegatedImpact_Base_C : AEffectContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x620(0x08)
	struct UParticleSystemComponent* ParticleSystem; // 0x628(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x630(0x08)
	struct FRotator ParticleRotation; // 0x638(0x18)
	double ParticleScale; // 0x650(0x08)
	struct FCharacterImpactParticle Shooter Particles; // 0x658(0x90)
	struct FCharacterImpactParticle Victim Particles; // 0x6e8(0x90)
	struct FCharacterImpactParticle 3P Particles; // 0x778(0x90)
	double SplatterDistance; // 0x808(0x08)
	bool TargetIsFirstPerson; // 0x810(0x01)
	char pad_811[0x7]; // 0x811(0x07)
	struct FCharacterImpactParticle AttachedImpactParticles; // 0x818(0x90)
	bool PlayAttachedVFX; // 0x8a8(0x01)
	char pad_8A9[0x7]; // 0x8a9(0x07)
	struct AShooterCharacter* AttachedToCharacter; // 0x8b0(0x08)
	struct FExplicitFloatCurve HeadshotParticleScaleByNormalizedDamage; // 0x8b8(0x88)
	struct FExplicitFloatCurve ParticleScaleByNormalizedDamage; // 0x940(0x88)

	double GetParticleScaleMultiplier(struct UDamageResponse* Response); // Function FXC_CharacterNegatedImpact_Base.FXC_CharacterNegatedImpact_Base_C.GetParticleScaleMultiplier // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void IsTransitioningToDeathCamera(struct AShooterCharacter* DamagedCharacter, bool& output); // Function FXC_CharacterNegatedImpact_Base.FXC_CharacterNegatedImpact_Base_C.IsTransitioningToDeathCamera // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function FXC_CharacterNegatedImpact_Base.FXC_CharacterNegatedImpact_Base_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void SpawnParticle(struct FAresHitImpactParticle Particle, struct UDamageResponse* Response, bool AttachToVictim, struct UParticleSystemComponent* Particle System); // Function FXC_CharacterNegatedImpact_Base.FXC_CharacterNegatedImpact_Base_C.SpawnParticle // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SelectParticle(struct FCharacterImpactParticle Particle, struct UDamageResponse* Response, bool AttachToVictim, struct UParticleSystemComponent* ParticleSystem); // Function FXC_CharacterNegatedImpact_Base.FXC_CharacterNegatedImpact_Base_C.SelectParticle // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ResetEffect(); // Function FXC_CharacterNegatedImpact_Base.FXC_CharacterNegatedImpact_Base_C.ResetEffect // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnCharacterDeathEvent(struct AShooterCharacter* Character, struct UDamageResponse* Response); // Function FXC_CharacterNegatedImpact_Base.FXC_CharacterNegatedImpact_Base_C.OnCharacterDeathEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void DetachFromCharacter(struct AShooterCharacter* Character); // Function FXC_CharacterNegatedImpact_Base.FXC_CharacterNegatedImpact_Base_C.DetachFromCharacter // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnCharacterDestroyedEvent(struct AActor* DestroyedActor); // Function FXC_CharacterNegatedImpact_Base.FXC_CharacterNegatedImpact_Base_C.OnCharacterDestroyedEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_FXC_CharacterNegatedImpact_Base(int32_t EntryPoint); // Function FXC_CharacterNegatedImpact_Base.FXC_CharacterNegatedImpact_Base_C.ExecuteUbergraph_FXC_CharacterNegatedImpact_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

