// WidgetBlueprintGeneratedClass ResolutionWidget.ResolutionWidget_C
// Size: 0x3ec (Inherited: 0x320)
struct UResolutionWidget_C : UBaseSettingsWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UImage* Background; // 0x328(0x08)
	struct UTextBlock* DisplayNameText; // 0x330(0x08)
	struct UImage* Image_1; // 0x338(0x08)
	struct UComboBoxString* ResolutionListcombo; // 0x340(0x08)
	struct USettingsUniversalHoverBG_C* SettingsUniversalHoverBG; // 0x348(0x08)
	struct FText DisplayText; // 0x350(0x18)
	struct FText DisplayTooltip; // 0x368(0x18)
	struct FText SettingName; // 0x380(0x18)
	struct UObject* RoamingSetting; // 0x398(0x08)
	struct TArray<struct FString> ResolutionNames; // 0x3a0(0x10)
	bool IsInitialized; // 0x3b0(0x01)
	char pad_3B1[0x7]; // 0x3b1(0x07)
	struct TArray<struct FAresResolutionInfo> SupportedResolutions; // 0x3b8(0x10)
	struct FText CustomResolutionText; // 0x3c8(0x18)
	struct FAresResolutionInfo ResolutionToSave; // 0x3e0(0x0c)

	bool ShouldDisplay(); // Function ResolutionWidget.ResolutionWidget_C.ShouldDisplay // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateSelection(); // Function ResolutionWidget.ResolutionWidget_C.UpdateSelection // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void RepopulateResolutions(); // Function ResolutionWidget.ResolutionWidget_C.RepopulateResolutions // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetStaticText(); // Function ResolutionWidget.ResolutionWidget_C.SetStaticText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function ResolutionWidget.ResolutionWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnSynchronizeProperties(); // Function ResolutionWidget.ResolutionWidget_C.OnSynchronizeProperties // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__ResolutionListcombo_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature(struct FString SelectedItem, enum class ESelectInfo SelectionType); // Function ResolutionWidget.ResolutionWidget_C.BndEvt__ResolutionListcombo_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void Destruct(); // Function ResolutionWidget.ResolutionWidget_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnSettingsUINeedsUpdate(); // Function ResolutionWidget.ResolutionWidget_C.OnSettingsUINeedsUpdate // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function ResolutionWidget.ResolutionWidget_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1b42740
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function ResolutionWidget.ResolutionWidget_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1b42740
	void SaveSetting(); // Function ResolutionWidget.ResolutionWidget_C.SaveSetting // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_ResolutionWidget(int32_t EntryPoint); // Function ResolutionWidget.ResolutionWidget_C.ExecuteUbergraph_ResolutionWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

