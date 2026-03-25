// BlueprintGeneratedClass DmgType_GunBase.DmgType_GunBase_C
// Size: 0x180 (Inherited: 0x177)
struct UDmgType_GunBase_C : UDmgType_Base_C {
	char pad_177[0x1]; // 0x177(0x01)
	struct UAkAudioEvent* AudioHitEvent; // 0x178(0x08)

	void MaybeSpawnFragileEffects(struct AShooterCharacter* VictimCharacter, struct UDamageResponse* DamageResponse); // Function DmgType_GunBase.DmgType_GunBase_C.MaybeSpawnFragileEffects // (Public|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1af5410
	void MaybePlayFragileConfirm(struct AActor* HitActor, struct UDamageResponse* DamageResponse, enum class EAresHitConfirmLocality HitLocality, enum class EAresRegionalDamage RegionalDamage, bool CanSeeVictim, double FalloffMultiplier); // Function DmgType_GunBase.DmgType_GunBase_C.MaybePlayFragileConfirm // (Public|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1af5410
	void PlayHitConfirmSound(struct AShooterCharacter* FirstPersonShooterCharacter, struct AShooterCharacter* ShooterCharacterInstigator, struct AActor* HitActor, enum class EAresHitConfirmLocality HitLocality, enum class EAresRegionalDamage RegionalDamage, bool bLocalPlayerCanSeeVictim, float FalloffMultiplier, struct UDamageResponse* DamageResponse, bool bDied); // Function DmgType_GunBase.DmgType_GunBase_C.PlayHitConfirmSound // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1af5410
};

