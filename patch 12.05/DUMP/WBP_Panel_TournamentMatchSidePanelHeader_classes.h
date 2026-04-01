// WidgetBlueprintGeneratedClass WBP_Panel_TournamentMatchSidePanelHeader.WBP_Panel_TournamentMatchSidePanelHeader_C
// Size: 0x476 (Inherited: 0x3e0)
struct UWBP_Panel_TournamentMatchSidePanelHeader_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UImage* IMG_Premier_Left; // 0x3e8(0x08)
	struct UImage* IMG_Premier_Right; // 0x3f0(0x08)
	struct UTournamentsTeamCustomization_C* TournamentsTeamCustomization_Left; // 0x3f8(0x08)
	struct UTournamentsTeamCustomization_C* TournamentsTeamCustomization_Right; // 0x400(0x08)
	struct UAresCommonText* TXT_LeftName; // 0x408(0x08)
	struct UAresCommonText* TXT_LeftScore; // 0x410(0x08)
	struct UAresCommonText* TXT_LeftTag; // 0x418(0x08)
	struct UAresCommonText* TXT_RightName; // 0x420(0x08)
	struct UAresCommonText* TXT_RightScore; // 0x428(0x08)
	struct UAresCommonText* TXT_RightTag; // 0x430(0x08)
	struct UVerticalBox* VB_LeftTeamInfo; // 0x438(0x08)
	struct UVerticalBox* VB_RightTeamInfo; // 0x440(0x08)
	struct UWBP_Panel_TournamentMatchIndicator_C* WBP_Panel_TournamentMatchIndicator; // 0x448(0x08)
	struct UWidgetSwitcher* WS_LeftTeamLogo; // 0x450(0x08)
	struct UWidgetSwitcher* WS_RightTeamLogo; // 0x458(0x08)
	struct UMatchupParticipantModel* LeftParticipant; // 0x460(0x08)
	struct UMatchupParticipantModel* RightParticipant; // 0x468(0x08)
	int32_t BestOfN; // 0x470(0x04)
	bool bIsBye; // 0x474(0x01)
	bool bIsHybridBONBracket; // 0x475(0x01)

	void GetScoreForBON(struct UMatchupParticipantModel* Participant, int32_t& Score); // Function WBP_Panel_TournamentMatchSidePanelHeader.WBP_Panel_TournamentMatchSidePanelHeader_C.GetScoreForBON // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ChangeTextWidgetTypeface(struct UTextBlock* TextWidget, struct FName Typeface); // Function WBP_Panel_TournamentMatchSidePanelHeader.WBP_Panel_TournamentMatchSidePanelHeader_C.ChangeTextWidgetTypeface // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetNumWinsNeededForBON(int32_t& NumWins); // Function WBP_Panel_TournamentMatchSidePanelHeader.WBP_Panel_TournamentMatchSidePanelHeader_C.GetNumWinsNeededForBON // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateRightParticipant(); // Function WBP_Panel_TournamentMatchSidePanelHeader.WBP_Panel_TournamentMatchSidePanelHeader_C.UpdateRightParticipant // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateLeftParticipant(); // Function WBP_Panel_TournamentMatchSidePanelHeader.WBP_Panel_TournamentMatchSidePanelHeader_C.UpdateLeftParticipant // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateOutcomeStyle(); // Function WBP_Panel_TournamentMatchSidePanelHeader.WBP_Panel_TournamentMatchSidePanelHeader_C.UpdateOutcomeStyle // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateParticipants(); // Function WBP_Panel_TournamentMatchSidePanelHeader.WBP_Panel_TournamentMatchSidePanelHeader_C.UpdateParticipants // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void RefreshWidget(); // Function WBP_Panel_TournamentMatchSidePanelHeader.WBP_Panel_TournamentMatchSidePanelHeader_C.RefreshWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetParticipants(struct UMatchupParticipantModel* InLeftParticipant, struct UMatchupParticipantModel* InRightParticipant, int32_t BestOfN, bool IsHybridBONBracket); // Function WBP_Panel_TournamentMatchSidePanelHeader.WBP_Panel_TournamentMatchSidePanelHeader_C.SetParticipants // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_TournamentMatchSidePanelHeader.WBP_Panel_TournamentMatchSidePanelHeader_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Panel_TournamentMatchSidePanelHeader(int32_t EntryPoint); // Function WBP_Panel_TournamentMatchSidePanelHeader.WBP_Panel_TournamentMatchSidePanelHeader_C.ExecuteUbergraph_WBP_Panel_TournamentMatchSidePanelHeader // (Final|UbergraphFunction) // @ game+0x1af5410
};

