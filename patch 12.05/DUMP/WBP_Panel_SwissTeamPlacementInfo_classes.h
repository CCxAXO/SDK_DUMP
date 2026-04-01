// WidgetBlueprintGeneratedClass WBP_Panel_SwissTeamPlacementInfo.WBP_Panel_SwissTeamPlacementInfo_C
// Size: 0x348 (Inherited: 0x318)
struct UWBP_Panel_SwissTeamPlacementInfo_C : UUserWidget {
	struct UEsports_Logo_Wrapper_C* Esports_Logo_Wrapper; // 0x318(0x08)
	struct UAresCommonRichText* Text_Score; // 0x320(0x08)
	struct UEsportsMatchupTeamViewModel* TeamViewModel; // 0x328(0x08)
	struct UEsportsTeamViewModelV2* TeamViewModelV2; // 0x330(0x08)
	struct UEsportsStandingTeamViewModel* StandingTeamViewModel; // 0x338(0x08)
	int32_t Wins; // 0x340(0x04)
	int32_t Losses; // 0x344(0x04)

	void OnStandingTeamRecordChanged(struct FEsportsStandingTeamRecord& TeamRecord); // Function WBP_Panel_SwissTeamPlacementInfo.WBP_Panel_SwissTeamPlacementInfo_C.OnStandingTeamRecordChanged // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnStandingTeamIDChangedV2(struct FString InID); // Function WBP_Panel_SwissTeamPlacementInfo.WBP_Panel_SwissTeamPlacementInfo_C.OnStandingTeamIDChangedV2 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnMatchupTeamIDChanged(struct FString InID); // Function WBP_Panel_SwissTeamPlacementInfo.WBP_Panel_SwissTeamPlacementInfo_C.OnMatchupTeamIDChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnMatchupTeamLossesChanged(int32_t InLosses); // Function WBP_Panel_SwissTeamPlacementInfo.WBP_Panel_SwissTeamPlacementInfo_C.OnMatchupTeamLossesChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnMatchupTeamWinsChanged(int32_t InWins); // Function WBP_Panel_SwissTeamPlacementInfo.WBP_Panel_SwissTeamPlacementInfo_C.OnMatchupTeamWinsChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnMatchupTeamLogoChanged(struct UTexture2D* InLogo); // Function WBP_Panel_SwissTeamPlacementInfo.WBP_Panel_SwissTeamPlacementInfo_C.OnMatchupTeamLogoChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindToOrUnbindFromViewModel(bool ShouldBind); // Function WBP_Panel_SwissTeamPlacementInfo.WBP_Panel_SwissTeamPlacementInfo_C.BindToOrUnbindFromViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitWithViewModelV2(struct UEsportsStandingTeamViewModel* InViewModel); // Function WBP_Panel_SwissTeamPlacementInfo.WBP_Panel_SwissTeamPlacementInfo_C.InitWithViewModelV2 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitWithViewModel(struct UEsportsMatchupTeamViewModel* InViewModel); // Function WBP_Panel_SwissTeamPlacementInfo.WBP_Panel_SwissTeamPlacementInfo_C.InitWithViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

