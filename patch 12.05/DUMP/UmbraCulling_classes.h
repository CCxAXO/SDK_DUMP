// Class UmbraCulling.UmbraPrecomputedData
// Size: 0x60 (Inherited: 0x30)
struct UUmbraPrecomputedData : UAssetUserData {
	struct TArray<uint32_t> Data; // 0x30(0x10)
	struct TArray<int32_t> TomeIndexLookup; // 0x40(0x10)
	struct TArray<int32_t> TomeVisibilityIdLookup; // 0x50(0x10)
};

// Class UmbraCulling.MapOcclusionDataProxy
// Size: 0x38 (Inherited: 0x30)
struct UMapOcclusionDataProxy : UAssetUserData {
	struct UUmbraPrecomputedData* UmbraPrecomputedData; // 0x30(0x08)
};

