// WidgetBlueprintGeneratedClass PremierEOG_WinLossCons.PremierEOG_WinLossCons_C
// Size: 0x3b9 (Inherited: 0x318)
struct UPremierEOG_WinLossCons_C : UPremierEOG_WinLossCons_Base_C {
	struct UWidgetAnimation* WinAnimation; // 0x318(0x08)
	struct UImage* BG; // 0x320(0x08)
	struct UImage* Image_2; // 0x328(0x08)
	struct UTextBlock* LeftTeamName; // 0x330(0x08)
	struct UTextBlock* RightTeamName; // 0x338(0x08)
	struct UTournamentsTeamCustomization_C* TeamCustomization; // 0x340(0x08)
	struct UTextBlock* TeamName; // 0x348(0x08)
	struct UTextBlock* TeamTag; // 0x350(0x08)
	struct UWidgetSwitcher* TournamentWLCSwitcher; // 0x358(0x08)
	struct UTextBlock* WinnerText; // 0x360(0x08)
	struct UTextBlock* WinnerText_2; // 0x368(0x08)
	struct UTextBlock* WinnerText_3; // 0x370(0x08)
	struct UTextBlock* WinnerText_4; // 0x378(0x08)
	struct UTextBlock* WinnerText_5; // 0x380(0x08)
	struct UTextBlock* WinnerText_6; // 0x388(0x08)
	struct UTextBlock* WinnerText_7; // 0x390(0x08)
	struct UTextBlock* WinnerText_8; // 0x398(0x08)
	struct UTextBlock* WinnerText_9; // 0x3a0(0x08)
	struct UTextBlock* WinnerText_10; // 0x3a8(0x08)
	struct UTextBlock* WinnerText_11; // 0x3b0(0x08)
	enum class EMatchupNextSteps MatchupNextSteps; // 0x3b8(0x01)

	void TriggerCeremony(); // Function PremierEOG_WinLossCons.PremierEOG_WinLossCons_C.TriggerCeremony // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitData(enum class EMatchupNextSteps NextSteps); // Function PremierEOG_WinLossCons.PremierEOG_WinLossCons_C.InitData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

