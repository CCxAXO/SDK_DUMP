// WidgetBlueprintGeneratedClass WBP_Panel_ListEntry_SocialPanelParty.WBP_Panel_ListEntry_SocialPanelParty_C
// Size: 0x420 (Inherited: 0x3e8)
struct UWBP_Panel_ListEntry_SocialPanelParty_C : UWBP_Panel_ListEntry_Social_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e8(0x08)
	struct ULeavePartyViewModel* LeavePartyViewModel; // 0x3f0(0x08)
	struct UWBP_Button_Social_Ghost_C* Button_LeaveParty; // 0x3f8(0x08)
	struct UWBP_Panel_ExcludedPartyMemberFooter_C* WBP_Panel_ExcludedPartyMembers; // 0x400(0x08)
	struct UWBP_Panel_List_SocialPanelPartyMember_C* WBP_Panel_List_SocialPanelPartyMember; // 0x408(0x08)
	struct UWBP_Panel_SocialPartyFlag_C* WBP_Panel_SocialPartyFlag; // 0x410(0x08)
	struct USocialPanelPartyListItem* PartyListItem; // 0x418(0x08)

	void UpdateLeavePartyVisibility(); // Function WBP_Panel_ListEntry_SocialPanelParty.WBP_Panel_ListEntry_SocialPanelParty_C.UpdateLeavePartyVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitializeListEntry(struct UObject* InListItemObject); // Function WBP_Panel_ListEntry_SocialPanelParty.WBP_Panel_ListEntry_SocialPanelParty_C.InitializeListEntry // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnCanLeavePartyChanged(bool bInCanLeaveParty); // Function WBP_Panel_ListEntry_SocialPanelParty.WBP_Panel_ListEntry_SocialPanelParty_C.OnCanLeavePartyChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_Panel_ListEntry_SocialPanelParty_Button_LeaveParty_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_ListEntry_SocialPanelParty.WBP_Panel_ListEntry_SocialPanelParty_C.BndEvt__WBP_Panel_ListEntry_SocialPanelParty_Button_LeaveParty_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Panel_ListEntry_SocialPanelParty(int32_t EntryPoint); // Function WBP_Panel_ListEntry_SocialPanelParty.WBP_Panel_ListEntry_SocialPanelParty_C.ExecuteUbergraph_WBP_Panel_ListEntry_SocialPanelParty // (Final|UbergraphFunction) // @ game+0x1af5410
};

