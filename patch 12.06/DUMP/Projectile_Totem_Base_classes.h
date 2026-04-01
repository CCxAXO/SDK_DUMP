// BlueprintGeneratedClass Projectile_Totem_Base.Projectile_Totem_Base_C
// Size: 0x668 (Inherited: 0x650)
struct AProjectile_Totem_Base_C : AProjectile_TossBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x650(0x08)
	struct UProjectileBounceComponent* ProjectileBounce; // 0x658(0x08)
	struct UProjectileStopOnFloorComponent* ProjectileStopOnFloor; // 0x660(0x08)

	void ReceiveBeginPlay(); // Function Projectile_Totem_Base.Projectile_Totem_Base_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void Custom_OnStop(); // Function Projectile_Totem_Base.Projectile_Totem_Base_C.Custom_OnStop // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_Projectile_Totem_Base(int32_t EntryPoint); // Function Projectile_Totem_Base.Projectile_Totem_Base_C.ExecuteUbergraph_Projectile_Totem_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

