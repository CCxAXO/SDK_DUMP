// WidgetBlueprintGeneratedClass MatchDetailsScoreboardTabDeathmatch.MatchDetailsScoreboardTabDeathmatch_C
// Size: 0x6f1 (Inherited: 0x5a9)
struct UMatchDetailsScoreboardTabDeathmatch_C : UMatchDetailsTabBase_C {
	char pad_5A9[0x7]; // 0x5a9(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5b0(0x08)
	struct UImage* Image_57; // 0x5b8(0x08)
	struct UButton* KillSort; // 0x5c0(0x08)
	struct ULazyPlatformWidgetLoaderAsOverlay_Universal_C* PlaybackButtonLazyLoader; // 0x5c8(0x08)
	struct UOverlay* PlayerColumnHeader; // 0x5d0(0x08)
	struct UGridPanel* PlayerList; // 0x5d8(0x08)
	struct UButton* ScoreSort; // 0x5e0(0x08)
	struct USharedBlurBg_C* SharedBlurBg; // 0x5e8(0x08)
	struct UWidgetSwitcher* SortButtonSwitcher; // 0x5f0(0x08)
	struct USharedButtonMaster_C* TeamSortButton; // 0x5f8(0x08)
	struct FName AllyTeamID; // 0x600(0x0c)
	char pad_60C[0x4]; // 0x60c(0x04)
	struct TMap<struct FString, struct UGridSlot*> SubjectToWidgetMap; // 0x610(0x50)
	struct TArray<struct FPlayerDetailsDTO> Players; // 0x660(0x10)
	struct FString SortingCriteria; // 0x670(0x10)
	struct TArray<struct UMatchDetailsScoreboardTabPlayerDeathmatch_C*> WidgetArray; // 0x680(0x10)
	bool SortDescending; // 0x690(0x01)
	char pad_691[0x7]; // 0x691(0x07)
	struct UButton* CurrentSelectedButton; // 0x698(0x08)
	struct TMap<struct FString, struct UButton*> SortingCriteriaToButton; // 0x6a0(0x50)
	bool TeamSortEnabled; // 0x6f0(0x01)

	void LazyLoadPlaybackButton(); // Function MatchDetailsScoreboardTabDeathmatch.MatchDetailsScoreboardTabDeathmatch_C.LazyLoadPlaybackButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateSelectedButtons(); // Function MatchDetailsScoreboardTabDeathmatch.MatchDetailsScoreboardTabDeathmatch_C.UpdateSelectedButtons // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SortPred(struct UObject* Value1, struct UObject* Value2, bool& output); // Function MatchDetailsScoreboardTabDeathmatch.MatchDetailsScoreboardTabDeathmatch_C.SortPred // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SortPlayersByContext(bool SortDescending, struct FString SortingCriteria); // Function MatchDetailsScoreboardTabDeathmatch.MatchDetailsScoreboardTabDeathmatch_C.SortPlayersByContext // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void CreateScoreboardPlayerWidgets(); // Function MatchDetailsScoreboardTabDeathmatch.MatchDetailsScoreboardTabDeathmatch_C.CreateScoreboardPlayerWidgets // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function MatchDetailsScoreboardTabDeathmatch.MatchDetailsScoreboardTabDeathmatch_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function MatchDetailsScoreboardTabDeathmatch.MatchDetailsScoreboardTabDeathmatch_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ScoreboardTabOnInit(); // Function MatchDetailsScoreboardTabDeathmatch.MatchDetailsScoreboardTabDeathmatch_C.ScoreboardTabOnInit // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__ScoreSort_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature(); // Function MatchDetailsScoreboardTabDeathmatch.MatchDetailsScoreboardTabDeathmatch_C.BndEvt__ScoreSort_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__KillSort_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature(); // Function MatchDetailsScoreboardTabDeathmatch.MatchDetailsScoreboardTabDeathmatch_C.BndEvt__KillSort_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__TeamSortButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(); // Function MatchDetailsScoreboardTabDeathmatch.MatchDetailsScoreboardTabDeathmatch_C.BndEvt__TeamSortButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void SetTeamSortEnabled(bool Enabled); // Function MatchDetailsScoreboardTabDeathmatch.MatchDetailsScoreboardTabDeathmatch_C.SetTeamSortEnabled // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_MatchDetailsScoreboardTabDeathmatch(int32_t EntryPoint); // Function MatchDetailsScoreboardTabDeathmatch.MatchDetailsScoreboardTabDeathmatch_C.ExecuteUbergraph_MatchDetailsScoreboardTabDeathmatch // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

