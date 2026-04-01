// WidgetBlueprintGeneratedClass PremierSeasonDropdown.PremierSeasonDropdown_C
// Size: 0x3f8 (Inherited: 0x318)
struct UPremierSeasonDropdown_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UAresComboBox* SeasonComboBox; // 0x320(0x08)
	struct FString FirstOption; // 0x328(0x10)
	struct FMulticastInlineDelegate OnSeasonSelectionChanged; // 0x338(0x10)
	struct TMap<struct FString, struct UPremierSeasonModelOld*> OptionToSeasonMap; // 0x348(0x50)
	struct FMulticastInlineDelegate OnGenerateButtonContent; // 0x398(0x10)
	struct TMap<struct FString, struct FText> OptionToNameMap; // 0x3a8(0x50)

	struct UWidget* OnGenerateWidget_1(struct FString Item); // Function PremierSeasonDropdown.PremierSeasonDropdown_C.OnGenerateWidget_1 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SelectOption(struct FString SeasonID); // Function PremierSeasonDropdown.PremierSeasonDropdown_C.SelectOption // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void AddOption(struct UPremierSeasonModelOld* SeasonModel); // Function PremierSeasonDropdown.PremierSeasonDropdown_C.AddOption // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	struct UWidget* OnGenerateButtonContentWidget_1(struct FString Item); // Function PremierSeasonDropdown.PremierSeasonDropdown_C.OnGenerateButtonContentWidget_1 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateSeasonDropdown(bool bInitializing); // Function PremierSeasonDropdown.PremierSeasonDropdown_C.UpdateSeasonDropdown // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__BPW_UI_DropDown_UpcomingTournaments_AresComboBox_1365_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(struct FString SelectedItem, enum class ESelectInfo SelectionType); // Function PremierSeasonDropdown.PremierSeasonDropdown_C.BndEvt__BPW_UI_DropDown_UpcomingTournaments_AresComboBox_1365_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void Init(); // Function PremierSeasonDropdown.PremierSeasonDropdown_C.Init // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SelectSeason(struct FGuid SeasonID); // Function PremierSeasonDropdown.PremierSeasonDropdown_C.SelectSeason // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_PremierSeasonDropdown(int32_t EntryPoint); // Function PremierSeasonDropdown.PremierSeasonDropdown_C.ExecuteUbergraph_PremierSeasonDropdown // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
	void OnGenerateButtonContent__DelegateSignature(); // Function PremierSeasonDropdown.PremierSeasonDropdown_C.OnGenerateButtonContent__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnSeasonSelectionChanged__DelegateSignature(struct UPremierSeasonModelOld* SeasonModel); // Function PremierSeasonDropdown.PremierSeasonDropdown_C.OnSeasonSelectionChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

