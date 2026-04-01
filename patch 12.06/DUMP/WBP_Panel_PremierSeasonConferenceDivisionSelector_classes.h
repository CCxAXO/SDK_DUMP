// WidgetBlueprintGeneratedClass WBP_Panel_PremierSeasonConferenceDivisionSelector.WBP_Panel_PremierSeasonConferenceDivisionSelector_C
// Size: 0x340 (Inherited: 0x318)
struct UWBP_Panel_PremierSeasonConferenceDivisionSelector_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UPremierSeasonConferenceDivisionSelectorViewModel* PremierSeasonConferenceDivisionSelectorViewModel; // 0x320(0x08)
	struct UWBP_Panel_SingleSelectDropdown_C* PremierConferenceDropdown; // 0x328(0x08)
	struct UWBP_Panel_SingleSelectDropdown_C* PremierDivisionDropdown; // 0x330(0x08)
	struct UWBP_Panel_SingleSelectDropdown_C* PremierSeasonDropdown; // 0x338(0x08)

	void SetPremierSeasonConferenceDivisionSelectorViewModel(struct UPremierSeasonConferenceDivisionSelectorViewModel* ViewModel); // Function WBP_Panel_PremierSeasonConferenceDivisionSelector.WBP_Panel_PremierSeasonConferenceDivisionSelector_C.SetPremierSeasonConferenceDivisionSelectorViewModel // (Final|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void DivisionSelectorChanged(struct USingleSelectListOption* SelectedListOption); // Function WBP_Panel_PremierSeasonConferenceDivisionSelector.WBP_Panel_PremierSeasonConferenceDivisionSelector_C.DivisionSelectorChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ConferenceSelectorChanged(struct USingleSelectListOption* SelectedListOption); // Function WBP_Panel_PremierSeasonConferenceDivisionSelector.WBP_Panel_PremierSeasonConferenceDivisionSelector_C.ConferenceSelectorChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SeasonSelectorChanged(struct USingleSelectListOption* SelectedListOption); // Function WBP_Panel_PremierSeasonConferenceDivisionSelector.WBP_Panel_PremierSeasonConferenceDivisionSelector_C.SeasonSelectorChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Handle Valid Data Changed(bool Valid Data Changed); // Function WBP_Panel_PremierSeasonConferenceDivisionSelector.WBP_Panel_PremierSeasonConferenceDivisionSelector_C.Handle Valid Data Changed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Init(); // Function WBP_Panel_PremierSeasonConferenceDivisionSelector.WBP_Panel_PremierSeasonConferenceDivisionSelector_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Init Selectors(); // Function WBP_Panel_PremierSeasonConferenceDivisionSelector.WBP_Panel_PremierSeasonConferenceDivisionSelector_C.Init Selectors // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function WBP_Panel_PremierSeasonConferenceDivisionSelector.WBP_Panel_PremierSeasonConferenceDivisionSelector_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Panel_PremierSeasonConferenceDivisionSelector(int32_t EntryPoint); // Function WBP_Panel_PremierSeasonConferenceDivisionSelector.WBP_Panel_PremierSeasonConferenceDivisionSelector_C.ExecuteUbergraph_WBP_Panel_PremierSeasonConferenceDivisionSelector // (Final|UbergraphFunction) // @ game+0x1b42740
};

