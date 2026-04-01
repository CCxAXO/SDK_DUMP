// WidgetBlueprintGeneratedClass WBP_Panel_EsportsTeamsSection.WBP_Panel_EsportsTeamsSection_C
// Size: 0x338 (Inherited: 0x318)
struct UWBP_Panel_EsportsTeamsSection_C : UUserWidget {
	struct UAresCommonText* CT_TitleText; // 0x318(0x08)
	struct UWBP_Panel_Esports_EventTeamsWrap_C* WBP_Panel_Esports_EventTeamsWrap; // 0x320(0x08)
	struct UEsportsEventViewModel* EventViewModel; // 0x328(0x08)
	struct UEsportsTournamentViewModel* TournamentViewModel; // 0x330(0x08)

	void InitWithTournamentViewModel(struct UEsportsTournamentViewModel* InViewModel); // Function WBP_Panel_EsportsTeamsSection.WBP_Panel_EsportsTeamsSection_C.InitWithTournamentViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetText(); // Function WBP_Panel_EsportsTeamsSection.WBP_Panel_EsportsTeamsSection_C.SetText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitWithViewModel(struct UEsportsEventViewModel* InViewModel); // Function WBP_Panel_EsportsTeamsSection.WBP_Panel_EsportsTeamsSection_C.InitWithViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

