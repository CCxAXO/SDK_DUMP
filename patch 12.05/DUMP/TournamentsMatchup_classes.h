// WidgetBlueprintGeneratedClass TournamentsMatchup.TournamentsMatchup_C
// Size: 0x360 (Inherited: 0x318)
struct UTournamentsMatchup_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UImage* IMG_InBracket; // 0x320(0x08)
	struct UTournamentsTeamCardWithScore_C* Team0; // 0x328(0x08)
	struct UTournamentsTeamCardWithScore_C* Team1; // 0x330(0x08)
	struct UTournamentMatchupModel* Matchup; // 0x338(0x08)
	struct FMulticastInlineDelegate WInnerDetermined; // 0x340(0x10)
	struct FString MyRosterID; // 0x350(0x10)

	void SetBracketArmVis(bool ShowBracketArm); // Function TournamentsMatchup.TournamentsMatchup_C.SetBracketArmVis // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Set Data(struct UTournamentMatchupModel* Matchup, struct FString RosterID); // Function TournamentsMatchup.TournamentsMatchup_C.Set Data // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void DetermineWinner(); // Function TournamentsMatchup.TournamentsMatchup_C.DetermineWinner // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function TournamentsMatchup.TournamentsMatchup_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_TournamentsMatchup(int32_t EntryPoint); // Function TournamentsMatchup.TournamentsMatchup_C.ExecuteUbergraph_TournamentsMatchup // (Final|UbergraphFunction) // @ game+0x1af5410
	void WinnerDetermined__DelegateSignature(struct UMatchupParticipantModel* Winner); // Function TournamentsMatchup.TournamentsMatchup_C.WinnerDetermined__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

