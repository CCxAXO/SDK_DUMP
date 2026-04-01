// WidgetBlueprintGeneratedClass Crosshair_TextSettingsWidgetWithSlider.Crosshair_TextSettingsWidgetWithSlider_C
// Size: 0x3ea (Inherited: 0x3da)
struct UCrosshair_TextSettingsWidgetWithSlider_C : UTextSettingsWidgetWithSlider_C {
	char pad_3DA[0x6]; // 0x3da(0x06)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	enum class EAresFloatSettingName ADSSettingName; // 0x3e8(0x01)
	bool UseADSSettingName; // 0x3e9(0x01)

	void OnInitialized(); // Function Crosshair_TextSettingsWidgetWithSlider.Crosshair_TextSettingsWidgetWithSlider_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void SetUseADSSettings(bool ForADS); // Function Crosshair_TextSettingsWidgetWithSlider.Crosshair_TextSettingsWidgetWithSlider_C.SetUseADSSettings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_Crosshair_TextSettingsWidgetWithSlider(int32_t EntryPoint); // Function Crosshair_TextSettingsWidgetWithSlider.Crosshair_TextSettingsWidgetWithSlider_C.ExecuteUbergraph_Crosshair_TextSettingsWidgetWithSlider // (Final|UbergraphFunction) // @ game+0x1af5410
};

