// WidgetBlueprintGeneratedClass WBP_Panel_Teams_PlayerStatsPopup.WBP_Panel_Teams_PlayerStatsPopup_C
// Size: 0x4a0 (Inherited: 0x3e0)
struct UWBP_Panel_Teams_PlayerStatsPopup_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UHorizontalBox* AgentStatsHBox; // 0x3e8(0x08)
	struct UAresCommonText* AvgCombatScore; // 0x3f0(0x08)
	struct UCustomCloseButton_C* CustomCloseButton; // 0x3f8(0x08)
	struct UAresCommonText* DamagePerRound; // 0x400(0x08)
	struct UAresCommonText* HeadshotPercent; // 0x408(0x08)
	struct UImage* Image_127; // 0x410(0x08)
	struct UImage* Image_PlayerPortrait; // 0x418(0x08)
	struct UImage* Image_VCTLogo; // 0x420(0x08)
	struct UImage* Image_VCTLogo_2; // 0x428(0x08)
	struct UImage* Image_VCTLogo_3; // 0x430(0x08)
	struct UAresCommonText* KDA; // 0x438(0x08)
	struct UAresCommonText* KillsPerRound; // 0x440(0x08)
	struct UOverlay* O_NotAvailable; // 0x448(0x08)
	struct UImage* OverlayBG; // 0x450(0x08)
	struct UAresCommonText* PInGameNameBox; // 0x458(0x08)
	struct UAresCommonText* PlayerFirstLastName; // 0x460(0x08)
	struct UAresCommonText* PlayerIGN; // 0x468(0x08)
	struct UAresCommonText* PlayerStatsUnavailableText; // 0x470(0x08)
	struct UImage* TopStrip; // 0x478(0x08)
	struct TArray<struct UEsportsPlayerAgentStatsModel*> StatsPerAgentList; // 0x480(0x10)
	struct UEsportsPlayerStatsViewModel* PlayerStatsViewModel; // 0x490(0x08)
	struct UEsportsPlayerStatsModel* PlayerStatsModel; // 0x498(0x08)

	void InitViewModel(); // Function WBP_Panel_Teams_PlayerStatsPopup.WBP_Panel_Teams_PlayerStatsPopup_C.InitViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnStatsPerAgentModelsUpdated(struct TArray<struct UEsportsPlayerAgentStatsModel*>& StatsPerAgentModels); // Function WBP_Panel_Teams_PlayerStatsPopup.WBP_Panel_Teams_PlayerStatsPopup_C.OnStatsPerAgentModelsUpdated // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnAvgKillsPerRoundUpdated(float InAvgKillsPerRound); // Function WBP_Panel_Teams_PlayerStatsPopup.WBP_Panel_Teams_PlayerStatsPopup_C.OnAvgKillsPerRoundUpdated // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnAvgDamagePerRoundUpdated(float InAvgDamagePerRound); // Function WBP_Panel_Teams_PlayerStatsPopup.WBP_Panel_Teams_PlayerStatsPopup_C.OnAvgDamagePerRoundUpdated // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnHeadshotPercentUpdated(float InHeadshotPercent); // Function WBP_Panel_Teams_PlayerStatsPopup.WBP_Panel_Teams_PlayerStatsPopup_C.OnHeadshotPercentUpdated // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnTotalGamesUpdated(int32_t InTotalGames); // Function WBP_Panel_Teams_PlayerStatsPopup.WBP_Panel_Teams_PlayerStatsPopup_C.OnTotalGamesUpdated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnKDAUpdated(float InKDA); // Function WBP_Panel_Teams_PlayerStatsPopup.WBP_Panel_Teams_PlayerStatsPopup_C.OnKDAUpdated // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnAvgCombatScoreUpdated(float InAvgCombatScore); // Function WBP_Panel_Teams_PlayerStatsPopup.WBP_Panel_Teams_PlayerStatsPopup_C.OnAvgCombatScoreUpdated // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetPlayerDetails(struct UTexture2D* PlayerPortrait, struct FText PlayerIGN, struct FText FirstLastName); // Function WBP_Panel_Teams_PlayerStatsPopup.WBP_Panel_Teams_PlayerStatsPopup_C.SetPlayerDetails // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindOrUnbindEvents(bool Bind); // Function WBP_Panel_Teams_PlayerStatsPopup.WBP_Panel_Teams_PlayerStatsPopup_C.BindOrUnbindEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__WBP_Panel_Teams_PlayerStatsPopup_CustomCloseButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(); // Function WBP_Panel_Teams_PlayerStatsPopup.WBP_Panel_Teams_PlayerStatsPopup_C.BndEvt__WBP_Panel_Teams_PlayerStatsPopup_CustomCloseButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void Destruct(); // Function WBP_Panel_Teams_PlayerStatsPopup.WBP_Panel_Teams_PlayerStatsPopup_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void K2_BindToViewModel(); // Function WBP_Panel_Teams_PlayerStatsPopup.WBP_Panel_Teams_PlayerStatsPopup_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Panel_Teams_PlayerStatsPopup(int32_t EntryPoint); // Function WBP_Panel_Teams_PlayerStatsPopup.WBP_Panel_Teams_PlayerStatsPopup_C.ExecuteUbergraph_WBP_Panel_Teams_PlayerStatsPopup // (Final|UbergraphFunction) // @ game+0x1b42740
};

