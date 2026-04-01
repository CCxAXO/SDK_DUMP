// WidgetBlueprintGeneratedClass WBP_Panel_TournamentChampion.WBP_Panel_TournamentChampion_C
// Size: 0x450 (Inherited: 0x3e0)
struct UWBP_Panel_TournamentChampion_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UTextBlock* DeterminedWinnerTitle; // 0x3e8(0x08)
	struct UImage* I_ChampionRing_2; // 0x3f0(0x08)
	struct UImage* I_ChampionRing_3; // 0x3f8(0x08)
	struct UImage* I_Logo; // 0x400(0x08)
	struct UImage* I_shadow; // 0x408(0x08)
	struct UOverlay* O_Championslot; // 0x410(0x08)
	struct UOverlay* O_ChampionSlotEmpty; // 0x418(0x08)
	struct UTextBlock* PendingWinnerTitle; // 0x420(0x08)
	struct UTextBlock* TeamName; // 0x428(0x08)
	struct UTextBlock* TeamTag; // 0x430(0x08)
	struct UTournamentsTeamCustomization_C* TournamentsTeamCustomization; // 0x438(0x08)
	struct UWidgetSwitcher* WS_State; // 0x440(0x08)
	struct UTournamentMatchupModel* Matchup; // 0x448(0x08)

	void RefreshWidget(); // Function WBP_Panel_TournamentChampion.WBP_Panel_TournamentChampion_C.RefreshWidget // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitWithMatchup(struct UTournamentMatchupModel* InMatchup); // Function WBP_Panel_TournamentChampion.WBP_Panel_TournamentChampion_C.InitWithMatchup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetTeam(struct UMatchupParticipantModel* InParticipant); // Function WBP_Panel_TournamentChampion.WBP_Panel_TournamentChampion_C.SetTeam // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function WBP_Panel_TournamentChampion.WBP_Panel_TournamentChampion_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Panel_TournamentChampion(int32_t EntryPoint); // Function WBP_Panel_TournamentChampion.WBP_Panel_TournamentChampion_C.ExecuteUbergraph_WBP_Panel_TournamentChampion // (Final|UbergraphFunction) // @ game+0x1af5410
};

