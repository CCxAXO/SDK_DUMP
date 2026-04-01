// WidgetBlueprintGeneratedClass MapSelectScreen.MapSelectScreen_C
// Size: 0x550 (Inherited: 0x320)
struct UMapSelectScreen_C : UMapSelectScreen {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UWidgetAnimation* ShowBG; // 0x328(0x08)
	struct UWidgetAnimation* Anim_ShowSummary; // 0x330(0x08)
	struct UWidgetAnimation* FadeinInfoModalAnimation; // 0x338(0x08)
	struct UWidgetAnimation* FadeoutMapAnimation; // 0x340(0x08)
	struct UWidgetAnimation* ChosenAnimation; // 0x348(0x08)
	struct UWidgetAnimation* BannedAnimation; // 0x350(0x08)
	struct UMapSelect_ActionButton_C* ActionButton; // 0x358(0x08)
	struct UMapSelect_SideButton_C* AttackButton; // 0x360(0x08)
	struct UOverlay* BannedText; // 0x368(0x08)
	struct UOverlay* ChosenText; // 0x370(0x08)
	struct UButton* DebugSkipButton; // 0x378(0x08)
	struct UMapSelect_SideButton_C* DefendButton; // 0x380(0x08)
	struct UMapSelect_SummarySquadInfo_C* EnemySummary; // 0x388(0x08)
	struct UMapSelect_Header_C* Header; // 0x390(0x08)
	struct UMapSelect_InfoModal_C* InfoModal; // 0x398(0x08)
	struct UImage* MapBackground; // 0x3a0(0x08)
	struct UMapSelect_MapDisplay_C* MapDisplay; // 0x3a8(0x08)
	struct UMapSelect_MapList_C* MapList; // 0x3b0(0x08)
	struct UOverlay* O_SelectionPhaseWrap; // 0x3b8(0x08)
	struct UOverlay* SidePicks; // 0x3c0(0x08)
	struct UOverlay* StartingPhase; // 0x3c8(0x08)
	struct UMapSelect_StepList_C* StepsList; // 0x3d0(0x08)
	struct UOverlay* Summary; // 0x3d8(0x08)
	struct UTextBlock* T_MapChosenText; // 0x3e0(0x08)
	struct UTextBlock* T_MapNameText; // 0x3e8(0x08)
	struct UMapSelect_SummarySquadInfo_C* TeamSummary; // 0x3f0(0x08)
	struct UMapSelect_Timer_C* Timer; // 0x3f8(0x08)
	struct UButton* ToggleCaptainButton; // 0x400(0x08)
	struct UWBP_MPnBdecorations_C* WBP_MPnBdecorations; // 0x408(0x08)
	struct UWidgetSwitcher* WS_StepSwitcher; // 0x410(0x08)
	struct UMapDataAsset* SelectedMapData; // 0x418(0x08)
	struct UMapUIData* SelectedMapUIData; // 0x420(0x08)
	enum class EPregameTeamID SelectedSide; // 0x428(0x01)
	enum class EPregameTeamID FinalSide; // 0x429(0x01)
	char pad_42A[0x6]; // 0x42a(0x06)
	struct FTournamentRosterInfo YourRoster; // 0x430(0x80)
	struct FTournamentRosterInfo EnemyRoster; // 0x4b0(0x80)
	int32_t TeamNumber; // 0x530(0x04)
	char pad_534[0x4]; // 0x534(0x04)
	struct UPregameViewController* ViewController; // 0x538(0x08)
	struct TArray<struct FName> DebugAvailableMaps; // 0x540(0x10)

