// WidgetBlueprintGeneratedClass PremierConferenceDropdown.PremierConferenceDropdown_C
// Size: 0x3a8 (Inherited: 0x318)
struct UPremierConferenceDropdown_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UAresComboBox* ConferenceComboBox; // 0x320(0x08)
	struct FString FirstOption; // 0x328(0x10)
	struct TMap<struct FString, struct UPremierConferenceModelOld*> OptionToConferenceMap; // 0x338(0x50)
	struct FMulticastInlineDelegate OnConferenceSelectionChanged; // 0x388(0x10)
	struct UPremierSeasonModelOld* Premier Season Model; // 0x398(0x08)
	struct USizeBox* SizeBoxClass; // 0x3a0(0x08)

	void FindRelatedSuperzoneConference(struct UPremierConferenceModelOld* CurrentConference, struct FString& SuperzoneConferenceOption); // Function PremierConferenceDropdown.PremierConferenceDropdown_C.FindRelatedSuperzoneConference // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	struct UWidget* OnGenerateWidget_1(struct FString Item); // Function PremierConferenceDropdown.PremierConferenceDropdown_C.OnGenerateWidget_1 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void AddOption(struct UPremierConferenceModelOld* ConferenceModel); // Function PremierConferenceDropdown.PremierConferenceDropdown_C.AddOption // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	struct UWidget* OnGenerateButtonContentWidget_1(struct FString Item); // Function PremierConferenceDropdown.PremierConferenceDropdown_C.OnGenerateButtonContentWidget_1 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateConferencesDropdown(); // Function PremierConferenceDropdown.PremierConferenceDropdown_C.UpdateConferencesDropdown // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__BPW_UI_DropDown_UpcomingTournaments_AresComboBox_1365_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(struct FString SelectedItem, enum class ESelectInfo SelectionType); // Function PremierConferenceDropdown.PremierConferenceDropdown_C.BndEvt__BPW_UI_DropDown_UpcomingTournaments_AresComboBox_1365_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void InitWithSeason(struct UPremierSeasonModelOld* PremierSeasonModel); // Function PremierConferenceDropdown.PremierConferenceDropdown_C.InitWithSeason // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SelectDefaultConference(bool IsSuper); // Function PremierConferenceDropdown.PremierConferenceDropdown_C.SelectDefaultConference // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SelectConference(struct FGuid ConferenceID); // Function PremierConferenceDropdown.PremierConferenceDropdown_C.SelectConference // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Select Related Superzone(struct UPremierConferenceModelOld* CurrentConference); // Function PremierConferenceDropdown.PremierConferenceDropdown_C.Select Related Superzone // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_PremierConferenceDropdown(int32_t EntryPoint); // Function PremierConferenceDropdown.PremierConferenceDropdown_C.ExecuteUbergraph_PremierConferenceDropdown // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
	void OnConferenceSelectionChanged__DelegateSignature(struct UPremierConferenceModelOld* ConferenceModel); // Function PremierConferenceDropdown.PremierConferenceDropdown_C.OnConferenceSelectionChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

