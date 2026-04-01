// WidgetBlueprintGeneratedClass Esports_Bracket_Section_Selector.Esports_Bracket_Section_Selector_C
// Size: 0x368 (Inherited: 0x318)
struct UEsports_Bracket_Section_Selector_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UHorizontalBox* HBoxButtons; // 0x320(0x08)
	struct UHorizontalBox* HorizonalBox; // 0x328(0x08)
	struct UAresTextBlock* Text_StageName; // 0x330(0x08)
	struct FMulticastInlineDelegate OnSectionChanged; // 0x338(0x10)
	struct FString Name; // 0x348(0x10)
	struct FVector2D ButtonSpacing; // 0x358(0x10)

	void AddButton(struct FString sectionid, struct FString SectionName, enum class E_BracketGroupButtonStates ButtonState, struct TSoftObjectPtr<UWBP_Button_BracketGroup_C>& AddedButton); // Function Esports_Bracket_Section_Selector.Esports_Bracket_Section_Selector_C.AddButton // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function Esports_Bracket_Section_Selector.Esports_Bracket_Section_Selector_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function Esports_Bracket_Section_Selector.Esports_Bracket_Section_Selector_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void SectionSelectionMade(struct FString sectionid, struct TSoftObjectPtr<UWBP_Button_BracketGroup_C> PressedButton); // Function Esports_Bracket_Section_Selector.Esports_Bracket_Section_Selector_C.SectionSelectionMade // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_Esports_Bracket_Section_Selector(int32_t EntryPoint); // Function Esports_Bracket_Section_Selector.Esports_Bracket_Section_Selector_C.ExecuteUbergraph_Esports_Bracket_Section_Selector // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
	void OnSectionChanged__DelegateSignature(struct FString sectionid, struct TSoftObjectPtr<UWBP_Button_BracketGroup_C> PressedButton); // Function Esports_Bracket_Section_Selector.Esports_Bracket_Section_Selector_C.OnSectionChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

