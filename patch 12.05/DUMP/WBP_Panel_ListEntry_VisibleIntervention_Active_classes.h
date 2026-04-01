// WidgetBlueprintGeneratedClass WBP_Panel_ListEntry_VisibleIntervention_Active.WBP_Panel_ListEntry_VisibleIntervention_Active_C
// Size: 0x491 (Inherited: 0x3e8)
struct UWBP_Panel_ListEntry_VisibleIntervention_Active_C : UWBP_Panel_ListEntry_Social_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e8(0x08)
	struct UClientExperimentationViewModel* ClientExperimentationViewModel; // 0x3f0(0x08)
	struct UAresCommonRichText* Description_RestrictionType; // 0x3f8(0x08)
	struct UHorizontalBox* HorizontalBox_1; // 0x400(0x08)
	struct UAresMenuAnchor* HoverMessageAnchor; // 0x408(0x08)
	struct UVerticalBox* Text; // 0x410(0x08)
	struct UVerticalBox* Timer; // 0x418(0x08)
	struct UAresCommonRichText* Title_Restriction; // 0x420(0x08)
	struct UWBP_Button_Social_Intervention_C* WBP_Button_Social_Intervention; // 0x428(0x08)
	struct UWBP_Timer_Countdown_C* WBP_Timer_Countdown; // 0x430(0x08)
	struct FText Hover_TitleText; // 0x438(0x18)
	struct FText Hover_SubTitleText; // 0x450(0x18)
	struct FText Hover_MessageText; // 0x468(0x18)
	struct UCommonTextStyle* TimerHoverStyle; // 0x480(0x08)
	struct UCommonTextStyle* TimerUnhoverStyle; // 0x488(0x08)
	bool HoverMessageEnabled; // 0x490(0x01)

	void CloseHoverMessage(); // Function WBP_Panel_ListEntry_VisibleIntervention_Active.WBP_Panel_ListEntry_VisibleIntervention_Active_C.CloseHoverMessage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OpenHoverMessage(); // Function WBP_Panel_ListEntry_VisibleIntervention_Active.WBP_Panel_ListEntry_VisibleIntervention_Active_C.OpenHoverMessage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleExperimentAssignmentChanged(struct UGroupExperimentAssignment* Group); // Function WBP_Panel_ListEntry_VisibleIntervention_Active.WBP_Panel_ListEntry_VisibleIntervention_Active_C.HandleExperimentAssignmentChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	struct UWidget* BP_GetDesiredFocusTarget(); // Function WBP_Panel_ListEntry_VisibleIntervention_Active.WBP_Panel_ListEntry_VisibleIntervention_Active_C.BP_GetDesiredFocusTarget // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1af5410
	struct UWidget* OnHoverMessageMenuAnchorGetMenuContent(); // Function WBP_Panel_ListEntry_VisibleIntervention_Active.WBP_Panel_ListEntry_VisibleIntervention_Active_C.OnHoverMessageMenuAnchorGetMenuContent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void InitializeListEntry(struct UObject* InListItemObject); // Function WBP_Panel_ListEntry_VisibleIntervention_Active.WBP_Panel_ListEntry_VisibleIntervention_Active_C.InitializeListEntry // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnInitialized(); // Function WBP_Panel_ListEntry_VisibleIntervention_Active.WBP_Panel_ListEntry_VisibleIntervention_Active_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_Panel_ListEntry_VisibleIntervention_Active_WBP_Button_Social_Intervention_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_ListEntry_VisibleIntervention_Active.WBP_Panel_ListEntry_VisibleIntervention_Active_C.BndEvt__WBP_Panel_ListEntry_VisibleIntervention_Active_WBP_Button_Social_Intervention_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_Panel_ListEntry_VisibleIntervention_Active_WBP_Button_Social_Intervention_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_ListEntry_VisibleIntervention_Active.WBP_Panel_ListEntry_VisibleIntervention_Active_C.BndEvt__WBP_Panel_ListEntry_VisibleIntervention_Active_WBP_Button_Social_Intervention_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_Panel_ListEntry_VisibleIntervention_Active_WBP_Button_Social_Intervention_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_ListEntry_VisibleIntervention_Active.WBP_Panel_ListEntry_VisibleIntervention_Active_C.BndEvt__WBP_Panel_ListEntry_VisibleIntervention_Active_WBP_Button_Social_Intervention_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_Panel_ListEntry_VisibleIntervention_Active_WBP_Timer_Countdown_K2Node_ComponentBoundEvent_1_OnTimerExpired__DelegateSignature(); // Function WBP_Panel_ListEntry_VisibleIntervention_Active.WBP_Panel_ListEntry_VisibleIntervention_Active_C.BndEvt__WBP_Panel_ListEntry_VisibleIntervention_Active_WBP_Timer_Countdown_K2Node_ComponentBoundEvent_1_OnTimerExpired__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function WBP_Panel_ListEntry_VisibleIntervention_Active.WBP_Panel_ListEntry_VisibleIntervention_Active_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void BP_OnEntryReleased(); // Function WBP_Panel_ListEntry_VisibleIntervention_Active.WBP_Panel_ListEntry_VisibleIntervention_Active_C.BP_OnEntryReleased // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Panel_ListEntry_VisibleIntervention_Active(int32_t EntryPoint); // Function WBP_Panel_ListEntry_VisibleIntervention_Active.WBP_Panel_ListEntry_VisibleIntervention_Active_C.ExecuteUbergraph_WBP_Panel_ListEntry_VisibleIntervention_Active // (Final|UbergraphFunction) // @ game+0x1af5410
};

