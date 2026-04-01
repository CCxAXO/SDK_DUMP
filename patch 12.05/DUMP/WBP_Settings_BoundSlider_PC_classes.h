// WidgetBlueprintGeneratedClass WBP_Settings_BoundSlider_PC.WBP_Settings_BoundSlider_PC_C
// Size: 0x1d48 (Inherited: 0x1d10)
struct UWBP_Settings_BoundSlider_PC_C : UAresSettingSliderPanel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1d10(0x08)
	struct UAresInputSwitcher* AresInputSwitcher; // 0x1d18(0x08)
	struct UAresInputSwitcher* AresInputSwitcher_142; // 0x1d20(0x08)
	struct USizeBox* SliderSizeBox_Bound; // 0x1d28(0x08)
	struct UAresButtonTextComponent* Txt_Primary; // 0x1d30(0x08)
	struct UAresButtonTextComponent* Txt_Secondary; // 0x1d38(0x08)
	struct UWBP_SettingsEntryTemplate_C* WBP_SettingsEntryTemplate; // 0x1d40(0x08)

	void BP_OnTransitionHovered(); // Function WBP_Settings_BoundSlider_PC.WBP_Settings_BoundSlider_PC_C.BP_OnTransitionHovered // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void BP_OnTransitionUnHovered(); // Function WBP_Settings_BoundSlider_PC.WBP_Settings_BoundSlider_PC_C.BP_OnTransitionUnHovered // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function WBP_Settings_BoundSlider_PC.WBP_Settings_BoundSlider_PC_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Settings_BoundSlider_PC(int32_t EntryPoint); // Function WBP_Settings_BoundSlider_PC.WBP_Settings_BoundSlider_PC_C.ExecuteUbergraph_WBP_Settings_BoundSlider_PC // (Final|UbergraphFunction) // @ game+0x1af5410
};

