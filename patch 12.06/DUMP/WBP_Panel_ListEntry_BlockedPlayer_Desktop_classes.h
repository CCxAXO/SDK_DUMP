// WidgetBlueprintGeneratedClass WBP_Panel_ListEntry_BlockedPlayer_Desktop.WBP_Panel_ListEntry_BlockedPlayer_Desktop_C
// Size: 0x428 (Inherited: 0x3e8)
struct UWBP_Panel_ListEntry_BlockedPlayer_Desktop_C : UWBP_Panel_ListEntry_Social_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e8(0x08)
	struct UBlockUnblockViewModel* BlockUnblockViewModel; // 0x3f0(0x08)
	struct UWidgetAnimation* ShowDetails; // 0x3f8(0x08)
	struct UWBP_Button_Social_BlockedPlayer_Desktop_C* Button; // 0x400(0x08)
	struct UWBP_Panel_PlayerName_C* WBP_Panel_PlayerName; // 0x408(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_Details; // 0x410(0x08)
	struct UAresBlockedPlayerNameViewModel* BlockedPlayerNameViewModel; // 0x418(0x08)
	struct UBlockedPlayerListItem* BlockedPlayerListItem; // 0x420(0x08)

	void InitializeListEntry(struct UObject* InListItemObject); // Function WBP_Panel_ListEntry_BlockedPlayer_Desktop.WBP_Panel_ListEntry_BlockedPlayer_Desktop_C.InitializeListEntry // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindToViewModel(bool bDoBind); // Function WBP_Panel_ListEntry_BlockedPlayer_Desktop.WBP_Panel_ListEntry_BlockedPlayer_Desktop_C.BindToViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetDetailsWidgetIndex(int32_t Index); // Function WBP_Panel_ListEntry_BlockedPlayer_Desktop.WBP_Panel_ListEntry_BlockedPlayer_Desktop_C.SetDetailsWidgetIndex // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateInteractionAppearance(); // Function WBP_Panel_ListEntry_BlockedPlayer_Desktop.WBP_Panel_ListEntry_BlockedPlayer_Desktop_C.UpdateInteractionAppearance // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateAppearance(enum class EAresBlockUnblockResponse BlockUnblockResponse); // Function WBP_Panel_ListEntry_BlockedPlayer_Desktop.WBP_Panel_ListEntry_BlockedPlayer_Desktop_C.UpdateAppearance // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void K2_BindToViewModel(); // Function WBP_Panel_ListEntry_BlockedPlayer_Desktop.WBP_Panel_ListEntry_BlockedPlayer_Desktop_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Destruct(); // Function WBP_Panel_ListEntry_BlockedPlayer_Desktop.WBP_Panel_ListEntry_BlockedPlayer_Desktop_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__WBP_Panel_BlockedPlayerItem_Desktop_WBP_Button_Social_Setting_Desktop_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_ListEntry_BlockedPlayer_Desktop.WBP_Panel_ListEntry_BlockedPlayer_Desktop_C.BndEvt__WBP_Panel_BlockedPlayerItem_Desktop_WBP_Button_Social_Setting_Desktop_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__WBP_Panel_BlockedPlayerItem_Desktop_Button_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_ListEntry_BlockedPlayer_Desktop.WBP_Panel_ListEntry_BlockedPlayer_Desktop_C.BndEvt__WBP_Panel_BlockedPlayerItem_Desktop_Button_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__WBP_Panel_BlockedPlayerItem_Desktop_Button_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_ListEntry_BlockedPlayer_Desktop.WBP_Panel_ListEntry_BlockedPlayer_Desktop_C.BndEvt__WBP_Panel_BlockedPlayerItem_Desktop_Button_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__WBP_Panel_BlockedPlayerItem_Desktop_Button_K2Node_ComponentBoundEvent_6_OnButtonBasePressed__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_ListEntry_BlockedPlayer_Desktop.WBP_Panel_ListEntry_BlockedPlayer_Desktop_C.BndEvt__WBP_Panel_BlockedPlayerItem_Desktop_Button_K2Node_ComponentBoundEvent_6_OnButtonBasePressed__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__WBP_Panel_BlockedPlayerItem_Desktop_Button_K2Node_ComponentBoundEvent_7_OnButtonBaseReleased__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_ListEntry_BlockedPlayer_Desktop.WBP_Panel_ListEntry_BlockedPlayer_Desktop_C.BndEvt__WBP_Panel_BlockedPlayerItem_Desktop_Button_K2Node_ComponentBoundEvent_7_OnButtonBaseReleased__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void HandlePlayerNameChanged(struct FString NewValue); // Function WBP_Panel_ListEntry_BlockedPlayer_Desktop.WBP_Panel_ListEntry_BlockedPlayer_Desktop_C.HandlePlayerNameChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandlePlayerTagChanged(struct FString NewValue); // Function WBP_Panel_ListEntry_BlockedPlayer_Desktop.WBP_Panel_ListEntry_BlockedPlayer_Desktop_C.HandlePlayerTagChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnInitialized(); // Function WBP_Panel_ListEntry_BlockedPlayer_Desktop.WBP_Panel_ListEntry_BlockedPlayer_Desktop_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnPendingBlockUnblockResponseChanged(enum class EAresBlockUnblockResponse InResponse); // Function WBP_Panel_ListEntry_BlockedPlayer_Desktop.WBP_Panel_ListEntry_BlockedPlayer_Desktop_C.OnPendingBlockUnblockResponseChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Panel_ListEntry_BlockedPlayer_Desktop(int32_t EntryPoint); // Function WBP_Panel_ListEntry_BlockedPlayer_Desktop.WBP_Panel_ListEntry_BlockedPlayer_Desktop_C.ExecuteUbergraph_WBP_Panel_ListEntry_BlockedPlayer_Desktop // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

