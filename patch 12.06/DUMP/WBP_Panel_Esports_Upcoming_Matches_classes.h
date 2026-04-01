// WidgetBlueprintGeneratedClass WBP_Panel_Esports_Upcoming_Matches.WBP_Panel_Esports_Upcoming_Matches_C
// Size: 0x418 (Inherited: 0x3e0)
struct UWBP_Panel_Esports_Upcoming_Matches_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UAresCommonText* CT_NoMatches; // 0x3e8(0x08)
	struct UVerticalBox* VB_UpcomingMatchList; // 0x3f0(0x08)
	struct UEsportsScheduleEntryListViewModel* EsportsScheduleEntryListViewModel; // 0x3f8(0x08)
	struct UTeamModel* CurrentDisplayedTeamModel; // 0x400(0x08)
	enum class E_EsportsScreens Screen; // 0x408(0x01)
	char pad_409[0x3]; // 0x409(0x03)
	int32_t NumMatchesToShow; // 0x40c(0x04)
	struct UEsportsScheduleEntryListViewModelV2* EsportsScheduleEntryListViewModelV2; // 0x410(0x08)

	void OnEventUpcomingMatchIDsReceived(struct TArray<struct FString>& MatchIDsFilteredByEvent); // Function WBP_Panel_Esports_Upcoming_Matches.WBP_Panel_Esports_Upcoming_Matches_C.OnEventUpcomingMatchIDsReceived // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnTeamUpcomingMatchIDsReceived(struct TArray<struct FString>& MatchIDsFilteredByTeam); // Function WBP_Panel_Esports_Upcoming_Matches.WBP_Panel_Esports_Upcoming_Matches_C.OnTeamUpcomingMatchIDsReceived // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetUpcomingMatches(int32_t NumMatchesToShow); // Function WBP_Panel_Esports_Upcoming_Matches.WBP_Panel_Esports_Upcoming_Matches_C.SetUpcomingMatches // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnScheduleUpdated(struct TArray<struct UEventDataModel*>& EsportsNewScheduleEntries); // Function WBP_Panel_Esports_Upcoming_Matches.WBP_Panel_Esports_Upcoming_Matches_C.OnScheduleUpdated // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetUpcomingMatchesForEvent(struct FString LeagueID, struct FString TournamentID); // Function WBP_Panel_Esports_Upcoming_Matches.WBP_Panel_Esports_Upcoming_Matches_C.SetUpcomingMatchesForEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnEventUpcomingMatchesFiltered(struct TArray<struct UEventDataModel*>& FilteredEvents); // Function WBP_Panel_Esports_Upcoming_Matches.WBP_Panel_Esports_Upcoming_Matches_C.OnEventUpcomingMatchesFiltered // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetUpcomingMatchesForTeam(struct UTeamModel* Team); // Function WBP_Panel_Esports_Upcoming_Matches.WBP_Panel_Esports_Upcoming_Matches_C.SetUpcomingMatchesForTeam // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnTeamUpcomingMatchesFiltered(struct TArray<struct UEventDataModel*>& EsportsNewScheduleEntries); // Function WBP_Panel_Esports_Upcoming_Matches.WBP_Panel_Esports_Upcoming_Matches_C.OnTeamUpcomingMatchesFiltered // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindToOrUnbindFromViewModel(bool ShouldBind); // Function WBP_Panel_Esports_Upcoming_Matches.WBP_Panel_Esports_Upcoming_Matches_C.BindToOrUnbindFromViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void K2_BindToViewModel(); // Function WBP_Panel_Esports_Upcoming_Matches.WBP_Panel_Esports_Upcoming_Matches_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Destruct(); // Function WBP_Panel_Esports_Upcoming_Matches.WBP_Panel_Esports_Upcoming_Matches_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Panel_Esports_Upcoming_Matches(int32_t EntryPoint); // Function WBP_Panel_Esports_Upcoming_Matches.WBP_Panel_Esports_Upcoming_Matches_C.ExecuteUbergraph_WBP_Panel_Esports_Upcoming_Matches // (Final|UbergraphFunction) // @ game+0x1b42740
};

