// WidgetBlueprintGeneratedClass WBP_Panel_List_SocialPanelPlayer.WBP_Panel_List_SocialPanelPlayer_C
// Size: 0x4e9 (Inherited: 0x4de)
struct UWBP_Panel_List_SocialPanelPlayer_C : UWBP_Panel_List_Social_Padded_C {
	struct FSocialPanelPlayerAppearance PlayerAppearance; // 0x4de(0x03)
	enum class ESocialPanelPlayerListPresenceCategory PresenceCategory; // 0x4e1(0x01)
	char pad_4E2[0x2]; // 0x4e2(0x02)
	int32_t FriendshipMask; // 0x4e4(0x04)
	enum class EAresFriendshipMatch FriendshipMatch; // 0x4e8(0x01)

	void InitializeListViewModel(struct USocialListViewModelBase* InViewModel); // Function WBP_Panel_List_SocialPanelPlayer.WBP_Panel_List_SocialPanelPlayer_C.InitializeListViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitializeListEntryWidget(struct UWBP_Panel_ListEntry_Social_Base_C* ListEntryWidget, struct UObject* ListItemObject); // Function WBP_Panel_List_SocialPanelPlayer.WBP_Panel_List_SocialPanelPlayer_C.InitializeListEntryWidget // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

