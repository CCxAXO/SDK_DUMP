// WidgetBlueprintGeneratedClass GeneralVideo_PerformanceSettings.GeneralVideo_PerformanceSettings_C
// Size: 0x398 (Inherited: 0x318)
struct UGeneralVideo_PerformanceSettings_C : USettingsSubsectionBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UBoolSettingsWidget_C* LimitFPSAlways; // 0x320(0x08)
	struct UBoolSettingsWidget_C* LimitFPSinBackground; // 0x328(0x08)
	struct UBoolSettingsWidget_C* LimitFPSinMenus; // 0x330(0x08)
	struct UBoolSettingsWidget_C* LimitFPSonBattery; // 0x338(0x08)
	struct UTextSettingsWidget_C* MaximumFPSAlways; // 0x340(0x08)
	struct UTextSettingsWidget_C* MaximumFPSinBackground; // 0x348(0x08)
	struct UTextSettingsWidget_C* MaximumFPSinMenus; // 0x350(0x08)
	struct UTextSettingsWidget_C* MaximumFPSonBattery; // 0x358(0x08)
	struct UBoolSettingsWidget_C* NvidiaReflexLatewarpSetting; // 0x360(0x08)
	struct UDropdownIntSettingsWidget_C* NvidiaReflexLowLatencySetting; // 0x368(0x08)
	struct USettingsV2_Subheader_C* PerformanceHeader; // 0x370(0x08)
	struct UVerticalBox* PerformanceSubsection; // 0x378(0x08)
	struct UBoolSettingsWidget_C* RGIInputLatencySetting; // 0x380(0x08)
	struct TArray<struct UWidget*> WidgetsToToggleVisibility; // 0x388(0x10)

	void OnNvidiaReflexLowLatencyChanged(enum class EAresIntSettingName SettingName, int32_t OldValue, int32_t NewValue); // Function GeneralVideo_PerformanceSettings.GeneralVideo_PerformanceSettings_C.OnNvidiaReflexLowLatencyChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Destruct(); // Function GeneralVideo_PerformanceSettings.GeneralVideo_PerformanceSettings_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function GeneralVideo_PerformanceSettings.GeneralVideo_PerformanceSettings_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_GeneralVideo_PerformanceSettings(int32_t EntryPoint); // Function GeneralVideo_PerformanceSettings.GeneralVideo_PerformanceSettings_C.ExecuteUbergraph_GeneralVideo_PerformanceSettings // (Final|UbergraphFunction) // @ game+0x1b42740
};

