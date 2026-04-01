// Class RGITonemapping.RGITonemappingSettings
// Size: 0xd0 (Inherited: 0x48)
struct URGITonemappingSettings : UDeveloperSettings {
	enum class ERGITonemapperType RGITonemapperType; // 0x48(0x01)
	char pad_49[0x3]; // 0x49(0x03)
	float HueCorrection; // 0x4c(0x04)
	float MaxWhite; // 0x50(0x04)
	enum class EAgXLookType AgXLookType; // 0x54(0x01)
	char pad_55[0x3]; // 0x55(0x03)
	struct FUELegacyTonemapperSettings UELegacyTonemapperSettings; // 0x58(0x70)
	bool bOverrideContentToneCurveAmount; // 0xc8(0x01)
	char pad_C9[0x3]; // 0xc9(0x03)
	float DefaultToneCurveAmount; // 0xcc(0x04)
};

