// WidgetBlueprintGeneratedClass WBP_Panel_PickemGroupSectionItem.WBP_Panel_PickemGroupSectionItem_C
// Size: 0x480 (Inherited: 0x3e0)
struct UWBP_Panel_PickemGroupSectionItem_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UWBP_Button_Esports_Secondary_C* Button_ClearChoices; // 0x3e8(0x08)
	struct UWBP_Button_Esports_Secondary_C* Button_ViewBracket; // 0x3f0(0x08)
	struct UImage* Image_55; // 0x3f8(0x08)
	struct UAresCommonText* Text_Title; // 0x400(0x08)
	struct UWBP_Panel_PickemAwardedPointsDisplay_C* WBP_Panel_PickemAwardedPointsDisplay; // 0x408(0x08)
	struct UWBP_Panel_PickemGroupEntryList_C* WBP_Panel_PickemGroupEntryList; // 0x410(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_Details; // 0x418(0x08)
	struct FString TournamentSlug; // 0x420(0x10)
	struct FString sectionid; // 0x430(0x10)
	struct UPickemGroupSectionItemViewModel* SectionItemViewModel; // 0x440(0x08)
	struct UPickemGroupSectionClearViewModel* SectionClearViewModel; // 0x448(0x08)
	struct UPickemBlockStageViewModel* BlockStageViewModel; // 0x450(0x08)
	struct UAkAudioEvent* ClearChoicesSound; // 0x458(0x08)
	struct FString TournamentID; // 0x460(0x10)
	struct FMulticastInlineDelegate OnHasValidDataLoadedChanged; // 0x470(0x10)

	void OnHasValidDataChanged(bool bHasValidData); // Function WBP_Panel_PickemGroupSectionItem.WBP_Panel_PickemGroupSectionItem_C.OnHasValidDataChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateDetailsAppearance(); // Function WBP_Panel_PickemGroupSectionItem.WBP_Panel_PickemGroupSectionItem_C.UpdateDetailsAppearance // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateAwardedPointsDisplay(); // Function WBP_Panel_PickemGroupSectionItem.WBP_Panel_PickemGroupSectionItem_C.UpdateAwardedPointsDisplay // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindOrUnbindViewModels(bool bDoBind); // Function WBP_Panel_PickemGroupSectionItem.WBP_Panel_PickemGroupSectionItem_C.BindOrUnbindViewModels // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Initialize(struct FString InTournamentSlug, struct FString InSectionID, struct FString InTournamentID); // Function WBP_Panel_PickemGroupSectionItem.WBP_Panel_PickemGroupSectionItem_C.Initialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnInitialized(); // Function WBP_Panel_PickemGroupSectionItem.WBP_Panel_PickemGroupSectionItem_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function WBP_Panel_PickemGroupSectionItem.WBP_Panel_PickemGroupSectionItem_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Destruct(); // Function WBP_Panel_PickemGroupSectionItem.WBP_Panel_PickemGroupSectionItem_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void HandleGroupNameChanged(struct FString NewValue); // Function WBP_Panel_PickemGroupSectionItem.WBP_Panel_PickemGroupSectionItem_C.HandleGroupNameChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandlePointsChanged(int32_t NewValue); // Function WBP_Panel_PickemGroupSectionItem.WBP_Panel_PickemGroupSectionItem_C.HandlePointsChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__WBP_Panel_GroupsPickemGroupItem_Button_ClearChoices_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_PickemGroupSectionItem.WBP_Panel_PickemGroupSectionItem_C.BndEvt__WBP_Panel_GroupsPickemGroupItem_Button_ClearChoices_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__WBP_Panel_GroupsPickemGroupItem_Button_ViewBracket_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_PickemGroupSectionItem.WBP_Panel_PickemGroupSectionItem_C.BndEvt__WBP_Panel_GroupsPickemGroupItem_Button_ViewBracket_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void HandleSectionIsClearChanged(bool bSectionIsClear); // Function WBP_Panel_PickemGroupSectionItem.WBP_Panel_PickemGroupSectionItem_C.HandleSectionIsClearChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandlePickemCurrentStageChanged(enum class EAresPickemStage NewValue); // Function WBP_Panel_PickemGroupSectionItem.WBP_Panel_PickemGroupSectionItem_C.HandlePickemCurrentStageChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Panel_PickemGroupSectionItem(int32_t EntryPoint); // Function WBP_Panel_PickemGroupSectionItem.WBP_Panel_PickemGroupSectionItem_C.ExecuteUbergraph_WBP_Panel_PickemGroupSectionItem // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
	void OnHasValidDataLoadedChanged__DelegateSignature(struct UWBP_Panel_PickemGroupSectionItem_C* Widget, bool bLoadingCompleted); // Function WBP_Panel_PickemGroupSectionItem.WBP_Panel_PickemGroupSectionItem_C.OnHasValidDataLoadedChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

