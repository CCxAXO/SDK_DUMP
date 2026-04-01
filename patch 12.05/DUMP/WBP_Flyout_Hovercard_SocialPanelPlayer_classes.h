// WidgetBlueprintGeneratedClass WBP_Flyout_Hovercard_SocialPanelPlayer.WBP_Flyout_Hovercard_SocialPanelPlayer_C
// Size: 0x4b0 (Inherited: 0x450)
struct UWBP_Flyout_Hovercard_SocialPanelPlayer_C : UWBP_Flyout_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x450(0x08)
	struct UPlayerPartyIdViewModel* PlayerPartyIdViewModel; // 0x458(0x08)
	struct UWidgetAnimation* Anim_Open; // 0x460(0x08)
	struct UWBP_Panel_HovercardSection_AlternateNames_C* WBP_Panel_HovercardSection_AlternateNames; // 0x468(0x08)
	struct UWBP_Panel_HovercardSection_OtherPlayerDetails_C* WBP_Panel_HovercardSection_OtherPlayerDetails; // 0x470(0x08)
	struct UWBP_Panel_HovercardSection_PartyStatus_C* WBP_Panel_HovercardSection_PartyStatus; // 0x478(0x08)
	struct UWBP_Panel_HovercardSection_PlayerIdentity_C* WBP_Panel_HovercardSection_PlayerIdentity; // 0x480(0x08)
	struct UWBP_Panel_HovercardSection_PlayerNotices_C* WBP_Panel_HovercardSection_PlayerNotices; // 0x488(0x08)
	struct UWBP_Panel_HovercardSection_PresenceStatus_C* WBP_Panel_HovercardSection_PresenceStatus; // 0x490(0x08)
	struct UWBP_Panel_HovercardSection_RankInfo_C* WBP_Panel_HovercardSection_RankInfo; // 0x498(0x08)
	struct UWBP_Panel_HovercardSection_TeamInfo_C* WBP_Panel_HovercardSection_TeamInfo; // 0x4a0(0x08)
	struct UWBP_Template_Flyout_Hovercard_Social_C* WBP_Template_Flyout_Hovercard_Social; // 0x4a8(0x08)

	void Set Observed Player(struct FString InPlayerSubject); // Function WBP_Flyout_Hovercard_SocialPanelPlayer.WBP_Flyout_Hovercard_SocialPanelPlayer_C.Set Observed Player // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnInitialized(); // Function WBP_Flyout_Hovercard_SocialPanelPlayer.WBP_Flyout_Hovercard_SocialPanelPlayer_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function WBP_Flyout_Hovercard_SocialPanelPlayer.WBP_Flyout_Hovercard_SocialPanelPlayer_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnPlayerPartyIdChanged(struct FString InPartyId); // Function WBP_Flyout_Hovercard_SocialPanelPlayer.WBP_Flyout_Hovercard_SocialPanelPlayer_C.OnPlayerPartyIdChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Flyout_Hovercard_SocialPanelPlayer(int32_t EntryPoint); // Function WBP_Flyout_Hovercard_SocialPanelPlayer.WBP_Flyout_Hovercard_SocialPanelPlayer_C.ExecuteUbergraph_WBP_Flyout_Hovercard_SocialPanelPlayer // (Final|UbergraphFunction) // @ game+0x1af5410
};

