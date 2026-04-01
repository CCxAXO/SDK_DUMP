// WidgetBlueprintGeneratedClass WBP_Panel_GiftRecipient.WBP_Panel_GiftRecipient_C
// Size: 0x444 (Inherited: 0x3e0)
struct UWBP_Panel_GiftRecipient_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UWBP_EditableTextBox_C* EditableTextBox_SearchInput; // 0x3e8(0x08)
	struct UHorizontalBox* EmptyFriendsListContainer; // 0x3f0(0x08)
	struct UOverlay* EmptyQueryContainer; // 0x3f8(0x08)
	struct UImage* Filigree; // 0x400(0x08)
	struct UImage* GiftingLogo; // 0x408(0x08)
	struct USizeBox* GiftRecipientCandidatesContainer; // 0x410(0x08)
	struct UWidgetSwitcher* GiftRecipientCandidateSwitcher; // 0x418(0x08)
	struct UHorizontalBox* HeaderHorizontalbox; // 0x420(0x08)
	struct UAresCommonText* Title; // 0x428(0x08)
	struct UWBP_Panel_GiftRecipientCandidateList_C* WBP_Panel_GiftRecipientCandidates; // 0x430(0x08)
	struct UVM_SelectGiftRecipientScreen_C* VM_SelectGiftRecipient; // 0x438(0x08)
	float ConsolePurchaseOverlayLeftPadding; // 0x440(0x04)

	void UpdatePadding(); // Function WBP_Panel_GiftRecipient.WBP_Panel_GiftRecipient_C.UpdatePadding // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	struct UWidget* NavigateToFirstGiftRecipientCandidate(enum class EUINavigation Navigation); // Function WBP_Panel_GiftRecipient.WBP_Panel_GiftRecipient_C.NavigateToFirstGiftRecipientCandidate // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleFilteredGiftRecipientCandidatesChanged(struct TArray<struct UGiftRecipientCandidateInfo*>& FilteredGiftRecipientCandidates); // Function WBP_Panel_GiftRecipient.WBP_Panel_GiftRecipient_C.HandleFilteredGiftRecipientCandidatesChanged // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Handle Gift Recipient Candidates Changed(struct TArray<struct UGiftRecipientCandidateInfo*>& GiftRecipientCandidates); // Function WBP_Panel_GiftRecipient.WBP_Panel_GiftRecipient_C.Handle Gift Recipient Candidates Changed // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	struct UWidget* BP_GetDesiredFocusTarget(); // Function WBP_Panel_GiftRecipient.WBP_Panel_GiftRecipient_C.BP_GetDesiredFocusTarget // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1af5410
	void HandleGiftRecipientSelected(); // Function WBP_Panel_GiftRecipient.WBP_Panel_GiftRecipient_C.HandleGiftRecipientSelected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Bind(bool Bind); // Function WBP_Panel_GiftRecipient.WBP_Panel_GiftRecipient_C.Bind // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitViewModels(); // Function WBP_Panel_GiftRecipient.WBP_Panel_GiftRecipient_C.InitViewModels // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_GiftRecipient.WBP_Panel_GiftRecipient_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void K2_BindToViewModel(); // Function WBP_Panel_GiftRecipient.WBP_Panel_GiftRecipient_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_Panel_GiftRecipient_EditableTextBox_SearchInput_K2Node_ComponentBoundEvent_1_OnTextChanged__DelegateSignature(struct FText Text); // Function WBP_Panel_GiftRecipient.WBP_Panel_GiftRecipient_C.BndEvt__WBP_Panel_GiftRecipient_EditableTextBox_SearchInput_K2Node_ComponentBoundEvent_1_OnTextChanged__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_Panel_GiftRecipient_EditableTextBox_SearchInput_K2Node_ComponentBoundEvent_2_OnTextCleared__DelegateSignature(); // Function WBP_Panel_GiftRecipient.WBP_Panel_GiftRecipient_C.BndEvt__WBP_Panel_GiftRecipient_EditableTextBox_SearchInput_K2Node_ComponentBoundEvent_2_OnTextCleared__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Panel_GiftRecipient(int32_t EntryPoint); // Function WBP_Panel_GiftRecipient.WBP_Panel_GiftRecipient_C.ExecuteUbergraph_WBP_Panel_GiftRecipient // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

