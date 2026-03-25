// WidgetBlueprintGeneratedClass WBP_Screen_GiftReceivedModal.WBP_Screen_GiftReceivedModal_C
// Size: 0x5a8 (Inherited: 0x550)
struct UWBP_Screen_GiftReceivedModal_C : UWBP_Screen_ConfirmationModal_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UCircularThrobber* CircularThrobber_180; // 0x558(0x08)
	struct UOverlay* Loading; // 0x560(0x08)
	struct UAresCommonText* TEMP_LOADING; // 0x568(0x08)
	struct UWBP_Button_Close_C* WBP_Button_Close; // 0x570(0x08)
	struct UWBP_Decoration_ModalTitleLines_C* WBP_Decoration_ModalTitleLines_3; // 0x578(0x08)
	struct UWBP_Decoration_ModalTitleLines_C* WBP_Decoration_ModalTitleLines_4; // 0x580(0x08)
	struct UWBP_Panel_GiftReceived_C* WBP_Panel_GiftReceived; // 0x588(0x08)
	struct UWBP_Panel_RewardDetails_C* WBP_Panel_RewardDetails; // 0x590(0x08)
	struct UWidgetSwitcher* WidgetSwitcher; // 0x598(0x08)
	struct UGiftReceivedModalViewModel* GiftReceivedModalViewModel; // 0x5a0(0x08)

	struct FAresMainMenuNavBarData GetNavBarData(); // Function WBP_Screen_GiftReceivedModal.WBP_Screen_GiftReceivedModal_C.GetNavBarData // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1af5410
	bool HandleBackRequest(); // Function WBP_Screen_GiftReceivedModal.WBP_Screen_GiftReceivedModal_C.HandleBackRequest // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ToggleModelViewer(); // Function WBP_Screen_GiftReceivedModal.WBP_Screen_GiftReceivedModal_C.ToggleModelViewer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	bool IsBackAllowed(); // Function WBP_Screen_GiftReceivedModal.WBP_Screen_GiftReceivedModal_C.IsBackAllowed // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void OnHandleNoRemainingGiftsForPC(); // Function WBP_Screen_GiftReceivedModal.WBP_Screen_GiftReceivedModal_C.OnHandleNoRemainingGiftsForPC // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void EnableBackNavigation(bool bEnableBack); // Function WBP_Screen_GiftReceivedModal.WBP_Screen_GiftReceivedModal_C.EnableBackNavigation // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ShowRewardDetailsPanel(); // Function WBP_Screen_GiftReceivedModal.WBP_Screen_GiftReceivedModal_C.ShowRewardDetailsPanel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	bool BP_OnHandleBackAction(); // Function WBP_Screen_GiftReceivedModal.WBP_Screen_GiftReceivedModal_C.BP_OnHandleBackAction // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	struct UWidget* BP_GetDesiredFocusTarget(); // Function WBP_Screen_GiftReceivedModal.WBP_Screen_GiftReceivedModal_C.BP_GetDesiredFocusTarget // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1af5410
	void OnPendingGiftDTOChanged(struct UPendingGiftDTO* PendingGiftDTO); // Function WBP_Screen_GiftReceivedModal.WBP_Screen_GiftReceivedModal_C.OnPendingGiftDTOChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindToConfirmationViewModel(bool Bind); // Function WBP_Screen_GiftReceivedModal.WBP_Screen_GiftReceivedModal_C.BindToConfirmationViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_Screen_GiftReceivedModal_WBP_Panel_GiftReceived_K2Node_ComponentBoundEvent_0_OnModalAccept__DelegateSignature(); // Function WBP_Screen_GiftReceivedModal.WBP_Screen_GiftReceivedModal_C.BndEvt__WBP_Screen_GiftReceivedModal_WBP_Panel_GiftReceived_K2Node_ComponentBoundEvent_0_OnModalAccept__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_Screen_GiftReceivedModal_WBP_Panel_GiftReceived_K2Node_ComponentBoundEvent_1_OnModalDecline__DelegateSignature(); // Function WBP_Screen_GiftReceivedModal.WBP_Screen_GiftReceivedModal_C.BndEvt__WBP_Screen_GiftReceivedModal_WBP_Panel_GiftReceived_K2Node_ComponentBoundEvent_1_OnModalDecline__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function WBP_Screen_GiftReceivedModal.WBP_Screen_GiftReceivedModal_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_Screen_GiftReceivedModal_WBP_Button_Close_K2Node_ComponentBoundEvent_3_OnCloseRequested__DelegateSignature(); // Function WBP_Screen_GiftReceivedModal.WBP_Screen_GiftReceivedModal_C.BndEvt__WBP_Screen_GiftReceivedModal_WBP_Button_Close_K2Node_ComponentBoundEvent_3_OnCloseRequested__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Screen_GiftReceivedModal(int32_t EntryPoint); // Function WBP_Screen_GiftReceivedModal.WBP_Screen_GiftReceivedModal_C.ExecuteUbergraph_WBP_Screen_GiftReceivedModal // (Final|UbergraphFunction) // @ game+0x1af5410
};

