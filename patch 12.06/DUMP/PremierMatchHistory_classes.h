// WidgetBlueprintGeneratedClass PremierMatchHistory.PremierMatchHistory_C
// Size: 0x418 (Inherited: 0x320)
struct UPremierMatchHistory_C : URosterMatchHistoryScreen {
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
	struct UWidget* ActiveWidget; // 0x408(0x08)
	struct UPremierMatchHistoryViewModel* PremierMatchHistoryVM; // 0x410(0x08)

	void InitTeamInfo(); // Function PremierMatchHistory.PremierMatchHistory_C.InitTeamInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function PremierMatchHistory.PremierMatchHistory_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function PremierMatchHistory.PremierMatchHistory_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnLoadingChanged(bool NewValue); // Function PremierMatchHistory.PremierMatchHistory_C.OnLoadingChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Initialize(); // Function PremierMatchHistory.PremierMatchHistory_C.Initialize // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnMatchOpened(struct FString MatchID); // Function PremierMatchHistory.PremierMatchHistory_C.OnMatchOpened // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnBracketOpened(struct FString TournamentID); // Function PremierMatchHistory.PremierMatchHistory_C.OnBracketOpened // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnClosed(); // Function PremierMatchHistory.PremierMatchHistory_C.OnClosed // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnBracketClosed(); // Function PremierMatchHistory.PremierMatchHistory_C.OnBracketClosed // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__TournamentsMatchHistory_PremierDivisionsInfoButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function PremierMatchHistory.PremierMatchHistory_C.BndEvt__TournamentsMatchHistory_PremierDivisionsInfoButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__TournamentsMatchHistory_InfoBtn_1_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(); // Function PremierMatchHistory.PremierMatchHistory_C.BndEvt__TournamentsMatchHistory_InfoBtn_1_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void OnDidErrorChanged(bool NewValue); // Function PremierMatchHistory.PremierMatchHistory_C.OnDidErrorChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnEntriesUpdated(); // Function PremierMatchHistory.PremierMatchHistory_C.OnEntriesUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_PremierMatchHistory(int32_t EntryPoint); // Function PremierMatchHistory.PremierMatchHistory_C.ExecuteUbergraph_PremierMatchHistory // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

