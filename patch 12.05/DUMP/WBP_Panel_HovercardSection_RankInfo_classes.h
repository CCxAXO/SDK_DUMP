// WidgetBlueprintGeneratedClass WBP_Panel_HovercardSection_RankInfo.WBP_Panel_HovercardSection_RankInfo_C
// Size: 0x400 (Inherited: 0x3e0)
struct UWBP_Panel_HovercardSection_RankInfo_C : UWBP_Panel_HovercardSection_SocialPanelPlayer_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UWBP_Panel_PlayerCompetitiveTierIcon_C* WBP_Panel_PlayerCompetitiveTierIcon; // 0x3e8(0x08)
	struct UWBP_Panel_PlayerCompetitiveTierName_C* WBP_Panel_PlayerCompetitiveTierName; // 0x3f0(0x08)
	struct UWBP_Panel_PlayerLeaderboardPosition_C* WBP_Panel_PlayerLeaderboardPosition; // 0x3f8(0x08)

	void SetObservedPlayer(struct FString InPlayerSubject); // Function WBP_Panel_HovercardSection_RankInfo.WBP_Panel_HovercardSection_RankInfo_C.SetObservedPlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_Panel_HovercardSection_RankInfo_WBP_Panel_PlayerCompetitiveTierIcon_K2Node_ComponentBoundEvent_0_OnVisibilityChangedEvent__DelegateSignature(enum class ESlateVisibility InVisibility); // Function WBP_Panel_HovercardSection_RankInfo.WBP_Panel_HovercardSection_RankInfo_C.BndEvt__WBP_Panel_HovercardSection_RankInfo_WBP_Panel_PlayerCompetitiveTierIcon_K2Node_ComponentBoundEvent_0_OnVisibilityChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Panel_HovercardSection_RankInfo(int32_t EntryPoint); // Function WBP_Panel_HovercardSection_RankInfo.WBP_Panel_HovercardSection_RankInfo_C.ExecuteUbergraph_WBP_Panel_HovercardSection_RankInfo // (Final|UbergraphFunction) // @ game+0x1af5410
};

