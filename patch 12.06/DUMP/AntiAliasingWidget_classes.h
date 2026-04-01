// WidgetBlueprintGeneratedClass AntiAliasingWidget.AntiAliasingWidget_C
// Size: 0x3a2 (Inherited: 0x320)
struct UAntiAliasingWidget_C : UBaseSettingsWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UComboBoxString* AntiAliasingListcombo; // 0x328(0x08)
	struct UImage* Background; // 0x330(0x08)
	struct UTextBlock* DisplayNameText; // 0x338(0x08)
	struct UImage* Image_1; // 0x340(0x08)
	struct USettingsUniversalHoverBG_C* SettingsUniversalHoverBG; // 0x348(0x08)
	struct FText DisplayText; // 0x350(0x18)
	struct FText DisplayTooltip; // 0x368(0x18)
	struct FText SettingName; // 0x380(0x18)
	struct UObject* RoamingSetting; // 0x398(0x08)
	bool IsInitialized; // 0x3a0(0x01)
	enum class EAresAntiAliasing AAModeToSave; // 0x3a1(0x01)

	void GetIntSettingName(enum class EAresIntSettingName& IntSettingName); // Function AntiAliasingWidget.AntiAliasingWidget_C.GetIntSettingName // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	bool ShouldDisplay(); // Function AntiAliasingWidget.AntiAliasingWidget_C.ShouldDisplay // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetStaticText(); // Function AntiAliasingWidget.AntiAliasingWidget_C.SetStaticText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function AntiAliasingWidget.AntiAliasingWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnSynchronizeProperties(); // Function AntiAliasingWidget.AntiAliasingWidget_C.OnSynchronizeProperties // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__ResolutionListcombo_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature(struct FString SelectedItem, enum class ESelectInfo SelectionType); // Function AntiAliasingWidget.AntiAliasingWidget_C.BndEvt__ResolutionListcombo_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function AntiAliasingWidget.AntiAliasingWidget_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1b42740
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function AntiAliasingWidget.AntiAliasingWidget_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1b42740
	void SaveSetting(); // Function AntiAliasingWidget.AntiAliasingWidget_C.SaveSetting // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void RefreshIntSettingVisual(); // Function AntiAliasingWidget.AntiAliasingWidget_C.RefreshIntSettingVisual // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_AntiAliasingWidget(int32_t EntryPoint); // Function AntiAliasingWidget.AntiAliasingWidget_C.ExecuteUbergraph_AntiAliasingWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

