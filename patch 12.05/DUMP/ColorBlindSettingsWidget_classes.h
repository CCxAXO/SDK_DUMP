// WidgetBlueprintGeneratedClass ColorBlindSettingsWidget.ColorBlindSettingsWidget_C
// Size: 0x498 (Inherited: 0x3d9)
struct UColorBlindSettingsWidget_C : UDropdownIntSettingsWidget_C {
	char pad_3D9[0x7]; // 0x3d9(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct TArray<struct FText> NonRedDefaultOptions; // 0x3e8(0x10)
	struct TMap<int32_t, int32_t> NonRedDefaultOptionIndexToSettingIndex; // 0x3f8(0x50)
	struct TMap<int32_t, int32_t> NonRedDefaultSettingIndexToOptionIndex; // 0x448(0x50)

	void SettingIndexToSelectedIndex(int32_t& SelectedIndex); // Function ColorBlindSettingsWidget.ColorBlindSettingsWidget_C.SettingIndexToSelectedIndex // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void SelectedIndexToSettingIndex(int32_t& SettingIndex); // Function ColorBlindSettingsWidget.ColorBlindSettingsWidget_C.SelectedIndexToSettingIndex // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void Construct(); // Function ColorBlindSettingsWidget.ColorBlindSettingsWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ColorBlindSettingChanged(enum class EAresIntSettingName SettingName, int32_t OldValue, int32_t NewValue); // Function ColorBlindSettingsWidget.ColorBlindSettingsWidget_C.ColorBlindSettingChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void TryDisplay(); // Function ColorBlindSettingsWidget.ColorBlindSettingsWidget_C.TryDisplay // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_ColorBlindSettingsWidget(int32_t EntryPoint); // Function ColorBlindSettingsWidget.ColorBlindSettingsWidget_C.ExecuteUbergraph_ColorBlindSettingsWidget // (Final|UbergraphFunction) // @ game+0x1af5410
};

