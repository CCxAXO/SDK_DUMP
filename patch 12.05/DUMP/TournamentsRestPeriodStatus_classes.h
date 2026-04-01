// WidgetBlueprintGeneratedClass TournamentsRestPeriodStatus.TournamentsRestPeriodStatus_C
// Size: 0x370 (Inherited: 0x330)
struct UTournamentsRestPeriodStatus_C : UTournamentsScreenV1 {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x330(0x08)
	struct UWidgetSwitcher* RestPeriodWidgetSwitcher; // 0x338(0x08)
	struct UTournamentsRestPeriodTimer_C* TournamentsRestPeriodTimer; // 0x340(0x08)
	struct UPartyModel* Party Model; // 0x348(0x08)
	struct FMulticastInlineDelegate Rest Period Update; // 0x350(0x10)
	struct FMulticastInlineDelegate Rest Period Waiting For Next Matchup; // 0x360(0x10)

	void Bind Events(bool Bind); // Function TournamentsRestPeriodStatus.TournamentsRestPeriodStatus_C.Bind Events // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void devTestPrintTimes(struct FDateTime Scheduled Start Time); // Function TournamentsRestPeriodStatus.TournamentsRestPeriodStatus_C.devTestPrintTimes // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Handle New Tournament Matchup Model(struct UTournamentMatchupModel* Latest Matchup Model); // Function TournamentsRestPeriodStatus.TournamentsRestPeriodStatus_C.Handle New Tournament Matchup Model // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Handle Rest Period(struct FDateTime Stage Start Time); // Function TournamentsRestPeriodStatus.TournamentsRestPeriodStatus_C.Handle Rest Period // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void isInTournament(bool& isInTournament); // Function TournamentsRestPeriodStatus.TournamentsRestPeriodStatus_C.isInTournament // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void Init(); // Function TournamentsRestPeriodStatus.TournamentsRestPeriodStatus_C.Init // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function TournamentsRestPeriodStatus.TournamentsRestPeriodStatus_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function TournamentsRestPeriodStatus.TournamentsRestPeriodStatus_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void On Initialized(); // Function TournamentsRestPeriodStatus.TournamentsRestPeriodStatus_C.On Initialized // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnTournamentsModelUpdated(); // Function TournamentsRestPeriodStatus.TournamentsRestPeriodStatus_C.OnTournamentsModelUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void On Rest Period Over(); // Function TournamentsRestPeriodStatus.TournamentsRestPeriodStatus_C.On Rest Period Over // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void On Scheduled Match Start Time Updated(struct FDateTime& ScheduledStartDateTime); // Function TournamentsRestPeriodStatus.TournamentsRestPeriodStatus_C.On Scheduled Match Start Time Updated // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_TournamentsRestPeriodStatus(int32_t EntryPoint); // Function TournamentsRestPeriodStatus.TournamentsRestPeriodStatus_C.ExecuteUbergraph_TournamentsRestPeriodStatus // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
	void Rest Period Waiting For Next Matchup__DelegateSignature(); // Function TournamentsRestPeriodStatus.TournamentsRestPeriodStatus_C.Rest Period Waiting For Next Matchup__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Rest Period Update__DelegateSignature(); // Function TournamentsRestPeriodStatus.TournamentsRestPeriodStatus_C.Rest Period Update__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

