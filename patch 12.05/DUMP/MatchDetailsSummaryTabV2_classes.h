// WidgetBlueprintGeneratedClass MatchDetailsSummaryTabV2.MatchDetailsSummaryTabV2_C
// Size: 0x791 (Inherited: 0x5a9)
struct UMatchDetailsSummaryTabV2_C : UMatchDetailsTabBase_C {
	char pad_5A9[0x7]; // 0x5a9(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5b0(0x08)
	struct UWidgetAnimation* Intro_MatchDetailsSummary; // 0x5b8(0x08)
	struct UImage* Divider; // 0x5c0(0x08)
	struct UImage* Divider_Left; // 0x5c8(0x08)
	struct UImage* Divider_Right; // 0x5d0(0x08)
	struct UHorizontalBox* EquipmentCostBox; // 0x5d8(0x08)
	struct UButton* EquipmentCostHoverButton; // 0x5e0(0x08)
	struct UUniformGridPanel* FullStatsGrid; // 0x5e8(0x08)
	struct UHorizontalBox* ImpactScoreBox; // 0x5f0(0x08)
	struct UButton* MatchImpactHoverButton; // 0x5f8(0x08)
	struct ULazyPlatformWidgetLoaderAsOverlay_Universal_C* PlaybackButtonLazyLoader; // 0x600(0x08)
	struct UImage* PlayerCharacterImage; // 0x608(0x08)
	struct UTextBlock* PlayerCharacterName; // 0x610(0x08)
	struct UTextBlock* PlayerEquipCost; // 0x618(0x08)
	struct UImage* PlayerHighlightAmmo_bg; // 0x620(0x08)
	struct UTextBlock* PlayerHighlightCount1; // 0x628(0x08)
	struct UTextBlock* PlayerHighlightCount2; // 0x630(0x08)
	struct UTextBlock* PlayerHighlightCount3; // 0x638(0x08)
	struct UImage* PlayerHighlightImage1; // 0x640(0x08)
	struct UImage* PlayerHighlightImage2; // 0x648(0x08)
	struct UImage* PlayerHighlightImage3; // 0x650(0x08)
	struct UImage* PlayerHighlightMVPStar_bg; // 0x658(0x08)
	struct UImage* PlayerHighlightPenta_bg; // 0x660(0x08)
	struct UTextBlock* PlayerImpactScore; // 0x668(0x08)
	struct UTextBlock* PlayerKDA; // 0x670(0x08)
	struct UHorizontalBox* PlayerRoundHighlightBox; // 0x678(0x08)
	struct UButton* ShowAwards; // 0x680(0x08)
	struct UButton* SkillRatingHoverButton; // 0x688(0x08)
	struct UUniformGridPanel* StatsUniformGrid; // 0x690(0x08)
	struct UOverlay* TeamStatContainer; // 0x698(0x08)
	struct UUniversalModalVignette_C* UniversalModalVignette; // 0x6a0(0x08)
	struct UWBP_Panel_PlayerName_C* WBP_Panel_PlayerName; // 0x6a8(0x08)
	struct FMulticastInlineDelegate ForceChangeTab; // 0x6b0(0x10)
	struct FName AllyTeamID; // 0x6c0(0x0c)
	char pad_6CC[0x4]; // 0x6cc(0x04)
	struct TArray<struct FString> RoundStringArray; // 0x6d0(0x10)
	struct TMap<enum class MatchDetailsHighlightEnum, struct FMatchDetailsHighlight> BlueHighlights; // 0x6e0(0x50)
	struct TMap<enum class MatchDetailsHighlightEnum, struct FMatchDetailsHighlight> RedHighlights; // 0x730(0x50)
	int32_t MaxHighlightCount; // 0x780(0x04)
	int32_t CurrentHighlightCount; // 0x784(0x04)
	bool StatsNavToggle; // 0x788(0x01)
	bool HighlightsNavToggle; // 0x789(0x01)
	char pad_78A[0x2]; // 0x78a(0x02)
	int32_t GridPosition; // 0x78c(0x04)
	bool IsRanked; // 0x790(0x01)

	void LazyLoadPlaybackButton(); // Function MatchDetailsSummaryTabV2.MatchDetailsSummaryTabV2_C.LazyLoadPlaybackButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void DidMatchGoToOT(bool& Result); // Function MatchDetailsSummaryTabV2.MatchDetailsSummaryTabV2_C.DidMatchGoToOT // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void GetHalfForRound(int32_t Round Number, enum class MatchHalf& half); // Function MatchDetailsSummaryTabV2.MatchDetailsSummaryTabV2_C.GetHalfForRound // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1af5410
	void SetArrow(int32_t AlliedCount, int32_t OpponentCount, struct UImage* Arrow); // Function MatchDetailsSummaryTabV2.MatchDetailsSummaryTabV2_C.SetArrow // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitTeamStatsSection(); // Function MatchDetailsSummaryTabV2.MatchDetailsSummaryTabV2_C.InitTeamStatsSection // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetEarnedXP(); // Function MatchDetailsSummaryTabV2.MatchDetailsSummaryTabV2_C.GetEarnedXP // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetNextHighestHighlight(struct TMap<enum class MatchDetailsHighlightEnum, struct FMatchDetailsHighlight> HighlightsMap, struct FMatchDetailsHighlight& ReturnHighlight, bool& NewParam1); // Function MatchDetailsSummaryTabV2.MatchDetailsSummaryTabV2_C.GetNextHighestHighlight // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitPlayerHighlightsSection(); // Function MatchDetailsSummaryTabV2.MatchDetailsSummaryTabV2_C.InitPlayerHighlightsSection // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function MatchDetailsSummaryTabV2.MatchDetailsSummaryTabV2_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function MatchDetailsSummaryTabV2.MatchDetailsSummaryTabV2_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void EventOnInit(); // Function MatchDetailsSummaryTabV2.MatchDetailsSummaryTabV2_C.EventOnInit // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnBestRoundAwardClicked(); // Function MatchDetailsSummaryTabV2.MatchDetailsSummaryTabV2_C.OnBestRoundAwardClicked // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_MatchDetailsSummaryTabV2(int32_t EntryPoint); // Function MatchDetailsSummaryTabV2.MatchDetailsSummaryTabV2_C.ExecuteUbergraph_MatchDetailsSummaryTabV2 // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
	void ForceChangeTab__DelegateSignature(struct FString TabDisplayName); // Function MatchDetailsSummaryTabV2.MatchDetailsSummaryTabV2_C.ForceChangeTab__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

