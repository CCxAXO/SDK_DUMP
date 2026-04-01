// WidgetBlueprintGeneratedClass TournamentsBracketMatchupPairing.TournamentsBracketMatchupPairing_C
// Size: 0x375 (Inherited: 0x318)
struct UTournamentsBracketMatchupPairing_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UTournamentsMatchup_C* Matchup0_2; // 0x320(0x08)
	struct UTournamentsMatchup_C* Matchup0_3; // 0x328(0x08)
	struct UTournamentsMatchup_C* Matchup_Finals; // 0x330(0x08)
	struct UTournamentsBracketChampion_C* TournamentsBracketChampion; // 0x338(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_1; // 0x340(0x08)
	bool IsFinals; // 0x348(0x01)
	char pad_349[0x7]; // 0x349(0x07)
	double SpacingMultiplier; // 0x350(0x08)
	int32_t RoundNumber; // 0x358(0x04)
	char pad_35C[0x4]; // 0x35c(0x04)
	double PaddingBase; // 0x360(0x08)
	double PaddingInterval; // 0x368(0x08)
	int32_t NumberOfRounds; // 0x370(0x04)
	bool IsUpperBracket; // 0x374(0x01)

	void GetMatchups(struct TArray<struct UTournamentsMatchup_C*>& Matchups); // Function TournamentsBracketMatchupPairing.TournamentsBracketMatchupPairing_C.GetMatchups // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Init(bool IsFinals, int32_t RoundNumber, int32_t TotalRounds, bool IsUpperBracket); // Function TournamentsBracketMatchupPairing.TournamentsBracketMatchupPairing_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function TournamentsBracketMatchupPairing.TournamentsBracketMatchupPairing_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function TournamentsBracketMatchupPairing.TournamentsBracketMatchupPairing_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnFinalsWinnerDetermined(struct UMatchupParticipantModel* Winner); // Function TournamentsBracketMatchupPairing.TournamentsBracketMatchupPairing_C.OnFinalsWinnerDetermined // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_TournamentsBracketMatchupPairing(int32_t EntryPoint); // Function TournamentsBracketMatchupPairing.TournamentsBracketMatchupPairing_C.ExecuteUbergraph_TournamentsBracketMatchupPairing // (Final|UbergraphFunction) // @ game+0x1b42740
};

