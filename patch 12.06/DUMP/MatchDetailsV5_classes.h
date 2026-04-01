// WidgetBlueprintGeneratedClass MatchDetailsV5.MatchDetailsV5_C
// Size: 0x401 (Inherited: 0x318)
struct UMatchDetailsV5_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UImage* Background; // 0x320(0x08)
	struct UCanvasPanel* BombGameWidgets; // 0x328(0x08)
	struct UHorizontalBox* closeButtonContainer; // 0x330(0x08)
	struct UImage* GameModeLoadingThrobber; // 0x338(0x08)
	struct UWidgetSwitcher* GameModeWidgetSwitcher; // 0x340(0x08)
	struct UCanvasPanel* InvalidGameWidget; // 0x348(0x08)
	struct UMatchDetailsBombMode_C* MatchDetailsBombMode; // 0x350(0x08)
	struct USharedButtonMaster_C* PlayGameButton; // 0x358(0x08)
	struct USharedBackButton_C* SharedBackButton; // 0x360(0x08)
	struct USharedButtonMaster_C* ShootingRangeButton; // 0x368(0x08)
	struct UCanvasPanel* ShootingRangeWidgets; // 0x370(0x08)
	struct UCanvasPanel* SkillTestWidgets; // 0x378(0x08)
	struct UTextBlock* TextBlock_1; // 0x380(0x08)
	struct UTextBlock* TextBlock_2; // 0x388(0x08)
	struct UTextBlock* TextBlock_3; // 0x390(0x08)
	struct UCanvasPanel* UncompletedGameWidgets; // 0x398(0x08)
	struct UCanvasPanel* WaitingForMatchDetails; // 0x3a0(0x08)
	struct USharedButtonMaster_C* WaitingForMatchDetailsButton; // 0x3a8(0x08)
	bool UserIsWinner; // 0x3b0(0x01)
	bool IsLoadingDetails; // 0x3b1(0x01)
	char pad_3B2[0x6]; // 0x3b2(0x06)
	struct FString MatchID; // 0x3b8(0x10)
	struct UMatchDetailsViewModel* MatchDetailsViewModel; // 0x3c8(0x08)
	struct FMulticastInlineDelegate CloseMatchDetailsClicked; // 0x3d0(0x10)
	bool MatchDetailsLoaded; // 0x3e0(0x01)
	char pad_3E1[0x3]; // 0x3e1(0x03)
	struct FName WaitingForMatchDetailsDelayConfig; // 0x3e4(0x0c)
	struct FString TargetSubject; // 0x3f0(0x10)
	bool IsEndOfGame; // 0x400(0x01)

	struct FAresMainMenuNavBarData GetNavBarData(); // Function MatchDetailsV5.MatchDetailsV5_C.GetNavBarData // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1b42740
	bool HandleBackRequest(); // Function MatchDetailsV5.MatchDetailsV5_C.HandleBackRequest // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetCloseButtonVisibility(); // Function MatchDetailsV5.MatchDetailsV5_C.SetCloseButtonVisibility // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnGameModeDataLoaded(struct UGameModeHandle* Mode); // Function MatchDetailsV5.MatchDetailsV5_C.OnGameModeDataLoaded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Init(struct FString MatchID, struct FString Subject, bool IsEndOfGame); // Function MatchDetailsV5.MatchDetailsV5_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitializeWidgetDataForGameMode(); // Function MatchDetailsV5.MatchDetailsV5_C.InitializeWidgetDataForGameMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetActiveWidgetFromGameMode(); // Function MatchDetailsV5.MatchDetailsV5_C.SetActiveWidgetFromGameMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetMatchDetails(struct FMatchDetailsDTO& NewMatchDetails); // Function MatchDetailsV5.MatchDetailsV5_C.SetMatchDetails // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void LoadMatchDetails(); // Function MatchDetailsV5.MatchDetailsV5_C.LoadMatchDetails // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnMatchDetailsSuccess(struct FMatchDetailsDTO& MatchDetails); // Function MatchDetailsV5.MatchDetailsV5_C.OnMatchDetailsSuccess // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnMatchDetailsError(); // Function MatchDetailsV5.MatchDetailsV5_C.OnMatchDetailsError // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnCloseMatchDetailsClicked(); // Function MatchDetailsV5.MatchDetailsV5_C.OnCloseMatchDetailsClicked // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function MatchDetailsV5.MatchDetailsV5_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void DetailsLoaded(); // Function MatchDetailsV5.MatchDetailsV5_C.DetailsLoaded // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__SharedBackButton_K2Node_ComponentBoundEvent_1_OnBackRequested__DelegateSignature(); // Function MatchDetailsV5.MatchDetailsV5_C.BndEvt__SharedBackButton_K2Node_ComponentBoundEvent_1_OnBackRequested__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__ShootingRangeButton_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature(); // Function MatchDetailsV5.MatchDetailsV5_C.BndEvt__ShootingRangeButton_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__PlayGameButton_K2Node_ComponentBoundEvent_7_Clicked__DelegateSignature(); // Function MatchDetailsV5.MatchDetailsV5_C.BndEvt__PlayGameButton_K2Node_ComponentBoundEvent_7_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__WaitingForMatchDetailsButton_K2Node_ComponentBoundEvent_8_Clicked__DelegateSignature(); // Function MatchDetailsV5.MatchDetailsV5_C.BndEvt__WaitingForMatchDetailsButton_K2Node_ComponentBoundEvent_8_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function MatchDetailsV5.MatchDetailsV5_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_MatchDetailsV5(int32_t EntryPoint); // Function MatchDetailsV5.MatchDetailsV5_C.ExecuteUbergraph_MatchDetailsV5 // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
	void CloseMatchDetailsClicked__DelegateSignature(); // Function MatchDetailsV5.MatchDetailsV5_C.CloseMatchDetailsClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

