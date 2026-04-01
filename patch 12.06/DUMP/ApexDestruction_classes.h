// Class ApexDestruction.DestructibleActor
// Size: 0x478 (Inherited: 0x460)
struct ADestructibleActor : AActor {
	struct UDestructibleComponent* DestructibleComponent; // 0x460(0x08)
	struct FMulticastInlineDelegate OnActorFracture; // 0x468(0x10)
};

// Class ApexDestruction.DestructibleComponent
// Size: 0xae0 (Inherited: 0xa30)
struct UDestructibleComponent : USkinnedMeshComponent {
	char pad_A30[0x8]; // 0xa30(0x08)
	char bFractureEffectOverride : 1; // 0xa38(0x01)
	char pad_A38_1 : 7; // 0xa38(0x01)
	char pad_A39[0x7]; // 0xa39(0x07)
	struct TArray<struct FFractureEffect> FractureEffects; // 0xa40(0x10)
	bool bEnableHardSleeping; // 0xa50(0x01)
	char pad_A51[0x3]; // 0xa51(0x03)
	float LargeChunkThreshold; // 0xa54(0x04)
	struct FMulticastInlineDelegate OnComponentFracture; // 0xa58(0x10)
	char pad_A68[0x78]; // 0xa68(0x78)

	void SetDestructibleMesh(struct UDestructibleMesh* NewMesh); // Function ApexDestruction.DestructibleComponent.SetDestructibleMesh // (Final|Native|Public|BlueprintCallable) // @ game+0x6f3a5d0
	struct UDestructibleMesh* GetDestructibleMesh(); // Function ApexDestruction.DestructibleComponent.GetDestructibleMesh // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x6f3a550
	void ApplyRadiusDamage(float BaseDamage, struct FVector& HurtOrigin, float DamageRadius, float ImpulseStrength, bool bFullDamage); // Function ApexDestruction.DestructibleComponent.ApplyRadiusDamage // (Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x6f3a6f0
	void ApplyDamage(float DamageAmount, struct FVector& HitLocation, struct FVector& ImpulseDir, float ImpulseStrength); // Function ApexDestruction.DestructibleComponent.ApplyDamage // (Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x6f3aa80
};

// Class ApexDestruction.DestructibleFractureSettings
// Size: 0xb8 (Inherited: 0x30)
struct UDestructibleFractureSettings : UObject {
	int32_t CellSiteCount; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct FFractureMaterial FractureMaterialDesc; // 0x38(0x40)
	int32_t RandomSeed; // 0x78(0x04)
	char pad_7C[0x4]; // 0x7c(0x04)
	struct TArray<struct FVector> VoronoiSites; // 0x80(0x10)
	int32_t OriginalSubmeshCount; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)
	struct TArray<struct UMaterialInterface*> Materials; // 0x98(0x10)
	struct TArray<struct FDestructibleChunkParameters> ChunkParameters; // 0xa8(0x10)
};

// Class ApexDestruction.DestructibleMesh
// Size: 0x5a8 (Inherited: 0x4f0)
struct UDestructibleMesh : USkeletalMesh {
	struct FDestructibleParameters DefaultDestructibleParameters; // 0x4f0(0xa8)
	struct TArray<struct FFractureEffect> FractureEffects; // 0x598(0x10)
};

