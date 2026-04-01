// WidgetBlueprintGeneratedClass WBP_Panel_EsportsTeamStandingsEntry.WBP_Panel_EsportsTeamStandingsEntry_C
// Size: 0x468 (Inherited: 0x3e0)
struct UWBP_Panel_EsportsTeamStandingsEntry_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UImage* BG_Color; // 0x3e8(0x08)
	struct UImage* I_TeamImage; // 0x3f0(0x08)
	struct UAresCommonText* T_MatchRecord; // 0x3f8(0x08)
	struct UAresCommonText* T_PositionNum; // 0x400(0x08)
	struct UAresCommonText* T_TeamName; // 0x408(0x08)
	struct UEsportsTeamViewModel* TeamViewModel; // 0x410(0x08)
	int32_t Rank; // 0x418(0x04)
	struct FSlateColor AdvancingColor; // 0x41c(0x14)
	struct FSlateColor TopAdvancingColor; // 0x430(0x14)
	struct FSlateColor NonAdvancingColor; // 0x444(0x14)
	struct UEsportsRankingTeamViewModel* RankingTeamViewModel; // 0x458(0x08)
	struct UEsportsTeamViewModelV2* TeamViewModelV2; // 0x460(0x08)

	void OnNameChanged(struct FString InName); // Function WBP_Panel_EsportsTeamStandingsEntry.WBP_Panel_EsportsTeamStandingsEntry_C.OnNameChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnRecordChanged(struct FEsportsRankingTeamRecord& InRecord); // Function WBP_Panel_EsportsTeamStandingsEntry.WBP_Panel_EsportsTeamStandingsEntry_C.OnRecordChanged // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnTeamIDChanged(struct FString InTeamID); // Function WBP_Panel_EsportsTeamStandingsEntry.WBP_Panel_EsportsTeamStandingsEntry_C.OnTeamIDChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetViewModelV2(struct UEsportsRankingTeamViewModel* InRankingTeamViewModel); // Function WBP_Panel_EsportsTeamStandingsEntry.WBP_Panel_EsportsTeamStandingsEntry_C.SetViewModelV2 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void On Logo Updated(struct UTexture2D* InTeamLogo); // Function WBP_Panel_EsportsTeamStandingsEntry.WBP_Panel_EsportsTeamStandingsEntry_C.On Logo Updated // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetRank(int32_t Rank); // Function WBP_Panel_EsportsTeamStandingsEntry.WBP_Panel_EsportsTeamStandingsEntry_C.SetRank // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void On Match Record Updated(struct FTeamRecord& Record); // Function WBP_Panel_EsportsTeamStandingsEntry.WBP_Panel_EsportsTeamStandingsEntry_C.On Match Record Updated // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void On Team Name Updated(struct FText& InName); // Function WBP_Panel_EsportsTeamStandingsEntry.WBP_Panel_EsportsTeamStandingsEntry_C.On Team Name Updated // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindToOrUnbindFromViewModel(bool ShouldBind); // Function WBP_Panel_EsportsTeamStandingsEntry.WBP_Panel_EsportsTeamStandingsEntry_C.BindToOrUnbindFromViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Set View Model(struct UEsportsTeamViewModel* InViewModel); // Function WBP_Panel_EsportsTeamStandingsEntry.WBP_Panel_EsportsTeamStandingsEntry_C.Set View Model // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Destruct(); // Function WBP_Panel_EsportsTeamStandingsEntry.WBP_Panel_EsportsTeamStandingsEntry_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Panel_EsportsTeamStandingsEntry(int32_t EntryPoint); // Function WBP_Panel_EsportsTeamStandingsEntry.WBP_Panel_EsportsTeamStandingsEntry_C.ExecuteUbergraph_WBP_Panel_EsportsTeamStandingsEntry // (Final|UbergraphFunction) // @ game+0x1b42740
};

