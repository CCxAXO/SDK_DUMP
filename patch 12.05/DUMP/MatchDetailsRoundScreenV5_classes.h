// WidgetBlueprintGeneratedClass MatchDetailsRoundScreenV5.MatchDetailsRoundScreenV5_C
// Size: 0x650 (Inherited: 0x320)
struct UMatchDetailsRoundScreenV5_C : UMainMenuModalDialogueWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UTextBlock* AllyBankText; // 0x328(0x08)
	struct UTextBlock* AllyLoadoutText; // 0x330(0x08)
	struct UVerticalBox* AllyTeamScoresContainer; // 0x338(0x08)
	struct UTextBlock* BestRoundText; // 0x340(0x08)
	struct UTextBlock* EnemyBankText; // 0x348(0x08)
	struct UTextBlock* EnemyLoadoutText; // 0x350(0x08)
	struct UVerticalBox* EnemyTeamScoresContainer; // 0x358(0x08)
	struct UImage* Image_1; // 0x360(0x08)
	struct UImage* Image_333; // 0x368(0x08)
	struct UImage* Image_611; // 0x370(0x08)
	struct UMatchDetailsRoundScreenMapV5_C* MatchDetailsRoundScreenMapV5; // 0x378(0x08)
	struct UTextBlock* ResultIconText; // 0x380(0x08)
	struct UVerticalBox* RoundEventContainer; // 0x388(0x08)
	struct URoundMoneyGraphContainer_C* RoundMoneyGraphContainer; // 0x390(0x08)
	struct UTextBlock* RoundNumber; // 0x398(0x08)
	int32_t Round Index; // 0x3a0(0x04)
	char pad_3A4[0x4]; // 0x3a4(0x04)
	struct FProcessedMatchDetails Processed Match Details DTO; // 0x3a8(0x278)
	struct TArray<struct UMatchDetailsRoundEventV5_C*> EventArray; // 0x620(0x10)
	struct FString HighlightedKillVictim; // 0x630(0x10)
	struct FString TargetSubject; // 0x640(0x10)

	void InitializeViewWithVictim(struct FString Victim, int32_t RoundNum); // Function MatchDetailsRoundScreenV5.MatchDetailsRoundScreenV5_C.InitializeViewWithVictim // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetRoundResultText(struct FText& Result); // Function MatchDetailsRoundScreenV5.MatchDetailsRoundScreenV5_C.GetRoundResultText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SortEvents(struct UObject* NewParam, struct UObject* NewParam1, bool& NewParam2); // Function MatchDetailsRoundScreenV5.MatchDetailsRoundScreenV5_C.SortEvents // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void AddRoundEventToContainer(struct FString Event Type, struct FProcessedKillEvent KillEvent, struct FProcessedRoundResult RoundResult); // Function MatchDetailsRoundScreenV5.MatchDetailsRoundScreenV5_C.AddRoundEventToContainer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Populate Data(int32_t RoundIndex, struct FProcessedMatchDetails Processed Match Details DTO, struct FString TargetSubject); // Function MatchDetailsRoundScreenV5.MatchDetailsRoundScreenV5_C.Populate Data // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitializeViewFromData(); // Function MatchDetailsRoundScreenV5.MatchDetailsRoundScreenV5_C.InitializeViewFromData // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ChildIsUnhovered(); // Function MatchDetailsRoundScreenV5.MatchDetailsRoundScreenV5_C.ChildIsUnhovered // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnHover(struct FString EventType, struct FProcessedRoundResult RoundResult, struct FProcessedKillEvent KillEvent); // Function MatchDetailsRoundScreenV5.MatchDetailsRoundScreenV5_C.OnHover // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__RoundMoneyGraphContainer_K2Node_ComponentBoundEvent_0_OnRoundClicked__DelegateSignature(int32_t RoundIndex); // Function MatchDetailsRoundScreenV5.MatchDetailsRoundScreenV5_C.BndEvt__RoundMoneyGraphContainer_K2Node_ComponentBoundEvent_0_OnRoundClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void InitializeHeader(); // Function MatchDetailsRoundScreenV5.MatchDetailsRoundScreenV5_C.InitializeHeader // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_MatchDetailsRoundScreenV5(int32_t EntryPoint); // Function MatchDetailsRoundScreenV5.MatchDetailsRoundScreenV5_C.ExecuteUbergraph_MatchDetailsRoundScreenV5 // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

