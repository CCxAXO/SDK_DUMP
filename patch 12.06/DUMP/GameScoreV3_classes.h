// WidgetBlueprintGeneratedClass GameScoreV3.GameScoreV3_C
// Size: 0x448 (Inherited: 0x318)
struct UGameScoreV3_C : UGameScore_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetAnimation* Intro_GameScoreV2; // 0x320(0x08)
	struct UTextBlock* BlueRoundWins; // 0x328(0x08)
	struct UTextBlock* Date; // 0x330(0x08)
	struct UTextBlock* GameOutcome; // 0x338(0x08)
	struct UImage* GameOutcomeBanner; // 0x340(0x08)
	struct UTextBlock* GameTime; // 0x348(0x08)
	struct UTextBlock* MapName; // 0x350(0x08)
	struct UImage* ModeIcon; // 0x358(0x08)
	struct UTextBlock* ModeName; // 0x360(0x08)
	struct UTextBlock* RedRoundWins; // 0x368(0x08)
	struct UImage* Wipe_image; // 0x370(0x08)
	int32_t BlueTeamWins; // 0x378(0x04)
	int32_t RedTeamWins; // 0x37c(0x04)
	bool UserIsBlue; // 0x380(0x01)
	char pad_381[0x7]; // 0x381(0x07)
	struct FString QueueID; // 0x388(0x10)
	struct FTeamDetailsDTO LocalPlayerTeam; // 0x398(0xa0)
	struct UGameModeUIData* ModeUIData; // 0x438(0x08)
	struct UMatchmakingQueueDataAsset* QueueDataAsset; // 0x440(0x08)

	void Init(struct FProcessedMatchDetails ProcessedMatchDetails, struct FString TeamIdForLoggedinUser); // Function GameScoreV3.GameScoreV3_C.Init // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateQueueText(); // Function GameScoreV3.GameScoreV3_C.UpdateQueueText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetFFAPlacement(struct FProcessedMatchDetails ProcessedMatch, struct FString TeamID, struct FText& PlacementText); // Function GameScoreV3.GameScoreV3_C.GetFFAPlacement // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetSortedPointsFromTeams(struct TArray<struct FTeamDetailsDTO>& Teams, struct TArray<struct FName>& SortedPoints); // Function GameScoreV3.GameScoreV3_C.GetSortedPointsFromTeams // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetGameOutcome(struct FProcessedMatchDetails Match, struct FString TeamID); // Function GameScoreV3.GameScoreV3_C.SetGameOutcome // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnGameModeLoaded(struct UGameModeHandle* Mode Handle); // Function GameScoreV3.GameScoreV3_C.OnGameModeLoaded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitOld(struct FProcessedMatchDetails ProcessedMatchDetails, struct FString TeamIdForLoggedinUser); // Function GameScoreV3.GameScoreV3_C.InitOld // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function GameScoreV3.GameScoreV3_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function GameScoreV3.GameScoreV3_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_GameScoreV3(int32_t EntryPoint); // Function GameScoreV3.GameScoreV3_C.ExecuteUbergraph_GameScoreV3 // (Final|UbergraphFunction) // @ game+0x1b42740
};

