// WidgetBlueprintGeneratedClass MatchDetailsRankProgress.MatchDetailsRankProgress_C
// Size: 0x3b1 (Inherited: 0x318)
struct UMatchDetailsRankProgress_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UOverlay* AFKPenaltyBanner; // 0x320(0x08)
	struct UImage* AFKPenaltyBannerBackground; // 0x328(0x08)
	struct UTextBlock* AFKPenaltyBannerText; // 0x330(0x08)
	struct UCompetitiveTierIconLargeV2_C* CompetitiveTierIconLargeV2; // 0x338(0x08)
	struct UOverlay* CurrentRankSection; // 0x340(0x08)
	struct USizeBox* NMI_Box; // 0x348(0x08)
	struct USharedBlurBg_C* SharedBlurBg; // 0x350(0x08)
	struct UWBP_Panel_MatchDetails_NewMapIncentive_C* WBP_Panel_MatchDetails_NewMapIncentive; // 0x358(0x08)
	struct FMulticastInlineDelegate RankCeremonyComplete; // 0x360(0x10)
	struct UMatchDetailsViewModel* ViewModel; // 0x370(0x08)
	struct FMMRMatchInfo MMRData; // 0x378(0x38)
	bool AFKPenalized; // 0x3b0(0x01)

	void ShowNMIBanner(struct FString MatchID, int32_t RRForgiven); // Function MatchDetailsRankProgress.MatchDetailsRankProgress_C.ShowNMIBanner // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ShowAFKPenaltyBanner(int32_t AFKPenalty); // Function MatchDetailsRankProgress.MatchDetailsRankProgress_C.ShowAFKPenaltyBanner // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ShowEndState(); // Function MatchDetailsRankProgress.MatchDetailsRankProgress_C.ShowEndState // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BeginCeremony(); // Function MatchDetailsRankProgress.MatchDetailsRankProgress_C.BeginCeremony // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetLeaderboardPosition(int32_t& Leaderboard Position); // Function MatchDetailsRankProgress.MatchDetailsRankProgress_C.GetLeaderboardPosition // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void Init(struct UMatchDetailsViewModel* ViewModel, struct FMMRMatchInfo MatchInfo); // Function MatchDetailsRankProgress.MatchDetailsRankProgress_C.Init // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnRankCeremonyComplete(); // Function MatchDetailsRankProgress.MatchDetailsRankProgress_C.OnRankCeremonyComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_MatchDetailsRankProgress(int32_t EntryPoint); // Function MatchDetailsRankProgress.MatchDetailsRankProgress_C.ExecuteUbergraph_MatchDetailsRankProgress // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
	void RankCeremonyComplete__DelegateSignature(); // Function MatchDetailsRankProgress.MatchDetailsRankProgress_C.RankCeremonyComplete__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

