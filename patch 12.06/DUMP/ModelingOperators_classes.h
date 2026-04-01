// Class ModelingOperators.RecomputeUVsToolProperties
// Size: 0xe8 (Inherited: 0xb0)
struct URecomputeUVsToolProperties : UInteractiveToolPropertySet {
	bool bEnablePolygroupSupport; // 0xb0(0x01)
	char pad_B1[0x3]; // 0xb1(0x03)
	enum class ERecomputeUVsPropertiesIslandMode IslandGeneration; // 0xb4(0x04)
	enum class ERecomputeUVsPropertiesUnwrapType UnwrapType; // 0xb8(0x04)
	enum class ERecomputeUVsToolOrientationMode AutoRotation; // 0xbc(0x04)
	bool bPreserveIrregularity; // 0xc0(0x01)
	char pad_C1[0x3]; // 0xc1(0x03)
	int32_t SmoothingSteps; // 0xc4(0x04)
	float SmoothingAlpha; // 0xc8(0x04)
	float MergingDistortionThreshold; // 0xcc(0x04)
	float MergingAngleThreshold; // 0xd0(0x04)
	enum class ERecomputeUVsPropertiesLayoutType LayoutType; // 0xd4(0x04)
	int32_t TextureResolution; // 0xd8(0x04)
	float NormalizeScale; // 0xdc(0x04)
	bool bEnableUDIMLayout; // 0xe0(0x01)
	bool bUDIMCVAREnabled; // 0xe1(0x01)
	char pad_E2[0x6]; // 0xe2(0x06)
};

// Class ModelingOperators.UVLayoutProperties
// Size: 0xd8 (Inherited: 0xb0)
struct UUVLayoutProperties : UInteractiveToolPropertySet {
	enum class EUVLayoutType LayoutType; // 0xb0(0x04)
	int32_t TextureResolution; // 0xb4(0x04)
	float Scale; // 0xb8(0x04)
	char pad_BC[0x4]; // 0xbc(0x04)
	struct FVector2D Translation; // 0xc0(0x10)
	bool bAllowFlips; // 0xd0(0x01)
	bool bEnableUDIMLayout; // 0xd1(0x01)
	bool bUDIMCVAREnabled; // 0xd2(0x01)
	char pad_D3[0x5]; // 0xd3(0x05)
};

// Class ModelingOperators.RecomputeUVsOpFactory
// Size: 0x150 (Inherited: 0x30)
struct URecomputeUVsOpFactory : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct URecomputeUVsToolProperties* Settings; // 0x38(0x08)
	char pad_40[0x110]; // 0x40(0x110)
};

// Class ModelingOperators.UVLayoutOperatorFactory
// Size: 0x1b0 (Inherited: 0x30)
struct UUVLayoutOperatorFactory : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct UUVLayoutProperties* Settings; // 0x38(0x08)
	char pad_40[0x170]; // 0x40(0x170)
};

