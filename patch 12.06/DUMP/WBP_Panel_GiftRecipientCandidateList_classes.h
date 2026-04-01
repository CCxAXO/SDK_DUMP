// WidgetBlueprintGeneratedClass WBP_Panel_GiftRecipientCandidateList.WBP_Panel_GiftRecipientCandidateList_C
// Size: 0x3f8 (Inherited: 0x3e0)
struct UWBP_Panel_GiftRecipientCandidateList_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UWBP_List_Base_C* WBP_List_Base; // 0x3e8(0x08)
	struct UVM_GiftRecipientList_C* GiftRecipientCandidatesListViewModel; // 0x3f0(0x08)

	struct UWidget* BP_GetDesiredFocusTarget(); // Function WBP_Panel_GiftRecipientCandidateList.WBP_Panel_GiftRecipientCandidateList_C.BP_GetDesiredFocusTarget // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1b42740
	void OnGiftRecipientCandidatesChanged(struct TArray<struct UGiftRecipientCandidateInfo*>& GiftRecipientCandidates); // Function WBP_Panel_GiftRecipientCandidateList.WBP_Panel_GiftRecipientCandidateList_C.OnGiftRecipientCandidatesChanged // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Bind(bool Bind); // Function WBP_Panel_GiftRecipientCandidateList.WBP_Panel_GiftRecipientCandidateList_C.Bind // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitViewModels(); // Function WBP_Panel_GiftRecipientCandidateList.WBP_Panel_GiftRecipientCandidateList_C.InitViewModels // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function WBP_Panel_GiftRecipientCandidateList.WBP_Panel_GiftRecipientCandidateList_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__WBP_Panel_GiftRecipientCandidatesList_WBP_List_Base_K2Node_ComponentBoundEvent_1_OnEntryObjectAndWidgetChanged__DelegateSignature(struct UObject* EntryObject, struct UUserWidget* EntryWidget); // Function WBP_Panel_GiftRecipientCandidateList.WBP_Panel_GiftRecipientCandidateList_C.BndEvt__WBP_Panel_GiftRecipientCandidatesList_WBP_List_Base_K2Node_ComponentBoundEvent_1_OnEntryObjectAndWidgetChanged__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void K2_BindToViewModel(); // Function WBP_Panel_GiftRecipientCandidateList.WBP_Panel_GiftRecipientCandidateList_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Destruct(); // Function WBP_Panel_GiftRecipientCandidateList.WBP_Panel_GiftRecipientCandidateList_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Panel_GiftRecipientCandidateList(int32_t EntryPoint); // Function WBP_Panel_GiftRecipientCandidateList.WBP_Panel_GiftRecipientCandidateList_C.ExecuteUbergraph_WBP_Panel_GiftRecipientCandidateList // (Final|UbergraphFunction) // @ game+0x1b42740
};

