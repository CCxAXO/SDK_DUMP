// WidgetBlueprintGeneratedClass MatchHistoryScreenWidgetV3.MatchHistoryScreenWidgetV3_C
// Size: 0x388 (Inherited: 0x320)
struct UMatchHistoryScreenWidgetV3_C : UMatchHistoryScreenV2 {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct ULazyDynamicWidgetSwitcher_C* LazyDynamicWidgetSwitcher; // 0x328(0x08)
	struct UImage* LightingSweeps; // 0x330(0x08)
	struct UMatchHistoryWidgetV2_C* MatchHistoryWidget; // 0x338(0x08)
	struct UTabbedMatchHistoryWidget_C* TabbedHistoryWidget; // 0x340(0x08)
	struct TScriptInterface<IMatchHistoryWidgetInterface_C> MatchHistoryInterface; // 0x348(0x10)
	struct UAkAudioEvent* AUD_Click_Match_History_Open; // 0x358(0x08)
	struct FAresMainMenuNavBarData AresNavBarData; // 0x360(0x28)

	struct FAresMainMenuNavBarData GetNavBarData(); // Function MatchHistoryScreenWidgetV3.MatchHistoryScreenWidgetV3_C.GetNavBarData // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1b42740
	bool HandleBackRequest(); // Function MatchHistoryScreenWidgetV3.MatchHistoryScreenWidgetV3_C.HandleBackRequest // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__LazyDynamicWidgetSwitcher_K2Node_ComponentBoundEvent_0_DisabledWidgetCreated__DelegateSignature(struct UUserWidget* NewWidget); // Function MatchHistoryScreenWidgetV3.MatchHistoryScreenWidgetV3_C.BndEvt__LazyDynamicWidgetSwitcher_K2Node_ComponentBoundEvent_0_DisabledWidgetCreated__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__LazyDynamicWidgetSwitcher_K2Node_ComponentBoundEvent_2_EnabledWidgetCreated__DelegateSignature(struct UUserWidget* NewWidget); // Function MatchHistoryScreenWidgetV3.MatchHistoryScreenWidgetV3_C.BndEvt__LazyDynamicWidgetSwitcher_K2Node_ComponentBoundEvent_2_EnabledWidgetCreated__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function MatchHistoryScreenWidgetV3.MatchHistoryScreenWidgetV3_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void BackRequested(); // Function MatchHistoryScreenWidgetV3.MatchHistoryScreenWidgetV3_C.BackRequested // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnMatchClicked(struct FString MatchID, struct FString Subject); // Function MatchHistoryScreenWidgetV3.MatchHistoryScreenWidgetV3_C.OnMatchClicked // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnClose(); // Function MatchHistoryScreenWidgetV3.MatchHistoryScreenWidgetV3_C.OnClose // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_MatchHistoryScreenWidgetV3(int32_t EntryPoint); // Function MatchHistoryScreenWidgetV3.MatchHistoryScreenWidgetV3_C.ExecuteUbergraph_MatchHistoryScreenWidgetV3 // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

