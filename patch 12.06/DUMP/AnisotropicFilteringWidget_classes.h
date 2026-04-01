// WidgetBlueprintGeneratedClass AnisotropicFilteringWidget.AnisotropicFilteringWidget_C
// Size: 0x39c (Inherited: 0x320)
struct UAnisotropicFilteringWidget_C : UBaseSettingsWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UComboBoxString* AnisotropyListcombo; // 0x328(0x08)
	struct UImage* Background; // 0x330(0x08)
	struct UTextBlock* DisplayNameText; // 0x338(0x08)
	struct UImage* Image_1; // 0x340(0x08)
	struct USettingsUniversalHoverBG_C* SettingsUniversalHoverBG; // 0x348(0x08)
	struct FText DisplayText; // 0x350(0x18)
	struct FText DisplayTooltip; // 0x368(0x18)
	enum class EAresIntSettingName SettingName; // 0x380(0x01)
	bool IsInitialized; // 0x381(0x01)
	char pad_382[0x6]; // 0x382(0x06)
	struct TArray<int32_t> AnisotropyOptions; // 0x388(0x10)
	int32_t OptionToSave; // 0x398(0x04)

	void GetIntSettingName(enum class EAresIntSettingName& IntSettingName); // Function AnisotropicFilteringWidget.AnisotropicFilteringWidget_C.GetIntSettingName // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	bool ShouldDisplay(); // Function AnisotropicFilteringWidget.AnisotropicFilteringWidget_C.ShouldDisplay // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetupAnisotropicOptions(); // Function AnisotropicFilteringWidget.AnisotropicFilteringWidget_C.SetupAnisotropicOptions // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void AnisotropyFactorToIndex(int32_t AnisotropicFiltering, int32_t& ArrayIndex); // Function AnisotropicFilteringWidget.AnisotropicFilteringWidget_C.AnisotropyFactorToIndex // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1b42740
	void GetAnisotropyText(int32_t AnisotropyValue, struct FString& AnisotropyOptionString); // Function AnisotropicFilteringWidget.AnisotropicFilteringWidget_C.GetAnisotropyText // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1b42740
	void SetStaticText(); // Function AnisotropicFilteringWidget.AnisotropicFilteringWidget_C.SetStaticText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function AnisotropicFilteringWidget.AnisotropicFilteringWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnSynchronizeProperties(); // Function AnisotropicFilteringWidget.AnisotropicFilteringWidget_C.OnSynchronizeProperties // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__ResolutionListcombo_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature(struct FString SelectedItem, enum class ESelectInfo SelectionType); // Function AnisotropicFilteringWidget.AnisotropicFilteringWidget_C.BndEvt__ResolutionListcombo_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function AnisotropicFilteringWidget.AnisotropicFilteringWidget_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1b42740
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function AnisotropicFilteringWidget.AnisotropicFilteringWidget_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1b42740
	void SaveSetting(); // Function AnisotropicFilteringWidget.AnisotropicFilteringWidget_C.SaveSetting // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void RefreshIntSettingVisual(); // Function AnisotropicFilteringWidget.AnisotropicFilteringWidget_C.RefreshIntSettingVisual // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_AnisotropicFilteringWidget(int32_t EntryPoint); // Function AnisotropicFilteringWidget.AnisotropicFilteringWidget_C.ExecuteUbergraph_AnisotropicFilteringWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

