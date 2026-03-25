// WidgetBlueprintGeneratedClass MonitorSelectionWidget.MonitorSelectionWidget_C
// Size: 0x3b4 (Inherited: 0x320)
struct UMonitorSelectionWidget_C : UBaseSettingsWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UImage* Background; // 0x328(0x08)
	struct UTextBlock* DisplayNameText; // 0x330(0x08)
	struct UImage* Image_1; // 0x338(0x08)
	struct UComboBoxString* MonitorListcombo; // 0x340(0x08)
	struct USettingsUniversalHoverBG_C* SettingsUniversalHoverBG; // 0x348(0x08)
	struct FText DisplayText; // 0x350(0x18)
	struct FText DisplayTooltip; // 0x368(0x18)
	struct FText SettingName; // 0x380(0x18)
	bool IsInitialized; // 0x398(0x01)
	char pad_399[0x7]; // 0x399(0x07)
	struct TArray<struct FString> MonitorNames; // 0x3a0(0x10)
	int32_t OptionToSave; // 0x3b0(0x04)

	bool ShouldDisplay(); // Function MonitorSelectionWidget.MonitorSelectionWidget_C.ShouldDisplay // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateSelection(); // Function MonitorSelectionWidget.MonitorSelectionWidget_C.UpdateSelection // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PopulateMonitorList(); // Function MonitorSelectionWidget.MonitorSelectionWidget_C.PopulateMonitorList // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetStaticText(); // Function MonitorSelectionWidget.MonitorSelectionWidget_C.SetStaticText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__ResolutionListcombo_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature(struct FString SelectedItem, enum class ESelectInfo SelectionType); // Function MonitorSelectionWidget.MonitorSelectionWidget_C.BndEvt__ResolutionListcombo_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void OnSynchronizeProperties(); // Function MonitorSelectionWidget.MonitorSelectionWidget_C.OnSynchronizeProperties // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Destruct(); // Function MonitorSelectionWidget.MonitorSelectionWidget_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void SettingsUINeedsUpdate(); // Function MonitorSelectionWidget.MonitorSelectionWidget_C.SettingsUINeedsUpdate // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function MonitorSelectionWidget.MonitorSelectionWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function MonitorSelectionWidget.MonitorSelectionWidget_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1af5410
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function MonitorSelectionWidget.MonitorSelectionWidget_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1af5410
	void SaveSetting(); // Function MonitorSelectionWidget.MonitorSelectionWidget_C.SaveSetting // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_MonitorSelectionWidget(int32_t EntryPoint); // Function MonitorSelectionWidget.MonitorSelectionWidget_C.ExecuteUbergraph_MonitorSelectionWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

