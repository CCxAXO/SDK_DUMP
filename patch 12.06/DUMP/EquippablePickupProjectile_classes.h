// BlueprintGeneratedClass EquippablePickupProjectile.EquippablePickupProjectile_C
// Size: 0x692 (Inherited: 0x5f0)
struct AEquippablePickupProjectile_C : AAresDroppedEquippable {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5f0(0x08)
	struct UEQSWorldQueryComponent* BombResetEQS; // 0x5f8(0x08)
	struct URoundPersistenceComponent* RoundPersistence; // 0x600(0x08)
	struct UProjectileStopOnFloorComponent* ProjectileStopOnFloor; // 0x608(0x08)
	struct USphereComponent* Collision; // 0x610(0x08)
	struct USpawnActorProjectileEffectComponent* SpawnActorProjectileEffect; // 0x618(0x08)
	struct UProjectileBounceComponent* ProjectileBounce; // 0x620(0x08)
	struct UFiniteSpeedMovementComponent* FiniteSpeedMovement; // 0x628(0x08)
	struct AAresEquippable* MyEquippable_1; // 0x630(0x08)
	struct FRotator SpinSpeed; // 0x638(0x18)
	struct FVector InitialStartLocation; // 0x650(0x18)
	double BombOffMapCheckDelay_Seconds; // 0x668(0x08)
	struct UObject* BounceSound; // 0x670(0x08)
	struct FVector LastKnownOwnerWalkingLocation; // 0x678(0x18)
	bool bCanRunEQS; // 0x690(0x01)
	bool bIsInBombOutOfBoundsVolume; // 0x691(0x01)

	void UpdateIsInBombOutOfBoundsVolume(bool IsInVolume); // Function EquippablePickupProjectile.EquippablePickupProjectile_C.UpdateIsInBombOutOfBoundsVolume // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	bool isBomb(); // Function EquippablePickupProjectile.EquippablePickupProjectile_C.isBomb // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void RepositionBomb(struct FVector NewLocation); // Function EquippablePickupProjectile.EquippablePickupProjectile_C.RepositionBomb // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PlayBounceAudio(struct FHitResult& Hit, struct FVector ImpactVelocity); // Function EquippablePickupProjectile.EquippablePickupProjectile_C.PlayBounceAudio // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PlayDropAudio(); // Function EquippablePickupProjectile.EquippablePickupProjectile_C.PlayDropAudio // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void StopGunSkinVO(struct UAresAudioComponent* AresAudioComponent, struct AGun_C* Gun, struct UAudBasePawnVOComponent_C* AudBasePawnVOComponent); // Function EquippablePickupProjectile.EquippablePickupProjectile_C.StopGunSkinVO // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ReceiveBeginPlay(); // Function EquippablePickupProjectile.EquippablePickupProjectile_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__SpawnActorProjectileEffect_K2Node_ComponentBoundEvent_0_OnSpawnActorSignature__DelegateSignature(struct AActor* Actor); // Function EquippablePickupProjectile.EquippablePickupProjectile_C.BndEvt__SpawnActorProjectileEffect_K2Node_ComponentBoundEvent_0_OnSpawnActorSignature__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__ProjectileBounce_K2Node_ComponentBoundEvent_1_OnProjectileBounceDelegate__DelegateSignature(struct FHitResult& ImpactResult, struct FVector& ImpactVelocity); // Function EquippablePickupProjectile.EquippablePickupProjectile_C.BndEvt__ProjectileBounce_K2Node_ComponentBoundEvent_1_OnProjectileBounceDelegate__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1b42740
	void AuthInitialize(struct AAresEquippable* DroppedEquippable, struct FVector DropVector); // Function EquippablePickupProjectile.EquippablePickupProjectile_C.AuthInitialize // (BlueprintAuthorityOnly|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ReceiveTick(float DeltaSeconds); // Function EquippablePickupProjectile.EquippablePickupProjectile_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnResetBombEQSComplete(enum class EEnvQueryStatus Status, struct TArray<struct FVector>& Result); // Function EquippablePickupProjectile.EquippablePickupProjectile_C.OnResetBombEQSComplete // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void RE-AllowEQS(); // Function EquippablePickupProjectile.EquippablePickupProjectile_C.RE-AllowEQS // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateCollisionSettings(); // Function EquippablePickupProjectile.EquippablePickupProjectile_C.UpdateCollisionSettings // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_EquippablePickupProjectile(int32_t EntryPoint); // Function EquippablePickupProjectile.EquippablePickupProjectile_C.ExecuteUbergraph_EquippablePickupProjectile // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

