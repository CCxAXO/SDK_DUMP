// WidgetBlueprintGeneratedClass Crosshair_BoolSettingsWidget.Crosshair_BoolSettingsWidget_C
// Size: 0x44a (Inherited: 0x43c)
struct UCrosshair_BoolSettingsWidget_C : UBoolSettingsWidget_C {
	char pad_43C[0x4]; // 0x43c(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x440(0x08)
	enum class EAresBoolSettingName ADSSettingName; // 0x448(0x01)
	bool UseADSSettingName; // 0x449(0x01)

	void OnInitialized(); // Function Crosshair_BoolSettingsWidget.Crosshair_BoolSettingsWidget_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void SetUseADSSettings(bool ForADS); // Function Crosshair_BoolSettingsWidget.Crosshair_BoolSettingsWidget_C.SetUseADSSettings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_Crosshair_BoolSettingsWidget(int32_t EntryPoint); // Function Crosshair_BoolSettingsWidget.Crosshair_BoolSettingsWidget_C.ExecuteUbergraph_Crosshair_BoolSettingsWidget // (Final|UbergraphFunction) // @ game+0x1b42740
};

