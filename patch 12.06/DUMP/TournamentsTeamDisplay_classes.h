// WidgetBlueprintGeneratedClass TournamentsTeamDisplay.TournamentsTeamDisplay_C
// Size: 0x350 (Inherited: 0x318)
struct UTournamentsTeamDisplay_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UContextMenuAnchor_C* ContextMenuAnchor_513; // 0x320(0x08)
	struct UTextBlock* RosterName; // 0x328(0x08)
	struct UTextBlock* RosterTag; // 0x330(0x08)
	struct UTournamentsTeamCustomization_C* TournamentsTeamCustomization; // 0x338(0x08)
	struct URosterModel* Roster Model; // 0x340(0x08)
	struct UPremierRosterViewModel* Premier Roster View Model; // 0x348(0x08)

	void HandleReportTeamClicked(); // Function TournamentsTeamDisplay.TournamentsTeamDisplay_C.HandleReportTeamClicked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateWithPremierRosterModel(struct URosterModel* Roster Model, struct UPremierRosterViewModel* Premier Roster View Model); // Function TournamentsTeamDisplay.TournamentsTeamDisplay_C.UpdateWithPremierRosterModel // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateWithTournamentRosterInfo(struct FTournamentRosterInfo TournamentRosterInfo); // Function TournamentsTeamDisplay.TournamentsTeamDisplay_C.UpdateWithTournamentRosterInfo // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__TournamentsTeamDisplay_ContextMenuAnchor_512_K2Node_ComponentBoundEvent_0_OnContextMenuCreated__DelegateSignature(struct UContextMenu_C* ContextMenu); // Function TournamentsTeamDisplay.TournamentsTeamDisplay_C.BndEvt__TournamentsTeamDisplay_ContextMenuAnchor_512_K2Node_ComponentBoundEvent_0_OnContextMenuCreated__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_TournamentsTeamDisplay(int32_t EntryPoint); // Function TournamentsTeamDisplay.TournamentsTeamDisplay_C.ExecuteUbergraph_TournamentsTeamDisplay // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

