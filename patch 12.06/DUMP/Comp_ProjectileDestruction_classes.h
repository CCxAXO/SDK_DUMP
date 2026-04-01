// BlueprintGeneratedClass Comp_ProjectileDestruction.Comp_ProjectileDestruction_C
// Size: 0x1b8 (Inherited: 0x1a8)
struct UComp_ProjectileDestruction_C : UDestructionComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1a8(0x08)
	struct AProjectile* OwningProjectile; // 0x1b0(0x08)

	void ReceiveBeginPlay(); // Function Comp_ProjectileDestruction.Comp_ProjectileDestruction_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnPreDestructEvent(enum class EDestructionType DestructionType, struct UDestructionComponent* DestructionComponent, struct AActor* DamageSource); // Function Comp_ProjectileDestruction.Comp_ProjectileDestruction_C.OnPreDestructEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_Comp_ProjectileDestruction(int32_t EntryPoint); // Function Comp_ProjectileDestruction.Comp_ProjectileDestruction_C.ExecuteUbergraph_Comp_ProjectileDestruction // (Final|UbergraphFunction) // @ game+0x1b42740
};

