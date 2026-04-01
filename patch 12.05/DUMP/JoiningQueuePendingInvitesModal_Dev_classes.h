// WidgetBlueprintGeneratedClass JoiningQueuePendingInvitesModal_Dev.JoiningQueuePendingInvitesModal_Dev_C
// Size: 0x3a8 (Inherited: 0x318)
struct UJoiningQueuePendingInvitesModal_Dev_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UImage* BG; // 0x320(0x08)
	struct USpacer* CancelButtonSpacer; // 0x328(0x08)
	struct UImage* Gradient; // 0x330(0x08)
	struct UWidgetSwitcher* LoadingSwitcher; // 0x338(0x08)
	struct UImage* Logo; // 0x340(0x08)
	struct UImage* Pattern; // 0x348(0x08)
	struct USharedBackButton_C* SharedBackButton; // 0x350(0x08)
	struct USizeBox* SizeBoxCancel_2; // 0x358(0x08)
	struct USizeBox* SizeBoxConfirmation; // 0x360(0x08)
	struct UThrobber* Throbber_237; // 0x368(0x08)
	struct UImage* tint_bg; // 0x370(0x08)
	struct UTextBlock* Title; // 0x378(0x08)
	struct UImage* topornament; // 0x380(0x08)
	struct UWBP_MenuButtonPrimary_C* WBP_MenuButtonPrimary; // 0x388(0x08)
	struct UWBP_MenuButtonSecondary_C* WBP_MenuButtonSecondary; // 0x390(0x08)
	struct FMulticastInlineDelegate ContinueJoiningQueue; // 0x398(0x10)

	void BndEvt__JoiningQueuePendingInvitesModal_SharedBackButton_K2Node_ComponentBoundEvent_2_OnBackRequested__DelegateSignature(); // Function JoiningQueuePendingInvitesModal_Dev.JoiningQueuePendingInvitesModal_Dev_C.BndEvt__JoiningQueuePendingInvitesModal_SharedBackButton_K2Node_ComponentBoundEvent_2_OnBackRequested__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__JoiningQueuePendingInvitesModal_WBP_MenuButtonPrimary_K2Node_ComponentBoundEvent_3_OnUniversalButtonVoidEvent__DelegateSignature(); // Function JoiningQueuePendingInvitesModal_Dev.JoiningQueuePendingInvitesModal_Dev_C.BndEvt__JoiningQueuePendingInvitesModal_WBP_MenuButtonPrimary_K2Node_ComponentBoundEvent_3_OnUniversalButtonVoidEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__JoiningQueuePendingInvitesModal_WBP_MenuButtonSecondary_K2Node_ComponentBoundEvent_4_OnUniversalButtonVoidEvent__DelegateSignature(); // Function JoiningQueuePendingInvitesModal_Dev.JoiningQueuePendingInvitesModal_Dev_C.BndEvt__JoiningQueuePendingInvitesModal_WBP_MenuButtonSecondary_K2Node_ComponentBoundEvent_4_OnUniversalButtonVoidEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_JoiningQueuePendingInvitesModal_Dev(int32_t EntryPoint); // Function JoiningQueuePendingInvitesModal_Dev.JoiningQueuePendingInvitesModal_Dev_C.ExecuteUbergraph_JoiningQueuePendingInvitesModal_Dev // (Final|UbergraphFunction) // @ game+0x1af5410
	void ContinueJoiningQueue__DelegateSignature(bool Continue); // Function JoiningQueuePendingInvitesModal_Dev.JoiningQueuePendingInvitesModal_Dev_C.ContinueJoiningQueue__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

