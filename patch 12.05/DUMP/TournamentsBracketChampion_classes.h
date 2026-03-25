// WidgetBlueprintGeneratedClass TournamentsBracketChampion.TournamentsBracketChampion_C
// Size: 0x3a0 (Inherited: 0x318)
struct UTournamentsBracketChampion_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UTextBlock* DeterminedWinnerTitle; // 0x320(0x08)
	struct UImage* I_ChampionRing_2; // 0x328(0x08)
	struct UImage* I_ChampionRing_3; // 0x330(0x08)
	struct UImage* I_Logo; // 0x338(0x08)
	struct UImage* I_shadow; // 0x340(0x08)
	struct UImage* IMG_bracketline; // 0x348(0x08)
	struct UTextBlock* PendingWinnerTitle; // 0x350(0x08)
	struct UTextBlock* TeamName; // 0x358(0x08)
	struct UTextBlock* TeamTag; // 0x360(0x08)
	struct UTournamentsTeamCustomization_C* TournamentsTeamCustomization; // 0x368(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_1; // 0x370(0x08)
	struct UMatchupParticipantModel* ChampionParticipant; // 0x378(0x08)
	bool IsUpperBracket; // 0x380(0x01)
	bool WInnerDetermined; // 0x381(0x01)
	char pad_382[0x6]; // 0x382(0x06)
	struct FText WinnerTitle; // 0x388(0x18)

	void SetBracketChampionVisibility(); // Function TournamentsBracketChampion.TournamentsBracketChampion_C.SetBracketChampionVisibility // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Init(struct UMatchupParticipantModel* ChampionParticipant, bool IsUpperBracket, bool WInnerDetermined); // Function TournamentsBracketChampion.TournamentsBracketChampion_C.Init // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetChampionTeamInformation(); // Function TournamentsBracketChampion.TournamentsBracketChampion_C.SetChampionTeamInformation // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function TournamentsBracketChampion.TournamentsBracketChampion_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_TournamentsBracketChampion(int32_t EntryPoint); // Function TournamentsBracketChampion.TournamentsBracketChampion_C.ExecuteUbergraph_TournamentsBracketChampion // (Final|UbergraphFunction) // @ game+0x1af5410
};

