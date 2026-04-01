// WidgetBlueprintGeneratedClass WBP_Panel_Teams_Upcoming_Matches.WBP_Panel_Teams_Upcoming_Matches_C
// Size: 0x440 (Inherited: 0x3e0)
struct UWBP_Panel_Teams_Upcoming_Matches_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UAresCommonText* CT_Error; // 0x3e8(0x08)
	struct UAresCommonText* CT_NoMatches; // 0x3f0(0x08)
	struct UEsports_Loading_C* EsportsLoadingThrobber; // 0x3f8(0x08)
	struct UVerticalBox* VB_UpcomingMatchList; // 0x400(0x08)
	struct UEsportsScheduleEntryListViewModel* EsportsScheduleEntryListViewModel; // 0x408(0x08)
	struct UTeamModel* CurrentDisplayedTeamModel; // 0x410(0x08)
	struct UEsportsScheduleEntryListViewModelV2* EsportsScheduleEntryListViewModelV2; // 0x418(0x08)
	struct TArray<struct FString> MatchIDsCurrentView; // 0x420(0x10)
	struct FMulticastInlineDelegate OnHasLiveEvents; // 0x430(0x10)

	void BroadcastHasLiveEvents(); // Function WBP_Panel_Teams_Upcoming_Matches.WBP_Panel_Teams_Upcoming_Matches_C.BroadcastHasLiveEvents // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ViewLiveMatches(); // Function WBP_Panel_Teams_Upcoming_Matches.WBP_Panel_Teams_Upcoming_Matches_C.ViewLiveMatches // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ResetLoadingState(); // Function WBP_Panel_Teams_Upcoming_Matches.WBP_Panel_Teams_Upcoming_Matches_C.ResetLoadingState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnError(); // Function WBP_Panel_Teams_Upcoming_Matches.WBP_Panel_Teams_Upcoming_Matches_C.OnError // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetScheduleLoadedState(bool IsScheduleDataLoaded); // Function WBP_Panel_Teams_Upcoming_Matches.WBP_Panel_Teams_Upcoming_Matches_C.SetScheduleLoadedState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnTeamUpcomingMatchIDsReceived(struct TArray<struct FString>& MatchIDsFilteredByTeam); // Function WBP_Panel_Teams_Upcoming_Matches.WBP_Panel_Teams_Upcoming_Matches_C.OnTeamUpcomingMatchIDsReceived // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetUpcomingMatchesForTeamV2(struct FString TeamID); // Function WBP_Panel_Teams_Upcoming_Matches.WBP_Panel_Teams_Upcoming_Matches_C.SetUpcomingMatchesForTeamV2 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetUpcomingMatchesForTeam(struct UTeamModel* Team); // Function WBP_Panel_Teams_Upcoming_Matches.WBP_Panel_Teams_Upcoming_Matches_C.SetUpcomingMatchesForTeam // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindToOrUnbindFromViewModel(bool ShouldBind); // Function WBP_Panel_Teams_Upcoming_Matches.WBP_Panel_Teams_Upcoming_Matches_C.BindToOrUnbindFromViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Destruct(); // Function WBP_Panel_Teams_Upcoming_Matches.WBP_Panel_Teams_Upcoming_Matches_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnInitialized(); // Function WBP_Panel_Teams_Upcoming_Matches.WBP_Panel_Teams_Upcoming_Matches_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Panel_Teams_Upcoming_Matches(int32_t EntryPoint); // Function WBP_Panel_Teams_Upcoming_Matches.WBP_Panel_Teams_Upcoming_Matches_C.ExecuteUbergraph_WBP_Panel_Teams_Upcoming_Matches // (Final|UbergraphFunction) // @ game+0x1b42740
	void OnHasLiveEvents__DelegateSignature(bool HasLiveEvents); // Function WBP_Panel_Teams_Upcoming_Matches.WBP_Panel_Teams_Upcoming_Matches_C.OnHasLiveEvents__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

