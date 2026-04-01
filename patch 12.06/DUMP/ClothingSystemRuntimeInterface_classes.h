// Class ClothingSystemRuntimeInterface.ClothingAssetBase
// Size: 0x50 (Inherited: 0x30)
struct UClothingAssetBase : UObject {
	struct FString ImportedFilePath; // 0x30(0x10)
	struct FGuid AssetGuid; // 0x40(0x10)
};

// Class ClothingSystemRuntimeInterface.ClothConfigBase
// Size: 0x30 (Inherited: 0x30)
struct UClothConfigBase : UObject {
};

// Class ClothingSystemRuntimeInterface.ClothSharedSimConfigBase
// Size: 0x30 (Inherited: 0x30)
struct UClothSharedSimConfigBase : UObject {
};

// Class ClothingSystemRuntimeInterface.ClothingSimulationFactory
// Size: 0x30 (Inherited: 0x30)
struct UClothingSimulationFactory : UObject {
};

// Class ClothingSystemRuntimeInterface.ClothingInteractor
// Size: 0x38 (Inherited: 0x30)
struct UClothingInteractor : UObject {
	char pad_30[0x8]; // 0x30(0x08)
};

// Class ClothingSystemRuntimeInterface.ClothingSimulationInteractor
// Size: 0x98 (Inherited: 0x30)
struct UClothingSimulationInteractor : UObject {
	struct TMap<struct FName, struct UClothingInteractor*> ClothingInteractors; // 0x30(0x50)
	char pad_80[0x18]; // 0x80(0x18)

	void SetNumSubsteps(int32_t NumSubsteps); // Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.SetNumSubsteps // (RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x28a87d0
	void SetNumIterations(int32_t NumIterations); // Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.SetNumIterations // (RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x28a89d0
	void SetMaxNumIterations(int32_t MaxNumIterations); // Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.SetMaxNumIterations // (RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x28a88d0
	void SetAnimDriveSpringStiffness(float InStiffness); // Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.SetAnimDriveSpringStiffness // (RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x28a8c00
	void PhysicsAssetUpdated(); // Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.PhysicsAssetUpdated // (RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x28a8d30
	float GetSimulationTime(); // Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetSimulationTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x28a8710
	int32_t GetNumSubsteps(); // Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumSubsteps // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x28a8730
	int32_t GetNumKinematicParticles(); // Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumKinematicParticles // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x28a8790
	int32_t GetNumIterations(); // Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumIterations // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x28a8750
	int32_t GetNumDynamicParticles(); // Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumDynamicParticles // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x28a8770
	int32_t GetNumCloths(); // Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumCloths // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x28a87b0
	struct UClothingInteractor* GetClothingInteractor(struct FString ClothingAssetName); // Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetClothingInteractor // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x28a84d0
	void EnableGravityOverride(struct FVector& InVector); // Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.EnableGravityOverride // (RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x28a8b00
	void DisableGravityOverride(); // Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.DisableGravityOverride // (RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x28a8ad0
	void ClothConfigUpdated(); // Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.ClothConfigUpdated // (RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x28a8d00
};

// Class ClothingSystemRuntimeInterface.ClothPhysicalMeshDataBase_Legacy
// Size: 0xe8 (Inherited: 0x30)
struct UClothPhysicalMeshDataBase_Legacy : UObject {
	struct TArray<struct FVector3f> Vertices; // 0x30(0x10)
	struct TArray<struct FVector3f> Normals; // 0x40(0x10)
	struct TArray<uint32_t> Indices; // 0x50(0x10)
	struct TArray<float> InverseMasses; // 0x60(0x10)
	struct TArray<struct FClothVertBoneData> BoneData; // 0x70(0x10)
	int32_t NumFixedVerts; // 0x80(0x04)
	int32_t MaxBoneWeights; // 0x84(0x04)
	struct TArray<uint32_t> SelfCollisionIndices; // 0x88(0x10)
	char pad_98[0x50]; // 0x98(0x50)
};

