// WidgetBlueprintGeneratedClass WBP_Settings_Dropdown.WBP_Settings_Dropdown_C
// Size: 0x1cc8 (Inherited: 0x1bf0)
struct UWBP_Settings_Dropdown_C : UAresCycleSettingClickablePanel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1bf0(0x08)
	struct UAresInputSwitcher* AresInputSwitcher; // 0x1bf8(0x08)
	struct UWBP_Button_Basic_C* LeftArrow_Console; // 0x1c00(0x08)
	struct UWBP_Button_Basic_C* RightArrow_Console; // 0x1c08(0x08)
	struct UAresButtonTextComponent* Txt_Primary; // 0x1c10(0x08)
	struct UWBP_SettingsEntryTemplate_C* WBP_SettingsEntryTemplate; // 0x1c18(0x08)
	double Content Spacing; // 0x1c20(0x08)
	struct UMaterialInstanceDynamic* MITabs; // 0x1c28(0x08)
	struct UMaterialInstance* MatTabsParent; // 0x1c30(0x08)
	struct FMulticastInlineDelegate OnOptionChanged; // 0x1c38(0x10)
	bool bRightArrowPressed; // 0x1c48(0x01)
	bool bLeftArrowPressed; // 0x1c49(0x01)
	char pad_1C4A[0x2]; // 0x1c4a(0x02)
	struct FName IsPressedName; // 0x1c4c(0x0c)
	struct FName IsFocusedName; // 0x1c58(0x0c)
	int32_t NumberOfOptions; // 0x1c64(0x04)
	struct FName IsDisabledName; // 0x1c68(0x0c)
	char pad_1C74[0x4]; // 0x1c74(0x04)
	struct TMap<struct FString, struct USharedComboOption_Convergence_C*> StringOptionToWidgetMap; // 0x1c78(0x50)

	struct UWidget* OnGenerateButtonContentWidget_ComboBox(struct FString Item); // Function WBP_Settings_Dropdown.WBP_Settings_Dropdown_C.OnGenerateButtonContentWidget_ComboBox // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	struct UWidget* OnGenerateWidget_ComboBox(struct FString Item); // Function WBP_Settings_Dropdown.WBP_Settings_Dropdown_C.OnGenerateWidget_ComboBox // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Set Disabled Visual State(bool IsDisabled); // Function WBP_Settings_Dropdown.WBP_Settings_Dropdown_C.Set Disabled Visual State // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetHoveredVisualState(bool IsHovered); // Function WBP_Settings_Dropdown.WBP_Settings_Dropdown_C.SetHoveredVisualState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetLeftArrowPressed(bool IsPressed); // Function WBP_Settings_Dropdown.WBP_Settings_Dropdown_C.SetLeftArrowPressed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetRightArrowPressed(bool IsPressed); // Function WBP_Settings_Dropdown.WBP_Settings_Dropdown_C.SetRightArrowPressed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetMaterialSelectedTab(int32_t NewSelection); // Function WBP_Settings_Dropdown.WBP_Settings_Dropdown_C.SetMaterialSelectedTab // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetDynamicTabsMaterial(); // Function WBP_Settings_Dropdown.WBP_Settings_Dropdown_C.SetDynamicTabsMaterial // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetTabCount(int32_t TabCount); // Function WBP_Settings_Dropdown.WBP_Settings_Dropdown_C.SetTabCount // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetContentSpacing(); // Function WBP_Settings_Dropdown.WBP_Settings_Dropdown_C.SetContentSpacing // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WBP_Settings_Dropdown.WBP_Settings_Dropdown_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void BP_OnTransitionHovered(); // Function WBP_Settings_Dropdown.WBP_Settings_Dropdown_C.BP_OnTransitionHovered // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void BP_OnTransitionUnHovered(); // Function WBP_Settings_Dropdown.WBP_Settings_Dropdown_C.BP_OnTransitionUnHovered // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void InternalOnRightNavigation(); // Function WBP_Settings_Dropdown.WBP_Settings_Dropdown_C.InternalOnRightNavigation // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void InternalOnLeftNavigation(); // Function WBP_Settings_Dropdown.WBP_Settings_Dropdown_C.InternalOnLeftNavigation // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void InternalOnRightNavigationHeld(); // Function WBP_Settings_Dropdown.WBP_Settings_Dropdown_C.InternalOnRightNavigationHeld // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void BP_OnClicked(); // Function WBP_Settings_Dropdown.WBP_Settings_Dropdown_C.BP_OnClicked // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void InternalOnLeftNavigationHeld(); // Function WBP_Settings_Dropdown.WBP_Settings_Dropdown_C.InternalOnLeftNavigationHeld // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void BP_OnTransitionDisabled(); // Function WBP_Settings_Dropdown.WBP_Settings_Dropdown_C.BP_OnTransitionDisabled // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void BP_OnTransitionEnabled(); // Function WBP_Settings_Dropdown.WBP_Settings_Dropdown_C.BP_OnTransitionEnabled // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void BP_OnNumberOfOptionsSet(int32_t NewNumberOfOptions); // Function WBP_Settings_Dropdown.WBP_Settings_Dropdown_C.BP_OnNumberOfOptionsSet // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void BP_OnCurrentOptionIndexSet(int32_t NewCurrentOptionIndex); // Function WBP_Settings_Dropdown.WBP_Settings_Dropdown_C.BP_OnCurrentOptionIndexSet // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__WBP_Settings_Dropdown_ComboBox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(struct FString SelectedItem, enum class ESelectInfo SelectionType); // Function WBP_Settings_Dropdown.WBP_Settings_Dropdown_C.BndEvt__WBP_Settings_Dropdown_ComboBox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Settings_Dropdown(int32_t EntryPoint); // Function WBP_Settings_Dropdown.WBP_Settings_Dropdown_C.ExecuteUbergraph_WBP_Settings_Dropdown // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
	void OnOptionChanged__DelegateSignature(); // Function WBP_Settings_Dropdown.WBP_Settings_Dropdown_C.OnOptionChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

