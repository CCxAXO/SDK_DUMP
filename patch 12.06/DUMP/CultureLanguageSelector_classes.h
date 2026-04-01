// WidgetBlueprintGeneratedClass CultureLanguageSelector.CultureLanguageSelector_C
// Size: 0x410 (Inherited: 0x320)
struct UCultureLanguageSelector_C : UBaseSettingsWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UImage* Background; // 0x328(0x08)
	struct UComboBoxString* CultureDropdown; // 0x330(0x08)
	struct UTextBlock* DisplayNameText; // 0x338(0x08)
	struct UImage* Image_1; // 0x340(0x08)
	struct USettingsUniversalHoverBG_C* SettingsUniversalHoverBG; // 0x348(0x08)
	bool IsInitialized; // 0x350(0x01)
	char pad_351[0x7]; // 0x351(0x07)
	struct TMap<struct FString, struct FString> CultureMap; // 0x358(0x50)
	struct UConfirmationModal_C* ConfirmationWidget; // 0x3a8(0x08)
	struct TMap<struct FString, struct FString> OverrideMap; // 0x3b0(0x50)
	struct FString ItemToSave; // 0x400(0x10)

	void PopulateComboBoxMobile(); // Function CultureLanguageSelector.CultureLanguageSelector_C.PopulateComboBoxMobile // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PopulateComboBoxPC(); // Function CultureLanguageSelector.CultureLanguageSelector_C.PopulateComboBoxPC // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	bool ShouldDisplay(); // Function CultureLanguageSelector.CultureLanguageSelector_C.ShouldDisplay // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	struct FString GetCultureName(struct FString Culture); // Function CultureLanguageSelector.CultureLanguageSelector_C.GetCultureName // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__ResolutionListcombo_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature(struct FString SelectedItem, enum class ESelectInfo SelectionType); // Function CultureLanguageSelector.CultureLanguageSelector_C.BndEvt__ResolutionListcombo_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function CultureLanguageSelector.CultureLanguageSelector_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1b42740
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function CultureLanguageSelector.CultureLanguageSelector_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function CultureLanguageSelector.CultureLanguageSelector_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnConfirmed(); // Function CultureLanguageSelector.CultureLanguageSelector_C.OnConfirmed // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SaveSetting(); // Function CultureLanguageSelector.CultureLanguageSelector_C.SaveSetting // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_CultureLanguageSelector(int32_t EntryPoint); // Function CultureLanguageSelector.CultureLanguageSelector_C.ExecuteUbergraph_CultureLanguageSelector // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

