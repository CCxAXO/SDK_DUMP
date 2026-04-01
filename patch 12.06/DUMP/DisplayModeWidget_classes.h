// WidgetBlueprintGeneratedClass DisplayModeWidget.DisplayModeWidget_C
// Size: 0x399 (Inherited: 0x320)
struct UDisplayModeWidget_C : UBaseSettingsWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UImage* Background; // 0x328(0x08)
	struct UComboBoxString* DisplayModeListcombo; // 0x330(0x08)
	struct UTextBlock* DisplayNameText; // 0x338(0x08)
	struct UImage* Image_1; // 0x340(0x08)
	struct USettingsUniversalHoverBG_C* SettingsUniversalHoverBG; // 0x348(0x08)
	struct FText DisplayText; // 0x350(0x18)
	struct FText DisplayTooltip; // 0x368(0x18)
	struct FText SettingName; // 0x380(0x18)
	enum class EAresDisplayMode DisplayModeToSave; // 0x398(0x01)

	bool ShouldDisplay(); // Function DisplayModeWidget.DisplayModeWidget_C.ShouldDisplay // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetStaticText(); // Function DisplayModeWidget.DisplayModeWidget_C.SetStaticText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function DisplayModeWidget.DisplayModeWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnSynchronizeProperties(); // Function DisplayModeWidget.DisplayModeWidget_C.OnSynchronizeProperties // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__DisplayModeListcombo_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(struct FString SelectedItem, enum class ESelectInfo SelectionType); // Function DisplayModeWidget.DisplayModeWidget_C.BndEvt__DisplayModeListcombo_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void OnSettingsUINeedsUpdate(); // Function DisplayModeWidget.DisplayModeWidget_C.OnSettingsUINeedsUpdate // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Destruct(); // Function DisplayModeWidget.DisplayModeWidget_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function DisplayModeWidget.DisplayModeWidget_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1b42740
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function DisplayModeWidget.DisplayModeWidget_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1b42740
	void SaveSetting(); // Function DisplayModeWidget.DisplayModeWidget_C.SaveSetting // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_DisplayModeWidget(int32_t EntryPoint); // Function DisplayModeWidget.DisplayModeWidget_C.ExecuteUbergraph_DisplayModeWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

