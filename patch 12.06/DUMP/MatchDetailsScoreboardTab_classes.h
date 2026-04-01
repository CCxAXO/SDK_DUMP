// WidgetBlueprintGeneratedClass MatchDetailsScoreboardTab.MatchDetailsScoreboardTab_C
// Size: 0x6f8 (Inherited: 0x5a9)
struct UMatchDetailsScoreboardTab_C : UMatchDetailsTabBase_C {
	char pad_5A9[0x7]; // 0x5a9(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5b0(0x08)
	struct UButton* DefusalSort; // 0x5b8(0x08)
	struct UButton* EconRatingSort; // 0x5c0(0x08)
	struct UButton* FirstBloodsSort; // 0x5c8(0x08)
	struct UImage* Image_145; // 0x5d0(0x08)
	struct UButton* KillSort; // 0x5d8(0x08)
	struct UButton* PlantsSort; // 0x5e0(0x08)
	struct ULazyPlatformWidgetLoaderAsOverlay_Universal_C* PlaybackButtonLazyLoader; // 0x5e8(0x08)
	struct UGridPanel* PlayerList; // 0x5f0(0x08)
	struct UButton* ScoreSort; // 0x5f8(0x08)
	struct USharedButtonMaster_C* TeamSortButton; // 0x600(0x08)
	struct FName AllyTeamID; // 0x608(0x0c)
	char pad_614[0x4]; // 0x614(0x04)
	struct TMap<struct FString, struct UGridSlot*> SubjectToWidgetMap; // 0x618(0x50)
	struct TArray<struct FPlayerDetailsDTO> Players; // 0x668(0x10)
	struct FString SortingCriteria; // 0x678(0x10)
	struct TArray<struct UMatchDetailsScoreboardTabPlayer_C*> WidgetArray; // 0x688(0x10)
	bool TeamSortEnabled; // 0x698(0x01)
	bool SortDescending; // 0x699(0x01)
	char pad_69A[0x6]; // 0x69a(0x06)
	struct UButton* CurrentSelectedButton; // 0x6a0(0x08)
	struct TMap<struct FString, struct UButton*> SortingCriteriaToButton; // 0x6a8(0x50)

	void LazyLoadPlaybackButton(); // Function MatchDetailsScoreboardTab.MatchDetailsScoreboardTab_C.LazyLoadPlaybackButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateSelectedButtons(struct FString SortingCriteria); // Function MatchDetailsScoreboardTab.MatchDetailsScoreboardTab_C.UpdateSelectedButtons // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SortPred(struct UObject* Value1, struct UObject* Value2, bool& output); // Function MatchDetailsScoreboardTab.MatchDetailsScoreboardTab_C.SortPred // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SortPlayersByContext(bool SortDescending, struct FString SortingCriteria); // Function MatchDetailsScoreboardTab.MatchDetailsScoreboardTab_C.SortPlayersByContext // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void CreateScoreboardPlayerWidgets(); // Function MatchDetailsScoreboardTab.MatchDetailsScoreboardTab_C.CreateScoreboardPlayerWidgets // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function MatchDetailsScoreboardTab.MatchDetailsScoreboardTab_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function MatchDetailsScoreboardTab.MatchDetailsScoreboardTab_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ScoreboardTabOnInit(); // Function MatchDetailsScoreboardTab.MatchDetailsScoreboardTab_C.ScoreboardTabOnInit // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__Button_39_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function MatchDetailsScoreboardTab.MatchDetailsScoreboardTab_C.BndEvt__Button_39_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__PlantsSort_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function MatchDetailsScoreboardTab.MatchDetailsScoreboardTab_C.BndEvt__PlantsSort_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__DefusalSort_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(); // Function MatchDetailsScoreboardTab.MatchDetailsScoreboardTab_C.BndEvt__DefusalSort_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__EconRatingSort_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature(); // Function MatchDetailsScoreboardTab.MatchDetailsScoreboardTab_C.BndEvt__EconRatingSort_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__ScoreSort_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature(); // Function MatchDetailsScoreboardTab.MatchDetailsScoreboardTab_C.BndEvt__ScoreSort_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__KillSort_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature(); // Function MatchDetailsScoreboardTab.MatchDetailsScoreboardTab_C.BndEvt__KillSort_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__TeamSortButton_K2Node_ComponentBoundEvent_7_Clicked__DelegateSignature(); // Function MatchDetailsScoreboardTab.MatchDetailsScoreboardTab_C.BndEvt__TeamSortButton_K2Node_ComponentBoundEvent_7_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_MatchDetailsScoreboardTab(int32_t EntryPoint); // Function MatchDetailsScoreboardTab.MatchDetailsScoreboardTab_C.ExecuteUbergraph_MatchDetailsScoreboardTab // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

