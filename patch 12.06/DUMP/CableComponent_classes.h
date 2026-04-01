// Class CableComponent.CableActor
// Size: 0x468 (Inherited: 0x460)
struct ACableActor : AActor {
	struct UCableComponent* CableComponent; // 0x460(0x08)
};

// Class CableComponent.CableComponent
// Size: 0x7a0 (Inherited: 0x6e0)
struct UCableComponent : UMeshComponent {
	bool bAttachStart; // 0x6d8(0x01)
	bool bAttachEnd; // 0x6d9(0x01)
	struct FComponentReference AttachEndTo; // 0x6e0(0x30)
	struct FName AttachEndToSocketName; // 0x710(0x0c)
	char pad_71E[0x2]; // 0x71e(0x02)
	struct FVector EndLocation; // 0x720(0x18)
	float CableLength; // 0x738(0x04)
	int32_t NumSegments; // 0x73c(0x04)
	float SubstepTime; // 0x740(0x04)
	int32_t SolverIterations; // 0x744(0x04)
	bool bEnableStiffness; // 0x748(0x01)
	bool bUseSubstepping; // 0x749(0x01)
	bool bSkipCableUpdateWhenNotVisible; // 0x74a(0x01)
	bool bSkipCableUpdateWhenNotOwnerRecentlyRendered; // 0x74b(0x01)
	bool bEnableCollision; // 0x74c(0x01)
	char pad_74D[0x3]; // 0x74d(0x03)
	float CollisionFriction; // 0x750(0x04)
	char pad_754[0x4]; // 0x754(0x04)
	struct FVector CableForce; // 0x758(0x18)
	float CableGravityScale; // 0x770(0x04)
	float CableWidth; // 0x774(0x04)
	int32_t NumSides; // 0x778(0x04)
	float TileMaterial; // 0x77c(0x04)
	char pad_780[0x20]; // 0x780(0x20)

	void SetAttachEndToComponent(struct USceneComponent* Component, struct FName SocketName); // Function CableComponent.CableComponent.SetAttachEndToComponent // (Final|Native|Public|BlueprintCallable) // @ game+0x7cc48e0
	void SetAttachEndTo(struct AActor* Actor, struct FName ComponentProperty, struct FName SocketName); // Function CableComponent.CableComponent.SetAttachEndTo // (Final|Native|Public|BlueprintCallable) // @ game+0x7cc4640
	void GetCableParticleLocations(struct TArray<struct FVector>& Locations); // Function CableComponent.CableComponent.GetCableParticleLocations // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7cc43b0
	struct USceneComponent* GetAttachedComponent(); // Function CableComponent.CableComponent.GetAttachedComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7cc4560
	struct AActor* GetAttachedActor(); // Function CableComponent.CableComponent.GetAttachedActor // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7cc4600
};

