// WidgetBlueprintGeneratedClass AudioCheckboxSettingsWidget.AudioCheckboxSettingsWidget_C
// Size: 0x384 (Inherited: 0x320)
struct UAudioCheckboxSettingsWidget_C : UBaseSettingsWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UImage* Background; // 0x328(0x08)
	struct UTextBlock* DisplayNameText; // 0x330(0x08)
	struct UImage* Image_1; // 0x338(0x08)
	struct USettingsUniversalHoverBG_C* SettingsUniversalHoverBG; // 0x340(0x08)
	struct USharedCheckboxButton_C* SharedCheckboxButton; // 0x348(0x08)
	struct FText DisplayText; // 0x350(0x18)
	struct FText DisplayTooltip; // 0x368(0x18)
	enum class EAresBoolSettingName SettingName; // 0x380(0x01)
	bool DefaultValue; // 0x381(0x01)
	bool IsChecked; // 0x382(0x01)
	enum class ESlateVisibility DefaultVisibility; // 0x383(0x01)

	bool ShouldDisplay(); // Function AudioCheckboxSettingsWidget.AudioCheckboxSettingsWidget_C.ShouldDisplay // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetCheckmark(bool IsChecked); // Function AudioCheckboxSettingsWidget.AudioCheckboxSettingsWidget_C.SetCheckmark // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetRoamingSettingsManager(struct URoamingSettingsManager*& RoamingSettingsManager); // Function AudioCheckboxSettingsWidget.AudioCheckboxSettingsWidget_C.GetRoamingSettingsManager // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetStaticText(); // Function AudioCheckboxSettingsWidget.AudioCheckboxSettingsWidget_C.SetStaticText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnSynchronizeProperties(); // Function AudioCheckboxSettingsWidget.AudioCheckboxSettingsWidget_C.OnSynchronizeProperties // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function AudioCheckboxSettingsWidget.AudioCheckboxSettingsWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__SharedCheckboxButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature(struct USharedCheckboxButton_C* CheckboxButton); // Function AudioCheckboxSettingsWidget.AudioCheckboxSettingsWidget_C.BndEvt__SharedCheckboxButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function AudioCheckboxSettingsWidget.AudioCheckboxSettingsWidget_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1af5410
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function AudioCheckboxSettingsWidget.AudioCheckboxSettingsWidget_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1af5410
	void SaveSetting(); // Function AudioCheckboxSettingsWidget.AudioCheckboxSettingsWidget_C.SaveSetting // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_AudioCheckboxSettingsWidget(int32_t EntryPoint); // Function AudioCheckboxSettingsWidget.AudioCheckboxSettingsWidget_C.ExecuteUbergraph_AudioCheckboxSettingsWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

