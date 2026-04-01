// WidgetBlueprintGeneratedClass WBP_Panel_PremierLeaderboard.WBP_Panel_PremierLeaderboard_C
// Size: 0x468 (Inherited: 0x318)
struct UWBP_Panel_PremierLeaderboard_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UPremierLeaderboardViewModel* PremierLeaderboardViewModel; // 0x320(0x08)
	struct UButton* Firstpagebutton; // 0x328(0x08)
	struct UButton* Gobackbutton; // 0x330(0x08)
	struct UButton* Gonextbutton; // 0x338(0x08)
	struct UImage* Image; // 0x340(0x08)
	struct UImage* Image_108; // 0x348(0x08)
	struct UImage* Image_211; // 0x350(0x08)
	struct UButton* JumpToMeButton; // 0x358(0x08)
	struct UButton* Lastpagebutton; // 0x360(0x08)
	struct UHorizontalBox* LeaderboardBottomControls; // 0x368(0x08)
	struct UWidgetSwitcher* LeaderboardContentSwitcher; // 0x370(0x08)
	struct UGridPanel* LeaderboardEntries; // 0x378(0x08)
	struct UGridPanel* LeaderboardHeaders; // 0x380(0x08)
	struct UAresTextBlock* PaginationText; // 0x388(0x08)
	struct UTextBlock* PlayoffResultHeader; // 0x390(0x08)
	struct UPremierLeaderboardQualifingCutoff_C* PremierLeaderboardInviteDemotionThreshold; // 0x398(0x08)
	struct UPremierLeaderboardQualifingCutoff_C* PremierLeaderboardPlayoffThreshold; // 0x3a0(0x08)
	struct UPremierLeaderboardQualifingCutoff_C* PremierLeaderboardPromotionThreshold; // 0x3a8(0x08)
	struct UPremierLeaderboardRosterEntry_C* PremierLeaderboardRosterEntry_2; // 0x3b0(0x08)
	struct UPremierLeaderboardRosterEntry_C* PremierLeaderboardRosterEntry_3; // 0x3b8(0x08)
	struct UPremierLeaderboardRosterEntry_C* PremierLeaderboardRosterEntry_4; // 0x3c0(0x08)
	struct UPremierLeaderboardRosterEntry_C* PremierLeaderboardRosterEntry_5; // 0x3c8(0x08)
	struct UPremierLeaderboardRosterEntry_C* PremierLeaderboardRosterEntry_6; // 0x3d0(0x08)
	struct UPremierLeaderboardRosterEntry_C* PremierLeaderboardRosterEntry_7; // 0x3d8(0x08)
	struct UPremierLeaderboardRosterEntry_C* PremierLeaderboardRosterEntry_8; // 0x3e0(0x08)
	struct UPremierLeaderboardRosterEntry_C* PremierLeaderboardRosterEntry_9; // 0x3e8(0x08)
	struct UPremierLeaderboardRosterEntry_C* PremierLeaderboardRosterEntry_10; // 0x3f0(0x08)
	struct UPremierLeaderboardRosterEntry_C* PremierLeaderboardRosterEntry_11; // 0x3f8(0x08)
	struct TArray<struct UObject*> LeaderboardContentObjects; // 0x400(0x10)
	bool Is Roster On Current Page; // 0x410(0x01)
	char pad_411[0x7]; // 0x411(0x07)
	struct TMap<struct UPremierLeaderboardQualifingCutoff_C*, int32_t> Threshold Indices; // 0x418(0x50)

	void SetPremierLeaderboardViewModel(struct UPremierLeaderboardViewModel* ViewModel); // Function WBP_Panel_PremierLeaderboard.WBP_Panel_PremierLeaderboard_C.SetPremierLeaderboardViewModel // (Final|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Reset VM Bindings(); // Function WBP_Panel_PremierLeaderboard.WBP_Panel_PremierLeaderboard_C.Reset VM Bindings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreconstructLeaderboardObjectsFill(); // Function WBP_Panel_PremierLeaderboard.WBP_Panel_PremierLeaderboard_C.PreconstructLeaderboardObjectsFill // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Get Entry Index Above Invite Demotion Threshold(struct FPremierLeaderboard Leaderboard, int32_t& Index); // Function WBP_Panel_PremierLeaderboard.WBP_Panel_PremierLeaderboard_C.Get Entry Index Above Invite Demotion Threshold // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Get Entry Index Above Promotion Threshold(struct FPremierLeaderboard Leaderboard, int32_t& Index); // Function WBP_Panel_PremierLeaderboard.WBP_Panel_PremierLeaderboard_C.Get Entry Index Above Promotion Threshold // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Get Entry Index Above Playoff Threshold(struct FPremierLeaderboard Leaderboard, int32_t& Index); // Function WBP_Panel_PremierLeaderboard.WBP_Panel_PremierLeaderboard_C.Get Entry Index Above Playoff Threshold // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Hide Threshold(struct UPremierLeaderboardQualifingCutoff_C* Threshold Widget); // Function WBP_Panel_PremierLeaderboard.WBP_Panel_PremierLeaderboard_C.Hide Threshold // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Show Thresholds If Needed(struct FPremierLeaderboard Leaderboard); // Function WBP_Panel_PremierLeaderboard.WBP_Panel_PremierLeaderboard_C.Show Thresholds If Needed // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Handle Fetch Error(); // Function WBP_Panel_PremierLeaderboard.WBP_Panel_PremierLeaderboard_C.Handle Fetch Error // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Set Leaderboard Object Style(struct UObject* Entry); // Function WBP_Panel_PremierLeaderboard.WBP_Panel_PremierLeaderboard_C.Set Leaderboard Object Style // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Check If Roster is My Roster(struct FPremierLeaderboardEntry Entry); // Function WBP_Panel_PremierLeaderboard.WBP_Panel_PremierLeaderboard_C.Check If Roster is My Roster // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Set Entry In Roster(struct TArray<None>& Entries, int32_t Index, int32_t Page Size); // Function WBP_Panel_PremierLeaderboard.WBP_Panel_PremierLeaderboard_C.Set Entry In Roster // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Select Roster Entry Widget(int32_t EntryToSelect, struct UPremierLeaderboardRosterEntry_C*& PremierRosterEntry); // Function WBP_Panel_PremierLeaderboard.WBP_Panel_PremierLeaderboard_C.Select Roster Entry Widget // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void Update Pagination Widget(); // Function WBP_Panel_PremierLeaderboard.WBP_Panel_PremierLeaderboard_C.Update Pagination Widget // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Set Content Visibility(bool Show); // Function WBP_Panel_PremierLeaderboard.WBP_Panel_PremierLeaderboard_C.Set Content Visibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Handle Premier Leaderboard Page Changed(struct FPremierLeaderboard& LeaderboardPage); // Function WBP_Panel_PremierLeaderboard.WBP_Panel_PremierLeaderboard_C.Handle Premier Leaderboard Page Changed // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Bind LeaderboardVM(bool Bind); // Function WBP_Panel_PremierLeaderboard.WBP_Panel_PremierLeaderboard_C.Bind LeaderboardVM // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Init(); // Function WBP_Panel_PremierLeaderboard.WBP_Panel_PremierLeaderboard_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ShowPlayoffResultColumn(bool ShowPlayoffResults); // Function WBP_Panel_PremierLeaderboard.WBP_Panel_PremierLeaderboard_C.ShowPlayoffResultColumn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	enum class ESlateVisibility __f70a4aac-450f-0267-35bf-738b13329b78_SourceToDest(); // Function WBP_Panel_PremierLeaderboard.WBP_Panel_PremierLeaderboard_C.__f70a4aac-450f-0267-35bf-738b13329b78_SourceToDest // (Final|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_PremierLeaderboard.WBP_Panel_PremierLeaderboard_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function WBP_Panel_PremierLeaderboard.WBP_Panel_PremierLeaderboard_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_Panel_PremierLeaderboard_Firstpagebutton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function WBP_Panel_PremierLeaderboard.WBP_Panel_PremierLeaderboard_C.BndEvt__WBP_Panel_PremierLeaderboard_Firstpagebutton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_Panel_PremierLeaderboard_Gobackbutton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function WBP_Panel_PremierLeaderboard.WBP_Panel_PremierLeaderboard_C.BndEvt__WBP_Panel_PremierLeaderboard_Gobackbutton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_Panel_PremierLeaderboard_Gonextbutton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function WBP_Panel_PremierLeaderboard.WBP_Panel_PremierLeaderboard_C.BndEvt__WBP_Panel_PremierLeaderboard_Gonextbutton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_Panel_PremierLeaderboard_Lastpagebutton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(); // Function WBP_Panel_PremierLeaderboard.WBP_Panel_PremierLeaderboard_C.BndEvt__WBP_Panel_PremierLeaderboard_Lastpagebutton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_Panel_PremierLeaderboard_JumpToMeButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature(); // Function WBP_Panel_PremierLeaderboard.WBP_Panel_PremierLeaderboard_C.BndEvt__WBP_Panel_PremierLeaderboard_JumpToMeButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Panel_PremierLeaderboard(int32_t EntryPoint); // Function WBP_Panel_PremierLeaderboard.WBP_Panel_PremierLeaderboard_C.ExecuteUbergraph_WBP_Panel_PremierLeaderboard // (Final|UbergraphFunction) // @ game+0x1af5410
};

