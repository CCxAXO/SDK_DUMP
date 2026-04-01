// Enum PBIK.EPBIKLimitType
enum class EPBIKLimitType : uint8 {
	Free = 0,
	Limited = 1,
	Locked = 2,
	EPBIKLimitType_MAX = 3
};

// Enum PBIK.EPBIKRootBehavior
enum class EPBIKRootBehavior : uint8 {
	PrePull = 0,
	PinToInput = 1,
	Free = 2,
	EPBIKRootBehavior_MAX = 3
};

// ScriptStruct PBIK.PBIKBoneSetting
// Size: 0x58 (Inherited: 0x00)
struct FPBIKBoneSetting {
	struct FName bone; // 0x00(0x0c)
	float RotationStiffness; // 0x0c(0x04)
	float PositionStiffness; // 0x10(0x04)
	enum class EPBIKLimitType X; // 0x14(0x01)
	char pad_15[0x3]; // 0x15(0x03)
	float MinX; // 0x18(0x04)
	float MaxX; // 0x1c(0x04)
	enum class EPBIKLimitType Y; // 0x20(0x01)
	char pad_21[0x3]; // 0x21(0x03)
	float MinY; // 0x24(0x04)
	float MaxY; // 0x28(0x04)
	enum class EPBIKLimitType Z; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
	float MinZ; // 0x30(0x04)
	float MaxZ; // 0x34(0x04)
	bool bUsePreferredAngles; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct FVector PreferredAngles; // 0x40(0x18)
};

// ScriptStruct PBIK.RootPrePullSettings
// Size: 0x20 (Inherited: 0x00)
struct FRootPrePullSettings {
	float RotationAlpha; // 0x00(0x04)
	float RotationAlphaX; // 0x04(0x04)
	float RotationAlphaY; // 0x08(0x04)
	float RotationAlphaZ; // 0x0c(0x04)
	float PositionAlpha; // 0x10(0x04)
	float PositionAlphaX; // 0x14(0x04)
	float PositionAlphaY; // 0x18(0x04)
	float PositionAlphaZ; // 0x1c(0x04)
};

// ScriptStruct PBIK.PBIKSolverSettings
// Size: 0x3c (Inherited: 0x00)
struct FPBIKSolverSettings {
	int32_t Iterations; // 0x00(0x04)
	float MassMultiplier; // 0x04(0x04)
	bool bAllowStretch; // 0x08(0x01)
	enum class EPBIKRootBehavior RootBehavior; // 0x09(0x01)
	char pad_A[0x2]; // 0x0a(0x02)
	struct FRootPrePullSettings PrePullRootSettings; // 0x0c(0x20)
	float GlobalPullChainAlpha; // 0x2c(0x04)
	float MaxAngle; // 0x30(0x04)
	float OverRelaxation; // 0x34(0x04)
	bool bStartSolveFromInputPose; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
};

// ScriptStruct PBIK.PBIKSolver
// Size: 0x68 (Inherited: 0x00)
struct FPBIKSolver {
	char pad_0[0x68]; // 0x00(0x68)
};

// ScriptStruct PBIK.PBIKDebug
// Size: 0x08 (Inherited: 0x00)
struct FPBIKDebug {
	float DrawScale; // 0x00(0x04)
	bool bDrawDebug; // 0x04(0x01)
	char pad_5[0x3]; // 0x05(0x03)
};

// ScriptStruct PBIK.PBIKEffector
// Size: 0x90 (Inherited: 0x00)
struct FPBIKEffector {
	struct FName bone; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FTransform Transform; // 0x10(0x60)
	float PositionAlpha; // 0x70(0x04)
	float RotationAlpha; // 0x74(0x04)
	float StrengthAlpha; // 0x78(0x04)
	float PullChainAlpha; // 0x7c(0x04)
	float PinRotation; // 0x80(0x04)
	char pad_84[0xc]; // 0x84(0x0c)
};

// ScriptStruct PBIK.PBIKWorkData
// Size: 0x90 (Inherited: 0x00)
struct FPBIKWorkData {
	bool bNeedsInit; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	uint32_t HashInitializedWith; // 0x04(0x04)
	struct TArray<int32_t> BoneSettingToSolverBoneIndex; // 0x08(0x10)
	struct TArray<int32_t> SolverBoneToElementIndex; // 0x18(0x10)
	struct FPBIKSolver Solver; // 0x28(0x68)
};

// ScriptStruct PBIK.RigUnit_PBIK
// Size: 0x2a0 (Inherited: 0x170)
struct FRigUnit_PBIK : FRigUnit_HighlevelBaseMutable {
	struct FName Root; // 0x170(0x0c)
	char pad_17C[0x4]; // 0x17c(0x04)
	struct TArray<struct FPBIKEffector> Effectors; // 0x180(0x10)
	struct TArray<int32_t> EffectorSolverIndices; // 0x190(0x10)
	struct TArray<struct FPBIKBoneSetting> BoneSettings; // 0x1a0(0x10)
	struct TArray<struct FName> ExcludedBones; // 0x1b0(0x10)
	struct FPBIKSolverSettings Settings; // 0x1c0(0x3c)
	struct FPBIKDebug Debug; // 0x1fc(0x08)
	char pad_204[0x4]; // 0x204(0x04)
	struct FPBIKWorkData WorkData; // 0x208(0x90)
	char pad_298[0x8]; // 0x298(0x08)
};

