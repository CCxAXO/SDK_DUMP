// WidgetBlueprintGeneratedClass WBP_Panel_List_SocialPanelParty.WBP_Panel_List_SocialPanelParty_C
// Size: 0x4e3 (Inherited: 0x4de)
struct UWBP_Panel_List_SocialPanelParty_C : UWBP_Panel_List_Social_Padded_C {
	struct FSocialPanelPlayerAppearance PlayerAppearance; // 0x4de(0x03)
	enum class ESocialPanelPartyListCategory PartyCategory; // 0x4e1(0x01)
	bool bShowLeavePartyButton; // 0x4e2(0x01)

	void InitializeListViewModel(struct USocialListViewModelBase* InViewModel); // Function WBP_Panel_List_SocialPanelParty.WBP_Panel_List_SocialPanelParty_C.InitializeListViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitializeListEntryWidget(struct UWBP_Panel_ListEntry_Social_Base_C* ListEntryWidget, struct UObject* ListItemObject); // Function WBP_Panel_List_SocialPanelParty.WBP_Panel_List_SocialPanelParty_C.InitializeListEntryWidget // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

