// Class MaterialShaderQualitySettings.ShaderPlatformQualitySettings
// Size: 0x60 (Inherited: 0x30)
struct UShaderPlatformQualitySettings : UObject {
	struct FMaterialQualityOverrides QualityOverrides[0x4]; // 0x30(0x20)
	char pad_50[0x10]; // 0x50(0x10)
};

// Class MaterialShaderQualitySettings.MaterialShaderQualitySettings
// Size: 0x80 (Inherited: 0x30)
struct UMaterialShaderQualitySettings : UObject {
	struct TMap<struct FName, struct UShaderPlatformQualitySettings*> ForwardSettingMap; // 0x30(0x50)
};

