// WidgetBlueprintGeneratedClass WBP_Panel_PickemGroupEntryChoiceItem.WBP_Panel_PickemGroupEntryChoiceItem_C
// Size: 0x478 (Inherited: 0x3e0)
struct UWBP_Panel_PickemGroupEntryChoiceItem_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UWBP_Button_Esports_DropdownItem_C* WBP_Button_EsportsDropdownItem; // 0x3e8(0x08)
	struct TArray<struct UCommonButtonStyle*> ButtonStyles; // 0x3f0(0x10)
	struct UPickemGroupEntryChoiceItemViewModel* EntryChoiceItemViewModel; // 0x400(0x08)
	struct UEsportsTeamViewModel* TeamViewModel; // 0x408(0x08)
	struct FString TournamentSlug; // 0x410(0x10)
	struct FString sectionid; // 0x420(0x10)
	int32_t EntryIndex; // 0x430(0x04)
	char pad_434[0x4]; // 0x434(0x04)
	struct FString TeamID; // 0x438(0x10)
	struct FMulticastInlineDelegate OnInteractionCompleted; // 0x448(0x10)
	struct UAkAudioEvent* ChoiceSound; // 0x458(0x08)
	struct FString TournamentID; // 0x460(0x10)
	struct UEsportsTeamViewModelV2* TeamViewModelV2; // 0x470(0x08)

	void HandleTeamNameChanged(struct FString NewValue); // Function WBP_Panel_PickemGroupEntryChoiceItem.WBP_Panel_PickemGroupEntryChoiceItem_C.HandleTeamNameChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindOrUnbindViewModels(bool bDoBind); // Function WBP_Panel_PickemGroupEntryChoiceItem.WBP_Panel_PickemGroupEntryChoiceItem_C.BindOrUnbindViewModels // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Initialize Appearance(int32_t ItemIndex); // Function WBP_Panel_PickemGroupEntryChoiceItem.WBP_Panel_PickemGroupEntryChoiceItem_C.Initialize Appearance // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Initialize(struct FString InTournamentSlug, struct FString InTournamentID, struct FString InSectionID, int32_t InEntryIndex, struct FString InTeamID); // Function WBP_Panel_PickemGroupEntryChoiceItem.WBP_Panel_PickemGroupEntryChoiceItem_C.Initialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnInitialized(); // Function WBP_Panel_PickemGroupEntryChoiceItem.WBP_Panel_PickemGroupEntryChoiceItem_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function WBP_Panel_PickemGroupEntryChoiceItem.WBP_Panel_PickemGroupEntryChoiceItem_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Destruct(); // Function WBP_Panel_PickemGroupEntryChoiceItem.WBP_Panel_PickemGroupEntryChoiceItem_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void HandleTeamNameUpdated(struct FText& NewValue); // Function WBP_Panel_PickemGroupEntryChoiceItem.WBP_Panel_PickemGroupEntryChoiceItem_C.HandleTeamNameUpdated // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_Panel_PickemGroupSelectionItem_WBP_Button_EsportsDropdownItem_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_PickemGroupEntryChoiceItem.WBP_Panel_PickemGroupEntryChoiceItem_C.BndEvt__WBP_Panel_PickemGroupSelectionItem_WBP_Button_EsportsDropdownItem_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void HandleIsChosenTeamChanged(bool bNewValue); // Function WBP_Panel_PickemGroupEntryChoiceItem.WBP_Panel_PickemGroupEntryChoiceItem_C.HandleIsChosenTeamChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_Panel_GroupsPickemPlacementChoiceItem_WBP_Button_EsportsDropdownItem_K2Node_ComponentBoundEvent_1_OnButtonReleased__DelegateSignature(); // Function WBP_Panel_PickemGroupEntryChoiceItem.WBP_Panel_PickemGroupEntryChoiceItem_C.BndEvt__WBP_Panel_GroupsPickemPlacementChoiceItem_WBP_Button_EsportsDropdownItem_K2Node_ComponentBoundEvent_1_OnButtonReleased__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Panel_PickemGroupEntryChoiceItem(int32_t EntryPoint); // Function WBP_Panel_PickemGroupEntryChoiceItem.WBP_Panel_PickemGroupEntryChoiceItem_C.ExecuteUbergraph_WBP_Panel_PickemGroupEntryChoiceItem // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
	void OnInteractionCompleted__DelegateSignature(); // Function WBP_Panel_PickemGroupEntryChoiceItem.WBP_Panel_PickemGroupEntryChoiceItem_C.OnInteractionCompleted__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

