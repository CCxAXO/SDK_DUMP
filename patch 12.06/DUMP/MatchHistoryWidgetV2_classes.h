// WidgetBlueprintGeneratedClass MatchHistoryWidgetV2.MatchHistoryWidgetV2_C
// Size: 0x432 (Inherited: 0x318)
struct UMatchHistoryWidgetV2_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UImage* Background; // 0x320(0x08)
	struct UImage* Bot_Gradient; // 0x328(0x08)
	struct UCompetitiveTierIconLarge_C* CompetitiveTierIconLarge; // 0x330(0x08)
	struct UImage* dot_left; // 0x338(0x08)
	struct UImage* dot_right; // 0x340(0x08)
	struct UDynamicConfigSwitcher_C* DynamicConfigSwitcher; // 0x348(0x08)
	struct UVerticalBox* ErrorBox; // 0x350(0x08)
	struct UImage* FullScreenLoader; // 0x358(0x08)
	struct ULazyDynamicWidgetSwitcher_C* LazyDynamicWidgetSwitcher; // 0x360(0x08)
	struct UImage* line_divider; // 0x368(0x08)
	struct UImage* Loader; // 0x370(0x08)
	struct UVerticalBox* MatchesContainer; // 0x378(0x08)
	struct UMenuOrnament_C* MenuOrnament; // 0x380(0x08)
	struct UTextBlock* NoMatchesText; // 0x388(0x08)
	struct UVerticalBox* PageContentVBox; // 0x390(0x08)
	struct UWidgetSwitcher* PageLoadingSwitcher; // 0x398(0x08)
	struct UWidgetSwitcher* RankProgressWidgetSwitcher_2; // 0x3a0(0x08)
	struct UHorizontalBox* SeasonalRankContainer; // 0x3a8(0x08)
	struct USharedBackButton_C* SharedBackButton; // 0x3b0(0x08)
	struct UTextBlock* TextBlock_1; // 0x3b8(0x08)
	struct UTextBlock* TierVisibilityRequirementText; // 0x3c0(0x08)
	struct UImage* Top_Gradient; // 0x3c8(0x08)
	struct UBorder* TopLevelBorder; // 0x3d0(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_1; // 0x3d8(0x08)
	struct UMatchHistoryViewModel* MatchHistoryViewModel; // 0x3e0(0x08)
	struct UMatchHistoryViewController* MatchHistoryController; // 0x3e8(0x08)
	struct FMulticastInlineDelegate OnMatchClicked; // 0x3f0(0x10)
	struct UAkAudioEvent* AUD_Click_Match_History_Open; // 0x400(0x08)
	struct UAkAudioEvent* AUD_Click_Match_History_Close; // 0x408(0x08)
	struct FMulticastInlineDelegate OnBackRequested; // 0x410(0x10)
	bool IsPopup; // 0x420(0x01)
	char pad_421[0x7]; // 0x421(0x07)
	struct USeasonHistory_C* SeasonHistory; // 0x428(0x08)
	bool MMRDataLoaded; // 0x430(0x01)
	bool MatchHistoryLoaded; // 0x431(0x01)

	void UpdateLoading(); // Function MatchHistoryWidgetV2.MatchHistoryWidgetV2_C.UpdateLoading // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateView(); // Function MatchHistoryWidgetV2.MatchHistoryWidgetV2_C.UpdateView // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ApplyLoadingVisuals(bool IsLoading, bool IsError); // Function MatchHistoryWidgetV2.MatchHistoryWidgetV2_C.ApplyLoadingVisuals // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnMatchClosed(); // Function MatchHistoryWidgetV2.MatchHistoryWidgetV2_C.OnMatchClosed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnLoadingStateChanged(); // Function MatchHistoryWidgetV2.MatchHistoryWidgetV2_C.OnLoadingStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnError(); // Function MatchHistoryWidgetV2.MatchHistoryWidgetV2_C.OnError // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnMatchesAdded(struct TArray<struct UMatchViewModel*>& AddedMatches); // Function MatchHistoryWidgetV2.MatchHistoryWidgetV2_C.OnMatchesAdded // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnChildMatchClicked(struct FString MatchID); // Function MatchHistoryWidgetV2.MatchHistoryWidgetV2_C.OnChildMatchClicked // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function MatchHistoryWidgetV2.MatchHistoryWidgetV2_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__LazyDynamicWidgetSwitcher_K2Node_ComponentBoundEvent_0_EnabledWidgetCreated__DelegateSignature(struct UUserWidget* NewWidget); // Function MatchHistoryWidgetV2.MatchHistoryWidgetV2_C.BndEvt__LazyDynamicWidgetSwitcher_K2Node_ComponentBoundEvent_0_EnabledWidgetCreated__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__LazyDynamicWidgetSwitcher_K2Node_ComponentBoundEvent_1_DisabledWidgetCreated__DelegateSignature(struct UUserWidget* NewWidget); // Function MatchHistoryWidgetV2.MatchHistoryWidgetV2_C.BndEvt__LazyDynamicWidgetSwitcher_K2Node_ComponentBoundEvent_1_DisabledWidgetCreated__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__SharedBackButton_K2Node_ComponentBoundEvent_2_OnBackRequested__DelegateSignature(); // Function MatchHistoryWidgetV2.MatchHistoryWidgetV2_C.BndEvt__SharedBackButton_K2Node_ComponentBoundEvent_2_OnBackRequested__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void CustomEvent_1(); // Function MatchHistoryWidgetV2.MatchHistoryWidgetV2_C.CustomEvent_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Init(struct UMatchHistoryViewController* NewParam, bool ShowLeaderboard); // Function MatchHistoryWidgetV2.MatchHistoryWidgetV2_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_MatchHistoryWidgetV2(int32_t EntryPoint); // Function MatchHistoryWidgetV2.MatchHistoryWidgetV2_C.ExecuteUbergraph_MatchHistoryWidgetV2 // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
	void OnBackRequested__DelegateSignature(); // Function MatchHistoryWidgetV2.MatchHistoryWidgetV2_C.OnBackRequested__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnMatchClicked__DelegateSignature(struct FString MatchID, struct FString Subject); // Function MatchHistoryWidgetV2.MatchHistoryWidgetV2_C.OnMatchClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

