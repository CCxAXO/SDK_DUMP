// WidgetBlueprintGeneratedClass MatchDetailsScoreboardTabSpikeRush.MatchDetailsScoreboardTabSpikeRush_C
// Size: 0x6f0 (Inherited: 0x5a9)
struct UMatchDetailsScoreboardTabSpikeRush_C : UMatchDetailsTabBase_C {
	char pad_5A9[0x7]; // 0x5a9(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5b0(0x08)
	struct UButton* DefusalSort; // 0x5b8(0x08)
	struct UButton* FirstBloodsSort; // 0x5c0(0x08)
	struct UImage* Image_145; // 0x5c8(0x08)
	struct UButton* KillSort; // 0x5d0(0x08)
	struct UButton* PlantsSort; // 0x5d8(0x08)
	struct ULazyPlatformWidgetLoaderAsOverlay_Universal_C* PlaybackButtonLazyLoader; // 0x5e0(0x08)
	struct UGridPanel* PlayerList; // 0x5e8(0x08)
	struct UButton* ScoreSort; // 0x5f0(0x08)
	struct USharedButtonMaster_C* TeamSortButton; // 0x5f8(0x08)
	struct FName AllyTeamID; // 0x600(0x0c)
	char pad_60C[0x4]; // 0x60c(0x04)
	struct TMap<struct FString, struct UGridSlot*> SubjectToWidgetMap; // 0x610(0x50)
	struct TArray<struct FPlayerDetailsDTO> Players; // 0x660(0x10)
	struct FString SortingCriteria; // 0x670(0x10)
	struct TArray<struct UMatchDetailsScoreboardTabPlayerSpikeRush_C*> WidgetArray; // 0x680(0x10)
	bool TeamSortEnabled; // 0x690(0x01)
	bool SortDescending; // 0x691(0x01)
	char pad_692[0x6]; // 0x692(0x06)
	struct UButton* CurrentSelectedButton; // 0x698(0x08)
	struct TMap<struct FString, struct UButton*> SortingCriteriaToButton; // 0x6a0(0x50)

	void LazyLoadPlaybackButton(); // Function MatchDetailsScoreboardTabSpikeRush.MatchDetailsScoreboardTabSpikeRush_C.LazyLoadPlaybackButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateSelectedButtons(struct FString SortingCriteria); // Function MatchDetailsScoreboardTabSpikeRush.MatchDetailsScoreboardTabSpikeRush_C.UpdateSelectedButtons // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SortPred(struct UObject* Value1, struct UObject* Value2, bool& output); // Function MatchDetailsScoreboardTabSpikeRush.MatchDetailsScoreboardTabSpikeRush_C.SortPred // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SortPlayersByContext(bool SortDescending, struct FString SortingCriteria); // Function MatchDetailsScoreboardTabSpikeRush.MatchDetailsScoreboardTabSpikeRush_C.SortPlayersByContext // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void CreateScoreboardPlayerWidgets(); // Function MatchDetailsScoreboardTabSpikeRush.MatchDetailsScoreboardTabSpikeRush_C.CreateScoreboardPlayerWidgets // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function MatchDetailsScoreboardTabSpikeRush.MatchDetailsScoreboardTabSpikeRush_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function MatchDetailsScoreboardTabSpikeRush.MatchDetailsScoreboardTabSpikeRush_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ScoreboardTabOnInit(); // Function MatchDetailsScoreboardTabSpikeRush.MatchDetailsScoreboardTabSpikeRush_C.ScoreboardTabOnInit // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__Button_39_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function MatchDetailsScoreboardTabSpikeRush.MatchDetailsScoreboardTabSpikeRush_C.BndEvt__Button_39_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__PlantsSort_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function MatchDetailsScoreboardTabSpikeRush.MatchDetailsScoreboardTabSpikeRush_C.BndEvt__PlantsSort_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__DefusalSort_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(); // Function MatchDetailsScoreboardTabSpikeRush.MatchDetailsScoreboardTabSpikeRush_C.BndEvt__DefusalSort_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__ScoreSort_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature(); // Function MatchDetailsScoreboardTabSpikeRush.MatchDetailsScoreboardTabSpikeRush_C.BndEvt__ScoreSort_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__KillSort_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature(); // Function MatchDetailsScoreboardTabSpikeRush.MatchDetailsScoreboardTabSpikeRush_C.BndEvt__KillSort_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__TeamSortButton_K2Node_ComponentBoundEvent_7_Clicked__DelegateSignature(); // Function MatchDetailsScoreboardTabSpikeRush.MatchDetailsScoreboardTabSpikeRush_C.BndEvt__TeamSortButton_K2Node_ComponentBoundEvent_7_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_MatchDetailsScoreboardTabSpikeRush(int32_t EntryPoint); // Function MatchDetailsScoreboardTabSpikeRush.MatchDetailsScoreboardTabSpikeRush_C.ExecuteUbergraph_MatchDetailsScoreboardTabSpikeRush // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

