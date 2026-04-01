// WidgetBlueprintGeneratedClass WBP_Settings_Slider.WBP_Settings_Slider_C
// Size: 0x1d78 (Inherited: 0x1d10)
struct UWBP_Settings_Slider_C : UAresSettingSliderPanel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1d10(0x08)
	struct UAresInputSwitcher* AresInputSwitcher_1; // 0x1d18(0x08)
	struct UAresButtonTextComponent* Txt_Primary; // 0x1d20(0x08)
	struct UAresButtonTextComponent* Txt_Secondary; // 0x1d28(0x08)
	struct UWBP_SettingsEntryTemplate_C* WBP_SettingsEntryTemplate; // 0x1d30(0x08)
	struct FAresConditionalInputAction EnterPrecisionModeInputAction; // 0x1d38(0x28)
	struct FText LastValidValueText; // 0x1d60(0x18)

	void SaveSetting(struct FText& TextInput); // Function WBP_Settings_Slider.WBP_Settings_Slider_C.SaveSetting // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Toggle Precision Mode(struct FName ActionName); // Function WBP_Settings_Slider.WBP_Settings_Slider_C.Toggle Precision Mode // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnRemovedFromFocusPath(struct FFocusEvent InFocusEvent); // Function WBP_Settings_Slider.WBP_Settings_Slider_C.OnRemovedFromFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void BP_OnTransitionHovered(); // Function WBP_Settings_Slider.WBP_Settings_Slider_C.BP_OnTransitionHovered // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void BP_OnTransitionUnHovered(); // Function WBP_Settings_Slider.WBP_Settings_Slider_C.BP_OnTransitionUnHovered // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function WBP_Settings_Slider.WBP_Settings_Slider_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Settings_Slider(int32_t EntryPoint); // Function WBP_Settings_Slider.WBP_Settings_Slider_C.ExecuteUbergraph_WBP_Settings_Slider // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

