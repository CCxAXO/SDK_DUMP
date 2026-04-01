// WidgetBlueprintGeneratedClass LeaderboardFirstPlayerViewEntry.LeaderboardFirstPlayerViewEntry_C
// Size: 0x3a1 (Inherited: 0x318)
struct ULeaderboardFirstPlayerViewEntry_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UImage* Background_Color; // 0x320(0x08)
	struct UCompetitiveTierIconSmall_C* CompetitiveTierIconSmall; // 0x328(0x08)
	struct UWBP_ContextMenuAnchor_SocialPlayer_C* ContextMenuAnchor; // 0x330(0x08)
	struct URichTextBlock* GamesWonText; // 0x338(0x08)
	struct UImage* Image_73; // 0x340(0x08)
	struct UImage* Image_315; // 0x348(0x08)
	struct UImage* Image_541; // 0x350(0x08)
	struct UImage* Image_674; // 0x358(0x08)
	struct UImage* LeaderboardFirstStar; // 0x360(0x08)
	struct UPlayerCardFromAsset_C* PlayerCardFromAsset; // 0x368(0x08)
	struct UPlayerTitleFromAsset_C* PlayerTitleFromAsset; // 0x370(0x08)
	struct UTextBlock* RankText; // 0x378(0x08)
	struct UTextBlock* RatingText; // 0x380(0x08)
	struct UWBP_Panel_PlayerName_C* WBP_Panel_PlayerName; // 0x388(0x08)
	struct FString Subject; // 0x390(0x10)
	bool IsAnonymized; // 0x3a0(0x01)

	void InitContextMenuAnchor(); // Function LeaderboardFirstPlayerViewEntry.LeaderboardFirstPlayerViewEntry_C.InitContextMenuAnchor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetPlayer(struct ULeaderboardPlayerModel* Player, struct ULeaderboardViewModel* LeaderboardModel); // Function LeaderboardFirstPlayerViewEntry.LeaderboardFirstPlayerViewEntry_C.SetPlayer // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_LeaderboardFirstPlayerViewEntry(int32_t EntryPoint); // Function LeaderboardFirstPlayerViewEntry.LeaderboardFirstPlayerViewEntry_C.ExecuteUbergraph_LeaderboardFirstPlayerViewEntry // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

