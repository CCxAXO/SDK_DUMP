// WidgetBlueprintGeneratedClass RoundMoneyGraphContainer.RoundMoneyGraphContainer_C
// Size: 0x600 (Inherited: 0x320)
struct URoundMoneyGraphContainer_C : UDesignableUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UHorizontalBox* Container; // 0x328(0x08)
	struct UImage* Image_1; // 0x330(0x08)
	struct UOverlay* OvertimeOverlay; // 0x338(0x08)
	struct UHorizontalBox* Rounds; // 0x340(0x08)
	struct UOverlay* SideSwapIconOverlay; // 0x348(0x08)
	struct FProcessedMatchDetails ProcessedMatchDetailsDTO; // 0x350(0x278)
	struct UAkAudioEvent* HoverSound; // 0x5c8(0x08)
	struct FMulticastInlineDelegate OnRoundClicked; // 0x5d0(0x10)
	int32_t RoundSwapIndex; // 0x5e0(0x04)
	char pad_5E4[0x4]; // 0x5e4(0x04)
	struct URoundMoneyGraph_C* ClickedRound; // 0x5e8(0x08)
	struct FString TargetSubject; // 0x5f0(0x10)

	void PreConstruct(bool IsDesignTime); // Function RoundMoneyGraphContainer.RoundMoneyGraphContainer_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Initialize(struct FProcessedMatchDetails ProcessMatchDetailsDTO, int32_t RoundIndex, struct FString TargetSubject); // Function RoundMoneyGraphContainer.RoundMoneyGraphContainer_C.Initialize // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnARoundClicked(int32_t RoundIndex, struct URoundMoneyGraph_C* This); // Function RoundMoneyGraphContainer.RoundMoneyGraphContainer_C.OnARoundClicked // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_RoundMoneyGraphContainer(int32_t EntryPoint); // Function RoundMoneyGraphContainer.RoundMoneyGraphContainer_C.ExecuteUbergraph_RoundMoneyGraphContainer // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
	void OnRoundClicked__DelegateSignature(int32_t RoundIndex); // Function RoundMoneyGraphContainer.RoundMoneyGraphContainer_C.OnRoundClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

