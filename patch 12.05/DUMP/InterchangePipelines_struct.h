// Enum InterchangePipelines.EInterchangeForceMeshType
enum class EInterchangeForceMeshType : uint8 {
	IFMT_None = 0,
	IFMT_StaticMesh = 1,
	IFMT_SkeletalMesh = 2,
	IFMT_MAX = 3
};

// Enum InterchangePipelines.EInterchangeVertexColorImportOption
enum class EInterchangeVertexColorImportOption : uint8 {
	IVCIO_Replace = 0,
	IVCIO_Ignore = 1,
	IVCIO_Override = 2,
	IVCIO_MAX = 3
};

// Enum InterchangePipelines.EInterchangeMaterialXShaders
enum class EInterchangeMaterialXShaders : uint8 {
	StandardSurface = 0,
	StandardSurfaceTransmission = 1,
	SurfaceUnlit = 2,
	UsdPreviewSurface = 3,
	MaxShaderCount = 4,
	EInterchangeMaterialXShaders_MAX = 5
};

// Enum InterchangePipelines.EInterchangeAnimationRange
enum class EInterchangeAnimationRange : uint8 {
	Timeline = 0,
	Animated = 1,
	SetRange = 2,
	MAX = 3
};

// Enum InterchangePipelines.EInterchangeMaterialImportOption
enum class EInterchangeMaterialImportOption : uint8 {
	ImportAsMaterials = 0,
	ImportAsMaterialInstances = 1,
	EInterchangeMaterialImportOption_MAX = 2
};

// ScriptStruct InterchangePipelines.InterchangeLodSceneNodeContainer
// Size: 0x10 (Inherited: 0x00)
struct FInterchangeLodSceneNodeContainer {
	struct TArray<struct UInterchangeSceneNode*> SceneNodes; // 0x00(0x10)
};

// ScriptStruct InterchangePipelines.InterchangeMeshInstance
// Size: 0x80 (Inherited: 0x00)
struct FInterchangeMeshInstance {
	struct FString MeshInstanceUid; // 0x00(0x10)
	struct UInterchangeSceneNode* LodGroupNode; // 0x10(0x08)
	bool bReferenceSkinnedMesh; // 0x18(0x01)
	bool bReferenceMorphTarget; // 0x19(0x01)
	bool bHasMorphTargets; // 0x1a(0x01)
	char pad_1B[0x5]; // 0x1b(0x05)
	struct TMap<int32_t, struct FInterchangeLodSceneNodeContainer> SceneNodePerLodIndex; // 0x20(0x50)
	struct TArray<struct FString> ReferencingMeshGeometryUids; // 0x70(0x10)
};

// ScriptStruct InterchangePipelines.InterchangeMeshGeometry
// Size: 0x38 (Inherited: 0x00)
struct FInterchangeMeshGeometry {
	struct FString MeshUid; // 0x00(0x10)
	struct UInterchangeMeshNode* MeshNode; // 0x10(0x08)
	struct TArray<struct FString> ReferencingMeshInstanceUids; // 0x18(0x10)
	struct TArray<struct FString> AttachedSocketUids; // 0x28(0x10)
};

// ScriptStruct InterchangePipelines.InterchangePipelineMeshesUtilitiesContext
// Size: 0x05 (Inherited: 0x00)
struct FInterchangePipelineMeshesUtilitiesContext {
	bool bConvertStaticMeshToSkeletalMesh; // 0x00(0x01)
	bool bConvertSkeletalMeshToStaticMesh; // 0x01(0x01)
	bool bConvertStaticsWithMorphTargetsToSkeletals; // 0x02(0x01)
	bool bImportMeshesInBoneHierarchy; // 0x03(0x01)
	bool bQueryGeometryOnlyIfNoInstance; // 0x04(0x01)
};

