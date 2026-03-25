// WidgetBlueprintGeneratedClass MatchDetailsScoreboardTabRespawnModes.MatchDetailsScoreboardTabRespawnModes_C
// Size: 0x6e9 (Inherited: 0x5a9)
struct UMatchDetailsScoreboardTabRespawnModes_C : UMatchDetailsTabBase_C {
	char pad_5A9[0x7]; // 0x5a9(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5b0(0x08)
	struct UImage* Image_57; // 0x5b8(0x08)
	struct UButton* KillSort; // 0x5c0(0x08)
	struct ULazyPlatformWidgetLoaderAsOverlay_Universal_C* PlaybackButtonLazyLoader; // 0x5c8(0x08)
	struct UOverlay* PlayerColumnHeader; // 0x5d0(0x08)
	struct UGridPanel* PlayerList; // 0x5d8(0x08)
	struct USharedBlurBg_C* SharedBlurBg; // 0x5e0(0x08)
	struct UWidgetSwitcher* SortButtonSwitcher; // 0x5e8(0x08)
	struct USharedButtonMaster_C* TeamSortButton; // 0x5f0(0x08)
	struct FName AllyTeamID; // 0x5f8(0x0c)
	char pad_604[0x4]; // 0x604(0x04)
	struct TMap<struct FString, struct UGridSlot*> SubjectToWidgetMap; // 0x608(0x50)
	struct TArray<struct FPlayerDetailsDTO> Players; // 0x658(0x10)
	struct FString SortingCriteria; // 0x668(0x10)
	struct TArray<struct UMatchDetailsScoreboardTabPlayerRespawnMode_C*> WidgetArray; // 0x678(0x10)
	bool SortDescending; // 0x688(0x01)
	char pad_689[0x7]; // 0x689(0x07)
	struct UButton* CurrentSelectedButton; // 0x690(0x08)
	struct TMap<struct FString, struct UButton*> SortingCriteriaToButton; // 0x698(0x50)
	bool TeamSortEnabled; // 0x6e8(0x01)

	void LazyLoadPlaybackButton(); // Function MatchDetailsScoreboardTabRespawnModes.MatchDetailsScoreboardTabRespawnModes_C.LazyLoadPlaybackButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateSelectedButtons(); // Function MatchDetailsScoreboardTabRespawnModes.MatchDetailsScoreboardTabRespawnModes_C.UpdateSelectedButtons // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SortPred(struct UObject* Value1, struct UObject* Value2, bool& output); // Function MatchDetailsScoreboardTabRespawnModes.MatchDetailsScoreboardTabRespawnModes_C.SortPred // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SortPlayersByContext(bool SortDescending, struct FString SortingCriteria); // Function MatchDetailsScoreboardTabRespawnModes.MatchDetailsScoreboardTabRespawnModes_C.SortPlayersByContext // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void CreateScoreboardPlayerWidgets(); // Function MatchDetailsScoreboardTabRespawnModes.MatchDetailsScoreboardTabRespawnModes_C.CreateScoreboardPlayerWidgets // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function MatchDetailsScoreboardTabRespawnModes.MatchDetailsScoreboardTabRespawnModes_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function MatchDetailsScoreboardTabRespawnModes.MatchDetailsScoreboardTabRespawnModes_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ScoreboardTabOnInit(); // Function MatchDetailsScoreboardTabRespawnModes.MatchDetailsScoreboardTabRespawnModes_C.ScoreboardTabOnInit // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__KillSort_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature(); // Function MatchDetailsScoreboardTabRespawnModes.MatchDetailsScoreboardTabRespawnModes_C.BndEvt__KillSort_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__TeamSortButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(); // Function MatchDetailsScoreboardTabRespawnModes.MatchDetailsScoreboardTabRespawnModes_C.BndEvt__TeamSortButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void SetTeamSortEnabled(bool Enabled); // Function MatchDetailsScoreboardTabRespawnModes.MatchDetailsScoreboardTabRespawnModes_C.SetTeamSortEnabled // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_MatchDetailsScoreboardTabRespawnModes(int32_t EntryPoint); // Function MatchDetailsScoreboardTabRespawnModes.MatchDetailsScoreboardTabRespawnModes_C.ExecuteUbergraph_MatchDetailsScoreboardTabRespawnModes // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

