// WidgetBlueprintGeneratedClass SliderSettingsWidget.SliderSettingsWidget_C
// Size: 0x38c (Inherited: 0x320)
struct USliderSettingsWidget_C : UBaseSettingsWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UImage* Background; // 0x328(0x08)
	struct UTextBlock* DisplayNameText; // 0x330(0x08)
	struct UImage* Image_1; // 0x338(0x08)
	struct USettingsUniversalHoverBG_C* SettingsUniversalHoverBG; // 0x340(0x08)
	struct USlider* ValueSlider; // 0x348(0x08)
	struct FText DisplayText; // 0x350(0x18)
	struct FText DisplayTooltip; // 0x368(0x18)
	enum class EAresIntSettingName SettingName; // 0x380(0x01)
	char pad_381[0x3]; // 0x381(0x03)
	int32_t ValueMultiplier; // 0x384(0x04)
	int32_t ValueToSave; // 0x388(0x04)

	void ReadSettingValue(); // Function SliderSettingsWidget.SliderSettingsWidget_C.ReadSettingValue // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	bool ShouldDisplay(); // Function SliderSettingsWidget.SliderSettingsWidget_C.ShouldDisplay // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetRoamingSettingsManager(struct URoamingSettingsManager*& RoamingSettingsManager); // Function SliderSettingsWidget.SliderSettingsWidget_C.GetRoamingSettingsManager // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetStaticText(); // Function SliderSettingsWidget.SliderSettingsWidget_C.SetStaticText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function SliderSettingsWidget.SliderSettingsWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnSynchronizeProperties(); // Function SliderSettingsWidget.SliderSettingsWidget_C.OnSynchronizeProperties // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__ValueSlider_K2Node_ComponentBoundEvent_200_OnFloatValueChangedEvent__DelegateSignature(float Value); // Function SliderSettingsWidget.SliderSettingsWidget_C.BndEvt__ValueSlider_K2Node_ComponentBoundEvent_200_OnFloatValueChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function SliderSettingsWidget.SliderSettingsWidget_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1af5410
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function SliderSettingsWidget.SliderSettingsWidget_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1af5410
	void SaveSetting(); // Function SliderSettingsWidget.SliderSettingsWidget_C.SaveSetting // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_SliderSettingsWidget(int32_t EntryPoint); // Function SliderSettingsWidget.SliderSettingsWidget_C.ExecuteUbergraph_SliderSettingsWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

