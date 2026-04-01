// WidgetBlueprintGeneratedClass PremierDivisionDropdown.PremierDivisionDropdown_C
// Size: 0x3a1 (Inherited: 0x318)
struct UPremierDivisionDropdown_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UAresComboBox* DivisionComboBox; // 0x320(0x08)
	struct FString FirstOption; // 0x328(0x10)
	struct UPremierSeasonModelOld* Premier Season Model; // 0x338(0x08)
	struct TMap<struct FString, struct FPremierDivisionData> OptionToDivisionMap; // 0x340(0x50)
	struct FMulticastInlineDelegate OnDivisionSelectionChanged; // 0x390(0x10)
	bool bIsGroup; // 0x3a0(0x01)

	struct UWidget* On_DivisionComboBox_GenerateWidget_1(struct FString Item); // Function PremierDivisionDropdown.PremierDivisionDropdown_C.On_DivisionComboBox_GenerateWidget_1 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetStringFromDivisionNumber(int32_t DivisionNumber, struct FString& DivisionName); // Function PremierDivisionDropdown.PremierDivisionDropdown_C.GetStringFromDivisionNumber // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void GetTextFromDivisionGroup(enum class EPremierDivisionGroup DivisionGroup, struct FText& DivisionName); // Function PremierDivisionDropdown.PremierDivisionDropdown_C.GetTextFromDivisionGroup // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	struct UWidget* OnGenerateButtonContentWidget_1(struct FString Item); // Function PremierDivisionDropdown.PremierDivisionDropdown_C.OnGenerateButtonContentWidget_1 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void AddDivisionGroupOption(struct FPremierDivisionData DivisionData); // Function PremierDivisionDropdown.PremierDivisionDropdown_C.AddDivisionGroupOption // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void AddDivisionOption(struct FPremierDivisionData Division); // Function PremierDivisionDropdown.PremierDivisionDropdown_C.AddDivisionOption // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void AddOption(struct FPremierDivisionData DivisionData); // Function PremierDivisionDropdown.PremierDivisionDropdown_C.AddOption // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SelectDefaultSuperzoneDivision(); // Function PremierDivisionDropdown.PremierDivisionDropdown_C.SelectDefaultSuperzoneDivision // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SelectDefaultNonSuperzoneDivision(); // Function PremierDivisionDropdown.PremierDivisionDropdown_C.SelectDefaultNonSuperzoneDivision // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PremierEvents_DivisionFilterDropdown_AutoGenFunc(struct UObject* Left, struct UObject* Right, bool& bIsLeftLessThanRight); // Function PremierDivisionDropdown.PremierDivisionDropdown_C.PremierEvents_DivisionFilterDropdown_AutoGenFunc // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateDivisionsDropdown(); // Function PremierDivisionDropdown.PremierDivisionDropdown_C.UpdateDivisionsDropdown // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__BPW_UI_DropDown_UpcomingTournaments_AresComboBox_1365_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(struct FString SelectedItem, enum class ESelectInfo SelectionType); // Function PremierDivisionDropdown.PremierDivisionDropdown_C.BndEvt__BPW_UI_DropDown_UpcomingTournaments_AresComboBox_1365_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void InitWithSeason(struct UPremierSeasonModelOld* PremierSeasonModel, bool bIsGroup); // Function PremierDivisionDropdown.PremierDivisionDropdown_C.InitWithSeason // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SelectDivisionGroup(enum class EPremierDivisionGroup DivisionGroup); // Function PremierDivisionDropdown.PremierDivisionDropdown_C.SelectDivisionGroup // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function PremierDivisionDropdown.PremierDivisionDropdown_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void SelectDivision(int32_t DivisionNumber); // Function PremierDivisionDropdown.PremierDivisionDropdown_C.SelectDivision // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_PremierDivisionDropdown(int32_t EntryPoint); // Function PremierDivisionDropdown.PremierDivisionDropdown_C.ExecuteUbergraph_PremierDivisionDropdown // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
	void OnDivisionSelectionChanged__DelegateSignature(struct FPremierDivisionData DivisionData); // Function PremierDivisionDropdown.PremierDivisionDropdown_C.OnDivisionSelectionChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

