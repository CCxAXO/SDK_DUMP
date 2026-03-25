// WidgetBlueprintGeneratedClass PlayerFacingPerfSettingsPresetDropdown.PlayerFacingPerfSettingsPresetDropdown_C
// Size: 0x3d8 (Inherited: 0x3d0)
struct UPlayerFacingPerfSettingsPresetDropdown_C : UDropdownSettingsWidget_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3d0(0x08)

	void IsNoneSelected(bool& IsNone); // Function PlayerFacingPerfSettingsPresetDropdown.PlayerFacingPerfSettingsPresetDropdown_C.IsNoneSelected // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PopulateDropdown(struct TArray<struct FPlayerFacingPerfPresetGroup>& Presets); // Function PlayerFacingPerfSettingsPresetDropdown.PlayerFacingPerfSettingsPresetDropdown_C.PopulateDropdown // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function PlayerFacingPerfSettingsPresetDropdown.PlayerFacingPerfSettingsPresetDropdown_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnPresetRefresh(); // Function PlayerFacingPerfSettingsPresetDropdown.PlayerFacingPerfSettingsPresetDropdown_C.OnPresetRefresh // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_PlayerFacingPerfSettingsPresetDropdown(int32_t EntryPoint); // Function PlayerFacingPerfSettingsPresetDropdown.PlayerFacingPerfSettingsPresetDropdown_C.ExecuteUbergraph_PlayerFacingPerfSettingsPresetDropdown // (Final|UbergraphFunction) // @ game+0x1af5410
};

