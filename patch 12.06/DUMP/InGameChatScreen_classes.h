// WidgetBlueprintGeneratedClass InGameChatScreen.InGameChatScreen_C
// Size: 0x340 (Inherited: 0x330)
struct UInGameChatScreen_C : UCoordinatedHUDElement {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x330(0x08)
	struct ULazyDynamicWidgetSwitcher_C* LazyDynamicWidgetSwitcher; // 0x338(0x08)

	struct FEventReply OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function InGameChatScreen.InGameChatScreen_C.OnKeyDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	struct FEventReply OnKeyUp(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function InGameChatScreen.InGameChatScreen_C.OnKeyUp // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetHUDModel(struct UCoordinatedHUDModel* HUDModel); // Function InGameChatScreen.InGameChatScreen_C.SetHUDModel // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnRemovedFromFocusPath(struct FFocusEvent InFocusEvent); // Function InGameChatScreen.InGameChatScreen_C.OnRemovedFromFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnAddedToFocusPath(struct FFocusEvent InFocusEvent); // Function InGameChatScreen.InGameChatScreen_C.OnAddedToFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__LazyDynamicWidgetSwitcher_K2Node_ComponentBoundEvent_2_EnabledWidgetCreated__DelegateSignature(struct UUserWidget* NewWidget); // Function InGameChatScreen.InGameChatScreen_C.BndEvt__LazyDynamicWidgetSwitcher_K2Node_ComponentBoundEvent_2_EnabledWidgetCreated__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function InGameChatScreen.InGameChatScreen_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnCinematicModeUpdated(); // Function InGameChatScreen.InGameChatScreen_C.OnCinematicModeUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_InGameChatScreen(int32_t EntryPoint); // Function InGameChatScreen.InGameChatScreen_C.ExecuteUbergraph_InGameChatScreen // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

