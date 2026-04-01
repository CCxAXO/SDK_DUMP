// WidgetBlueprintGeneratedClass PregameParentWidgetBP.PregameParentWidgetBP_C
// Size: 0x570 (Inherited: 0x558)
struct UPregameParentWidgetBP_C : UPregameParentWidgetBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x558(0x08)
	struct ULazyDynamicWidgetSwitcher_C* PregameThreadedChatWidgetSwitcher; // 0x560(0x08)
	struct UWidgetSwitcher* ScreensContainer; // 0x568(0x08)

	void AddScreen(struct UWidget* Screen); // Function PregameParentWidgetBP.PregameParentWidgetBP_C.AddScreen // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetScreen(struct UWidget* Screen); // Function PregameParentWidgetBP.PregameParentWidgetBP_C.SetScreen // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__PregameThreadedChatWidgetSwitcher_K2Node_ComponentBoundEvent_0_EnabledWidgetCreated__DelegateSignature(struct UUserWidget* NewWidget); // Function PregameParentWidgetBP.PregameParentWidgetBP_C.BndEvt__PregameThreadedChatWidgetSwitcher_K2Node_ComponentBoundEvent_0_EnabledWidgetCreated__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_PregameParentWidgetBP(int32_t EntryPoint); // Function PregameParentWidgetBP.PregameParentWidgetBP_C.ExecuteUbergraph_PregameParentWidgetBP // (Final|UbergraphFunction) // @ game+0x1b42740
};

