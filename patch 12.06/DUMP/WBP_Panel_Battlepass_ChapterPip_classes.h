// WidgetBlueprintGeneratedClass WBP_Panel_Battlepass_ChapterPip.WBP_Panel_Battlepass_ChapterPip_C
// Size: 0x4e0 (Inherited: 0x3e0)
struct UWBP_Panel_Battlepass_ChapterPip_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UImage* ChapterLeftConnector; // 0x3e8(0x08)
	struct UButton* ChapterPipButton; // 0x3f0(0x08)
	struct UOverlay* ChapterPipOverlay; // 0x3f8(0x08)
	struct UAresWidgetSwitcher* ChapterPipSwitcher; // 0x400(0x08)
	struct UImage* ChapterRightConnector; // 0x408(0x08)
	struct UImage* CompletedChapterLeftConnector; // 0x410(0x08)
	struct UOverlay* CompletedChapterOverlay; // 0x418(0x08)
	struct UButton* CompletedChapterPipButton; // 0x420(0x08)
	struct UImage* CompletedChapterRightConnector; // 0x428(0x08)
	struct UOverlay* CompletedEpiloguePip; // 0x430(0x08)
	struct UButton* CompletedEpiloguePipButton; // 0x438(0x08)
	struct UImage* CurrentChapterLeftConnector; // 0x440(0x08)
	struct UOverlay* CurrentChapterOverlay; // 0x448(0x08)
	struct UButton* CurrentChapterPipButton; // 0x450(0x08)
	struct UImage* CurrentChapterRightConnector; // 0x458(0x08)
	struct UOverlay* EpiloguePip; // 0x460(0x08)
	struct UButton* EpiloguePipButton; // 0x468(0x08)
	struct UAresCommonText* SelectedChapterIndex; // 0x470(0x08)
	struct UImage* SelectedChapterLeftConnector; // 0x478(0x08)
	struct UOverlay* SelectedChapterPip; // 0x480(0x08)
	struct UButton* SelectedChapterPipButton; // 0x488(0x08)
	struct UImage* SelectedChapterRightConnector; // 0x490(0x08)
	struct UOverlay* SelectedCompletedEpiloguePip; // 0x498(0x08)
	struct UButton* SelectedCompletedEpiloguePipButton; // 0x4a0(0x08)
	struct UOverlay* SelectedEpiloguePip; // 0x4a8(0x08)
	struct UButton* SelectedEpiloguePipButton; // 0x4b0(0x08)
	struct UVM_ContractChapterState_C* ChapterState VM; // 0x4b8(0x08)
	struct UVM_ContractState_C* ContractState VM; // 0x4c0(0x08)
	struct FMulticastInlineDelegate OnChapterPipClicked; // 0x4c8(0x10)
	struct UContractChapterViewModel* ContractChapterViewModel; // 0x4d8(0x08)

	struct FString GetListItemTelemetryTarget(); // Function WBP_Panel_Battlepass_ChapterPip.WBP_Panel_Battlepass_ChapterPip_C.GetListItemTelemetryTarget // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetRightConnectorVisibility(int32_t NumChapters, int32_t ChapterIndex); // Function WBP_Panel_Battlepass_ChapterPip.WBP_Panel_Battlepass_ChapterPip_C.SetRightConnectorVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetLeftConnectorVisibility(int32_t ChapterIndex); // Function WBP_Panel_Battlepass_ChapterPip.WBP_Panel_Battlepass_ChapterPip_C.SetLeftConnectorVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Bind Chapter State Events(bool Bind); // Function WBP_Panel_Battlepass_ChapterPip.WBP_Panel_Battlepass_ChapterPip_C.Bind Chapter State Events // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Bind Contract State Events(bool Bind); // Function WBP_Panel_Battlepass_ChapterPip.WBP_Panel_Battlepass_ChapterPip_C.Bind Contract State Events // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Handle Display State Changed(enum class ContractChapterDisplayState Display State); // Function WBP_Panel_Battlepass_ChapterPip.WBP_Panel_Battlepass_ChapterPip_C.Handle Display State Changed // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Set Contract State VM(struct UVM_ContractState_C* Contract State VM); // Function WBP_Panel_Battlepass_ChapterPip.WBP_Panel_Battlepass_ChapterPip_C.Set Contract State VM // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Init Chapter State VM(struct UContractChapterViewModel* Chapter View Model); // Function WBP_Panel_Battlepass_ChapterPip.WBP_Panel_Battlepass_ChapterPip_C.Init Chapter State VM // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Set Chapter State VM(struct UVM_ContractChapterState_C* Chapter State View Model); // Function WBP_Panel_Battlepass_ChapterPip.WBP_Panel_Battlepass_ChapterPip_C.Set Chapter State VM // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BP_OnEntryReleased(); // Function WBP_Panel_Battlepass_ChapterPip.WBP_Panel_Battlepass_ChapterPip_C.BP_OnEntryReleased // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function WBP_Panel_Battlepass_ChapterPip.WBP_Panel_Battlepass_ChapterPip_C.BP_OnItemExpansionChanged // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void Destruct(); // Function WBP_Panel_Battlepass_ChapterPip.WBP_Panel_Battlepass_ChapterPip_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnListItemObjectSet(struct UObject* ListItemObject); // Function WBP_Panel_Battlepass_ChapterPip.WBP_Panel_Battlepass_ChapterPip_C.OnListItemObjectSet // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void BP_OnItemSelectionChanged(bool bIsSelected); // Function WBP_Panel_Battlepass_ChapterPip.WBP_Panel_Battlepass_ChapterPip_C.BP_OnItemSelectionChanged // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__WBP_Panel_Battlepass_ChapterPip_ChapterPipButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function WBP_Panel_Battlepass_ChapterPip.WBP_Panel_Battlepass_ChapterPip_C.BndEvt__WBP_Panel_Battlepass_ChapterPip_ChapterPipButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__WBP_Panel_Battlepass_ChapterPip_SelectedChapterPipButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function WBP_Panel_Battlepass_ChapterPip.WBP_Panel_Battlepass_ChapterPip_C.BndEvt__WBP_Panel_Battlepass_ChapterPip_SelectedChapterPipButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__WBP_Panel_Battlepass_ChapterPip_SelectedEpiloguePipButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function WBP_Panel_Battlepass_ChapterPip.WBP_Panel_Battlepass_ChapterPip_C.BndEvt__WBP_Panel_Battlepass_ChapterPip_SelectedEpiloguePipButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__WBP_Panel_Battlepass_ChapterPip_SelectedCompletedEpiloguePipButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(); // Function WBP_Panel_Battlepass_ChapterPip.WBP_Panel_Battlepass_ChapterPip_C.BndEvt__WBP_Panel_Battlepass_ChapterPip_SelectedCompletedEpiloguePipButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__WBP_Panel_Battlepass_ChapterPip_CompletedEpiloguePipButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature(); // Function WBP_Panel_Battlepass_ChapterPip.WBP_Panel_Battlepass_ChapterPip_C.BndEvt__WBP_Panel_Battlepass_ChapterPip_CompletedEpiloguePipButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__WBP_Panel_Battlepass_ChapterPip_EpiloguePipButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature(); // Function WBP_Panel_Battlepass_ChapterPip.WBP_Panel_Battlepass_ChapterPip_C.BndEvt__WBP_Panel_Battlepass_ChapterPip_EpiloguePipButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__WBP_Panel_Battlepass_ChapterPip_CompletedChapterPipButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature(); // Function WBP_Panel_Battlepass_ChapterPip.WBP_Panel_Battlepass_ChapterPip_C.BndEvt__WBP_Panel_Battlepass_ChapterPip_CompletedChapterPipButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__WBP_Panel_Battlepass_ChapterPip_CurrentChapterPipButton_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature(); // Function WBP_Panel_Battlepass_ChapterPip.WBP_Panel_Battlepass_ChapterPip_C.BndEvt__WBP_Panel_Battlepass_ChapterPip_CurrentChapterPipButton_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__WBP_Panel_Battlepass_ChapterPip_ChapterPipButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature(); // Function WBP_Panel_Battlepass_ChapterPip.WBP_Panel_Battlepass_ChapterPip_C.BndEvt__WBP_Panel_Battlepass_ChapterPip_ChapterPipButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__WBP_Panel_Battlepass_ChapterPip_SelectedChapterPipButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature(); // Function WBP_Panel_Battlepass_ChapterPip.WBP_Panel_Battlepass_ChapterPip_C.BndEvt__WBP_Panel_Battlepass_ChapterPip_SelectedChapterPipButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__WBP_Panel_Battlepass_ChapterPip_SelectedEpiloguePipButton_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature(); // Function WBP_Panel_Battlepass_ChapterPip.WBP_Panel_Battlepass_ChapterPip_C.BndEvt__WBP_Panel_Battlepass_ChapterPip_SelectedEpiloguePipButton_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__WBP_Panel_Battlepass_ChapterPip_CompletedChapterPipButton_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature(); // Function WBP_Panel_Battlepass_ChapterPip.WBP_Panel_Battlepass_ChapterPip_C.BndEvt__WBP_Panel_Battlepass_ChapterPip_CompletedChapterPipButton_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__WBP_Panel_Battlepass_ChapterPip_CurrentChapterPipButton_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature(); // Function WBP_Panel_Battlepass_ChapterPip.WBP_Panel_Battlepass_ChapterPip_C.BndEvt__WBP_Panel_Battlepass_ChapterPip_CurrentChapterPipButton_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__WBP_Panel_Battlepass_ChapterPip_EpiloguePipButton_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature(); // Function WBP_Panel_Battlepass_ChapterPip.WBP_Panel_Battlepass_ChapterPip_C.BndEvt__WBP_Panel_Battlepass_ChapterPip_EpiloguePipButton_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__WBP_Panel_Battlepass_ChapterPip_SelectedCompletedEpiloguePipButton_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature(); // Function WBP_Panel_Battlepass_ChapterPip.WBP_Panel_Battlepass_ChapterPip_C.BndEvt__WBP_Panel_Battlepass_ChapterPip_SelectedCompletedEpiloguePipButton_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Panel_Battlepass_ChapterPip(int32_t EntryPoint); // Function WBP_Panel_Battlepass_ChapterPip.WBP_Panel_Battlepass_ChapterPip_C.ExecuteUbergraph_WBP_Panel_Battlepass_ChapterPip // (Final|UbergraphFunction) // @ game+0x1b42740
	void OnChapterPipClicked__DelegateSignature(struct UObject* Item); // Function WBP_Panel_Battlepass_ChapterPip.WBP_Panel_Battlepass_ChapterPip_C.OnChapterPipClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

