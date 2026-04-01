// WidgetBlueprintGeneratedClass PremierEvents_ConferenceFilterDropdown.PremierEvents_ConferenceFilterDropdown_C
// Size: 0x3b8 (Inherited: 0x318)
struct UPremierEvents_ConferenceFilterDropdown_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UAresComboBox* AresComboBox_1366; // 0x320(0x08)
	struct FString FirstOption; // 0x328(0x10)
	struct TMap<struct FString, struct UPremierConferenceModelOld*> OptionToConferenceMap; // 0x338(0x50)
	struct FMulticastInlineDelegate OnConferenceSelectionChanged; // 0x388(0x10)
	bool IsEnrolled; // 0x398(0x01)
	char pad_399[0x7]; // 0x399(0x07)
	struct FString TeamConference; // 0x3a0(0x10)
	struct UPremierRosterViewModel* MyPremierRosterViewModel; // 0x3b0(0x08)

	void Update Premier Events Conference Dropdown(); // Function PremierEvents_ConferenceFilterDropdown.PremierEvents_ConferenceFilterDropdown_C.Update Premier Events Conference Dropdown // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__BPW_UI_DropDown_UpcomingTournaments_AresComboBox_1365_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(struct FString SelectedItem, enum class ESelectInfo SelectionType); // Function PremierEvents_ConferenceFilterDropdown.PremierEvents_ConferenceFilterDropdown_C.BndEvt__BPW_UI_DropDown_UpcomingTournaments_AresComboBox_1365_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void Init(); // Function PremierEvents_ConferenceFilterDropdown.PremierEvents_ConferenceFilterDropdown_C.Init // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnPremierRosterViewModelUpdated(struct UPremierRosterViewModel* UpdatedPremierRosterModel); // Function PremierEvents_ConferenceFilterDropdown.PremierEvents_ConferenceFilterDropdown_C.OnPremierRosterViewModelUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnMyRosterConferenceChanged(struct FString NewValue); // Function PremierEvents_ConferenceFilterDropdown.PremierEvents_ConferenceFilterDropdown_C.OnMyRosterConferenceChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetMyPremierRosterModel(struct UPremierRosterViewModel* NewPremierRosterViewModel); // Function PremierEvents_ConferenceFilterDropdown.PremierEvents_ConferenceFilterDropdown_C.SetMyPremierRosterModel // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_PremierEvents_ConferenceFilterDropdown(int32_t EntryPoint); // Function PremierEvents_ConferenceFilterDropdown.PremierEvents_ConferenceFilterDropdown_C.ExecuteUbergraph_PremierEvents_ConferenceFilterDropdown // (Final|UbergraphFunction) // @ game+0x1af5410
	void OnConferenceSelectionChanged__DelegateSignature(struct FString ConferenceKey); // Function PremierEvents_ConferenceFilterDropdown.PremierEvents_ConferenceFilterDropdown_C.OnConferenceSelectionChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

