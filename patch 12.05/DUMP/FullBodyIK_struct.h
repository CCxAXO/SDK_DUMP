// Enum FullBodyIK.EFBIKBoneLimitType
enum class EFBIKBoneLimitType : uint8 {
	Free = 0,
	Limit = 1,
	Locked = 2,
	EFBIKBoneLimitType_MAX = 3
};

// Enum FullBodyIK.EPoleVectorOption
enum class EPoleVectorOption : uint8 {
	Direction = 0,
	Location = 1,
	EPoleVectorOption_MAX = 2
};

// ScriptStruct FullBodyIK.FBIKBoneLimit
// Size: 0x20 (Inherited: 0x00)
struct FFBIKBoneLimit {
	enum class EFBIKBoneLimitType LimitType_X; // 0x00(0x01)
	enum class EFBIKBoneLimitType LimitType_Y; // 0x01(0x01)
	enum class EFBIKBoneLimitType LimitType_Z; // 0x02(0x01)
	char pad_3[0x5]; // 0x03(0x05)
	struct FVector Limit; // 0x08(0x18)
};

// ScriptStruct FullBodyIK.FBIKConstraintOption
// Size: 0xa8 (Inherited: 0x00)
struct FFBIKConstraintOption {
	struct FRigElementKey Item; // 0x00(0x10)
	bool bEnabled; // 0x10(0x01)
	bool bUseStiffness; // 0x11(0x01)
	char pad_12[0x6]; // 0x12(0x06)
	struct FVector LinearStiffness; // 0x18(0x18)
	struct FVector AngularStiffness; // 0x30(0x18)
	bool bUseAngularLimit; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct FFBIKBoneLimit AngularLimit; // 0x50(0x20)
	bool bUsePoleVector; // 0x70(0x01)
	enum class EPoleVectorOption PoleVectorOption; // 0x71(0x01)
	char pad_72[0x6]; // 0x72(0x06)
	struct FVector PoleVector; // 0x78(0x18)
	struct FRotator OffsetRotation; // 0x90(0x18)
};

// ScriptStruct FullBodyIK.MotionProcessInput
// Size: 0x02 (Inherited: 0x00)
struct FMotionProcessInput {
	bool bForceEffectorRotationTarget; // 0x00(0x01)
	bool bOnlyApplyWhenReachedToTarget; // 0x01(0x01)
};

// ScriptStruct FullBodyIK.FBIKDebugOption
// Size: 0x80 (Inherited: 0x00)
struct FFBIKDebugOption {
	bool bDrawDebugHierarchy; // 0x00(0x01)
	bool bColorAngularMotionStrength; // 0x01(0x01)
	bool bColorLinearMotionStrength; // 0x02(0x01)
	bool bDrawDebugAxes; // 0x03(0x01)
	bool bDrawDebugEffector; // 0x04(0x01)
	bool bDrawDebugConstraints; // 0x05(0x01)
	char pad_6[0xa]; // 0x06(0x0a)
	struct FTransform DrawWorldOffset; // 0x10(0x60)
	float DrawSize; // 0x70(0x04)
	char pad_74[0xc]; // 0x74(0x0c)
};

// ScriptStruct FullBodyIK.SolverInput
// Size: 0x24 (Inherited: 0x00)
struct FSolverInput {
	float LinearMotionStrength; // 0x00(0x04)
	float MinLinearMotionStrength; // 0x04(0x04)
	float AngularMotionStrength; // 0x08(0x04)
	float MinAngularMotionStrength; // 0x0c(0x04)
	float DefaultTargetClamp; // 0x10(0x04)
	float Precision; // 0x14(0x04)
	float Damping; // 0x18(0x04)
	int32_t MaxIterations; // 0x1c(0x04)
	bool bUseJacobianTranspose; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
};

// ScriptStruct FullBodyIK.FBIKEndEffector
// Size: 0x60 (Inherited: 0x00)
struct FFBIKEndEffector {
	struct FRigElementKey Item; // 0x00(0x10)
	struct FVector Position; // 0x10(0x18)
	float PositionAlpha; // 0x28(0x04)
	int32_t PositionDepth; // 0x2c(0x04)
	struct FQuat Rotation; // 0x30(0x20)
	float RotationAlpha; // 0x50(0x04)
	int32_t RotationDepth; // 0x54(0x04)
	float Pull; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
};

// ScriptStruct FullBodyIK.RigUnit_FullbodyIK_WorkData
// Size: 0x198 (Inherited: 0x00)
struct FRigUnit_FullbodyIK_WorkData {
	char pad_0[0x198]; // 0x00(0x198)
};

// ScriptStruct FullBodyIK.RigUnit_FullbodyIK
// Size: 0x3f0 (Inherited: 0x170)
struct FRigUnit_FullbodyIK : FRigUnit_HighlevelBaseMutable {
	struct FRigElementKey Root; // 0x170(0x10)
	struct TArray<struct FFBIKEndEffector> Effectors; // 0x180(0x10)
	struct TArray<struct FFBIKConstraintOption> Constraints; // 0x190(0x10)
	struct FSolverInput SolverProperty; // 0x1a0(0x24)
	struct FMotionProcessInput MotionProperty; // 0x1c4(0x02)
	bool bPropagateToChildren; // 0x1c6(0x01)
	char pad_1C7[0x9]; // 0x1c7(0x09)
	struct FFBIKDebugOption DebugOption; // 0x1d0(0x80)
	struct FRigUnit_FullbodyIK_WorkData WorkData; // 0x250(0x198)
	char pad_3E8[0x8]; // 0x3e8(0x08)
};

