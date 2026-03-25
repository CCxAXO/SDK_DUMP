// WidgetBlueprintGeneratedClass WBP_Panel_PickemBracket.WBP_Panel_PickemBracket_C
// Size: 0x440 (Inherited: 0x3e0)
struct UWBP_Panel_PickemBracket_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UAresCommonText* CT_Error; // 0x3e8(0x08)
	struct UEsports_Bracket_Builder_C* Esports_Bracket_Builder; // 0x3f0(0x08)
	struct UEsports_Loading_C* Esports_Loading; // 0x3f8(0x08)
	struct UWidgetSwitcher* WS_stateSwitcher; // 0x400(0x08)
	struct UEsportsBracketScreenViewModel* BracketScreenViewModel; // 0x408(0x08)
	enum class E2024VCTEvent event; // 0x410(0x01)
	char pad_411[0x7]; // 0x411(0x07)
	struct FString sectionid; // 0x418(0x10)
	struct UBracketBuilderAdvancements2024* BracketAdvance2024; // 0x428(0x08)
	bool bIsGroups; // 0x430(0x01)
	bool bShowScore; // 0x431(0x01)
	char pad_432[0x6]; // 0x432(0x06)
	struct UPickemBracketScreenViewModelV2* BracketScreenViewModelV2; // 0x438(0x08)

	void ApplyGameChangersChampionshipBracketSettings(); // Function WBP_Panel_PickemBracket.WBP_Panel_PickemBracket_C.ApplyGameChangersChampionshipBracketSettings // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnBracketScreenError(); // Function WBP_Panel_PickemBracket.WBP_Panel_PickemBracket_C.OnBracketScreenError // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnHasValidDataChanged(bool bHasValidData); // Function WBP_Panel_PickemBracket.WBP_Panel_PickemBracket_C.OnHasValidDataChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ApplyBracketErrorState(); // Function WBP_Panel_PickemBracket.WBP_Panel_PickemBracket_C.ApplyBracketErrorState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ApplyBracketLoadingState(); // Function WBP_Panel_PickemBracket.WBP_Panel_PickemBracket_C.ApplyBracketLoadingState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ApplyBracketState(); // Function WBP_Panel_PickemBracket.WBP_Panel_PickemBracket_C.ApplyBracketState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnSectionBracketViewModelChanged(struct UAresViewModelBase* SectionViewModel); // Function WBP_Panel_PickemBracket.WBP_Panel_PickemBracket_C.OnSectionBracketViewModelChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitWithEventAndSectionID(enum class E2024VCTEvent InEvent, struct FString InSectionID); // Function WBP_Panel_PickemBracket.WBP_Panel_PickemBracket_C.InitWithEventAndSectionID // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetupSwissSectionBackgroundWidget(struct UUserWidget* Widget, struct FBracketWinLoss& SectionWinLoss); // Function WBP_Panel_PickemBracket.WBP_Panel_PickemBracket_C.SetupSwissSectionBackgroundWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetupSwissAdvancementWidget(struct UUserWidget* Widget, struct FString AdvancesToStageSlug, bool IsAdvancing); // Function WBP_Panel_PickemBracket.WBP_Panel_PickemBracket_C.SetupSwissAdvancementWidget // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void CreateAdvancements(); // Function WBP_Panel_PickemBracket.WBP_Panel_PickemBracket_C.CreateAdvancements // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetupStageAdvancementWidget(struct UUserWidget* Widget, struct FString MatchID, struct FString AdvancesToStageSlug); // Function WBP_Panel_PickemBracket.WBP_Panel_PickemBracket_C.SetupStageAdvancementWidget // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitWithViewModel(struct UEsportsBracketScreenViewModel* InBracketScreenViewModel, struct FString InSectionID); // Function WBP_Panel_PickemBracket.WBP_Panel_PickemBracket_C.InitWithViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnMatchupsConnected(); // Function WBP_Panel_PickemBracket.WBP_Panel_PickemBracket_C.OnMatchupsConnected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindToUnbindFromViewModel(bool Bind); // Function WBP_Panel_PickemBracket.WBP_Panel_PickemBracket_C.BindToUnbindFromViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ClearCurrentMatchupSelections(); // Function WBP_Panel_PickemBracket.WBP_Panel_PickemBracket_C.ClearCurrentMatchupSelections // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetupMatchupWidget(struct UUserWidget* Widget, struct FString MatchupID); // Function WBP_Panel_PickemBracket.WBP_Panel_PickemBracket_C.SetupMatchupWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void K2_BindToViewModel(); // Function WBP_Panel_PickemBracket.WBP_Panel_PickemBracket_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnInitialized(); // Function WBP_Panel_PickemBracket.WBP_Panel_PickemBracket_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Destruct(); // Function WBP_Panel_PickemBracket.WBP_Panel_PickemBracket_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Panel_PickemBracket(int32_t EntryPoint); // Function WBP_Panel_PickemBracket.WBP_Panel_PickemBracket_C.ExecuteUbergraph_WBP_Panel_PickemBracket // (Final|UbergraphFunction) // @ game+0x1af5410
};

