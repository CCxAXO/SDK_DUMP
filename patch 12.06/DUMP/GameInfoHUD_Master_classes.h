// WidgetBlueprintGeneratedClass GameInfoHUD_Master.GameInfoHUD_Master_C
// Size: 0x359 (Inherited: 0x330)
struct UGameInfoHUD_Master_C : UCoordinatedHUDElement {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x330(0x08)
	struct UGFTDynamicWidgetSwitcher_C* GFTDynamicWidgetSwitcher; // 0x338(0x08)
	struct UGameInfoHUD_Content_v2_C* GameInfoContentV2; // 0x340(0x08)
	struct UCoordinatedHUDModel* HUDModel; // 0x348(0x08)
	struct UGameInfoHUD_Content_C* GameInfoContent; // 0x350(0x08)
	bool bShouldAddToPlayerScreen; // 0x358(0x01)

	void SetHUDModel(struct UCoordinatedHUDModel* HUDModel); // Function GameInfoHUD_Master.GameInfoHUD_Master_C.SetHUDModel // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__GFTDynamicWidgetSwitcher_K2Node_ComponentBoundEvent_0_EnabledWidgetCreated__DelegateSignature(struct UUserWidget* NewWidget); // Function GameInfoHUD_Master.GameInfoHUD_Master_C.BndEvt__GFTDynamicWidgetSwitcher_K2Node_ComponentBoundEvent_0_EnabledWidgetCreated__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__GFTDynamicWidgetSwitcher_K2Node_ComponentBoundEvent_1_DisabledWidgetCreated__DelegateSignature(struct UUserWidget* NewWidget); // Function GameInfoHUD_Master.GameInfoHUD_Master_C.BndEvt__GFTDynamicWidgetSwitcher_K2Node_ComponentBoundEvent_1_DisabledWidgetCreated__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_GameInfoHUD_Master(int32_t EntryPoint); // Function GameInfoHUD_Master.GameInfoHUD_Master_C.ExecuteUbergraph_GameInfoHUD_Master // (Final|UbergraphFunction) // @ game+0x1b42740
};

