// WidgetBlueprintGeneratedClass AudioCheckboxSettingsWidget_Gamepad.AudioCheckboxSettingsWidget_Gamepad_C
// Size: 0x39b (Inherited: 0x338)
struct UAudioCheckboxSettingsWidget_Gamepad_C : UBaseSettingsWidgetGamepad {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x338(0x08)
	struct UImage* Background; // 0x340(0x08)
	struct UTextBlock* DisplayNameText; // 0x348(0x08)
	struct UImage* Image_1; // 0x350(0x08)
	struct USettingsUniversalHoverBG_C* SettingsUniversalHoverBG; // 0x358(0x08)
	struct USharedCheckboxButton_C* SharedCheckboxButton; // 0x360(0x08)
	struct FText DisplayText; // 0x368(0x18)
	struct FText DisplayTooltip; // 0x380(0x18)
	enum class EAresBoolSettingName SettingName; // 0x398(0x01)
	bool DefaultValue; // 0x399(0x01)
	bool IsChecked; // 0x39a(0x01)

	struct FEventReply OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function AudioCheckboxSettingsWidget_Gamepad.AudioCheckboxSettingsWidget_Gamepad_C.OnKeyDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	bool ShouldDisplay(); // Function AudioCheckboxSettingsWidget_Gamepad.AudioCheckboxSettingsWidget_Gamepad_C.ShouldDisplay // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetCheckmark(bool IsChecked); // Function AudioCheckboxSettingsWidget_Gamepad.AudioCheckboxSettingsWidget_Gamepad_C.SetCheckmark // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetRoamingSettingsManager(struct URoamingSettingsManager*& RoamingSettingsManager); // Function AudioCheckboxSettingsWidget_Gamepad.AudioCheckboxSettingsWidget_Gamepad_C.GetRoamingSettingsManager // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetStaticText(); // Function AudioCheckboxSettingsWidget_Gamepad.AudioCheckboxSettingsWidget_Gamepad_C.SetStaticText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnSynchronizeProperties(); // Function AudioCheckboxSettingsWidget_Gamepad.AudioCheckboxSettingsWidget_Gamepad_C.OnSynchronizeProperties // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function AudioCheckboxSettingsWidget_Gamepad.AudioCheckboxSettingsWidget_Gamepad_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__SharedCheckboxButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature(struct USharedCheckboxButton_C* CheckboxButton); // Function AudioCheckboxSettingsWidget_Gamepad.AudioCheckboxSettingsWidget_Gamepad_C.BndEvt__SharedCheckboxButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function AudioCheckboxSettingsWidget_Gamepad.AudioCheckboxSettingsWidget_Gamepad_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1af5410
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function AudioCheckboxSettingsWidget_Gamepad.AudioCheckboxSettingsWidget_Gamepad_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1af5410
	void SaveSetting(); // Function AudioCheckboxSettingsWidget_Gamepad.AudioCheckboxSettingsWidget_Gamepad_C.SaveSetting // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnAddedToFocusPath(struct FFocusEvent InFocusEvent); // Function AudioCheckboxSettingsWidget_Gamepad.AudioCheckboxSettingsWidget_Gamepad_C.OnAddedToFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnRemovedFromFocusPath(struct FFocusEvent InFocusEvent); // Function AudioCheckboxSettingsWidget_Gamepad.AudioCheckboxSettingsWidget_Gamepad_C.OnRemovedFromFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_AudioCheckboxSettingsWidget_Gamepad(int32_t EntryPoint); // Function AudioCheckboxSettingsWidget_Gamepad.AudioCheckboxSettingsWidget_Gamepad_C.ExecuteUbergraph_AudioCheckboxSettingsWidget_Gamepad // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

