// Enum GLTFExporter.EGLTFTextureImageFormat
enum class EGLTFTextureImageFormat : uint8 {
	None = 0,
	PNG = 1,
	JPEG = 2,
	EGLTFTextureImageFormat_MAX = 3
};

// Enum GLTFExporter.EGLTFMaterialVariantMode
enum class EGLTFMaterialVariantMode : uint8 {
	None = 0,
	Simple = 1,
	UseMeshData = 2,
	EGLTFMaterialVariantMode_MAX = 3
};

// Enum GLTFExporter.EGLTFMaterialBakeMode
enum class EGLTFMaterialBakeMode : uint8 {
	Disabled = 0,
	Simple = 1,
	UseMeshData = 2,
	EGLTFMaterialBakeMode_MAX = 3
};

// Enum GLTFExporter.EGLTFMaterialBakeSizePOT
enum class EGLTFMaterialBakeSizePOT : uint8 {
	POT_2 = 0,
	POT_3 = 1,
	POT_5 = 2,
	POT_9 = 3,
	POT_17 = 4,
	POT_33 = 5,
	POT_65 = 6,
	POT_129 = 7,
	POT_257 = 8,
	POT_513 = 9,
	POT_1025 = 10,
	POT_2049 = 11,
	POT_4097 = 12,
	POT_8193 = 13,
	POT_MAX = 14
};

// Enum GLTFExporter.EGLTFMaterialPropertyGroup
enum class EGLTFMaterialPropertyGroup : uint8 {
	None = 0,
	BaseColorOpacity = 1,
	MetallicRoughness = 2,
	EmissiveColor = 3,
	Normal = 4,
	AmbientOcclusion = 5,
	ClearCoatRoughness = 6,
	ClearCoatBottomNormal = 7,
	EGLTFMaterialPropertyGroup_MAX = 8
};

// ScriptStruct GLTFExporter.GLTFExportMessages
// Size: 0x30 (Inherited: 0x00)
struct FGLTFExportMessages {
	struct TArray<struct FString> Suggestions; // 0x00(0x10)
	struct TArray<struct FString> Warnings; // 0x10(0x10)
	struct TArray<struct FString> Errors; // 0x20(0x10)
};

// ScriptStruct GLTFExporter.GLTFOverrideMaterialBakeSettings
// Size: 0x06 (Inherited: 0x00)
struct FGLTFOverrideMaterialBakeSettings {
	bool bOverrideSize; // 0x00(0x01)
	enum class EGLTFMaterialBakeSizePOT Size; // 0x01(0x01)
	bool bOverrideFilter; // 0x02(0x01)
	enum class TextureFilter Filter; // 0x03(0x01)
	bool bOverrideTiling; // 0x04(0x01)
	enum class TextureAddress Tiling; // 0x05(0x01)
};

