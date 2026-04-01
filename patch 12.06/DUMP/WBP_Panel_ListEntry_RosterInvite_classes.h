// WidgetBlueprintGeneratedClass WBP_Panel_ListEntry_RosterInvite.WBP_Panel_ListEntry_RosterInvite_C
// Size: 0x470 (Inherited: 0x3e8)
struct UWBP_Panel_ListEntry_RosterInvite_C : UWBP_Panel_ListEntry_Social_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e8(0x08)
	struct UPremierEligibilityViewModel* PremierEligibilityViewModel; // 0x3f0(0x08)
	struct URosterInviteViewModel* RosterInviteViewModel; // 0x3f8(0x08)
	struct UWBP_Button_Social_Secondary_Premier_C* Button_Decline; // 0x400(0x08)
	struct UWBP_Button_Social_Secondary_Premier_C* Button_Decline_Alt; // 0x408(0x08)
	struct UWBP_Button_Social_List_Icon_C* Button_List; // 0x410(0x08)
	struct UWBP_Button_Social_Primary_C* Button_Primary; // 0x418(0x08)
	struct UWBP_Button_Social_Secondary_Premier_C* Button_ViewTeam; // 0x420(0x08)
	struct UHorizontalBox* HorizontalBox_SecondaryButtons; // 0x428(0x08)
	struct UOverlay* Overlay_Root; // 0x430(0x08)
	struct USizeBox* SizeBox_TextArea; // 0x438(0x08)
	struct USpacer* Spacer_AcceptToDecline; // 0x440(0x08)
	struct UWBP_Panel_PlayerName_C* WBP_Panel_PlayerName; // 0x448(0x08)
	struct URosterInviteListItem* RosterInviteListItem; // 0x450(0x08)
	struct UAkAudioEvent* AcceptSuccessSound; // 0x458(0x08)
	enum class EAresSocialRosterInviteResponse PendingResponse; // 0x460(0x01)
	char pad_461[0x7]; // 0x461(0x07)
	struct UPremierGenericPopUpModal_C* ActivePopupModal; // 0x468(0x08)

	void HandleDeclineError(); // Function WBP_Panel_ListEntry_RosterInvite.WBP_Panel_ListEntry_RosterInvite_C.HandleDeclineError // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleDeclineSuccess(struct FRoster& Roster); // Function WBP_Panel_ListEntry_RosterInvite.WBP_Panel_ListEntry_RosterInvite_C.HandleDeclineSuccess // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleAcceptError(); // Function WBP_Panel_ListEntry_RosterInvite.WBP_Panel_ListEntry_RosterInvite_C.HandleAcceptError // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleAcceptSuccess(struct FRoster& Roster); // Function WBP_Panel_ListEntry_RosterInvite.WBP_Panel_ListEntry_RosterInvite_C.HandleAcceptSuccess // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void DeclineRosterInvite(); // Function WBP_Panel_ListEntry_RosterInvite.WBP_Panel_ListEntry_RosterInvite_C.DeclineRosterInvite // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void AcceptRosterInvite(); // Function WBP_Panel_ListEntry_RosterInvite.WBP_Panel_ListEntry_RosterInvite_C.AcceptRosterInvite // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetPlayerHasVerifiedAccount(bool& Return Value); // Function WBP_Panel_ListEntry_RosterInvite.WBP_Panel_ListEntry_RosterInvite_C.GetPlayerHasVerifiedAccount // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void GetCurrentPrimaryButtonState(struct FText& OutText, bool& bOutIsEnabled); // Function WBP_Panel_ListEntry_RosterInvite.WBP_Panel_ListEntry_RosterInvite_C.GetCurrentPrimaryButtonState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdatePrimaryButtonAppearance(); // Function WBP_Panel_ListEntry_RosterInvite.WBP_Panel_ListEntry_RosterInvite_C.UpdatePrimaryButtonAppearance // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	struct UWidget* BP_GetDesiredFocusTarget(); // Function WBP_Panel_ListEntry_RosterInvite.WBP_Panel_ListEntry_RosterInvite_C.BP_GetDesiredFocusTarget // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1b42740
	void UpdateResponseAppearance(); // Function WBP_Panel_ListEntry_RosterInvite.WBP_Panel_ListEntry_RosterInvite_C.UpdateResponseAppearance // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateInteractionAppearance(); // Function WBP_Panel_ListEntry_RosterInvite.WBP_Panel_ListEntry_RosterInvite_C.UpdateInteractionAppearance // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetPendingResponse(enum class EAresSocialRosterInviteResponse InPendingResponse); // Function WBP_Panel_ListEntry_RosterInvite.WBP_Panel_ListEntry_RosterInvite_C.SetPendingResponse // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitializeListEntry(struct UObject* InListItemObject); // Function WBP_Panel_ListEntry_RosterInvite.WBP_Panel_ListEntry_RosterInvite_C.InitializeListEntry // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function WBP_Panel_ListEntry_RosterInvite.WBP_Panel_ListEntry_RosterInvite_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1b42740
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function WBP_Panel_ListEntry_RosterInvite.WBP_Panel_ListEntry_RosterInvite_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1b42740
	void OnTeamNameStringChanged(struct FString TeamNameString); // Function WBP_Panel_ListEntry_RosterInvite.WBP_Panel_ListEntry_RosterInvite_C.OnTeamNameStringChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnPremierEligibilityChanged(struct FPremierEligibility InPremierEligibility); // Function WBP_Panel_ListEntry_RosterInvite.WBP_Panel_ListEntry_RosterInvite_C.OnPremierEligibilityChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnLocalPlayerIsInRosterChanged(bool bInIsInRoster); // Function WBP_Panel_ListEntry_RosterInvite.WBP_Panel_ListEntry_RosterInvite_C.OnLocalPlayerIsInRosterChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__WBP_Panel_ListEntry_RosterInvite_Button_Accept_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_ListEntry_RosterInvite.WBP_Panel_ListEntry_RosterInvite_C.BndEvt__WBP_Panel_ListEntry_RosterInvite_Button_Accept_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__WBP_Panel_ListEntry_RosterInvite_Button_Decline_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_ListEntry_RosterInvite.WBP_Panel_ListEntry_RosterInvite_C.BndEvt__WBP_Panel_ListEntry_RosterInvite_Button_Decline_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__WBP_Panel_ListEntry_RosterInvite_Button_Decline_Alt_K2Node_ComponentBoundEvent_6_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_ListEntry_RosterInvite.WBP_Panel_ListEntry_RosterInvite_C.BndEvt__WBP_Panel_ListEntry_RosterInvite_Button_Decline_Alt_K2Node_ComponentBoundEvent_6_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__WBP_Panel_ListEntry_RosterInvite_Button_ViewTeam_K2Node_ComponentBoundEvent_7_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_ListEntry_RosterInvite.WBP_Panel_ListEntry_RosterInvite_C.BndEvt__WBP_Panel_ListEntry_RosterInvite_Button_ViewTeam_K2Node_ComponentBoundEvent_7_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void OnCrestEligibilityConfirmClicked(); // Function WBP_Panel_ListEntry_RosterInvite.WBP_Panel_ListEntry_RosterInvite_C.OnCrestEligibilityConfirmClicked // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnInitialized(); // Function WBP_Panel_ListEntry_RosterInvite.WBP_Panel_ListEntry_RosterInvite_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Panel_ListEntry_RosterInvite(int32_t EntryPoint); // Function WBP_Panel_ListEntry_RosterInvite.WBP_Panel_ListEntry_RosterInvite_C.ExecuteUbergraph_WBP_Panel_ListEntry_RosterInvite // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

