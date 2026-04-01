// Class ClothingSystemRuntimeNv.ClothConfigNv
// Size: 0x1a8 (Inherited: 0x30)
struct UClothConfigNv : UClothConfigCommon {
	enum class EClothingWindMethodNv ClothingWindMethod; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	struct FClothConstraintSetupNv VerticalConstraint; // 0x34(0x10)
	struct FClothConstraintSetupNv HorizontalConstraint; // 0x44(0x10)
	struct FClothConstraintSetupNv BendConstraint; // 0x54(0x10)
	struct FClothConstraintSetupNv ShearConstraint; // 0x64(0x10)
	float SelfCollisionRadius; // 0x74(0x04)
	float SelfCollisionStiffness; // 0x78(0x04)
	float SelfCollisionCullScale; // 0x7c(0x04)
	struct FVector Damping; // 0x80(0x18)
	float Friction; // 0x98(0x04)
	float WindDragCoefficient; // 0x9c(0x04)
	float WindLiftCoefficient; // 0xa0(0x04)
	char pad_A4[0x4]; // 0xa4(0x04)
	struct FVector LinearDrag; // 0xa8(0x18)
	struct FVector AngularDrag; // 0xc0(0x18)
	struct FVector LinearInertiaScale; // 0xd8(0x18)
	struct FVector AngularInertiaScale; // 0xf0(0x18)
	struct FVector CentrifugalInertiaScale; // 0x108(0x18)
	float SolverFrequency; // 0x120(0x04)
	float StiffnessFrequency; // 0x124(0x04)
	float GravityScale; // 0x128(0x04)
	char pad_12C[0x4]; // 0x12c(0x04)
	struct FVector GravityOverride; // 0x130(0x18)
	bool bUseGravityOverride; // 0x148(0x01)
	char pad_149[0x3]; // 0x149(0x03)
	float TetherStiffness; // 0x14c(0x04)
	float TetherLimit; // 0x150(0x04)
	float CollisionThickness; // 0x154(0x04)
	float AnimDriveSpringStiffness; // 0x158(0x04)
	float AnimDriveDamperStiffness; // 0x15c(0x04)
	enum class EClothingWindMethod_Legacy WindMethod; // 0x160(0x01)
	char pad_161[0x3]; // 0x161(0x03)
	struct FClothConstraintSetup_Legacy VerticalConstraintConfig; // 0x164(0x10)
	struct FClothConstraintSetup_Legacy HorizontalConstraintConfig; // 0x174(0x10)
	struct FClothConstraintSetup_Legacy BendConstraintConfig; // 0x184(0x10)
	struct FClothConstraintSetup_Legacy ShearConstraintConfig; // 0x194(0x10)
	char pad_1A4[0x4]; // 0x1a4(0x04)
};

// Class ClothingSystemRuntimeNv.ClothingSimulationFactoryNv
// Size: 0x30 (Inherited: 0x30)
struct UClothingSimulationFactoryNv : UClothingSimulationFactory {
};

// Class ClothingSystemRuntimeNv.ClothingSimulationInteractorNv
// Size: 0x98 (Inherited: 0x98)
struct UClothingSimulationInteractorNv : UClothingSimulationInteractor {

	void SetAnimDriveDamperStiffness(float InStiffness); // Function ClothingSystemRuntimeNv.ClothingSimulationInteractorNv.SetAnimDriveDamperStiffness // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3e75330
};

// Class ClothingSystemRuntimeNv.ClothPhysicalMeshDataNv_Legacy
// Size: 0x128 (Inherited: 0xe8)
struct UClothPhysicalMeshDataNv_Legacy : UClothPhysicalMeshDataBase_Legacy {
	struct TArray<float> MaxDistances; // 0xe8(0x10)
	struct TArray<float> BackstopDistances; // 0xf8(0x10)
	struct TArray<float> BackstopRadiuses; // 0x108(0x10)
	struct TArray<float> AnimDriveMultipliers; // 0x118(0x10)
};

