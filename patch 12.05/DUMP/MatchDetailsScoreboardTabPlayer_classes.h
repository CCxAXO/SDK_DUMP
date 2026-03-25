// WidgetBlueprintGeneratedClass MatchDetailsScoreboardTabPlayer.MatchDetailsScoreboardTabPlayer_C
// Size: 0x981 (Inherited: 0x318)
struct UMatchDetailsScoreboardTabPlayer_C : UUserWidget {
	struct UTextBlock* Assists; // 0x318(0x08)
	struct UTextBlock* AVG_LOADOUT; // 0x320(0x08)
	struct UTextBlock* AVG_SCORE; // 0x328(0x08)
	struct UImage* BackgroundColor; // 0x330(0x08)
	struct UBorder* BorderColor; // 0x338(0x08)
	struct UImage* CHARACTER_PORTRAIT; // 0x340(0x08)
	struct UCompetitiveTierIconSmall_C* CompetitiveTierIconSmall; // 0x348(0x08)
	struct UWBP_ContextMenuAnchor_SocialPlayer_C* ContextMenuAnchor; // 0x350(0x08)
	struct UTextBlock* Deaths; // 0x358(0x08)
	struct UTextBlock* Defuses; // 0x360(0x08)
	struct UDynamicConfigSwitcher_C* DynamicConfigSwitcher; // 0x368(0x08)
	struct UTextBlock* FIRST_BLOODS; // 0x370(0x08)
	struct UTextBlock* Kills; // 0x378(0x08)
	struct UImage* LocalPlayer_Indicator; // 0x380(0x08)
	struct UPenaltyStatus_C* PenaltyStatus; // 0x388(0x08)
	struct UTextBlock* Plants; // 0x390(0x08)
	struct UImage* RANK_ICON; // 0x398(0x08)
	struct USizeBox* Slot_CompetitiveTier; // 0x3a0(0x08)
	struct UWBP_Panel_PlayerName_C* WBP_Panel_PlayerName; // 0x3a8(0x08)
	struct FProcessedPlayerDetails ProcessedPlayerDetailsDTO; // 0x3b0(0x310)
	struct FProcessedMatchDetails ProcessedMatchDetailsDTO; // 0x6c0(0x278)
	struct FString PlayerSubject; // 0x938(0x10)
	int32_t TotalMoney; // 0x948(0x04)
	int32_t TotalRemaining; // 0x94c(0x04)
	int32_t TotalSpent; // 0x950(0x04)
	char pad_954[0x4]; // 0x954(0x04)
	struct FString TeamColor; // 0x958(0x10)
	int32_t TotalFirstBloods; // 0x968(0x04)
	int32_t EconRating; // 0x96c(0x04)
	struct FString TargetSubject; // 0x970(0x10)
	bool IsEndOfGame; // 0x980(0x01)

	void SetDataFields(); // Function MatchDetailsScoreboardTabPlayer.MatchDetailsScoreboardTabPlayer_C.SetDataFields // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetBackgroundAndBorder(); // Function MatchDetailsScoreboardTabPlayer.MatchDetailsScoreboardTabPlayer_C.SetBackgroundAndBorder // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Init(struct FProcessedPlayerDetails ProcessedPlayerDetailsDTO, struct FProcessedMatchDetails ProcessedMatchDetailsDTO, struct FString TeamColor, struct FString TargetSubject, bool IsEndOfGame); // Function MatchDetailsScoreboardTabPlayer.MatchDetailsScoreboardTabPlayer_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

