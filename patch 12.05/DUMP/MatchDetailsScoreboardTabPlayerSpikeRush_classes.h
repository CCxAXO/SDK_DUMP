// WidgetBlueprintGeneratedClass MatchDetailsScoreboardTabPlayerSpikeRush.MatchDetailsScoreboardTabPlayerSpikeRush_C
// Size: 0x9f8 (Inherited: 0x318)
struct UMatchDetailsScoreboardTabPlayerSpikeRush_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UTextBlock* Assists; // 0x320(0x08)
	struct UTextBlock* AVG_SCORE; // 0x328(0x08)
	struct UImage* AVG_SCORE_BG; // 0x330(0x08)
	struct UImage* CHARACTER_PORTRAIT; // 0x338(0x08)
	struct UTextBlock* Deaths; // 0x340(0x08)
	struct UTextBlock* Defuses; // 0x348(0x08)
	struct UImage* Defuses_BG; // 0x350(0x08)
	struct UTextBlock* FIRST_BLOODS; // 0x358(0x08)
	struct UImage* FIRST_BLOODS_BG; // 0x360(0x08)
	struct UImage* KDA_BG; // 0x368(0x08)
	struct UTextBlock* Kills; // 0x370(0x08)
	struct UImage* LocalPlayerIndicator_Triangle; // 0x378(0x08)
	struct UImage* Name_BG; // 0x380(0x08)
	struct UPenaltyStatus_C* PenaltyStatus; // 0x388(0x08)
	struct UTextBlock* Plants; // 0x390(0x08)
	struct UImage* Plants_BG; // 0x398(0x08)
	struct UImage* Player_Indicator; // 0x3a0(0x08)
	struct UWBP_ContextMenuAnchor_SocialPlayer_C* WBP_ContextMenuAnchor_SocialPlayer; // 0x3a8(0x08)
	struct UWBP_Panel_PlayerName_C* WBP_Panel_PlayerName; // 0x3b0(0x08)
	struct FProcessedPlayerDetails ProcessedPlayerDetailsDTO; // 0x3b8(0x310)
	struct FProcessedMatchDetails ProcessedMatchDetailsDTO; // 0x6c8(0x278)
	struct FString PlayerSubject; // 0x940(0x10)
	int32_t TotalMoney; // 0x950(0x04)
	int32_t TotalRemaining; // 0x954(0x04)
	int32_t TotalSpent; // 0x958(0x04)
	char pad_95C[0x4]; // 0x95c(0x04)
	struct FString TeamColor; // 0x960(0x10)
	int32_t TotalFirstBloods; // 0x970(0x04)
	char pad_974[0x4]; // 0x974(0x04)
	struct FString TargetSubject; // 0x978(0x10)
	bool IsEndOfGame; // 0x988(0x01)
	char pad_989[0x3]; // 0x989(0x03)
	struct FLinearColor LocalPlayerColor; // 0x98c(0x10)
	struct FLinearColor AllyTeamColor; // 0x99c(0x10)
	struct FLinearColor EnemyTeamColor; // 0x9ac(0x10)
	enum class EMatchDetailsScoreboardPlayerRowType PlayerType; // 0x9bc(0x01)
	char pad_9BD[0x3]; // 0x9bd(0x03)
	double LocalNameAlpha; // 0x9c0(0x08)
	double LocalScoreAlpha; // 0x9c8(0x08)
	double LocalStatsAlpha; // 0x9d0(0x08)
	double LocalTriangleAlpha; // 0x9d8(0x08)
	double NameAlpha; // 0x9e0(0x08)
	double ScoreAlpha; // 0x9e8(0x08)
	double StatsAlpha; // 0x9f0(0x08)

	void GetColors(struct FLinearColor& IndicatorColor, struct FLinearColor& NameColor, struct FLinearColor& ScoreColor, struct FLinearColor& StatColor, struct FLinearColor& LocalPlayerTriangleColor); // Function MatchDetailsScoreboardTabPlayerSpikeRush.MatchDetailsScoreboardTabPlayerSpikeRush_C.GetColors // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetPlayerType(); // Function MatchDetailsScoreboardTabPlayerSpikeRush.MatchDetailsScoreboardTabPlayerSpikeRush_C.SetPlayerType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetDataFields(); // Function MatchDetailsScoreboardTabPlayerSpikeRush.MatchDetailsScoreboardTabPlayerSpikeRush_C.SetDataFields // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetBackgroundAndBorder(); // Function MatchDetailsScoreboardTabPlayerSpikeRush.MatchDetailsScoreboardTabPlayerSpikeRush_C.SetBackgroundAndBorder // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Init(struct FProcessedPlayerDetails ProcessedPlayerDetailsDTO, struct FProcessedMatchDetails ProcessedMatchDetailsDTO, struct FString TeamColor, struct FString TargetSubject, bool IsEndOfGame); // Function MatchDetailsScoreboardTabPlayerSpikeRush.MatchDetailsScoreboardTabPlayerSpikeRush_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function MatchDetailsScoreboardTabPlayerSpikeRush.MatchDetailsScoreboardTabPlayerSpikeRush_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_MatchDetailsScoreboardTabPlayerSpikeRush(int32_t EntryPoint); // Function MatchDetailsScoreboardTabPlayerSpikeRush.MatchDetailsScoreboardTabPlayerSpikeRush_C.ExecuteUbergraph_MatchDetailsScoreboardTabPlayerSpikeRush // (Final|UbergraphFunction) // @ game+0x1af5410
};

