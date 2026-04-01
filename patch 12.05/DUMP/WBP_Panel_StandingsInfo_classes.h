// WidgetBlueprintGeneratedClass WBP_Panel_StandingsInfo.WBP_Panel_StandingsInfo_C
// Size: 0x4b8 (Inherited: 0x3e0)
struct UWBP_Panel_StandingsInfo_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UEsportsStandingsOverlayViewModel* EsportsStandingsOverlayViewModel; // 0x3e8(0x08)
	struct UImage* BG_Color; // 0x3f0(0x08)
	struct UEsports_Loading_C* Esports_Loading; // 0x3f8(0x08)
	struct UImage* Image; // 0x400(0x08)
	struct UImage* Image_2; // 0x408(0x08)
	struct UImage* Image_3; // 0x410(0x08)
	struct UImage* Image_4; // 0x418(0x08)
	struct UImage* Image_5; // 0x420(0x08)
	struct UImage* Image_6; // 0x428(0x08)
	struct UImage* Image_7; // 0x430(0x08)
	struct UImage* Image_8; // 0x438(0x08)
	struct UImage* Image_9; // 0x440(0x08)
	struct UImage* Image_88; // 0x448(0x08)
	struct UImage* Image_135; // 0x450(0x08)
	struct UAresCommonRichText* RT_1Seeds; // 0x458(0x08)
	struct UAresCommonRichText* RT_2_3Seeds; // 0x460(0x08)
	struct UAresCommonRichText* RT_4Seeds; // 0x468(0x08)
	struct UAresCommonRichText* RT_SeedingBracket; // 0x470(0x08)
	struct UAresCommonRichText* RT_Top8; // 0x478(0x08)
	struct UAresCommonText* Text_Date; // 0x480(0x08)
	struct UAresCommonText* Text_NumTeams; // 0x488(0x08)
	struct UVerticalBox* VerticalBox_204; // 0x490(0x08)
	struct UWBP_Panel_EsportsEventTitleCardHorizontal_C* WBP_Panel_EsportsEventTitleCardHorizontal; // 0x498(0x08)
	struct UAresWidgetSwitcher* WidgetSwitcher_SeedingInfo; // 0x4a0(0x08)
	struct UEsportsEventViewModel* EventViewModel; // 0x4a8(0x08)
	struct UEsportsTournamentViewModel* EsportsTournamentViewModel; // 0x4b0(0x08)

	void OnStagesUpdated(struct TArray<enum class ETournamentStage>& Stages); // Function WBP_Panel_StandingsInfo.WBP_Panel_StandingsInfo_C.OnStagesUpdated // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnTournamentDateChanged(struct FDateTime& InDateUTC); // Function WBP_Panel_StandingsInfo.WBP_Panel_StandingsInfo_C.OnTournamentDateChanged // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnTeamsUpdatedV2(struct TArray<struct FString>& TeamIDs); // Function WBP_Panel_StandingsInfo.WBP_Panel_StandingsInfo_C.OnTeamsUpdatedV2 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetViewModel(struct UEsportsTournamentViewModel* InViewModel); // Function WBP_Panel_StandingsInfo.WBP_Panel_StandingsInfo_C.SetViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnTeamsUpdated(struct TArray<struct UTeamModel*>& Teams); // Function WBP_Panel_StandingsInfo.WBP_Panel_StandingsInfo_C.OnTeamsUpdated // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnEventDateChanged(struct FText& InEventDates); // Function WBP_Panel_StandingsInfo.WBP_Panel_StandingsInfo_C.OnEventDateChanged // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Bind To Or Unbind From View Model(bool Should Bind); // Function WBP_Panel_StandingsInfo.WBP_Panel_StandingsInfo_C.Bind To Or Unbind From View Model // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitWithViewModel(struct UEsportsEventViewModel* EventViewModel); // Function WBP_Panel_StandingsInfo.WBP_Panel_StandingsInfo_C.InitWithViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_StandingsInfo.WBP_Panel_StandingsInfo_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void K2_BindToViewModel(); // Function WBP_Panel_StandingsInfo.WBP_Panel_StandingsInfo_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnInitialized(); // Function WBP_Panel_StandingsInfo.WBP_Panel_StandingsInfo_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Panel_StandingsInfo(int32_t EntryPoint); // Function WBP_Panel_StandingsInfo.WBP_Panel_StandingsInfo_C.ExecuteUbergraph_WBP_Panel_StandingsInfo // (Final|UbergraphFunction) // @ game+0x1af5410
};

