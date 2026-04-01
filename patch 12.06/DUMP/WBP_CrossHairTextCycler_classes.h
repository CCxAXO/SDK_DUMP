// WidgetBlueprintGeneratedClass WBP_CrossHairTextCycler.WBP_CrossHairTextCycler_C
// Size: 0x1c78 (Inherited: 0x1bf0)
struct UWBP_CrossHairTextCycler_C : UAresCycleSettingClickablePanel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1bf0(0x08)
	struct UAresInputSwitcher* AresInputSwitcher; // 0x1bf8(0x08)
	struct UWBP_Button_Basic_C* LeftArrow_Console; // 0x1c00(0x08)
	struct UAresButtonTextComponent* MainCaption; // 0x1c08(0x08)
	struct UWBP_Button_Basic_C* RightArrow_Console; // 0x1c10(0x08)
	struct UAresButtonTextComponent* SubCaption; // 0x1c18(0x08)
	struct UWBP_SettingsEntryTemplate_C* WBP_SettingsEntryTemplate; // 0x1c20(0x08)
	bool ShowTabs; // 0x1c28(0x01)
	char pad_1C29[0x7]; // 0x1c29(0x07)
	double Content Spacing; // 0x1c30(0x08)
	struct UMaterialInstanceDynamic* MITabs; // 0x1c38(0x08)
	struct UMaterialInstance* MatTabsParent; // 0x1c40(0x08)
	struct FMulticastInlineDelegate OnOptionChanged; // 0x1c48(0x10)
	bool bRightArrowPressed; // 0x1c58(0x01)
	bool bLeftArrowPressed; // 0x1c59(0x01)
	char pad_1C5A[0x2]; // 0x1c5a(0x02)
	struct FName IsPressedName; // 0x1c5c(0x0c)
	struct FName IsFocusedName; // 0x1c68(0x0c)
	int32_t NumberOfOptions; // 0x1c74(0x04)

	void SetTabCount(int32_t TabCount); // Function WBP_CrossHairTextCycler.WBP_CrossHairTextCycler_C.SetTabCount // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetDisabledVisualState(bool IsDisabled); // Function WBP_CrossHairTextCycler.WBP_CrossHairTextCycler_C.SetDisabledVisualState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetHoveredVisualState(bool IsHovered); // Function WBP_CrossHairTextCycler.WBP_CrossHairTextCycler_C.SetHoveredVisualState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetLeftArrowPressed(bool IsPressed); // Function WBP_CrossHairTextCycler.WBP_CrossHairTextCycler_C.SetLeftArrowPressed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetRightArrowPressed(bool IsPressed); // Function WBP_CrossHairTextCycler.WBP_CrossHairTextCycler_C.SetRightArrowPressed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetFormatting(); // Function WBP_CrossHairTextCycler.WBP_CrossHairTextCycler_C.SetFormatting // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetMaterialSelectedTab(int32_t NewSelection); // Function WBP_CrossHairTextCycler.WBP_CrossHairTextCycler_C.SetMaterialSelectedTab // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetDynamicTabsMaterial(); // Function WBP_CrossHairTextCycler.WBP_CrossHairTextCycler_C.SetDynamicTabsMaterial // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WBP_CrossHairTextCycler.WBP_CrossHairTextCycler_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void BP_OnTransitionHovered(); // Function WBP_CrossHairTextCycler.WBP_CrossHairTextCycler_C.BP_OnTransitionHovered // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void BP_OnTransitionUnHovered(); // Function WBP_CrossHairTextCycler.WBP_CrossHairTextCycler_C.BP_OnTransitionUnHovered // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void BP_OnClicked(); // Function WBP_CrossHairTextCycler.WBP_CrossHairTextCycler_C.BP_OnClicked // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void InternalOnRightNavigation(); // Function WBP_CrossHairTextCycler.WBP_CrossHairTextCycler_C.InternalOnRightNavigation // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void InternalOnRightNavigationHeld(); // Function WBP_CrossHairTextCycler.WBP_CrossHairTextCycler_C.InternalOnRightNavigationHeld // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void InternalOnLeftNavigation(); // Function WBP_CrossHairTextCycler.WBP_CrossHairTextCycler_C.InternalOnLeftNavigation // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void InternalOnLeftNavigationHeld(); // Function WBP_CrossHairTextCycler.WBP_CrossHairTextCycler_C.InternalOnLeftNavigationHeld // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void BP_OnTransitionDisabled(); // Function WBP_CrossHairTextCycler.WBP_CrossHairTextCycler_C.BP_OnTransitionDisabled // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void BP_OnTransitionEnabled(); // Function WBP_CrossHairTextCycler.WBP_CrossHairTextCycler_C.BP_OnTransitionEnabled // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void BP_OnNumberOfOptionsSet(int32_t NewNumberOfOptions); // Function WBP_CrossHairTextCycler.WBP_CrossHairTextCycler_C.BP_OnNumberOfOptionsSet // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void BP_OnCurrentOptionIndexSet(int32_t NewCurrentOptionIndex); // Function WBP_CrossHairTextCycler.WBP_CrossHairTextCycler_C.BP_OnCurrentOptionIndexSet // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__WBP_CrossHairTextCycler_ValueBox_K2Node_ComponentBoundEvent_3_OnEditableTextBoxCommittedEvent__DelegateSignature(struct FText& Text, enum class ETextCommit CommitMethod); // Function WBP_CrossHairTextCycler.WBP_CrossHairTextCycler_C.BndEvt__WBP_CrossHairTextCycler_ValueBox_K2Node_ComponentBoundEvent_3_OnEditableTextBoxCommittedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_CrossHairTextCycler(int32_t EntryPoint); // Function WBP_CrossHairTextCycler.WBP_CrossHairTextCycler_C.ExecuteUbergraph_WBP_CrossHairTextCycler // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
	void OnOptionChanged__DelegateSignature(); // Function WBP_CrossHairTextCycler.WBP_CrossHairTextCycler_C.OnOptionChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

