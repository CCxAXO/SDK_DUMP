// WidgetBlueprintGeneratedClass MatchDetailsScoreboardTabPlayerRespawnMode.MatchDetailsScoreboardTabPlayerRespawnMode_C
// Size: 0x959 (Inherited: 0x318)
struct UMatchDetailsScoreboardTabPlayerRespawnMode_C : UUserWidget {
	struct UTextBlock* Assists; // 0x318(0x08)
	struct UImage* BackgroundColor; // 0x320(0x08)
	struct UBorder* BorderColor; // 0x328(0x08)
	struct UImage* CHARACTER_PORTRAIT; // 0x330(0x08)
	struct UCompetitiveTierIconSmall_C* CompetitiveTierIconSmall; // 0x338(0x08)
	struct UWBP_ContextMenuAnchor_SocialPlayer_C* ContextMenuAnchor; // 0x340(0x08)
	struct UTextBlock* Deaths; // 0x348(0x08)
	struct UDynamicConfigSwitcher_C* DynamicConfigSwitcher; // 0x350(0x08)
	struct UTextBlock* Kills; // 0x358(0x08)
	struct UImage* LocalPlayer_Indicator; // 0x360(0x08)
	struct UPenaltyStatus_C* PenaltyStatus; // 0x368(0x08)
	struct UImage* RANK_ICON; // 0x370(0x08)
	struct USizeBox* Slot_CompetitiveTier; // 0x378(0x08)
	struct UWBP_Panel_PlayerName_C* WBP_Panel_PlayerName; // 0x380(0x08)
	struct FProcessedPlayerDetails ProcessedPlayerDetailsDTO; // 0x388(0x310)
	struct FProcessedMatchDetails ProcessedMatchDetailsDTO; // 0x698(0x278)
	struct FString PlayerSubject; // 0x910(0x10)
	int32_t TotalMoney; // 0x920(0x04)
	int32_t TotalRemaining; // 0x924(0x04)
	int32_t TotalSpent; // 0x928(0x04)
	char pad_92C[0x4]; // 0x92c(0x04)
	struct FString TeamColor; // 0x930(0x10)
	int32_t TotalFirstBloods; // 0x940(0x04)
	int32_t EconRating; // 0x944(0x04)
	struct FString TargetSubject; // 0x948(0x10)
	bool IsEndOfGame; // 0x958(0x01)

	void SetDataFields(); // Function MatchDetailsScoreboardTabPlayerRespawnMode.MatchDetailsScoreboardTabPlayerRespawnMode_C.SetDataFields // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetBackgroundAndBorder(); // Function MatchDetailsScoreboardTabPlayerRespawnMode.MatchDetailsScoreboardTabPlayerRespawnMode_C.SetBackgroundAndBorder // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Init(struct FProcessedPlayerDetails ProcessedPlayerDetailsDTO, struct FProcessedMatchDetails ProcessedMatchDetailsDTO, struct FString TeamColor, struct FString TargetSubject, bool IsEndOfGame); // Function MatchDetailsScoreboardTabPlayerRespawnMode.MatchDetailsScoreboardTabPlayerRespawnMode_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

