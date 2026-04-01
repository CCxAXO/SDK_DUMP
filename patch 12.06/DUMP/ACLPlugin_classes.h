// Class ACLPlugin.AnimationCompressionLibraryDatabase
// Size: 0x170 (Inherited: 0x30)
struct UAnimationCompressionLibraryDatabase : UObject {
	struct TArray<char> CookedCompressedBytes; // 0x30(0x10)
	struct TArray<uint64_t> CookedAnimSequenceMappings; // 0x40(0x10)
	char pad_50[0x118]; // 0x50(0x118)
	uint32_t MaxStreamRequestSizeKB; // 0x168(0x04)
	char pad_16C[0x4]; // 0x16c(0x04)

	void SetVisualFidelity(struct UObject* WorldContextObject, struct FLatentActionInfo LatentInfo, struct UAnimationCompressionLibraryDatabase* DatabaseAsset, enum class ACLVisualFidelityChangeResult& Result, enum class ACLVisualFidelity VisualFidelity); // Function ACLPlugin.AnimationCompressionLibraryDatabase.SetVisualFidelity // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x780f5f0
	enum class ACLVisualFidelity GetVisualFidelity(struct UAnimationCompressionLibraryDatabase* DatabaseAsset); // Function ACLPlugin.AnimationCompressionLibraryDatabase.GetVisualFidelity // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x780f4f0
};

// Class ACLPlugin.AnimBoneCompressionCodec_ACLBase
// Size: 0x40 (Inherited: 0x40)
struct UAnimBoneCompressionCodec_ACLBase : UAnimBoneCompressionCodec {
};

// Class ACLPlugin.AnimBoneCompressionCodec_ACL
// Size: 0x40 (Inherited: 0x40)
struct UAnimBoneCompressionCodec_ACL : UAnimBoneCompressionCodec_ACLBase {
};

// Class ACLPlugin.AnimBoneCompressionCodec_ACLCustom
// Size: 0x40 (Inherited: 0x40)
struct UAnimBoneCompressionCodec_ACLCustom : UAnimBoneCompressionCodec_ACLBase {
};

// Class ACLPlugin.AnimBoneCompressionCodec_ACLDatabase
// Size: 0x48 (Inherited: 0x40)
struct UAnimBoneCompressionCodec_ACLDatabase : UAnimBoneCompressionCodec_ACLBase {
	struct UAnimationCompressionLibraryDatabase* DatabaseAsset; // 0x40(0x08)
};

// Class ACLPlugin.AnimBoneCompressionCodec_ACLSafe
// Size: 0x40 (Inherited: 0x40)
struct UAnimBoneCompressionCodec_ACLSafe : UAnimBoneCompressionCodec_ACLBase {
};

// Class ACLPlugin.AnimCurveCompressionCodec_ACL
// Size: 0x40 (Inherited: 0x40)
struct UAnimCurveCompressionCodec_ACL : UAnimCurveCompressionCodec {
};

