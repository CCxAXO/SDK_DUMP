// Enum RGITonemapping.ERGITonemapperType
enum class ERGITonemapperType : uint8 {
	DefaultUE = 0,
	ExtendedReinhard = 1,
	ACESLuminanceOnlyFit = 2,
	GranTurismo = 3,
	LegacyUE = 4,
	AgX = 5,
	ERGITonemapperType_MAX = 6
};

// Enum RGITonemapping.EAgXLookType
enum class EAgXLookType : uint8 {
	Default = 0,
	Golden = 1,
	Punchy = 2,
	EAgXLookType_MAX = 3
};

// ScriptStruct RGITonemapping.UELegacyTonemapperSettings
// Size: 0x70 (Inherited: 0x00)
struct FUELegacyTonemapperSettings {
	bool bOverrideContentTonemappingSettings; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	struct FLinearColor FilmWhitePoint; // 0x04(0x10)
	struct FLinearColor FilmShadowTint; // 0x14(0x10)
	float FilmShadowTintBlend; // 0x24(0x04)
	float FilmShadowTintAmount; // 0x28(0x04)
	float FilmSaturation; // 0x2c(0x04)
	struct FLinearColor FilmChannelMixerRed; // 0x30(0x10)
	struct FLinearColor FilmChannelMixerGreen; // 0x40(0x10)
	struct FLinearColor FilmChannelMixerBlue; // 0x50(0x10)
	float FilmContrast; // 0x60(0x04)
	float FilmToeAmount; // 0x64(0x04)
	float FilmHealAmount; // 0x68(0x04)
	float FilmDynamicRange; // 0x6c(0x04)
};

