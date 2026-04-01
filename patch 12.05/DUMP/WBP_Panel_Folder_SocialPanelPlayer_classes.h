// WidgetBlueprintGeneratedClass WBP_Panel_Folder_SocialPanelPlayer.WBP_Panel_Folder_SocialPanelPlayer_C
// Size: 0x461 (Inherited: 0x458)
struct UWBP_Panel_Folder_SocialPanelPlayer_C : UWBP_Panel_Folder_Social_C {
	struct FSocialPanelPlayerAppearance PlayerAppearance; // 0x458(0x03)
	enum class ESocialPanelPlayerListPresenceCategory PresenceCategory; // 0x45b(0x01)
	int32_t FriendshipMask; // 0x45c(0x04)
	enum class EAresFriendshipMatch FriendshipMatch; // 0x460(0x01)

	void InitializeListWidget(struct UWBP_Panel_List_Social_Base_C* InListWidget); // Function WBP_Panel_Folder_SocialPanelPlayer.WBP_Panel_Folder_SocialPanelPlayer_C.InitializeListWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

