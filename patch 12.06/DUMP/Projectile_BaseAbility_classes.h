// BlueprintGeneratedClass Projectile_BaseAbility.Projectile_BaseAbility_C
// Size: 0x62c (Inherited: 0x5d0)
struct AProjectile_BaseAbility_C : AProjectile {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5d0(0x08)
	struct UAIPerceptionStimuliSourceComponent* AIPerceptionStimuliSource; // 0x5d8(0x08)
	struct UComp_ProjectileDestruction_C* Comp_ProjectileDestruction; // 0x5e0(0x08)
	struct UCameraComponent* Camera; // 0x5e8(0x08)
	struct USpringArmComponent* ProjectileFollowSpringArm; // 0x5f0(0x08)
	struct URoundPersistenceComponent* RoundPersistence; // 0x5f8(0x08)
	struct UFiniteSpeedMovementComponent* FiniteSpeedMovement; // 0x600(0x08)
	struct USkeletalMeshComponent* ProjectileSkel; // 0x608(0x08)
	struct USphereComponent* Collision; // 0x610(0x08)
	double InitialHideTime; // 0x618(0x08)
	struct FName HiddenTag; // 0x620(0x0c)

	void ReceiveBeginPlay(); // Function Projectile_BaseAbility.Projectile_BaseAbility_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void Unhide(); // Function Projectile_BaseAbility.Projectile_BaseAbility_C.Unhide // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitializeSpringArm(); // Function Projectile_BaseAbility.Projectile_BaseAbility_C.InitializeSpringArm // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_Projectile_BaseAbility(int32_t EntryPoint); // Function Projectile_BaseAbility.Projectile_BaseAbility_C.ExecuteUbergraph_Projectile_BaseAbility // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

