// WidgetBlueprintGeneratedClass MatchDetailsSummaryContractsV2.MatchDetailsSummaryContractsV2_C
// Size: 0x351 (Inherited: 0x318)
struct UMatchDetailsSummaryContractsV2_C : UUserWidget {
	struct UEOGRecruitmentProgress_C* AgentRecruitmentEvent; // 0x318(0x08)
	struct UWBP_Panel_BTE_Banner_EOG_C* BasicTrainingEvent; // 0x320(0x08)
	struct UEOGContractProgressDefault_C* Battlepass; // 0x328(0x08)
	struct UOverlay* eventpass; // 0x330(0x08)
	struct UTextBlock* NextRewardsTextBlock; // 0x338(0x08)
	struct UWBP_Panel_EOGProgressComplete_C* ProgressComplete; // 0x340(0x08)
	struct UEOGContractProgressBase_C* EventContract; // 0x348(0x08)
	bool bSkipCeremony; // 0x350(0x01)

	void OnShouldShowBTEUpdate(bool ShouldShowBTE); // Function MatchDetailsSummaryContractsV2.MatchDetailsSummaryContractsV2_C.OnShouldShowBTEUpdate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetNumActiveBanners(int32_t& OutNumActiveBanners); // Function MatchDetailsSummaryContractsV2.MatchDetailsSummaryContractsV2_C.GetNumActiveBanners // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Display Progress Complete(); // Function MatchDetailsSummaryContractsV2.MatchDetailsSummaryContractsV2_C.Display Progress Complete // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitBTE(struct FGuid MatchID); // Function MatchDetailsSummaryContractsV2.MatchDetailsSummaryContractsV2_C.InitBTE // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitRecruitmentEvent(struct URecruitmentEventEOGViewModel* RecruitmentEventViewModel); // Function MatchDetailsSummaryContractsV2.MatchDetailsSummaryContractsV2_C.InitRecruitmentEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetSkipCeremony(); // Function MatchDetailsSummaryContractsV2.MatchDetailsSummaryContractsV2_C.SetSkipCeremony // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitEventContract(struct UContractViewModel* ContractViewModel, struct UContractDeltaViewModel* ContractDelta, int32_t DailyRewardsXP); // Function MatchDetailsSummaryContractsV2.MatchDetailsSummaryContractsV2_C.InitEventContract // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ShowEndState(); // Function MatchDetailsSummaryContractsV2.MatchDetailsSummaryContractsV2_C.ShowEndState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Reset(); // Function MatchDetailsSummaryContractsV2.MatchDetailsSummaryContractsV2_C.Reset // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void AnimateProgress(struct FTimespan Duration); // Function MatchDetailsSummaryContractsV2.MatchDetailsSummaryContractsV2_C.AnimateProgress // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Init(struct UContractMatchResultsViewModel* ContractMatchResults, struct UDailyRewardsProcessedMatchModel* DailyRewardsMatchResults); // Function MatchDetailsSummaryContractsV2.MatchDetailsSummaryContractsV2_C.Init // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

