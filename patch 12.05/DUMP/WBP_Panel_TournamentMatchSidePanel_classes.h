// WidgetBlueprintGeneratedClass WBP_Panel_TournamentMatchSidePanel.WBP_Panel_TournamentMatchSidePanel_C
// Size: 0x429 (Inherited: 0x3e0)
struct UWBP_Panel_TournamentMatchSidePanel_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UImage* IMG_BG_Matches; // 0x3e8(0x08)
	struct UAresCommonText* TXT_Bye; // 0x3f0(0x08)
	struct UVerticalBox* VB_GamesContainer; // 0x3f8(0x08)
	struct UWBP_Panel_TournamentMatchSidePanelHeader_C* WBP_Panel_TournamentGameDetailsHeader; // 0x400(0x08)
	struct UWidgetSwitcher* WS_GamesContainer; // 0x408(0x08)
	struct UTournamentMatchupModel* Matchup; // 0x410(0x08)
	struct UMatchupParticipantModel* LeftParticipant; // 0x418(0x08)
	struct UMatchupParticipantModel* RightParticipant; // 0x420(0x08)
	bool bIsHybridOrBONBracket; // 0x428(0x01)

	void Set Is Hybrid BONBracket(bool IsHybridBONBracket); // Function WBP_Panel_TournamentMatchSidePanel.WBP_Panel_TournamentMatchSidePanel_C.Set Is Hybrid BONBracket // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void IsGameLive(int32_t GameIndex, bool& bIsLive); // Function WBP_Panel_TournamentMatchSidePanel.WBP_Panel_TournamentMatchSidePanel_C.IsGameLive // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetupGameWidgets(int32_t NumGames); // Function WBP_Panel_TournamentMatchSidePanel.WBP_Panel_TournamentMatchSidePanel_C.SetupGameWidgets // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetParticipants(struct UMatchupParticipantModel* InLeftParticipiant, struct UMatchupParticipantModel* InRightParticipant, int32_t BestOfN); // Function WBP_Panel_TournamentMatchSidePanel.WBP_Panel_TournamentMatchSidePanel_C.SetParticipants // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Refresh Widget(); // Function WBP_Panel_TournamentMatchSidePanel.WBP_Panel_TournamentMatchSidePanel_C.Refresh Widget // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetMatchup(struct UTournamentMatchupModel* Matchup); // Function WBP_Panel_TournamentMatchSidePanel.WBP_Panel_TournamentMatchSidePanel_C.SetMatchup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_TournamentMatchSidePanel.WBP_Panel_TournamentMatchSidePanel_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function WBP_Panel_TournamentMatchSidePanel.WBP_Panel_TournamentMatchSidePanel_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Panel_TournamentMatchSidePanel(int32_t EntryPoint); // Function WBP_Panel_TournamentMatchSidePanel.WBP_Panel_TournamentMatchSidePanel_C.ExecuteUbergraph_WBP_Panel_TournamentMatchSidePanel // (Final|UbergraphFunction) // @ game+0x1af5410
};

