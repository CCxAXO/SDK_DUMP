// WidgetBlueprintGeneratedClass DropdownIntSettingsWidget.DropdownIntSettingsWidget_C
// Size: 0x3d9 (Inherited: 0x3d0)
struct UDropdownIntSettingsWidget_C : UDropdownSettingsWidget_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3d0(0x08)
	enum class EAresIntSettingName SettingName; // 0x3d8(0x01)

	void GetIntSettingName(enum class EAresIntSettingName& IntSettingName); // Function DropdownIntSettingsWidget.DropdownIntSettingsWidget_C.GetIntSettingName // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	bool ShouldDisplay(); // Function DropdownIntSettingsWidget.DropdownIntSettingsWidget_C.ShouldDisplay // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SettingIndexToSelectedIndex(int32_t& SelectedIndex); // Function DropdownIntSettingsWidget.DropdownIntSettingsWidget_C.SettingIndexToSelectedIndex // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void SaveSetting(); // Function DropdownIntSettingsWidget.DropdownIntSettingsWidget_C.SaveSetting // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void RefreshIntSettingVisual(); // Function DropdownIntSettingsWidget.DropdownIntSettingsWidget_C.RefreshIntSettingVisual // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_DropdownIntSettingsWidget(int32_t EntryPoint); // Function DropdownIntSettingsWidget.DropdownIntSettingsWidget_C.ExecuteUbergraph_DropdownIntSettingsWidget // (Final|UbergraphFunction) // @ game+0x1af5410
};

