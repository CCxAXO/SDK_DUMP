// WidgetBlueprintGeneratedClass PremierEventMatchesRemaining.PremierEventMatchesRemaining_C
// Size: 0x3d0 (Inherited: 0x318)
struct UPremierEventMatchesRemaining_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UImage* Image_80; // 0x320(0x08)
	struct UHorizontalBox* MatchesRemainingContainer; // 0x328(0x08)
	struct UTextBlock* Text_ScrimDetails_Body; // 0x330(0x08)
	struct UTextBlock* Text_ScrimDetails_Header; // 0x338(0x08)
	struct UTextBlock* Text_SeasonMatchDetails_Body; // 0x340(0x08)
	struct UTextBlock* Text_SeasonMatchDetails_Header; // 0x348(0x08)
	struct UTextBlock* Text_SeasonMatchDetails_Pros_Body; // 0x350(0x08)
	struct UTextBlock* Text_SeasonMatchDetails_Pros_Header; // 0x358(0x08)
	struct UTextBlock* Text_TournamentDetails_Body; // 0x360(0x08)
	struct UTextBlock* Text_TournamentDetails_Header; // 0x368(0x08)
	struct UTextBlock* Text_TournamentDetails_Pros_Body; // 0x370(0x08)
	struct UTextBlock* Text_TournamentDetails_Pros_Header; // 0x378(0x08)
	struct UWidgetSwitcher* WS_EventType; // 0x380(0x08)
	struct FMargin CheckBoxMargin; // 0x388(0x10)
	int32_t MatchesPlayed; // 0x398(0x04)
	int32_t MatchesAvailable; // 0x39c(0x04)
	struct FTimespan TimeRemaining; // 0x3a0(0x08)
	struct FTimerHandle TimerHandle; // 0x3a8(0x08)
	struct UPremierScheduledEventModelOld* Scheduled Event; // 0x3b0(0x08)
	struct UPremierRosterViewModel* PremierRosterViewModel; // 0x3b8(0x08)
	struct FMargin CheckBoxMargin_1; // 0x3c0(0x10)

	void SetProDisplayText(); // Function PremierEventMatchesRemaining.PremierEventMatchesRemaining_C.SetProDisplayText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateDisplay(); // Function PremierEventMatchesRemaining.PremierEventMatchesRemaining_C.UpdateDisplay // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateScheduledEvent(struct UPremierScheduledEventModelOld* ScheduledEvent); // Function PremierEventMatchesRemaining.PremierEventMatchesRemaining_C.UpdateScheduledEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetMatchesPlayed(int32_t Matches Played, int32_t Matches Available); // Function PremierEventMatchesRemaining.PremierEventMatchesRemaining_C.SetMatchesPlayed // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Init(); // Function PremierEventMatchesRemaining.PremierEventMatchesRemaining_C.Init // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function PremierEventMatchesRemaining.PremierEventMatchesRemaining_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnMatchInfoFetched(); // Function PremierEventMatchesRemaining.PremierEventMatchesRemaining_C.OnMatchInfoFetched // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnLeagueMatchesPlayedChanged(int32_t NewValue); // Function PremierEventMatchesRemaining.PremierEventMatchesRemaining_C.OnLeagueMatchesPlayedChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnTournamentsPlayedChanged(int32_t NewValue); // Function PremierEventMatchesRemaining.PremierEventMatchesRemaining_C.OnTournamentsPlayedChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetPremierRosterViewModel(struct UPremierRosterViewModel* UpdatedPremierRosterModel); // Function PremierEventMatchesRemaining.PremierEventMatchesRemaining_C.SetPremierRosterViewModel // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_PremierEventMatchesRemaining(int32_t EntryPoint); // Function PremierEventMatchesRemaining.PremierEventMatchesRemaining_C.ExecuteUbergraph_PremierEventMatchesRemaining // (Final|UbergraphFunction) // @ game+0x1af5410
};

