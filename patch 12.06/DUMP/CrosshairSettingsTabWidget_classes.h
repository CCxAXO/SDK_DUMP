// WidgetBlueprintGeneratedClass CrosshairSettingsTabWidget.CrosshairSettingsTabWidget_C
// Size: 0x349 (Inherited: 0x318)
struct UCrosshairSettingsTabWidget_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UImage* CopyPrimaryCrosshairOverlay; // 0x320(0x08)
	struct UCrosshair_GeneralSettings_C* Crosshair_GeneralSettings; // 0x328(0x08)
	struct UCrosshair_InnerLineSettings_C* Crosshair_InnerLineSettings; // 0x330(0x08)
	struct UCrosshair_OuterLineSettings_C* Crosshair_OuterLineSettings; // 0x338(0x08)
	struct UVerticalBox* SubsectionContainerVerticalBox; // 0x340(0x08)
	bool ForADS; // 0x348(0x01)

	void OnUsePrimaryCrosshairForADSChanged(enum class EAresBoolSettingName SettingName, bool OldValue, bool NewValue); // Function CrosshairSettingsTabWidget.CrosshairSettingsTabWidget_C.OnUsePrimaryCrosshairForADSChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HideCrosshairSettingsV2(); // Function CrosshairSettingsTabWidget.CrosshairSettingsTabWidget_C.HideCrosshairSettingsV2 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnInitialized(); // Function CrosshairSettingsTabWidget.CrosshairSettingsTabWidget_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_CrosshairSettingsTabWidget(int32_t EntryPoint); // Function CrosshairSettingsTabWidget.CrosshairSettingsTabWidget_C.ExecuteUbergraph_CrosshairSettingsTabWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

