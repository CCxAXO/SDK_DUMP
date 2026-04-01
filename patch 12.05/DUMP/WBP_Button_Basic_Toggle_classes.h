// WidgetBlueprintGeneratedClass WBP_Button_Basic_Toggle.WBP_Button_Basic_Toggle_C
// Size: 0x1b40 (Inherited: 0x1ae0)
struct UWBP_Button_Basic_Toggle_C : UAresCommonButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1ae0(0x08)
	struct UWidgetAnimation* Enable; // 0x1ae8(0x08)
	struct UWidgetAnimation* Toggle; // 0x1af0(0x08)
	struct UWidgetAnimation* Highlight; // 0x1af8(0x08)
	struct UImage* Image; // 0x1b00(0x08)
	bool bIsToggledOn; // 0x1b08(0x01)
	bool bIsHighlighted; // 0x1b09(0x01)
	char pad_1B0A[0x6]; // 0x1b0a(0x06)
	struct FText SettingPrimaryText; // 0x1b10(0x18)
	struct FText SettingSecondaryText; // 0x1b28(0x18)

	void PlayEnabledAnimation(bool bEnabled); // Function WBP_Button_Basic_Toggle.WBP_Button_Basic_Toggle_C.PlayEnabledAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PlayHighlightAnimation(bool bHighlightOn); // Function WBP_Button_Basic_Toggle.WBP_Button_Basic_Toggle_C.PlayHighlightAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetIsToggled(bool bToggleOn, double PlaybackSpeed); // Function WBP_Button_Basic_Toggle.WBP_Button_Basic_Toggle_C.SetIsToggled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function WBP_Button_Basic_Toggle.WBP_Button_Basic_Toggle_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1af5410
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function WBP_Button_Basic_Toggle.WBP_Button_Basic_Toggle_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1af5410
	void BP_OnTransitionEnabled(); // Function WBP_Button_Basic_Toggle.WBP_Button_Basic_Toggle_C.BP_OnTransitionEnabled // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void BP_OnTransitionDisabled(); // Function WBP_Button_Basic_Toggle.WBP_Button_Basic_Toggle_C.BP_OnTransitionDisabled // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Button_Basic_Toggle(int32_t EntryPoint); // Function WBP_Button_Basic_Toggle.WBP_Button_Basic_Toggle_C.ExecuteUbergraph_WBP_Button_Basic_Toggle // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

