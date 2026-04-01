// Enum GeometryFramework.EDynamicMeshComponentTangentsMode
enum class EDynamicMeshComponentTangentsMode : uint8 {
	NoTangents = 0,
	AutoCalculated = 1,
	ExternallyProvided = 2,
	Default = 255,
	EDynamicMeshComponentTangentsMode_MAX = 256
};

// Enum GeometryFramework.EDynamicMeshComponentColorOverrideMode
enum class EDynamicMeshComponentColorOverrideMode : uint8 {
	None = 0,
	VertexColors = 1,
	Polygroups = 2,
	Constant = 3,
	EDynamicMeshComponentColorOverrideMode_MAX = 4
};

// Enum GeometryFramework.EDynamicMeshVertexColorTransformMode
enum class EDynamicMeshVertexColorTransformMode : uint8 {
	NoTransform = 0,
	LinearToSRGB = 1,
	SRGBToLinear = 2,
	EDynamicMeshVertexColorTransformMode_MAX = 3
};

// Enum GeometryFramework.EDynamicMeshComponentRenderUpdateMode
enum class EDynamicMeshComponentRenderUpdateMode : uint8 {
	NoUpdate = 0,
	FullUpdate = 1,
	FastUpdate = 2,
	EDynamicMeshComponentRenderUpdateMode_MAX = 3
};

// Enum GeometryFramework.EDynamicMeshChangeType
enum class EDynamicMeshChangeType : uint8 {
	GeneralEdit = 0,
	MeshChange = 1,
	MeshReplacementChange = 2,
	MeshVertexChange = 3,
	DeformationEdit = 4,
	AttributeEdit = 5,
	EDynamicMeshChangeType_MAX = 6
};

// Enum GeometryFramework.EDynamicMeshAttributeChangeFlags
enum class EDynamicMeshAttributeChangeFlags : uint8 {
	Unknown = 0,
	MeshTopology = 1,
	VertexPositions = 2,
	NormalsTangents = 4,
	VertexColors = 8,
	UVs = 16,
	TriangleGroups = 32,
	EDynamicMeshAttributeChangeFlags_MAX = 33
};

// ScriptStruct GeometryFramework.DynamicMeshChangeInfo
// Size: 0x20 (Inherited: 0x00)
struct FDynamicMeshChangeInfo {
	enum class EDynamicMeshChangeType Type; // 0x00(0x01)
	enum class EDynamicMeshAttributeChangeFlags Flags; // 0x01(0x01)
	bool bIsRevertChange; // 0x02(0x01)
	char pad_3[0x1d]; // 0x03(0x1d)
};

