// WidgetBlueprintGeneratedClass TournamentsMatchHistory.TournamentsMatchHistory_C
// Size: 0x418 (Inherited: 0x320)
struct UTournamentsMatchHistory_C : URosterMatchHistoryScreen {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UOverlay* Error; // 0x328(0x08)
	struct UImage* Image; // 0x330(0x08)
	struct UImage* Image_2; // 0x338(0x08)
	struct UImage* Image_4; // 0x340(0x08)
	struct UImage* Image_112; // 0x348(0x08)
	struct UImage* img_deco_left; // 0x350(0x08)
	struct UImage* img_deco_right; // 0x358(0x08)
	struct UImage* IMG_HeaderBG; // 0x360(0x08)
	struct UButton* InfoBtn_2; // 0x368(0x08)
	struct UImage* Loader; // 0x370(0x08)
	struct UVerticalBox* MatchesContainer; // 0x378(0x08)
	struct UOverlay* NoMatches; // 0x380(0x08)
	struct UOverlay* NoRosterError; // 0x388(0x08)
	struct UButton* PremierDivisionsInfoButton; // 0x390(0x08)
	struct UTextBlock* RosterName; // 0x398(0x08)
	struct UTextBlock* RosterTag; // 0x3a0(0x08)
	struct UScrollBox* ScrollBox_MatchContainer; // 0x3a8(0x08)
	struct USharedBlurBg_C* SharedBlurBg; // 0x3b0(0x08)
	struct UTextBlock* T_DivisionGroup; // 0x3b8(0x08)
	struct UTournamentsTeamCustomization_C* TournamentsTeamCustomization; // 0x3c0(0x08)
	struct UTournamentsTeamCustomization_C* TournamentsTeamCustomization_2; // 0x3c8(0x08)
	struct UVerticalBox* VB_Division; // 0x3d0(0x08)
	struct UWBP_Division_Icon_C* WBP_Division_Icon; // 0x3d8(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_1; // 0x3e0(0x08)
	struct FString RosterID; // 0x3e8(0x10)
	struct FMargin EntryPadding; // 0x3f8(0x10)
	struct UPremierRosterMatchHistoryModelOld* MatchHistoryModel; // 0x408(0x08)
	struct UWidget* ActiveWidget; // 0x410(0x08)

	void InitTeamInfo(struct URosterModel* RosterModel, struct UPremierRosterViewModel* PremierRosterViewModel); // Function TournamentsMatchHistory.TournamentsMatchHistory_C.InitTeamInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function TournamentsMatchHistory.TournamentsMatchHistory_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function TournamentsMatchHistory.TournamentsMatchHistory_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnLoadingChanged(bool NewValue); // Function TournamentsMatchHistory.TournamentsMatchHistory_C.OnLoadingChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Initialize(); // Function TournamentsMatchHistory.TournamentsMatchHistory_C.Initialize // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnMatchOpened(struct FString MatchID); // Function TournamentsMatchHistory.TournamentsMatchHistory_C.OnMatchOpened // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnBracketOpened(struct FString TournamentID); // Function TournamentsMatchHistory.TournamentsMatchHistory_C.OnBracketOpened // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnClosed(); // Function TournamentsMatchHistory.TournamentsMatchHistory_C.OnClosed // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnBracketClosed(); // Function TournamentsMatchHistory.TournamentsMatchHistory_C.OnBracketClosed // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnPremierRosterViewModelUpdated(struct UPremierRosterViewModel* UpdatedPremierRosterModel); // Function TournamentsMatchHistory.TournamentsMatchHistory_C.OnPremierRosterViewModelUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__TournamentsMatchHistory_PremierDivisionsInfoButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function TournamentsMatchHistory.TournamentsMatchHistory_C.BndEvt__TournamentsMatchHistory_PremierDivisionsInfoButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__TournamentsMatchHistory_InfoBtn_1_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(); // Function TournamentsMatchHistory.TournamentsMatchHistory_C.BndEvt__TournamentsMatchHistory_InfoBtn_1_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void OnEntriesUpdated(); // Function TournamentsMatchHistory.TournamentsMatchHistory_C.OnEntriesUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnDidErrorChanged(bool NewValue); // Function TournamentsMatchHistory.TournamentsMatchHistory_C.OnDidErrorChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_TournamentsMatchHistory(int32_t EntryPoint); // Function TournamentsMatchHistory.TournamentsMatchHistory_C.ExecuteUbergraph_TournamentsMatchHistory // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

