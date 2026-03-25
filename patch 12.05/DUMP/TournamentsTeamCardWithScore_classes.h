// WidgetBlueprintGeneratedClass TournamentsTeamCardWithScore.TournamentsTeamCardWithScore_C
// Size: 0x3ba (Inherited: 0x318)
struct UTournamentsTeamCardWithScore_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UContextMenuAnchor_C* ContextMenuAnchor; // 0x320(0x08)
	struct UImage* IMG_BG; // 0x328(0x08)
	struct UImage* IMG_BG_Arrow; // 0x330(0x08)
	struct UImage* IMG_BG_border_Arrow; // 0x338(0x08)
	struct UImage* IMG_Border; // 0x340(0x08)
	struct UImage* IMG_bracketArm; // 0x348(0x08)
	struct UImage* IMG_gradientBG; // 0x350(0x08)
	struct UOverlay* O_WS_emptyBracket; // 0x358(0x08)
	struct UOverlay* O_WS_TournamentEntryWrap; // 0x360(0x08)
	struct UOverlay* O_WS_Waiting; // 0x368(0x08)
	struct UTextBlock* T_TeamName; // 0x370(0x08)
	struct UTextBlock* T_TeamTag; // 0x378(0x08)
	struct UImage* TeamColorBar; // 0x380(0x08)
	struct UTournamentsTeamCustomization_C* TeamCustomization; // 0x388(0x08)
	struct UHorizontalBox* TeamInfoWrapper; // 0x390(0x08)
	struct UTextBlock* TournamentBYEtext; // 0x398(0x08)
	struct UTextBlock* TournamentScoreText; // 0x3a0(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_229; // 0x3a8(0x08)
	struct UMatchupParticipantModel* MatchupParticipant; // 0x3b0(0x08)
	enum class E_TournamentBracketEntryState EntryState; // 0x3b8(0x01)
	bool IsTournamentWinnerEntry; // 0x3b9(0x01)

	void HandleReportTeamClicked(); // Function TournamentsTeamCardWithScore.TournamentsTeamCardWithScore_C.HandleReportTeamClicked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void StyleEntryBasedOnState(enum class E_TournamentBracketEntryState entryStatus); // Function TournamentsTeamCardWithScore.TournamentsTeamCardWithScore_C.StyleEntryBasedOnState // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetBye(); // Function TournamentsTeamCardWithScore.TournamentsTeamCardWithScore_C.SetBye // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetTeam(struct UMatchupParticipantModel* MatchupParticipant); // Function TournamentsTeamCardWithScore.TournamentsTeamCardWithScore_C.SetTeam // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function TournamentsTeamCardWithScore.TournamentsTeamCardWithScore_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function TournamentsTeamCardWithScore.TournamentsTeamCardWithScore_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__TournamentsTeamCardWithScore_ContextMenuAnchor_K2Node_ComponentBoundEvent_0_OnContextMenuCreated__DelegateSignature(struct UContextMenu_C* ContextMenu); // Function TournamentsTeamCardWithScore.TournamentsTeamCardWithScore_C.BndEvt__TournamentsTeamCardWithScore_ContextMenuAnchor_K2Node_ComponentBoundEvent_0_OnContextMenuCreated__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_TournamentsTeamCardWithScore(int32_t EntryPoint); // Function TournamentsTeamCardWithScore.TournamentsTeamCardWithScore_C.ExecuteUbergraph_TournamentsTeamCardWithScore // (Final|UbergraphFunction) // @ game+0x1af5410
};

