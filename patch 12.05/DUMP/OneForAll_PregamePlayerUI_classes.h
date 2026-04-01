// WidgetBlueprintGeneratedClass OneForAll_PregamePlayerUI.OneForAll_PregamePlayerUI_C
// Size: 0x350 (Inherited: 0x318)
struct UOneForAll_PregamePlayerUI_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UOneForAll_CharacterListV2_C* CharacterListV2; // 0x320(0x08)
	struct UOneForAll_CharacterSelectLeftPanelV2_C* CharacterSelectLeftPanelV2; // 0x328(0x08)
	struct UCharacterSelectRightPanelV2_C* CharacterSelectRightPanelV2; // 0x330(0x08)
	struct UPlayerFacingPerfTextGroup_C* PlayerFacingPerfTextGroup; // 0x338(0x08)
	struct ULazyDynamicWidgetSwitcher_C* PregameThreadedChatWidgetSwitcher; // 0x340(0x08)
	struct UUniversalProgressionWidget_C* UPW; // 0x348(0x08)

	void BndEvt__PregameThreadedChatWidgetSwitcher_K2Node_ComponentBoundEvent_0_EnabledWidgetCreated__DelegateSignature(struct UUserWidget* NewWidget); // Function OneForAll_PregamePlayerUI.OneForAll_PregamePlayerUI_C.BndEvt__PregameThreadedChatWidgetSwitcher_K2Node_ComponentBoundEvent_0_EnabledWidgetCreated__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function OneForAll_PregamePlayerUI.OneForAll_PregamePlayerUI_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnIsLocalPlayerCoachChanged(bool NewValue); // Function OneForAll_PregamePlayerUI.OneForAll_PregamePlayerUI_C.OnIsLocalPlayerCoachChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_OneForAll_PregamePlayerUI(int32_t EntryPoint); // Function OneForAll_PregamePlayerUI.OneForAll_PregamePlayerUI_C.ExecuteUbergraph_OneForAll_PregamePlayerUI // (Final|UbergraphFunction) // @ game+0x1af5410
};

