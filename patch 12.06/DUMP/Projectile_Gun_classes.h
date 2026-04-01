// BlueprintGeneratedClass Projectile_Gun.Projectile_Gun_C
// Size: 0x610 (Inherited: 0x5d0)
struct AProjectile_Gun_C : AProjectile {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5d0(0x08)
	struct UHitScanMovementComponent* HitScanMovement; // 0x5d8(0x08)
	struct UBulletWhizByComponent* BulletWhizByComponent; // 0x5e0(0x08)
	struct UTaggingComponent* TaggingComponent; // 0x5e8(0x08)
	struct UTracerProjectileEffectComponent* TracerProjectileEffectComponent; // 0x5f0(0x08)
	struct UDamageProjectileEffectComponent* DamageProjectileEffectComponent; // 0x5f8(0x08)
	struct UWallPenetrationComponent* WallPenetrationComponent; // 0x600(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x608(0x08)

	void ReceiveBeginPlay(); // Function Projectile_Gun.Projectile_Gun_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void OnStopEvent_Event_1(); // Function Projectile_Gun.Projectile_Gun_C.OnStopEvent_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_Projectile_Gun(int32_t EntryPoint); // Function Projectile_Gun.Projectile_Gun_C.ExecuteUbergraph_Projectile_Gun // (Final|UbergraphFunction) // @ game+0x1b42740
};

