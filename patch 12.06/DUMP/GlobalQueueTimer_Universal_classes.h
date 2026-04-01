// WidgetBlueprintGeneratedClass GlobalQueueTimer_Universal.GlobalQueueTimer_Universal_C
// Size: 0x380 (Inherited: 0x320)
struct UGlobalQueueTimer_Universal_C : UDesignableUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UWidgetAnimation* hover; // 0x328(0x08)
	struct UWidgetAnimation* Ambient; // 0x330(0x08)
	struct UWidgetAnimation* Intro; // 0x338(0x08)
	struct UImage* BgTint; // 0x340(0x08)
	struct UHorizontalBox* InQueueBox; // 0x348(0x08)
	struct UOverlay* InQueueOverlay; // 0x350(0x08)
	struct UButton* LeaveMatchmakingButton; // 0x358(0x08)
	struct UButton* NavigateToLobbyButton; // 0x360(0x08)
	struct UPartyMatchmakingTimerV2_C* PartyMatchmakingTimerV2; // 0x368(0x08)
	struct UPartyViewController* Party View Controller; // 0x370(0x08)
	struct UPartyModel* PartyModel; // 0x378(0x08)

	void UpdateWidgetState(); // Function GlobalQueueTimer_Universal.GlobalQueueTimer_Universal_C.UpdateWidgetState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function GlobalQueueTimer_Universal.GlobalQueueTimer_Universal_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function GlobalQueueTimer_Universal.GlobalQueueTimer_Universal_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void MM Changed(bool NewValue); // Function GlobalQueueTimer_Universal.GlobalQueueTimer_Universal_C.MM Changed // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnPartryStateChanged(enum class EPartyViewState PartyState); // Function GlobalQueueTimer_Universal.GlobalQueueTimer_Universal_C.OnPartryStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__GlobalQueueTimer_Universal_NavigateToLobbyButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function GlobalQueueTimer_Universal.GlobalQueueTimer_Universal_C.BndEvt__GlobalQueueTimer_Universal_NavigateToLobbyButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__GlobalQueueTimer_Universal_LeaveMatchmakingButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function GlobalQueueTimer_Universal.GlobalQueueTimer_Universal_C.BndEvt__GlobalQueueTimer_Universal_LeaveMatchmakingButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__GlobalQueueTimer_Universal_LeaveMatchmakingButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // Function GlobalQueueTimer_Universal.GlobalQueueTimer_Universal_C.BndEvt__GlobalQueueTimer_Universal_LeaveMatchmakingButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_GlobalQueueTimer_Universal(int32_t EntryPoint); // Function GlobalQueueTimer_Universal.GlobalQueueTimer_Universal_C.ExecuteUbergraph_GlobalQueueTimer_Universal // (Final|UbergraphFunction) // @ game+0x1b42740
};