	void SequenceEvent__ENTRYPOINTMapSelectScreen_4(); // Function MapSelectScreen.MapSelectScreen_C.SequenceEvent__ENTRYPOINTMapSelectScreen_4 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SequenceEvent__ENTRYPOINTMapSelectScreen_3(); // Function MapSelectScreen.MapSelectScreen_C.SequenceEvent__ENTRYPOINTMapSelectScreen_3 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SequenceEvent__ENTRYPOINTMapSelectScreen_2(); // Function MapSelectScreen.MapSelectScreen_C.SequenceEvent__ENTRYPOINTMapSelectScreen_2 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SequenceEvent__ENTRYPOINTMapSelectScreen_1(); // Function MapSelectScreen.MapSelectScreen_C.SequenceEvent__ENTRYPOINTMapSelectScreen_1 // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SequenceEvent__ENTRYPOINTMapSelectScreen(); // Function MapSelectScreen.MapSelectScreen_C.SequenceEvent__ENTRYPOINTMapSelectScreen // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnTournamentRosterDataChanged(struct FTournamentRosterMetadata& NewData); // Function MapSelectScreen.MapSelectScreen_C.OnTournamentRosterDataChanged // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void DebugPickSide(); // Function MapSelectScreen.MapSelectScreen_C.DebugPickSide // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void DebugPickMap(); // Function MapSelectScreen.MapSelectScreen_C.DebugPickMap // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void DebugBanMap(); // Function MapSelectScreen.MapSelectScreen_C.DebugBanMap // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void DebugCastVote(); // Function MapSelectScreen.MapSelectScreen_C.DebugCastVote // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void StopFadeAnims(); // Function MapSelectScreen.MapSelectScreen_C.StopFadeAnims // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void DebugEndAction(); // Function MapSelectScreen.MapSelectScreen_C.DebugEndAction // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void DebugActionConfirmed(); // Function MapSelectScreen.MapSelectScreen_C.DebugActionConfirmed // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetRosterDatas(); // Function MapSelectScreen.MapSelectScreen_C.SetRosterDatas // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ShowSummary(); // Function MapSelectScreen.MapSelectScreen_C.ShowSummary // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ShowSelectionPhase(); // Function MapSelectScreen.MapSelectScreen_C.ShowSelectionPhase // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ShowStartingPhase(); // Function MapSelectScreen.MapSelectScreen_C.ShowStartingPhase // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ShowMapPicked(struct UMapDataAsset* Map); // Function MapSelectScreen.MapSelectScreen_C.ShowMapPicked // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ShowMapBanned(struct UMapDataAsset* Map); // Function MapSelectScreen.MapSelectScreen_C.ShowMapBanned // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetSequentialSteps(int32_t InStep, int32_t& Out); // Function MapSelectScreen.MapSelectScreen_C.GetSequentialSteps // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnSideChanged(enum class EPregameTeamID Side); // Function MapSelectScreen.MapSelectScreen_C.OnSideChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnTeamIDChanged(struct FName& NewTeamID); // Function MapSelectScreen.MapSelectScreen_C.OnTeamIDChanged // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnMapSelected(struct UMapSelect_MapListEntry_C* Map); // Function MapSelectScreen.MapSelectScreen_C.OnMapSelected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnStepsChanged(struct TArray<struct FPregameStep>& NewSteps); // Function MapSelectScreen.MapSelectScreen_C.OnStepsChanged // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnStepChanged(int32_t NewStep); // Function MapSelectScreen.MapSelectScreen_C.OnStepChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnTeam1Changed(struct FString NewTeam); // Function MapSelectScreen.MapSelectScreen_C.OnTeam1Changed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnVotesChanged(struct TArray<struct FPregameCastVote>& NewVotes); // Function MapSelectScreen.MapSelectScreen_C.OnVotesChanged // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnBannedMapsChanged(struct TArray<struct UMapDataAsset*>& NewMaps); // Function MapSelectScreen.MapSelectScreen_C.OnBannedMapsChanged // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnMapsChanged(struct TArray<struct UMapDataAsset*>& NewMaps); // Function MapSelectScreen.MapSelectScreen_C.OnMapsChanged // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnMapChosen(struct UMapDataAsset* MapAsset); // Function MapSelectScreen.MapSelectScreen_C.OnMapChosen // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnIsCaptainChanged(bool NewValue); // Function MapSelectScreen.MapSelectScreen_C.OnIsCaptainChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnLocalPlayerChanged(struct UPregamePlayerModel* Player); // Function MapSelectScreen.MapSelectScreen_C.OnLocalPlayerChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnStateChanged(enum class EPregameMatchState State); // Function MapSelectScreen.MapSelectScreen_C.OnStateChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetUpStepList(); // Function MapSelectScreen.MapSelectScreen_C.SetUpStepList // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindEvents(); // Function MapSelectScreen.MapSelectScreen_C.BindEvents // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void DebugTimeout(); // Function MapSelectScreen.MapSelectScreen_C.DebugTimeout // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void AddDebugData(); // Function MapSelectScreen.MapSelectScreen_C.AddDebugData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PickSide(); // Function MapSelectScreen.MapSelectScreen_C.PickSide // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PickMap(); // Function MapSelectScreen.MapSelectScreen_C.PickMap // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BanMap(); // Function MapSelectScreen.MapSelectScreen_C.BanMap // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void CastVote(struct FPregameCastVote Vote); // Function MapSelectScreen.MapSelectScreen_C.CastVote // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnActionConfirmed(); // Function MapSelectScreen.MapSelectScreen_C.OnActionConfirmed // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void DeselectMap(); // Function MapSelectScreen.MapSelectScreen_C.DeselectMap // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SelectSide(enum class EPregameTeamID Side); // Function MapSelectScreen.MapSelectScreen_C.SelectSide // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SelectMap(struct UMapDataAsset* InMap); // Function MapSelectScreen.MapSelectScreen_C.SelectMap // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetUpCurrentStep(); // Function MapSelectScreen.MapSelectScreen_C.SetUpCurrentStep // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnInteractionEnabled(); // Function MapSelectScreen.MapSelectScreen_C.OnInteractionEnabled // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void FadeoutMap(); // Function MapSelectScreen.MapSelectScreen_C.FadeoutMap // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Map_Banned_SFX(); // Function MapSelectScreen.MapSelectScreen_C.Map_Banned_SFX // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Map_Chosen(); // Function MapSelectScreen.MapSelectScreen_C.Map_Chosen // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function MapSelectScreen.MapSelectScreen_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__Button_66_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function MapSelectScreen.MapSelectScreen_C.BndEvt__Button_66_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__DefendButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(); // Function MapSelectScreen.MapSelectScreen_C.BndEvt__DefendButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__AttackButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(); // Function MapSelectScreen.MapSelectScreen_C.BndEvt__AttackButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__ActionButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature(); // Function MapSelectScreen.MapSelectScreen_C.BndEvt__ActionButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__ToggleCaptainButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function MapSelectScreen.MapSelectScreen_C.BndEvt__ToggleCaptainButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_MapSelectScreen(int32_t EntryPoint); // Function MapSelectScreen.MapSelectScreen_C.ExecuteUbergraph_MapSelectScreen // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

