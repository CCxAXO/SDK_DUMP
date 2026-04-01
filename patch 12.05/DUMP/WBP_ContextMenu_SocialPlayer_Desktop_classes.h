// WidgetBlueprintGeneratedClass WBP_ContextMenu_SocialPlayer_Desktop.WBP_ContextMenu_SocialPlayer_Desktop_C
// Size: 0x520 (Inherited: 0x4a8)
struct UWBP_ContextMenu_SocialPlayer_Desktop_C : UAresCommonActivatableWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4a8(0x08)
	struct UVM_PlayerIsReal_C* VM_PlayerIsReal; // 0x4b0(0x08)
	struct UAresCommonText* Text_NotRealPlayer; // 0x4b8(0x08)
	struct UWBP_Panel_ContextMenuItemList_C* WBP_Panel_ContextMenuItemList; // 0x4c0(0x08)
	struct UWBP_Template_ContextMenu_Floating_C* WBP_Template_ContextMenu_Floating; // 0x4c8(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_Content; // 0x4d0(0x08)
	struct FString PlayerSubject; // 0x4d8(0x10)
	struct FString MatchID; // 0x4e8(0x10)
	struct FMulticastInlineDelegate CloseContextMenuRequested; // 0x4f8(0x10)
	struct FGuid OverridePlayerCardID; // 0x508(0x10)
	struct UAresContextMenuItemFilterDataAsset* ItemFilter; // 0x518(0x08)

	void Construct(); // Function WBP_ContextMenu_SocialPlayer_Desktop.WBP_ContextMenu_SocialPlayer_Desktop_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnIsRealPlayerChanged(bool bIsRealPlayer); // Function WBP_ContextMenu_SocialPlayer_Desktop.WBP_ContextMenu_SocialPlayer_Desktop_C.OnIsRealPlayerChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_ContextMenu_SocialPlayer_Desktop_WBP_Panel_ContextMenuItemList_K2Node_ComponentBoundEvent_1_OnCloseContextMenuRequested__DelegateSignature(); // Function WBP_ContextMenu_SocialPlayer_Desktop.WBP_ContextMenu_SocialPlayer_Desktop_C.BndEvt__WBP_ContextMenu_SocialPlayer_Desktop_WBP_Panel_ContextMenuItemList_K2Node_ComponentBoundEvent_1_OnCloseContextMenuRequested__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_ContextMenu_SocialPlayer_Desktop(int32_t EntryPoint); // Function WBP_ContextMenu_SocialPlayer_Desktop.WBP_ContextMenu_SocialPlayer_Desktop_C.ExecuteUbergraph_WBP_ContextMenu_SocialPlayer_Desktop // (Final|UbergraphFunction) // @ game+0x1af5410
	void CloseContextMenuRequested__DelegateSignature(); // Function WBP_ContextMenu_SocialPlayer_Desktop.WBP_ContextMenu_SocialPlayer_Desktop_C.CloseContextMenuRequested__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

