// WidgetBlueprintGeneratedClass RoundMoneyGraph.RoundMoneyGraph_C
// Size: 0x638 (Inherited: 0x320)
struct URoundMoneyGraph_C : UDesignableUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UImage* AllyBar; // 0x328(0x08)
	struct UVerticalBox* Container; // 0x330(0x08)
	struct UImage* EnemyBar; // 0x338(0x08)
	struct UImage* Image_594; // 0x340(0x08)
	struct UImage* Image_862; // 0x348(0x08)
	struct UImage* Image_864; // 0x350(0x08)
	struct UImage* MVPRound; // 0x358(0x08)
	struct UTelemetryButton* RoundClickButton; // 0x360(0x08)
	struct UWidgetSwitcher* RoundIconSwitcher; // 0x368(0x08)
	struct URoundOutcomeIcon_C* RoundOutcomeIcon; // 0x370(0x08)
	struct UTextBlock* RoundText; // 0x378(0x08)
	struct UBorder* SelectBorder; // 0x380(0x08)
	int32_t RoundIndex; // 0x388(0x04)
	char pad_38C[0x4]; // 0x38c(0x04)
	struct FProcessedMatchDetails ProcessedMatchDetailsDTO; // 0x390(0x278)
	struct UAkAudioEvent* HoverSound; // 0x608(0x08)
	struct FMulticastInlineDelegate OnRoundClicked; // 0x610(0x10)
	double MaxMoney; // 0x620(0x08)
	struct FString TargetSubject; // 0x628(0x10)

	void HideBorder(); // Function RoundMoneyGraph.RoundMoneyGraph_C.HideBorder // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ShowBorder(); // Function RoundMoneyGraph.RoundMoneyGraph_C.ShowBorder // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetAsOTRound(); // Function RoundMoneyGraph.RoundMoneyGraph_C.SetAsOTRound // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void MoneyToYScale(int32_t Money, double& Scale); // Function RoundMoneyGraph.RoundMoneyGraph_C.MoneyToYScale // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void Construct(); // Function RoundMoneyGraph.RoundMoneyGraph_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__RoundClickButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function RoundMoneyGraph.RoundMoneyGraph_C.BndEvt__RoundClickButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__RoundClickButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function RoundMoneyGraph.RoundMoneyGraph_C.BndEvt__RoundClickButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function RoundMoneyGraph.RoundMoneyGraph_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_RoundMoneyGraph(int32_t EntryPoint); // Function RoundMoneyGraph.RoundMoneyGraph_C.ExecuteUbergraph_RoundMoneyGraph // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
	void OnRoundClicked__DelegateSignature(int32_t RoundIndex, struct URoundMoneyGraph_C* This); // Function RoundMoneyGraph.RoundMoneyGraph_C.OnRoundClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

