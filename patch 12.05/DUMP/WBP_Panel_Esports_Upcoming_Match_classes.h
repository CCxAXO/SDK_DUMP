// WidgetBlueprintGeneratedClass WBP_Panel_Esports_Upcoming_Match.WBP_Panel_Esports_Upcoming_Match_C
// Size: 0x4a0 (Inherited: 0x3e0)
struct UWBP_Panel_Esports_Upcoming_Match_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UAresCommonText* CT_Date; // 0x3e8(0x08)
	struct UAresCommonText* CT_TeamOneCode; // 0x3f0(0x08)
	struct UAresCommonText* CT_TeamTwoCode; // 0x3f8(0x08)
	struct UAresCommonText* CT_Time; // 0x400(0x08)
	struct UAresCommonText* CT_TournamentName; // 0x408(0x08)
	struct UImage* I_Furniture; // 0x410(0x08)
	struct UImage* I_Furniture_2; // 0x418(0x08)
	struct UImage* I_TeamOneLogo; // 0x420(0x08)
	struct UImage* I_TeamTwoLogo; // 0x428(0x08)
	struct UImage* Image_143; // 0x430(0x08)
	struct UImage* Image_147; // 0x438(0x08)
	struct UImage* Image_DateAreaBG; // 0x440(0x08)
	struct UImage* Image_TeamAreaBG; // 0x448(0x08)
	struct UWBP_LiveTag_EsportsHub_C* WBP_LiveTag_EsportsHub; // 0x450(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_1; // 0x458(0x08)
	struct UEsportsScheduleEntryViewModel* EsportsScheduleEntryViewModel; // 0x460(0x08)
	struct UEsportsScheduleEntryViewModelV2* EsportsScheduleEntryViewModelV2; // 0x468(0x08)
	struct FText EventName; // 0x470(0x18)
	struct FText StageName; // 0x488(0x18)

	void InitWithMatchID(struct FString MatchID); // Function WBP_Panel_Esports_Upcoming_Match.WBP_Panel_Esports_Upcoming_Match_C.InitWithMatchID // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void TryFormatEventStageNameText(); // Function WBP_Panel_Esports_Upcoming_Match.WBP_Panel_Esports_Upcoming_Match_C.TryFormatEventStageNameText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void On VCTEvent Changed(enum class E2024VCTEvent event); // Function WBP_Panel_Esports_Upcoming_Match.WBP_Panel_Esports_Upcoming_Match_C.On VCTEvent Changed // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnStageNameChangedV2(struct FString NewStageName); // Function WBP_Panel_Esports_Upcoming_Match.WBP_Panel_Esports_Upcoming_Match_C.OnStageNameChangedV2 // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnMatchStartTimeUTCChanged(struct FDateTime& InStartTimeUtc); // Function WBP_Panel_Esports_Upcoming_Match.WBP_Panel_Esports_Upcoming_Match_C.OnMatchStartTimeUTCChanged // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void On Tournament Name Updated(struct FString TournamentID, struct FString TournamentName); // Function WBP_Panel_Esports_Upcoming_Match.WBP_Panel_Esports_Upcoming_Match_C.On Tournament Name Updated // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void On Match Status Updated(enum class EEsportsMatchStatus MatchStatus); // Function WBP_Panel_Esports_Upcoming_Match.WBP_Panel_Esports_Upcoming_Match_C.On Match Status Updated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void On Team Code Updated(struct FString TeamCode, bool IsFirstTeam); // Function WBP_Panel_Esports_Upcoming_Match.WBP_Panel_Esports_Upcoming_Match_C.On Team Code Updated // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void On Match Start Time Updated(struct FString MatchID, struct FDateTime StartTime); // Function WBP_Panel_Esports_Upcoming_Match.WBP_Panel_Esports_Upcoming_Match_C.On Match Start Time Updated // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void On Stage Name Updated(struct FString MatchID, struct FString StageName); // Function WBP_Panel_Esports_Upcoming_Match.WBP_Panel_Esports_Upcoming_Match_C.On Stage Name Updated // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void On Team Logo Updated(struct UTexture2D* TeamLogo, bool IsFirstTeam); // Function WBP_Panel_Esports_Upcoming_Match.WBP_Panel_Esports_Upcoming_Match_C.On Team Logo Updated // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void On Team Name Updated(struct FString TeamName, bool IsFirstTeam); // Function WBP_Panel_Esports_Upcoming_Match.WBP_Panel_Esports_Upcoming_Match_C.On Team Name Updated // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindToOrUnbindFromViewModel(bool ShouldBind); // Function WBP_Panel_Esports_Upcoming_Match.WBP_Panel_Esports_Upcoming_Match_C.BindToOrUnbindFromViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitUpcomingMatchInfo(struct UEventDataModel* EventDataModel); // Function WBP_Panel_Esports_Upcoming_Match.WBP_Panel_Esports_Upcoming_Match_C.InitUpcomingMatchInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void K2_BindToViewModel(); // Function WBP_Panel_Esports_Upcoming_Match.WBP_Panel_Esports_Upcoming_Match_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Destruct(); // Function WBP_Panel_Esports_Upcoming_Match.WBP_Panel_Esports_Upcoming_Match_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Panel_Esports_Upcoming_Match(int32_t EntryPoint); // Function WBP_Panel_Esports_Upcoming_Match.WBP_Panel_Esports_Upcoming_Match_C.ExecuteUbergraph_WBP_Panel_Esports_Upcoming_Match // (Final|UbergraphFunction) // @ game+0x1af5410
};

