// ScriptStruct DataflowNodes.FloatOverrideDataflowNode
// Size: 0x110 (Inherited: 0xf0)
struct FFloatOverrideDataflowNode : FDataflowNode {
	struct FName PropertyName; // 0xf0(0x0c)
	struct FName KeyName; // 0xfc(0x0c)
	float ValueOut; // 0x108(0x04)
	char pad_10C[0x4]; // 0x10c(0x04)
};

// ScriptStruct DataflowNodes.SelectionSetDataflowNode
// Size: 0x110 (Inherited: 0xf0)
struct FSelectionSetDataflowNode : FDataflowNode {
	struct FString Indices; // 0xf0(0x10)
	struct TArray<int32_t> IndicesOut; // 0x100(0x10)
};

// ScriptStruct DataflowNodes.GetSkeletalMeshDataflowNode
// Size: 0x108 (Inherited: 0xf0)
struct FGetSkeletalMeshDataflowNode : FDataflowNode {
	struct USkeletalMesh* SkeletalMesh; // 0xf0(0x08)
	struct FName PropertyName; // 0xf8(0x0c)
	char pad_104[0x4]; // 0x104(0x04)
};

// ScriptStruct DataflowNodes.GetSkeletonDataflowNode
// Size: 0x108 (Inherited: 0xf0)
struct FGetSkeletonDataflowNode : FDataflowNode {
	struct USkeleton* Skeleton; // 0xf0(0x08)
	struct FName PropertyName; // 0xf8(0x0c)
	char pad_104[0x4]; // 0x104(0x04)
};

// ScriptStruct DataflowNodes.SkeletalMeshBoneDataflowNode
// Size: 0x118 (Inherited: 0xf0)
struct FSkeletalMeshBoneDataflowNode : FDataflowNode {
	struct FName BoneName; // 0xf0(0x0c)
	char pad_FC[0x4]; // 0xfc(0x04)
	struct USkeletalMesh* SkeletalMesh; // 0x100(0x08)
	int32_t BoneIndexOut; // 0x108(0x04)
	struct FName PropertyName; // 0x10c(0x0c)
};

// ScriptStruct DataflowNodes.SkeletalMeshReferenceTransformDataflowNode
// Size: 0x160 (Inherited: 0xf0)
struct FSkeletalMeshReferenceTransformDataflowNode : FDataflowNode {
	struct USkeletalMesh* SkeletalMeshIn; // 0xf0(0x08)
	int32_t BoneIndexIn; // 0xf8(0x04)
	char pad_FC[0x4]; // 0xfc(0x04)
	struct FTransform TransformOut; // 0x100(0x60)
};

// ScriptStruct DataflowNodes.GetStaticMeshDataflowNode
// Size: 0x108 (Inherited: 0xf0)
struct FGetStaticMeshDataflowNode : FDataflowNode {
	struct UStaticMesh* StaticMesh; // 0xf0(0x08)
	struct FName PropertyName; // 0xf8(0x0c)
	char pad_104[0x4]; // 0x104(0x04)
};

