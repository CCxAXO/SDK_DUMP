// WidgetBlueprintGeneratedClass WBP_Settings_AudioSlider.WBP_Settings_AudioSlider_C
// Size: 0x1d90 (Inherited: 0x1d10)
struct UWBP_Settings_AudioSlider_C : UAresSettingSliderPanel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1d10(0x08)
	struct UAresInputSwitcher* AresInputSwitcher_108; // 0x1d18(0x08)
	struct UWBP_Button_Setting_Mute_C* ButtonMute_PC; // 0x1d20(0x08)
	struct UAresButtonTextComponent* Txt_Primary; // 0x1d28(0x08)
	struct UAresButtonTextComponent* Txt_Secondary; // 0x1d30(0x08)
	struct UWBP_SettingsEntryTemplate_C* WBP_SettingsEntryTemplate; // 0x1d38(0x08)
	struct FAresConditionalInputAction TogglePrecisionModeInputAction; // 0x1d40(0x28)
	struct FAresConditionalInputAction ToggleMuteInputAction; // 0x1d68(0x28)

	void Update Precision Mode(struct FName ActionName); // Function WBP_Settings_AudioSlider.WBP_Settings_AudioSlider_C.Update Precision Mode // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Update Mute(struct FName ActionName); // Function WBP_Settings_AudioSlider.WBP_Settings_AudioSlider_C.Update Mute // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ToggleMuteCIAName(bool bIsMuted); // Function WBP_Settings_AudioSlider.WBP_Settings_AudioSlider_C.ToggleMuteCIAName // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void OnRemovedFromFocusPath(struct FFocusEvent InFocusEvent); // Function WBP_Settings_AudioSlider.WBP_Settings_AudioSlider_C.OnRemovedFromFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function WBP_Settings_AudioSlider.WBP_Settings_AudioSlider_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_Settings_AudioSlider_Button_Mute_PC_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Settings_AudioSlider.WBP_Settings_AudioSlider_C.BndEvt__WBP_Settings_AudioSlider_Button_Mute_PC_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BP_OnMuteStatusChanged(bool NewValue); // Function WBP_Settings_AudioSlider.WBP_Settings_AudioSlider_C.BP_OnMuteStatusChanged // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Settings_AudioSlider(int32_t EntryPoint); // Function WBP_Settings_AudioSlider.WBP_Settings_AudioSlider_C.ExecuteUbergraph_WBP_Settings_AudioSlider // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

