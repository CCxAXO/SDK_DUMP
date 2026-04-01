// Enum DynamicVolume.EGroundVolumeFragmentStatus
enum class EGroundVolumeFragmentStatus : uint8 {
	AllInside = 0,
	PartiallyOutside = 1,
	PartiallyBlocked = 2,
	Invalid = 3,
	Count = 4,
	EGroundVolumeFragmentStatus_MAX = 5
};

// Enum DynamicVolume.EDynamicVolumeBuildStatus
enum class EDynamicVolumeBuildStatus : uint8 {
	BuildNotStarted = 0,
	BuildInProgress = 1,
	BuildComplete = 2,
	BuildError = 3,
	Count = 4,
	EDynamicVolumeBuildStatus_MAX = 5
};

// Enum DynamicVolume.EShapeConstraintBuildType
enum class EShapeConstraintBuildType : uint8 {
	UseAsConstraint = 0,
	BuildConstraint = 1,
	EShapeConstraintBuildType_MAX = 2
};

// Enum DynamicVolume.GroundVolumeDrawPriority
enum class GroundVolumeDrawPriority : uint8 {
	AlwaysLayerOnBottom = 0,
	DefaultLayer = 10,
	AlwaysLayerOnTop = 20,
	Custom = 30,
	GroundVolumeDrawPriority_MAX = 31
};

// ScriptStruct DynamicVolume.GroundVolumeFragment
// Size: 0xe8 (Inherited: 0x0c)
struct FGroundVolumeFragment : FFastArraySerializerItem {
	bool bIsActive; // 0x0c(0x01)
	enum class EGroundVolumeFragmentStatus Status; // 0x0d(0x01)
	char pad_E[0x2]; // 0x0e(0x02)
	struct TArray<struct FGroundVolumeExteriorLineSegment> ExteriorSegments; // 0x10(0x10)
	struct TArray<struct FVector> ConvexHullPoints; // 0x20(0x10)
	struct TArray<float> ConvexHullCeilings; // 0x30(0x10)
	struct TArray<float> ConvexHullTravelDistances; // 0x40(0x10)
	char pad_50[0x10]; // 0x50(0x10)
	struct FIntPoint GridPos; // 0x60(0x08)
	float TravelDistance; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct FBox InsideBoundingBox; // 0x70(0x38)
	struct FVector Center; // 0xa8(0x18)
	struct FVector Normal; // 0xc0(0x18)
	float Ceiling; // 0xd8(0x04)
	float Floor; // 0xdc(0x04)
	float Area; // 0xe0(0x04)
	char pad_E4[0x4]; // 0xe4(0x04)
};

// ScriptStruct DynamicVolume.GroundVolumeExteriorLineSegment
// Size: 0x02 (Inherited: 0x00)
struct FGroundVolumeExteriorLineSegment {
	char Begin; // 0x00(0x01)
	char End; // 0x01(0x01)
};

// ScriptStruct DynamicVolume.GroundVolumeFragmentArray
// Size: 0x170 (Inherited: 0x108)
struct FGroundVolumeFragmentArray : FFastArraySerializer {
	struct TArray<struct FGroundVolumeFragment> Items; // 0x108(0x10)
	char pad_118[0x58]; // 0x118(0x58)
};

