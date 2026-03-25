// WidgetBlueprintGeneratedClass PremierGenericPopUpModal.PremierGenericPopUpModal_C
// Size: 0x3c0 (Inherited: 0x318)
struct UPremierGenericPopUpModal_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UImage* BG; // 0x320(0x08)
	struct UWBP_MenuButtonSecondary_C* Button_Cancel; // 0x328(0x08)
	struct UWBP_MenuButtonPrimary_C* Button_Confirm; // 0x330(0x08)
	struct USpacer* CancelButtonSpacer; // 0x338(0x08)
	struct UImage* Gradient; // 0x340(0x08)
	struct UWidgetSwitcher* LoadingSwitcher; // 0x348(0x08)
	struct UImage* Logo; // 0x350(0x08)
	struct UImage* Pattern; // 0x358(0x08)
	struct USharedBackButton_C* SharedBackButton; // 0x360(0x08)
	struct USizeBox* SizeBoxCancel_2; // 0x368(0x08)
	struct USizeBox* SizeBoxConfirmation; // 0x370(0x08)
	struct UTextBlock* TextBlock_Main; // 0x378(0x08)
	struct UTextBlock* TextBlock_Title; // 0x380(0x08)
	struct UThrobber* Throbber_237; // 0x388(0x08)
	struct UImage* tint_bg; // 0x390(0x08)
	struct UImage* topornament; // 0x398(0x08)
	struct FMulticastInlineDelegate ConfirmClicked; // 0x3a0(0x10)
	struct FMulticastInlineDelegate CancelClicked; // 0x3b0(0x10)

	void SetContents(struct FText Title Text, struct FText Main Text, struct FText Confirm Button Text, bool Show Cancel Button, struct FText Cancel Button Text); // Function PremierGenericPopUpModal.PremierGenericPopUpModal_C.SetContents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__JoiningQueuePendingInvitesModal_SharedBackButton_K2Node_ComponentBoundEvent_2_OnBackRequested__DelegateSignature(); // Function PremierGenericPopUpModal.PremierGenericPopUpModal_C.BndEvt__JoiningQueuePendingInvitesModal_SharedBackButton_K2Node_ComponentBoundEvent_2_OnBackRequested__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__JoiningQueuePendingInvitesModal_WBP_MenuButtonPrimary_K2Node_ComponentBoundEvent_3_OnUniversalButtonVoidEvent__DelegateSignature(); // Function PremierGenericPopUpModal.PremierGenericPopUpModal_C.BndEvt__JoiningQueuePendingInvitesModal_WBP_MenuButtonPrimary_K2Node_ComponentBoundEvent_3_OnUniversalButtonVoidEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__JoiningQueuePendingInvitesModal_WBP_MenuButtonSecondary_K2Node_ComponentBoundEvent_4_OnUniversalButtonVoidEvent__DelegateSignature(); // Function PremierGenericPopUpModal.PremierGenericPopUpModal_C.BndEvt__JoiningQueuePendingInvitesModal_WBP_MenuButtonSecondary_K2Node_ComponentBoundEvent_4_OnUniversalButtonVoidEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_PremierGenericPopUpModal(int32_t EntryPoint); // Function PremierGenericPopUpModal.PremierGenericPopUpModal_C.ExecuteUbergraph_PremierGenericPopUpModal // (Final|UbergraphFunction) // @ game+0x1af5410
	void CancelClicked__DelegateSignature(); // Function PremierGenericPopUpModal.PremierGenericPopUpModal_C.CancelClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ConfirmClicked__DelegateSignature(); // Function PremierGenericPopUpModal.PremierGenericPopUpModal_C.ConfirmClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

