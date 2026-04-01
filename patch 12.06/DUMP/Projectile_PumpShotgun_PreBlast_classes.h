// BlueprintGeneratedClass Projectile_PumpShotgun_PreBlast.Projectile_PumpShotgun_PreBlast_C
// Size: 0x619 (Inherited: 0x5d0)
struct AProjectile_PumpShotgun_PreBlast_C : AProjectile {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5d0(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x5d8(0x08)
	struct UWallPenetrationComponent* WallPenetrationComponent; // 0x5e0(0x08)
	struct UTaggingComponent* TaggingComponent; // 0x5e8(0x08)
	struct UHitScanMovementComponent* HitScanMovement; // 0x5f0(0x08)
	struct UTracerProjectileEffectComponent* TracerProjectileEffect; // 0x5f8(0x08)
	struct UDamageProjectileEffectComponent* DamageProjectileEffect; // 0x600(0x08)
	struct AEffectContainer* Air Burst; // 0x608(0x08)
	double AirBurstError; // 0x610(0x08)
	bool CreateAirBurst; // 0x618(0x01)

	void ReceiveBeginPlay(); // Function Projectile_PumpShotgun_PreBlast.Projectile_PumpShotgun_PreBlast_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void OnMaximumRangeReachedEvent_Event_1(); // Function Projectile_PumpShotgun_PreBlast.Projectile_PumpShotgun_PreBlast_C.OnMaximumRangeReachedEvent_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnEntranceHitEvent_Event_1(struct FHitResult& LastHitResult, struct FHitResult& EntranceHit); // Function Projectile_PumpShotgun_PreBlast.Projectile_PumpShotgun_PreBlast_C.OnEntranceHitEvent_Event_1 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void K2_OnReset(); // Function Projectile_PumpShotgun_PreBlast.Projectile_PumpShotgun_PreBlast_C.K2_OnReset // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_Projectile_PumpShotgun_PreBlast(int32_t EntryPoint); // Function Projectile_PumpShotgun_PreBlast.Projectile_PumpShotgun_PreBlast_C.ExecuteUbergraph_Projectile_PumpShotgun_PreBlast // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

