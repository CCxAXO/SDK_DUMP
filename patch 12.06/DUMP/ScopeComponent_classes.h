// BlueprintGeneratedClass ScopeComponent.ScopeComponent_C
// Size: 0x140 (Inherited: 0xd8)
struct UScopeComponent_C : UActorComponent {
	char pad_D8[0x8]; // 0xd8(0x08)
	struct FTransform ScopeTransformComponentSpace; // 0xe0(0x60)

	void Draw Position(struct FVector Position, struct FString Name, struct FLinearColor Color); // Function ScopeComponent.ScopeComponent_C.Draw Position // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ReceivedScopeMesh(struct UMeshComponent* Mesh1PScope, struct UMeshComponent* Mesh1PGun, struct FName GunSocketName, struct FTransform& GunSocketTransform); // Function ScopeComponent.ScopeComponent_C.ReceivedScopeMesh // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

