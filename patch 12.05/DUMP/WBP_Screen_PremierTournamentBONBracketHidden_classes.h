// WidgetBlueprintGeneratedClass WBP_Screen_PremierTournamentBONBracketHidden.WBP_Screen_PremierTournamentBONBracketHidden_C
// Size: 0x4bc (Inherited: 0x3e0)
struct UWBP_Screen_PremierTournamentBONBracketHidden_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UWBP_Panel_TournamentBracketBuilder_C* BracketBuilder; // 0x3e8(0x08)
	struct UWidgetSwitcher* BracketLoadingSwitcher; // 0x3f0(0x08)
	struct UOverlay* BracketOverlay; // 0x3f8(0x08)
	struct UImage* I_Borderline; // 0x400(0x08)
	struct ULoadingThrobberSmall_C* LoadingThrobberSmall; // 0x408(0x08)
	struct USizeBox* SB_TournamentLogoWrap; // 0x410(0x08)
	struct UWBP_LiveTag_C* WBP_LiveTag; // 0x418(0x08)
	struct UWBP_Panel_TournamentHeader_C* WBP_Panel_TournamentHeader; // 0x420(0x08)
	struct UWBP_Panel_TournamentMatchSidePanel_C* WBP_Panel_TournamentMatchSidePanel; // 0x428(0x08)
	bool IsBracketCreated; // 0x430(0x01)
	char pad_431[0x7]; // 0x431(0x07)
	struct TArray<struct UWBP_Panel_TournamentBONMatchup_C*> BracketWidgets; // 0x438(0x10)
	struct UTournamentViewController* Tournament View Controller; // 0x448(0x08)
	struct UWBP_Panel_TournamentBONMatchup_C* CurrentlySelectedMatchupWidget; // 0x450(0x08)
	struct UPremierBracketBuilderExtensions* BracketBuilderExtension; // 0x458(0x08)
	struct UWBP_Panel_TournamentChampion_C* ChampionWidget; // 0x460(0x08)
	struct TMap<int32_t, struct UWBP_Panel_TournamentBONMatchup_C*> MyTeamsMatchupWidgetsByRound; // 0x468(0x50)
	int32_t MyTeamsLatestRound; // 0x4b8(0x04)

	void CreateBracketBuilderExtension(); // Function WBP_Screen_PremierTournamentBONBracketHidden.WBP_Screen_PremierTournamentBONBracketHidden_C.CreateBracketBuilderExtension // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetStatus(enum class ETournamentStatus InStatus); // Function WBP_Screen_PremierTournamentBONBracketHidden.WBP_Screen_PremierTournamentBONBracketHidden_C.SetStatus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetupChampionWidget(struct UUserWidget* Widget, struct FString MatchupID); // Function WBP_Screen_PremierTournamentBONBracketHidden.WBP_Screen_PremierTournamentBONBracketHidden_C.SetupChampionWidget // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetupMatchupWidget(struct UUserWidget* Widget, struct FString MatchupID); // Function WBP_Screen_PremierTournamentBONBracketHidden.WBP_Screen_PremierTournamentBONBracketHidden_C.SetupMatchupWidget // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetupBracketBuilder(); // Function WBP_Screen_PremierTournamentBONBracketHidden.WBP_Screen_PremierTournamentBONBracketHidden_C.SetupBracketBuilder // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateSelectedMatchup(struct UWBP_Panel_TournamentBONMatchup_C* InMatchupWidget, struct FString MatchupID); // Function WBP_Screen_PremierTournamentBONBracketHidden.WBP_Screen_PremierTournamentBONBracketHidden_C.UpdateSelectedMatchup // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitWithViewControllerImpl(struct UTournamentViewController* TournamentViewController); // Function WBP_Screen_PremierTournamentBONBracketHidden.WBP_Screen_PremierTournamentBONBracketHidden_C.InitWithViewControllerImpl // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void RefreshWidget(); // Function WBP_Screen_PremierTournamentBONBracketHidden.WBP_Screen_PremierTournamentBONBracketHidden_C.RefreshWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateLoadingSwitcher(bool IsLoaded); // Function WBP_Screen_PremierTournamentBONBracketHidden.WBP_Screen_PremierTournamentBONBracketHidden_C.UpdateLoadingSwitcher // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function WBP_Screen_PremierTournamentBONBracketHidden.WBP_Screen_PremierTournamentBONBracketHidden_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void InitWithViewController(struct UTournamentViewController* ViewController); // Function WBP_Screen_PremierTournamentBONBracketHidden.WBP_Screen_PremierTournamentBONBracketHidden_C.InitWithViewController // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnInitialized(); // Function WBP_Screen_PremierTournamentBONBracketHidden.WBP_Screen_PremierTournamentBONBracketHidden_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Destruct(); // Function WBP_Screen_PremierTournamentBONBracketHidden.WBP_Screen_PremierTournamentBONBracketHidden_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Screen_PremierTournamentBONBracketHidden(int32_t EntryPoint); // Function WBP_Screen_PremierTournamentBONBracketHidden.WBP_Screen_PremierTournamentBONBracketHidden_C.ExecuteUbergraph_WBP_Screen_PremierTournamentBONBracketHidden // (Final|UbergraphFunction) // @ game+0x1af5410
};

