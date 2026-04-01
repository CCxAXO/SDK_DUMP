// WidgetBlueprintGeneratedClass WBP_Panel_CelebStandingsContainer.WBP_Panel_CelebStandingsContainer_C
// Size: 0x400 (Inherited: 0x3e0)
struct UWBP_Panel_CelebStandingsContainer_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UVerticalBox* VB_StandingsContainer; // 0x3e8(0x08)
	struct UPickemCelebLeaderboardViewModel* CelebLeaderboardViewModel; // 0x3f0(0x08)
	int32_t NumCelebsToShow; // 0x3f8(0x04)
	int32_t Num Celebs Currently Displayed; // 0x3fc(0x04)

	void InitializeWithID(struct FString InTournamentID); // Function WBP_Panel_CelebStandingsContainer.WBP_Panel_CelebStandingsContainer_C.InitializeWithID // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitializeViewModel(struct UPickemStatsModel*& PickemStatsModel); // Function WBP_Panel_CelebStandingsContainer.WBP_Panel_CelebStandingsContainer_C.InitializeViewModel // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GenerateWidgets(struct TArray<struct UPickemLeaderboardEntryModel*>& LeaderboardEntries); // Function WBP_Panel_CelebStandingsContainer.WBP_Panel_CelebStandingsContainer_C.GenerateWidgets // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetData(struct UPickemCelebLeaderboardViewModel* CelebLeaderboardViewModel); // Function WBP_Panel_CelebStandingsContainer.WBP_Panel_CelebStandingsContainer_C.SetData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ClearCelebs(); // Function WBP_Panel_CelebStandingsContainer.WBP_Panel_CelebStandingsContainer_C.ClearCelebs // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindToOrUnbindFromViewModel(bool ShouldBind); // Function WBP_Panel_CelebStandingsContainer.WBP_Panel_CelebStandingsContainer_C.BindToOrUnbindFromViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_CelebStandingsContainer.WBP_Panel_CelebStandingsContainer_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Destruct(); // Function WBP_Panel_CelebStandingsContainer.WBP_Panel_CelebStandingsContainer_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void K2_BindToViewModel(); // Function WBP_Panel_CelebStandingsContainer.WBP_Panel_CelebStandingsContainer_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Panel_CelebStandingsContainer(int32_t EntryPoint); // Function WBP_Panel_CelebStandingsContainer.WBP_Panel_CelebStandingsContainer_C.ExecuteUbergraph_WBP_Panel_CelebStandingsContainer // (Final|UbergraphFunction) // @ game+0x1b42740
};

