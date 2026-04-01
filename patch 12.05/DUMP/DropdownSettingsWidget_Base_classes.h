// WidgetBlueprintGeneratedClass DropdownSettingsWidget_Base.DropdownSettingsWidget_Base_C
// Size: 0x3d0 (Inherited: 0x320)
struct UDropdownSettingsWidget_Base_C : UBaseSettingsWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UImage* Background; // 0x328(0x08)
	struct UComboBoxString* ComboBox; // 0x330(0x08)
	struct UTextBlock* DisplayNameText; // 0x338(0x08)
	struct UImage* Image_1; // 0x340(0x08)
	struct USettingsUniversalHoverBG_C* SettingsUniversalHoverBG; // 0x348(0x08)
	struct FText DisplayText; // 0x350(0x18)
	struct FText DisplayTooltip; // 0x368(0x18)
	bool IsInitialized; // 0x380(0x01)
	char pad_381[0x7]; // 0x381(0x07)
	struct TArray<struct FText> OPTIONS; // 0x388(0x10)
	struct FMulticastInlineDelegate OnSelectionChanged; // 0x398(0x10)
	struct FString SelectedItem; // 0x3a8(0x10)
	struct TArray<int32_t> IntOptions; // 0x3b8(0x10)
	bool IsSettingIndexBased; // 0x3c8(0x01)
	char pad_3C9[0x3]; // 0x3c9(0x03)
	int32_t SettingValueToSave; // 0x3cc(0x04)

	bool ShouldDisplay(); // Function DropdownSettingsWidget_Base.DropdownSettingsWidget_Base_C.ShouldDisplay // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SettingIndexToSelectedIndex(int32_t& SelectedIndex); // Function DropdownSettingsWidget_Base.DropdownSettingsWidget_Base_C.SettingIndexToSelectedIndex // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void SelectedIndexToSettingIndex(int32_t& SettingIndex); // Function DropdownSettingsWidget_Base.DropdownSettingsWidget_Base_C.SelectedIndexToSettingIndex // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void InitializeOptions(); // Function DropdownSettingsWidget_Base.DropdownSettingsWidget_Base_C.InitializeOptions // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetStaticText(); // Function DropdownSettingsWidget_Base.DropdownSettingsWidget_Base_C.SetStaticText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function DropdownSettingsWidget_Base.DropdownSettingsWidget_Base_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnSynchronizeProperties(); // Function DropdownSettingsWidget_Base.DropdownSettingsWidget_Base_C.OnSynchronizeProperties // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__ResolutionListcombo_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature(struct FString SelectedItem, enum class ESelectInfo SelectionType); // Function DropdownSettingsWidget_Base.DropdownSettingsWidget_Base_C.BndEvt__ResolutionListcombo_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function DropdownSettingsWidget_Base.DropdownSettingsWidget_Base_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1af5410
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function DropdownSettingsWidget_Base.DropdownSettingsWidget_Base_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1af5410
	void TryDisplay(); // Function DropdownSettingsWidget_Base.DropdownSettingsWidget_Base_C.TryDisplay // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_DropdownSettingsWidget_Base(int32_t EntryPoint); // Function DropdownSettingsWidget_Base.DropdownSettingsWidget_Base_C.ExecuteUbergraph_DropdownSettingsWidget_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
	void OnSelectionChanged__DelegateSignature(struct FString SelectedItem); // Function DropdownSettingsWidget_Base.DropdownSettingsWidget_Base_C.OnSelectionChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

