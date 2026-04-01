// WidgetBlueprintGeneratedClass WBP_ContextMenuAnchor_SocialPlayer.WBP_ContextMenuAnchor_SocialPlayer_C
// Size: 0x3a0 (Inherited: 0x338)
struct UWBP_ContextMenuAnchor_SocialPlayer_C : UWBP_ContextMenuAnchor_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x338(0x08)
	struct UAresMenuAnchor* MenuAnchor; // 0x340(0x08)
	struct UNamedSlot* RightClickableContent; // 0x348(0x08)
	bool bAnchorOnMouse; // 0x350(0x01)
	char pad_351[0x3]; // 0x351(0x03)
	struct FMargin MouseAnchoredPadding; // 0x354(0x10)
	enum class EMenuPlacement NonMouseAnchoredPlacement; // 0x364(0x01)
	char pad_365[0x3]; // 0x365(0x03)
	struct UAresContextMenuItemFilterDataAsset* ItemFilter; // 0x368(0x08)
	struct FString PlayerSubject; // 0x370(0x10)
	struct FString MatchID; // 0x380(0x10)
	struct FGuid OverridePlayerCardID; // 0x390(0x10)

	void SetOverridePlayerCardID(struct FGuid OverridePlayerCardID); // Function WBP_ContextMenuAnchor_SocialPlayer.WBP_ContextMenuAnchor_SocialPlayer_C.SetOverridePlayerCardID // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetMatchID(struct FString MatchID); // Function WBP_ContextMenuAnchor_SocialPlayer.WBP_ContextMenuAnchor_SocialPlayer_C.SetMatchID // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetPlayerSubject(struct FString PlayerSubject); // Function WBP_ContextMenuAnchor_SocialPlayer.WBP_ContextMenuAnchor_SocialPlayer_C.SetPlayerSubject // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetItemFilter(struct UAresContextMenuItemFilterDataAsset* ItemFilter); // Function WBP_ContextMenuAnchor_SocialPlayer.WBP_ContextMenuAnchor_SocialPlayer_C.SetItemFilter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleCloseContextMenuRequested(); // Function WBP_ContextMenuAnchor_SocialPlayer.WBP_ContextMenuAnchor_SocialPlayer_C.HandleCloseContextMenuRequested // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	struct UUserWidget* On_MenuAnchor_GetUserMenuContent(); // Function WBP_ContextMenuAnchor_SocialPlayer.WBP_ContextMenuAnchor_SocialPlayer_C.On_MenuAnchor_GetUserMenuContent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void CloseContextMenuViaNavSystem(); // Function WBP_ContextMenuAnchor_SocialPlayer.WBP_ContextMenuAnchor_SocialPlayer_C.CloseContextMenuViaNavSystem // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void CloseContextMenuViaMenuAnchor(); // Function WBP_ContextMenuAnchor_SocialPlayer.WBP_ContextMenuAnchor_SocialPlayer_C.CloseContextMenuViaMenuAnchor // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OpenContextMenuViaNavSystem(); // Function WBP_ContextMenuAnchor_SocialPlayer.WBP_ContextMenuAnchor_SocialPlayer_C.OpenContextMenuViaNavSystem // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OpenContextMenuViaMenuAnchor(); // Function WBP_ContextMenuAnchor_SocialPlayer.WBP_ContextMenuAnchor_SocialPlayer_C.OpenContextMenuViaMenuAnchor // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function WBP_ContextMenuAnchor_SocialPlayer.WBP_ContextMenuAnchor_SocialPlayer_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__WBP_ContextMenuAnchor_SocialPlayer_MenuAnchor_K2Node_ComponentBoundEvent_1_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen); // Function WBP_ContextMenuAnchor_SocialPlayer.WBP_ContextMenuAnchor_SocialPlayer_C.BndEvt__WBP_ContextMenuAnchor_SocialPlayer_MenuAnchor_K2Node_ComponentBoundEvent_1_OnMenuOpenChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_ContextMenuAnchor_SocialPlayer(int32_t EntryPoint); // Function WBP_ContextMenuAnchor_SocialPlayer.WBP_ContextMenuAnchor_SocialPlayer_C.ExecuteUbergraph_WBP_ContextMenuAnchor_SocialPlayer // (Final|UbergraphFunction) // @ game+0x1b42740
};

