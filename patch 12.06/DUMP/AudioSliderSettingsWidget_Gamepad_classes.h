// WidgetBlueprintGeneratedClass AudioSliderSettingsWidget_Gamepad.AudioSliderSettingsWidget_Gamepad_C
// Size: 0x3c1 (Inherited: 0x338)
struct UAudioSliderSettingsWidget_Gamepad_C : UBaseSettingsWidgetGamepad {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x338(0x08)
	struct UImage* Background; // 0x340(0x08)
	struct UTextBlock* DisplayNameText; // 0x348(0x08)
	struct UImage* Image_1; // 0x350(0x08)
	struct USettingsUniversalHoverBG_C* SettingsUniversalHoverBG; // 0x358(0x08)
	struct USharedCheckboxButton_C* SharedCheckboxButton; // 0x360(0x08)
	struct UGamepadInputIconWidget_C* ToggleCheckboxIndicator; // 0x368(0x08)
	struct UGamepadNavigationSlider* ValueSlider; // 0x370(0x08)
	struct FText DisplayText; // 0x378(0x18)
	struct FText DisplayTooltip; // 0x390(0x18)
	enum class EAresFloatSettingName SettingName; // 0x3a8(0x01)
	char pad_3A9[0x3]; // 0x3a9(0x03)
	int32_t ValueMultiplier; // 0x3ac(0x04)
	double DefaultValue; // 0x3b0(0x08)
	double StepSize; // 0x3b8(0x08)
	bool IsChecked; // 0x3c0(0x01)

	struct FEventReply OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function AudioSliderSettingsWidget_Gamepad.AudioSliderSettingsWidget_Gamepad_C.OnKeyDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	bool ShouldDisplay(); // Function AudioSliderSettingsWidget_Gamepad.AudioSliderSettingsWidget_Gamepad_C.ShouldDisplay // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetCheckmark(bool IsChecked); // Function AudioSliderSettingsWidget_Gamepad.AudioSliderSettingsWidget_Gamepad_C.SetCheckmark // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetStaticText(); // Function AudioSliderSettingsWidget_Gamepad.AudioSliderSettingsWidget_Gamepad_C.SetStaticText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__ValueSlider_K2Node_ComponentBoundEvent_18_OnMouseCaptureEndEvent__DelegateSignature(); // Function AudioSliderSettingsWidget_Gamepad.AudioSliderSettingsWidget_Gamepad_C.BndEvt__ValueSlider_K2Node_ComponentBoundEvent_18_OnMouseCaptureEndEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void OnSynchronizeProperties(); // Function AudioSliderSettingsWidget_Gamepad.AudioSliderSettingsWidget_Gamepad_C.OnSynchronizeProperties // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function AudioSliderSettingsWidget_Gamepad.AudioSliderSettingsWidget_Gamepad_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__SharedCheckboxButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature(struct USharedCheckboxButton_C* CheckboxButton); // Function AudioSliderSettingsWidget_Gamepad.AudioSliderSettingsWidget_Gamepad_C.BndEvt__SharedCheckboxButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function AudioSliderSettingsWidget_Gamepad.AudioSliderSettingsWidget_Gamepad_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1b42740
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function AudioSliderSettingsWidget_Gamepad.AudioSliderSettingsWidget_Gamepad_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1b42740
	void SaveSetting(); // Function AudioSliderSettingsWidget_Gamepad.AudioSliderSettingsWidget_Gamepad_C.SaveSetting // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnAddedToFocusPath(struct FFocusEvent InFocusEvent); // Function AudioSliderSettingsWidget_Gamepad.AudioSliderSettingsWidget_Gamepad_C.OnAddedToFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnRemovedFromFocusPath(struct FFocusEvent InFocusEvent); // Function AudioSliderSettingsWidget_Gamepad.AudioSliderSettingsWidget_Gamepad_C.OnRemovedFromFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnInitialized(); // Function AudioSliderSettingsWidget_Gamepad.AudioSliderSettingsWidget_Gamepad_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_AudioSliderSettingsWidget_Gamepad(int32_t EntryPoint); // Function AudioSliderSettingsWidget_Gamepad.AudioSliderSettingsWidget_Gamepad_C.ExecuteUbergraph_AudioSliderSettingsWidget_Gamepad // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

