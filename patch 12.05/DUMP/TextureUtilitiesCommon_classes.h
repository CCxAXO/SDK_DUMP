// Class TextureUtilitiesCommon.TextureImportSettings
// Size: 0x50 (Inherited: 0x48)
struct UTextureImportSettings : UDeveloperSettings {
	int32_t AutoVTSize; // 0x48(0x04)
	bool bEnableNormalizeNormals; // 0x4c(0x01)
	bool bEnableFastMipFilter; // 0x4d(0x01)
	enum class ETextureImportFloatingPointFormat CompressedFormatForFloatTextures; // 0x4e(0x01)
	enum class ETextureImportPNGInfill PNGInfill; // 0x4f(0x01)
};

