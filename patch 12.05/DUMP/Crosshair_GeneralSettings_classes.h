// WidgetBlueprintGeneratedClass Crosshair_GeneralSettings.Crosshair_GeneralSettings_C
// Size: 0x391 (Inherited: 0x318)
struct UCrosshair_GeneralSettings_C : USettingsSubsectionBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UCrosshair_BoolSettingsWidget_C* CrosshairCenterDot; // 0x320(0x08)
	struct UCrosshair_TextSettingsWidgetWithSlider_C* CrosshairCenterDotOpacity; // 0x328(0x08)
	struct UCrosshair_TextSettingsWidgetWithSlider_C* CrosshairCenterDotThickness; // 0x330(0x08)
	struct UCrosshairColorWidget_C* CrosshairColor; // 0x338(0x08)
	struct UCrosshair_BoolSettingsWidget_C* CrosshairFixMinError; // 0x340(0x08)
	struct UCrosshair_TextSettingsWidgetWithSlider_C* CrosshairOutlineOpacity; // 0x348(0x08)
	struct UCrosshair_TextSettingsWidgetWithSlider_C* CrosshairOutlineThickness; // 0x350(0x08)
	struct UCrosshair_BoolSettingsWidget_C* CrosshairShowOutlines; // 0x358(0x08)
	struct UBoolSettingsWidget_C* FadeCrosshairWithFiringError; // 0x360(0x08)
	struct USettingsV2_Subheader_C* GeneralHeader; // 0x368(0x08)
	struct UVerticalBox* GeneralSubsection; // 0x370(0x08)
	struct UBoolSettingsWidget_C* HideCrosshair; // 0x378(0x08)
	struct UBoolSettingsWidget_C* SpectatorCrosshairMode; // 0x380(0x08)
	struct UBoolSettingsWidget_C* UseCustomCrosshairForAllPrimary; // 0x388(0x08)
	bool AreSettingsForADS; // 0x390(0x01)

	void HideCrosshairSettingsV2(); // Function Crosshair_GeneralSettings.Crosshair_GeneralSettings_C.HideCrosshairSettingsV2 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function Crosshair_GeneralSettings.Crosshair_GeneralSettings_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void crosshairColorUpdated(struct FColor Value); // Function Crosshair_GeneralSettings.Crosshair_GeneralSettings_C.crosshairColorUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void CrosshairSettingsUpdated(); // Function Crosshair_GeneralSettings.Crosshair_GeneralSettings_C.CrosshairSettingsUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnInitialized(); // Function Crosshair_GeneralSettings.Crosshair_GeneralSettings_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void SetUseADSSettings(bool ForADS); // Function Crosshair_GeneralSettings.Crosshair_GeneralSettings_C.SetUseADSSettings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_Crosshair_GeneralSettings(int32_t EntryPoint); // Function Crosshair_GeneralSettings.Crosshair_GeneralSettings_C.ExecuteUbergraph_Crosshair_GeneralSettings // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

