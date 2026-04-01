// BlueprintGeneratedClass FXC_CharacterNegatedImpact_Base.FXC_CharacterNegatedImpact_Base_C
// Size: 0x9d8 (Inherited: 0x630)
struct AFXC_CharacterNegatedImpact_Base_C : AEffectContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x630(0x08)
	struct UParticleSystemComponent* ParticleSystem; // 0x638(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x640(0x08)
	struct FRotator ParticleRotation; // 0x648(0x18)
	double ParticleScale; // 0x660(0x08)
	struct FCharacterImpactParticle Shooter Particles; // 0x668(0x90)
	struct FCharacterImpactParticle Victim Particles; // 0x6f8(0x90)
	struct FCharacterImpactParticle 3P Particles; // 0x788(0x90)
	double SplatterDistance; // 0x818(0x08)
	bool TargetIsFirstPerson; // 0x820(0x01)
	char pad_821[0x7]; // 0x821(0x07)
	struct FCharacterImpactParticle AttachedImpactParticles; // 0x828(0x90)
	bool PlayAttachedVFX; // 0x8b8(0x01)
	char pad_8B9[0x7]; // 0x8b9(0x07)
	struct AShooterCharacter* AttachedToCharacter; // 0x8c0(0x08)
	struct FExplicitFloatCurve HeadshotParticleScaleByNormalizedDamage; // 0x8c8(0x88)
	struct FExplicitFloatCurve ParticleScaleByNormalizedDamage; // 0x950(0x88)

	double GetParticleScaleMultiplier(struct UDamageResponse* Response); // Function FXC_CharacterNegatedImpact_Base.FXC_CharacterNegatedImpact_Base_C.GetParticleScaleMultiplier // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void IsTransitioningToDeathCamera(struct AShooterCharacter* DamagedCharacter, bool& output); // Function FXC_CharacterNegatedImpact_Base.FXC_CharacterNegatedImpact_Base_C.IsTransitioningToDeathCamera // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void StartEffect(struct AActor* Target, struct UObject* Context, float StartTime, bool FirstPerson); // Function FXC_CharacterNegatedImpact_Base.FXC_CharacterNegatedImpact_Base_C.StartEffect // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void SpawnParticle(struct FAresHitImpactParticle Particle, struct UDamageResponse* Response, bool AttachToVictim, struct UParticleSystemComponent* Particle System); // Function FXC_CharacterNegatedImpact_Base.FXC_CharacterNegatedImpact_Base_C.SpawnParticle // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SelectParticle(struct FCharacterImpactParticle Particle, struct UDamageResponse* Response, bool AttachToVictim, struct UParticleSystemComponent* ParticleSystem); // Function FXC_CharacterNegatedImpact_Base.FXC_CharacterNegatedImpact_Base_C.SelectParticle // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ResetEffect(); // Function FXC_CharacterNegatedImpact_Base.FXC_CharacterNegatedImpact_Base_C.ResetEffect // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnCharacterDeathEvent(struct AShooterCharacter* Character, struct UDamageResponse* Response); // Function FXC_CharacterNegatedImpact_Base.FXC_CharacterNegatedImpact_Base_C.OnCharacterDeathEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void DetachFromCharacter(struct AShooterCharacter* Character); // Function FXC_CharacterNegatedImpact_Base.FXC_CharacterNegatedImpact_Base_C.DetachFromCharacter // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnCharacterDestroyedEvent(struct AActor* DestroyedActor); // Function FXC_CharacterNegatedImpact_Base.FXC_CharacterNegatedImpact_Base_C.OnCharacterDestroyedEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_FXC_CharacterNegatedImpact_Base(int32_t EntryPoint); // Function FXC_CharacterNegatedImpact_Base.FXC_CharacterNegatedImpact_Base_C.ExecuteUbergraph_FXC_CharacterNegatedImpact_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

