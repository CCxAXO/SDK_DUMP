// WidgetBlueprintGeneratedClass TournamentsTeamInfoDisplay.TournamentsTeamInfoDisplay_C
// Size: 0x338 (Inherited: 0x318)
struct UTournamentsTeamInfoDisplay_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UTournamentsTeamDisplayCard_C* TournamentsTeamDisplayCard; // 0x320(0x08)
	struct UPremierRosterViewController* Premier Roster View Controller; // 0x328(0x08)
	struct URosterModel* Roster Model; // 0x330(0x08)

	void Construct(); // Function TournamentsTeamInfoDisplay.TournamentsTeamInfoDisplay_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Init(struct URosterModel* Roster Model); // Function TournamentsTeamInfoDisplay.TournamentsTeamInfoDisplay_C.Init // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_TournamentsTeamInfoDisplay(int32_t EntryPoint); // Function TournamentsTeamInfoDisplay.TournamentsTeamInfoDisplay_C.ExecuteUbergraph_TournamentsTeamInfoDisplay // (Final|UbergraphFunction) // @ game+0x1b42740
};

