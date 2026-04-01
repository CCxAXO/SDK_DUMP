// WidgetBlueprintGeneratedClass PremierTournamentBracket.PremierTournamentBracket_C
// Size: 0x478 (Inherited: 0x3e0)
struct UPremierTournamentBracket_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UOverlay* BracketOverlay; // 0x3e8(0x08)
	struct UImage* I_Borderline; // 0x3f0(0x08)
	struct UWidgetSwitcher* LoadingSwitcher; // 0x3f8(0x08)
	struct ULoadingThrobberSmall_C* LoadingThrobberSmall; // 0x400(0x08)
	struct UGridPanel* LowerBracket; // 0x408(0x08)
	struct UPremierBracketToggleButton_C* PremierBracketToggleButton; // 0x410(0x08)
	struct USizeBox* SB_TournamentLogoWrap; // 0x418(0x08)
	struct UGridPanel* UpperBracket; // 0x420(0x08)
	struct UWBP_LiveTag_C* WBP_LiveTag; // 0x428(0x08)
	struct UWBP_TournamentAsset_C* WBP_TournamentAsset; // 0x430(0x08)
	struct FString Tournament; // 0x438(0x10)
	int32_t TournamentSize; // 0x448(0x04)
	bool CenterOnScreen; // 0x44c(0x01)
	bool IsBracketCreated; // 0x44d(0x01)
	char pad_44E[0x2]; // 0x44e(0x02)
	struct TArray<struct UTournamentsMatchup_C*> UpperBracketWidgets; // 0x450(0x10)
	struct TArray<struct UTournamentsMatchup_C*> LowerBracketWidgets; // 0x460(0x10)
	struct UTournamentViewController* TournamentViewController; // 0x470(0x08)

	void InitWithViewController(struct UTournamentViewController* ViewController); // Function PremierTournamentBracket.PremierTournamentBracket_C.InitWithViewController // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Determine Bracket Size(struct TMap<struct FString, struct UTournamentMatchupModel*> Matchups, int32_t& BracketSize); // Function PremierTournamentBracket.PremierTournamentBracket_C.Determine Bracket Size // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Populate Matchups(struct TMap<struct FString, struct UTournamentMatchupModel*> ModelMap, struct TArray<struct UTournamentsMatchup_C*>& WidgetArray); // Function PremierTournamentBracket.PremierTournamentBracket_C.Populate Matchups // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Update Lower Bracket(); // Function PremierTournamentBracket.PremierTournamentBracket_C.Update Lower Bracket // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Update Upper Bracket(); // Function PremierTournamentBracket.PremierTournamentBracket_C.Update Upper Bracket // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Update Tournament(); // Function PremierTournamentBracket.PremierTournamentBracket_C.Update Tournament // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Update Loading Switcher(bool IsLoaded); // Function PremierTournamentBracket.PremierTournamentBracket_C.Update Loading Switcher // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Set Grid And Logo Padding(); // Function PremierTournamentBracket.PremierTournamentBracket_C.Set Grid And Logo Padding // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Create Bracket(int32_t BracketSize, struct UGridPanel* Bracket, bool IsUpperBracket, struct TArray<struct UTournamentsMatchup_C*>& Matchups); // Function PremierTournamentBracket.PremierTournamentBracket_C.Create Bracket // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function PremierTournamentBracket.PremierTournamentBracket_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__PremierTournamentBracket_TogglePremierBracketButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(); // Function PremierTournamentBracket.PremierTournamentBracket_C.BndEvt__PremierTournamentBracket_TogglePremierBracketButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void Show Lower Bracket(); // Function PremierTournamentBracket.PremierTournamentBracket_C.Show Lower Bracket // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_PremierTournamentBracket(int32_t EntryPoint); // Function PremierTournamentBracket.PremierTournamentBracket_C.ExecuteUbergraph_PremierTournamentBracket // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

