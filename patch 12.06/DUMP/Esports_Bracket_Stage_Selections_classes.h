// WidgetBlueprintGeneratedClass Esports_Bracket_Stage_Selections.Esports_Bracket_Stage_Selections_C
// Size: 0x448 (Inherited: 0x318)
struct UEsports_Bracket_Stage_Selections_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UHorizontalBox* HBoxContainer; // 0x320(0x08)
	struct FTournamentStandingDTO TournamentStandings; // 0x328(0xd0)
	struct FMulticastInlineDelegate OnSectionChanged; // 0x3f8(0x10)
	struct TSoftObjectPtr<UWBP_Button_BracketGroup_C> SelectedButton; // 0x408(0x30)
	struct FVector2D ButtonSpacing; // 0x438(0x10)

	void BuildSectionButtonsV2(struct TArray<struct FTournamentStageV2>& TournamentStages); // Function Esports_Bracket_Stage_Selections.Esports_Bracket_Stage_Selections_C.BuildSectionButtonsV2 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BuildSectionButtons(struct TArray<struct FTournamentStage>& TournamentStages); // Function Esports_Bracket_Stage_Selections.Esports_Bracket_Stage_Selections_C.BuildSectionButtons // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function Esports_Bracket_Stage_Selections.Esports_Bracket_Stage_Selections_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function Esports_Bracket_Stage_Selections.Esports_Bracket_Stage_Selections_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void SectionSelectionMade(struct FString sectionid, struct TSoftObjectPtr<UWBP_Button_BracketGroup_C> PressedButton); // Function Esports_Bracket_Stage_Selections.Esports_Bracket_Stage_Selections_C.SectionSelectionMade // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_Esports_Bracket_Stage_Selections(int32_t EntryPoint); // Function Esports_Bracket_Stage_Selections.Esports_Bracket_Stage_Selections_C.ExecuteUbergraph_Esports_Bracket_Stage_Selections // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
	void OnSectionChanged__DelegateSignature(struct FString sectionid); // Function Esports_Bracket_Stage_Selections.Esports_Bracket_Stage_Selections_C.OnSectionChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

