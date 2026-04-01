// WidgetBlueprintGeneratedClass TournamentsTeamTab.TournamentsTeamTab_C
// Size: 0x350 (Inherited: 0x330)
struct UTournamentsTeamTab_C : UTournamentsScreenV1 {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x330(0x08)
	struct UTournamentsTeamInfoDisplay_C* TournamentsTeamInfoDisplay; // 0x338(0x08)
	struct UTournamentsTeamRosterInfoDisplay_C* TournamentsTeamRosterInfoDisplay; // 0x340(0x08)
	struct UPremierRosterViewController* Premier Roster View Controller; // 0x348(0x08)

	void Construct(); // Function TournamentsTeamTab.TournamentsTeamTab_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void On Rosters Updated(); // Function TournamentsTeamTab.TournamentsTeamTab_C.On Rosters Updated // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_TournamentsTeamTab(int32_t EntryPoint); // Function TournamentsTeamTab.TournamentsTeamTab_C.ExecuteUbergraph_TournamentsTeamTab // (Final|UbergraphFunction) // @ game+0x1b42740
};

