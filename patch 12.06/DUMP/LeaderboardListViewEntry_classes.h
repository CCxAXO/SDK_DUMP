// WidgetBlueprintGeneratedClass LeaderboardListViewEntry.LeaderboardListViewEntry_C
// Size: 0x468 (Inherited: 0x318)
struct ULeaderboardListViewEntry_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UImage* Background_Color; // 0x320(0x08)
	struct UCompetitiveTierIconSmall_C* CompetitiveTier; // 0x328(0x08)
	struct UWBP_ContextMenuAnchor_SocialPlayer_C* ContextMenuAnchor; // 0x330(0x08)
	struct UImage* dot1; // 0x338(0x08)
	struct UImage* dot2; // 0x340(0x08)
	struct UImage* dot3; // 0x348(0x08)
	struct UImage* dot4; // 0x350(0x08)
	struct UWidgetSwitcher* EntrySwitcher; // 0x358(0x08)
	struct URichTextBlock* GamesWonText; // 0x360(0x08)
	struct UImage* Image_73; // 0x368(0x08)
	struct UImage* Image_230; // 0x370(0x08)
	struct UImage* Image_315; // 0x378(0x08)
	struct UImage* Image_541; // 0x380(0x08)
	struct UImage* Image_674; // 0x388(0x08)
	struct UPlayerCardFromAsset_C* PlayerCardFromAsset; // 0x390(0x08)
	struct UPlayerTitleFromAsset_C* PlayerTitleFromAsset; // 0x398(0x08)
	struct UTextBlock* RankText; // 0x3a0(0x08)
	struct UTextBlock* RatingText; // 0x3a8(0x08)
	struct UTextBlock* ThresholdText; // 0x3b0(0x08)
	struct UTextBlock* ThresholdTierName; // 0x3b8(0x08)
	struct UWBP_Panel_PlayerName_C* WBP_Panel_PlayerName; // 0x3c0(0x08)
	struct FString Subject; // 0x3c8(0x10)
	bool IsAnonymized; // 0x3d8(0x01)
	char pad_3D9[0x7]; // 0x3d9(0x07)
	struct FCompetitiveTierData TierData; // 0x3e0(0x88)

	void InitContextMenuAnchor(); // Function LeaderboardListViewEntry.LeaderboardListViewEntry_C.InitContextMenuAnchor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetPlayer(struct ULeaderboardPlayerModel* Player, struct ULeaderboardViewModel* LeaderboardModel); // Function LeaderboardListViewEntry.LeaderboardListViewEntry_C.SetPlayer // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_LeaderboardListViewEntry(int32_t EntryPoint); // Function LeaderboardListViewEntry.LeaderboardListViewEntry_C.ExecuteUbergraph_LeaderboardListViewEntry // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

