// WidgetBlueprintGeneratedClass WBP_Panel_ListEntry_VisibleIntervention_AtRisk.WBP_Panel_ListEntry_VisibleIntervention_AtRisk_C
// Size: 0x449 (Inherited: 0x3e8)
struct UWBP_Panel_ListEntry_VisibleIntervention_AtRisk_C : UWBP_Panel_ListEntry_Social_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e8(0x08)
	struct UClientExperimentationViewModel* ClientExperimentationViewModel; // 0x3f0(0x08)
	struct UAresMenuAnchor* HoverMessageAnchor; // 0x3f8(0x08)
	struct UAresCommonRichText* Title_AtRisk; // 0x400(0x08)
	struct UWBP_Button_Social_List_Icon_C* WBP_Button_Social_List_Icon; // 0x408(0x08)
	struct FText Hover_TitleText; // 0x410(0x18)
	struct FText Hover_MessageText; // 0x428(0x18)
	struct UTexture2D* Hover_BehaviorIcon; // 0x440(0x08)
	bool HoverMessageEnabled; // 0x448(0x01)

	void CloseHoverMessage(); // Function WBP_Panel_ListEntry_VisibleIntervention_AtRisk.WBP_Panel_ListEntry_VisibleIntervention_AtRisk_C.CloseHoverMessage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OpenHoverMessage(); // Function WBP_Panel_ListEntry_VisibleIntervention_AtRisk.WBP_Panel_ListEntry_VisibleIntervention_AtRisk_C.OpenHoverMessage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleExperimentAssignmentChanged(struct UGroupExperimentAssignment* Group); // Function WBP_Panel_ListEntry_VisibleIntervention_AtRisk.WBP_Panel_ListEntry_VisibleIntervention_AtRisk_C.HandleExperimentAssignmentChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	struct UWidget* BP_GetDesiredFocusTarget(); // Function WBP_Panel_ListEntry_VisibleIntervention_AtRisk.WBP_Panel_ListEntry_VisibleIntervention_AtRisk_C.BP_GetDesiredFocusTarget // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1b42740
	struct UWidget* OnHoverMessageMenuAnchorGetMenuContent(); // Function WBP_Panel_ListEntry_VisibleIntervention_AtRisk.WBP_Panel_ListEntry_VisibleIntervention_AtRisk_C.OnHoverMessageMenuAnchorGetMenuContent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void InitializeListEntry(struct UObject* InListItemObject); // Function WBP_Panel_ListEntry_VisibleIntervention_AtRisk.WBP_Panel_ListEntry_VisibleIntervention_AtRisk_C.InitializeListEntry // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnListItemObjectSet(struct UObject* ListItemObject); // Function WBP_Panel_ListEntry_VisibleIntervention_AtRisk.WBP_Panel_ListEntry_VisibleIntervention_AtRisk_C.OnListItemObjectSet // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__WBP_Panel_ListEntry_VisibleIntervention_AtRisk_WBP_Button_Social_List_Icon_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_ListEntry_VisibleIntervention_AtRisk.WBP_Panel_ListEntry_VisibleIntervention_AtRisk_C.BndEvt__WBP_Panel_ListEntry_VisibleIntervention_AtRisk_WBP_Button_Social_List_Icon_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__WBP_Panel_ListEntry_VisibleIntervention_AtRisk_WBP_Button_Social_List_Icon_K2Node_ComponentBoundEvent_1_CommonSelectedStateChangedBase__DelegateSignature(struct UCommonButtonBase* Button, bool Selected); // Function WBP_Panel_ListEntry_VisibleIntervention_AtRisk.WBP_Panel_ListEntry_VisibleIntervention_AtRisk_C.BndEvt__WBP_Panel_ListEntry_VisibleIntervention_AtRisk_WBP_Button_Social_List_Icon_K2Node_ComponentBoundEvent_1_CommonSelectedStateChangedBase__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__WBP_Panel_ListEntry_VisibleIntervention_AtRisk_WBP_Button_Social_List_Icon_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_ListEntry_VisibleIntervention_AtRisk.WBP_Panel_ListEntry_VisibleIntervention_AtRisk_C.BndEvt__WBP_Panel_ListEntry_VisibleIntervention_AtRisk_WBP_Button_Social_List_Icon_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__WBP_Panel_ListEntry_VisibleIntervention_AtRisk_WBP_Button_Social_List_Icon_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_ListEntry_VisibleIntervention_AtRisk.WBP_Panel_ListEntry_VisibleIntervention_AtRisk_C.BndEvt__WBP_Panel_ListEntry_VisibleIntervention_AtRisk_WBP_Button_Social_List_Icon_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function WBP_Panel_ListEntry_VisibleIntervention_AtRisk.WBP_Panel_ListEntry_VisibleIntervention_AtRisk_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Panel_ListEntry_VisibleIntervention_AtRisk(int32_t EntryPoint); // Function WBP_Panel_ListEntry_VisibleIntervention_AtRisk.WBP_Panel_ListEntry_VisibleIntervention_AtRisk_C.ExecuteUbergraph_WBP_Panel_ListEntry_VisibleIntervention_AtRisk // (Final|UbergraphFunction) // @ game+0x1b42740
};

