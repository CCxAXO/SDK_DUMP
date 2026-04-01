// WidgetBlueprintGeneratedClass WBP_Panel_List_SocialPanelPartyMember.WBP_Panel_List_SocialPanelPartyMember_C
// Size: 0x500 (Inherited: 0x4de)
struct UWBP_Panel_List_SocialPanelPartyMember_C : UWBP_Panel_List_Social_Padded_C {
	struct FSocialPanelPlayerAppearance PlayerAppearance; // 0x4de(0x03)
	char pad_4E1[0x7]; // 0x4e1(0x07)
	struct USocialPanelPartyMemberListViewModel* PartyMemberListViewModel; // 0x4e8(0x08)
	struct FString PartyId; // 0x4f0(0x10)

	void SetPartyId(struct FString InPartyId); // Function WBP_Panel_List_SocialPanelPartyMember.WBP_Panel_List_SocialPanelPartyMember_C.SetPartyId // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitializeListViewModel(struct USocialListViewModelBase* InViewModel); // Function WBP_Panel_List_SocialPanelPartyMember.WBP_Panel_List_SocialPanelPartyMember_C.InitializeListViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitializeListEntryWidget(struct UWBP_Panel_ListEntry_Social_Base_C* ListEntryWidget, struct UObject* ListItemObject); // Function WBP_Panel_List_SocialPanelPartyMember.WBP_Panel_List_SocialPanelPartyMember_C.InitializeListEntryWidget // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

