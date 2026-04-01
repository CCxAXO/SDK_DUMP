// Class GLTFExporter.GLTFExportOptions
// Size: 0xa8 (Inherited: 0x30)
struct UGLTFExportOptions : UObject {
	float ExportUniformScale; // 0x30(0x04)
	bool bExportPreviewMesh; // 0x34(0x01)
	bool bSkipNearDefaultValues; // 0x35(0x01)
	bool bIncludeCopyrightNotice; // 0x36(0x01)
	bool bExportProxyMaterials; // 0x37(0x01)
	bool bExportUnlitMaterials; // 0x38(0x01)
	bool bExportClearCoatMaterials; // 0x39(0x01)
	bool bExportEmissiveStrength; // 0x3a(0x01)
	enum class EGLTFMaterialBakeMode BakeMaterialInputs; // 0x3b(0x01)
	enum class EGLTFMaterialBakeSizePOT DefaultMaterialBakeSize; // 0x3c(0x01)
	enum class TextureFilter DefaultMaterialBakeFilter; // 0x3d(0x01)
	enum class TextureAddress DefaultMaterialBakeTiling; // 0x3e(0x01)
	char pad_3F[0x1]; // 0x3f(0x01)
	struct TMap<enum class EGLTFMaterialPropertyGroup, struct FGLTFOverrideMaterialBakeSettings> DefaultInputBakeSettings; // 0x40(0x50)
	int32_t DefaultLevelOfDetail; // 0x90(0x04)
	bool bExportVertexColors; // 0x94(0x01)
	bool bExportVertexSkinWeights; // 0x95(0x01)
	bool bUseMeshQuantization; // 0x96(0x01)
	bool bExportLevelSequences; // 0x97(0x01)
	bool bExportAnimationSequences; // 0x98(0x01)
	enum class EGLTFTextureImageFormat TextureImageFormat; // 0x99(0x01)
	char pad_9A[0x2]; // 0x9a(0x02)
	int32_t TextureImageQuality; // 0x9c(0x04)
	bool bExportTextureTransforms; // 0xa0(0x01)
	bool bAdjustNormalmaps; // 0xa1(0x01)
	bool bExportHiddenInGame; // 0xa2(0x01)
	bool bExportLights; // 0xa3(0x01)
	bool bExportCameras; // 0xa4(0x01)
	enum class EGLTFMaterialVariantMode ExportMaterialVariants; // 0xa5(0x01)
	char pad_A6[0x2]; // 0xa6(0x02)

	void ResetToDefault(); // Function GLTFExporter.GLTFExportOptions.ResetToDefault // (Final|Native|Public|BlueprintCallable) // @ game+0x78afc40
};

// Class GLTFExporter.GLTFExporter
// Size: 0x80 (Inherited: 0x80)
struct UGLTFExporter : UExporter {

	bool ExportToGLTF(struct UObject* Object, struct FString FilePath, struct UGLTFExportOptions* OPTIONS, struct TSet<struct AActor*>& SelectedActors, struct FGLTFExportMessages& OutMessages); // Function GLTFExporter.GLTFExporter.ExportToGLTF // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x78c1e10
};

// Class GLTFExporter.GLTFAnimSequenceExporter
// Size: 0x80 (Inherited: 0x80)
struct UGLTFAnimSequenceExporter : UGLTFExporter {
};

// Class GLTFExporter.GLTFLevelExporter
// Size: 0x80 (Inherited: 0x80)
struct UGLTFLevelExporter : UGLTFExporter {
};

// Class GLTFExporter.GLTFLevelSequenceExporter
// Size: 0x80 (Inherited: 0x80)
struct UGLTFLevelSequenceExporter : UGLTFExporter {
};

// Class GLTFExporter.GLTFLevelVariantSetsExporter
// Size: 0x80 (Inherited: 0x80)
struct UGLTFLevelVariantSetsExporter : UGLTFExporter {
};

// Class GLTFExporter.GLTFMaterialExporter
// Size: 0x80 (Inherited: 0x80)
struct UGLTFMaterialExporter : UGLTFExporter {
};

// Class GLTFExporter.GLTFSkeletalMeshExporter
// Size: 0x80 (Inherited: 0x80)
struct UGLTFSkeletalMeshExporter : UGLTFExporter {
};

// Class GLTFExporter.GLTFStaticMeshExporter
// Size: 0x80 (Inherited: 0x80)
struct UGLTFStaticMeshExporter : UGLTFExporter {
};

// Class GLTFExporter.GLTFProxyOptions
// Size: 0x88 (Inherited: 0x30)
struct UGLTFProxyOptions : UObject {
	bool bBakeMaterialInputs; // 0x30(0x01)
	enum class EGLTFMaterialBakeSizePOT DefaultMaterialBakeSize; // 0x31(0x01)
	enum class TextureFilter DefaultMaterialBakeFilter; // 0x32(0x01)
	enum class TextureAddress DefaultMaterialBakeTiling; // 0x33(0x01)
	char pad_34[0x4]; // 0x34(0x04)
	struct TMap<enum class EGLTFMaterialPropertyGroup, struct FGLTFOverrideMaterialBakeSettings> DefaultInputBakeSettings; // 0x38(0x50)

	void ResetToDefault(); // Function GLTFExporter.GLTFProxyOptions.ResetToDefault // (Final|Native|Public|BlueprintCallable) // @ game+0x78cf170
};

// Class GLTFExporter.GLTFMaterialExportOptions
// Size: 0x90 (Inherited: 0x30)
struct UGLTFMaterialExportOptions : UAssetUserData {
	struct UMaterialInterface* Proxy; // 0x30(0x08)
	struct FGLTFOverrideMaterialBakeSettings Default; // 0x38(0x06)
	char pad_3E[0x2]; // 0x3e(0x02)
	struct TMap<enum class EGLTFMaterialPropertyGroup, struct FGLTFOverrideMaterialBakeSettings> Inputs; // 0x40(0x50)
};

