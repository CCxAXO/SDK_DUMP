// WidgetBlueprintGeneratedClass AudioSliderSettingsWidget.AudioSliderSettingsWidget_C
// Size: 0x3a1 (Inherited: 0x320)
struct UAudioSliderSettingsWidget_C : UBaseSettingsWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UImage* Background; // 0x328(0x08)
	struct UTextBlock* DisplayNameText; // 0x330(0x08)
	struct UImage* Image_1; // 0x338(0x08)
	struct USettingsUniversalHoverBG_C* SettingsUniversalHoverBG; // 0x340(0x08)
	struct USharedCheckboxButton_C* SharedCheckboxButton; // 0x348(0x08)
	struct USlider* ValueSlider; // 0x350(0x08)
	struct FText DisplayText; // 0x358(0x18)
	struct FText DisplayTooltip; // 0x370(0x18)
	enum class EAresFloatSettingName SettingName; // 0x388(0x01)
	char pad_389[0x3]; // 0x389(0x03)
	int32_t ValueMultiplier; // 0x38c(0x04)
	double DefaultValue; // 0x390(0x08)
	double StepSize; // 0x398(0x08)
	bool IsChecked; // 0x3a0(0x01)

	bool ShouldDisplay(); // Function AudioSliderSettingsWidget.AudioSliderSettingsWidget_C.ShouldDisplay // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetCheckmark(bool IsChecked); // Function AudioSliderSettingsWidget.AudioSliderSettingsWidget_C.SetCheckmark // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetStaticText(); // Function AudioSliderSettingsWidget.AudioSliderSettingsWidget_C.SetStaticText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__ValueSlider_K2Node_ComponentBoundEvent_18_OnMouseCaptureEndEvent__DelegateSignature(); // Function AudioSliderSettingsWidget.AudioSliderSettingsWidget_C.BndEvt__ValueSlider_K2Node_ComponentBoundEvent_18_OnMouseCaptureEndEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void OnSynchronizeProperties(); // Function AudioSliderSettingsWidget.AudioSliderSettingsWidget_C.OnSynchronizeProperties // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function AudioSliderSettingsWidget.AudioSliderSettingsWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__SharedCheckboxButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature(struct USharedCheckboxButton_C* CheckboxButton); // Function AudioSliderSettingsWidget.AudioSliderSettingsWidget_C.BndEvt__SharedCheckboxButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function AudioSliderSettingsWidget.AudioSliderSettingsWidget_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1af5410
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function AudioSliderSettingsWidget.AudioSliderSettingsWidget_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1af5410
	void SaveSetting(); // Function AudioSliderSettingsWidget.AudioSliderSettingsWidget_C.SaveSetting // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_AudioSliderSettingsWidget(int32_t EntryPoint); // Function AudioSliderSettingsWidget.AudioSliderSettingsWidget_C.ExecuteUbergraph_AudioSliderSettingsWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

