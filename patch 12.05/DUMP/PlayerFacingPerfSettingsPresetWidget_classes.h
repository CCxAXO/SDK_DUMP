// WidgetBlueprintGeneratedClass PlayerFacingPerfSettingsPresetWidget.PlayerFacingPerfSettingsPresetWidget_C
// Size: 0x508 (Inherited: 0x320)
struct UPlayerFacingPerfSettingsPresetWidget_C : UBaseSettingsWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UImage* Background; // 0x328(0x08)
	struct UPlayerFacingPerfSettingsPresetButtonsWidget_C* PlayerFacingPerfSettingsPresetButtonsWidget; // 0x330(0x08)
	struct UPlayerFacingPerfSettingsPresetDropdown_C* PlayerFacingPerfSettingsPresetDropdown; // 0x338(0x08)
	struct FText Option Text Only Text; // 0x340(0x18)
	struct FText Option Graph Only Text; // 0x358(0x18)
	int32_t Option Text Only Value; // 0x370(0x04)
	int32_t Option Graph Only Value; // 0x374(0x04)
	struct FText Option Show Both Text; // 0x378(0x18)
	int32_t Option Show Both Value; // 0x390(0x04)
	char pad_394[0x4]; // 0x394(0x04)
	struct FPlayerFacingPerfPresetGroup Input Preset; // 0x398(0x28)
	struct FPlayerFacingPerfPresetGroup Performance; // 0x3c0(0x28)
	struct FPlayerFacingPerfPresetGroup Performance Detailed; // 0x3e8(0x28)
	struct FPlayerFacingPerfPresetGroup Input Detailed; // 0x410(0x28)
	struct FPlayerFacingPerfPresetGroup Network Basic; // 0x438(0x28)
	struct FPlayerFacingPerfPresetGroup Network Detailed; // 0x460(0x28)
	struct FPlayerFacingPerfPresetGroup None Preset; // 0x488(0x28)
	struct FPlayerFacingPerfPresetGroup General Preset; // 0x4b0(0x28)
	struct TArray<struct FPlayerFacingPerfPresetGroup> Presets; // 0x4d8(0x10)
	struct FMulticastInlineDelegate ChangeButtonDisabledState; // 0x4e8(0x10)
	struct FMulticastInlineDelegate RefreshPresetState; // 0x4f8(0x10)

	void ApplyPreset(); // Function PlayerFacingPerfSettingsPresetWidget.PlayerFacingPerfSettingsPresetWidget_C.ApplyPreset // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void IsNoneSelected(bool& IsNone); // Function PlayerFacingPerfSettingsPresetWidget.PlayerFacingPerfSettingsPresetWidget_C.IsNoneSelected // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PopulateDropdown(); // Function PlayerFacingPerfSettingsPresetWidget.PlayerFacingPerfSettingsPresetWidget_C.PopulateDropdown // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ChangeButtonDisabledState_Interface(bool ButtonState); // Function PlayerFacingPerfSettingsPresetWidget.PlayerFacingPerfSettingsPresetWidget_C.ChangeButtonDisabledState_Interface // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetSettings(struct TArray<enum class EAresIntSettingName>& NewParam); // Function PlayerFacingPerfSettingsPresetWidget.PlayerFacingPerfSettingsPresetWidget_C.GetSettings // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SendPresetsToButtons(); // Function PlayerFacingPerfSettingsPresetWidget.PlayerFacingPerfSettingsPresetWidget_C.SendPresetsToButtons // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function PlayerFacingPerfSettingsPresetWidget.PlayerFacingPerfSettingsPresetWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void RefreshPresetEvent(); // Function PlayerFacingPerfSettingsPresetWidget.PlayerFacingPerfSettingsPresetWidget_C.RefreshPresetEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__PlayerFacingPerfSettingsPresetWidget_PlayerFacingPerfSettingsPresetDropdown_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature(struct FString SelectedItem); // Function PlayerFacingPerfSettingsPresetWidget.PlayerFacingPerfSettingsPresetWidget_C.BndEvt__PlayerFacingPerfSettingsPresetWidget_PlayerFacingPerfSettingsPresetDropdown_K2Node_ComponentBoundEvent_0_OnSelectionChanged__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_PlayerFacingPerfSettingsPresetWidget(int32_t EntryPoint); // Function PlayerFacingPerfSettingsPresetWidget.PlayerFacingPerfSettingsPresetWidget_C.ExecuteUbergraph_PlayerFacingPerfSettingsPresetWidget // (Final|UbergraphFunction) // @ game+0x1af5410
	void RefreshPresetState__DelegateSignature(); // Function PlayerFacingPerfSettingsPresetWidget.PlayerFacingPerfSettingsPresetWidget_C.RefreshPresetState__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ChangeButtonDisabledState__DelegateSignature(bool ButtonState); // Function PlayerFacingPerfSettingsPresetWidget.PlayerFacingPerfSettingsPresetWidget_C.ChangeButtonDisabledState__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

