// WidgetBlueprintGeneratedClass MatchHistoryPopup.MatchHistoryPopup_C
// Size: 0x348 (Inherited: 0x318)
struct UMatchHistoryPopup_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UImage* Image_115; // 0x320(0x08)
	struct ULazyDynamicWidgetSwitcher_C* LazyDynamicWidgetSwitcher; // 0x328(0x08)
	struct USharedBackButton_C* SharedBackButton; // 0x330(0x08)
	struct TScriptInterface<IMatchHistoryWidgetInterface_C> MatchHistoryInterface; // 0x338(0x10)

	struct FAresMainMenuNavBarData GetNavBarData(); // Function MatchHistoryPopup.MatchHistoryPopup_C.GetNavBarData // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1af5410
	bool HandleBackRequest(); // Function MatchHistoryPopup.MatchHistoryPopup_C.HandleBackRequest // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function MatchHistoryPopup.MatchHistoryPopup_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__LazyDynamicWidgetSwitcher_K2Node_ComponentBoundEvent_1_EnabledWidgetCreated__DelegateSignature(struct UUserWidget* NewWidget); // Function MatchHistoryPopup.MatchHistoryPopup_C.BndEvt__LazyDynamicWidgetSwitcher_K2Node_ComponentBoundEvent_1_EnabledWidgetCreated__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__LazyDynamicWidgetSwitcher_K2Node_ComponentBoundEvent_2_DisabledWidgetCreated__DelegateSignature(struct UUserWidget* NewWidget); // Function MatchHistoryPopup.MatchHistoryPopup_C.BndEvt__LazyDynamicWidgetSwitcher_K2Node_ComponentBoundEvent_2_DisabledWidgetCreated__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void OnMatchClicked(struct FString MatchID, struct FString Subject); // Function MatchHistoryPopup.MatchHistoryPopup_C.OnMatchClicked // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnBackRequested(); // Function MatchHistoryPopup.MatchHistoryPopup_C.OnBackRequested // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnCloseMatch(); // Function MatchHistoryPopup.MatchHistoryPopup_C.OnCloseMatch // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void CustomEvent_1(); // Function MatchHistoryPopup.MatchHistoryPopup_C.CustomEvent_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_MatchHistoryPopup(int32_t EntryPoint); // Function MatchHistoryPopup.MatchHistoryPopup_C.ExecuteUbergraph_MatchHistoryPopup // (Final|UbergraphFunction) // @ game+0x1af5410
};

