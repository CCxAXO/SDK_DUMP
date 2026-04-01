// WidgetBlueprintGeneratedClass RankedWidget.RankedWidget_C
// Size: 0x3bb (Inherited: 0x318)
struct URankedWidget_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UDynamicConfigSwitcher_C* DynamicConfigSwitcher; // 0x320(0x08)
	struct UImage* FullScreenLoader; // 0x328(0x08)
	struct UCheckBox* HideCheckBox; // 0x330(0x08)
	struct UHorizontalBox* HideToggleBox; // 0x338(0x08)
	struct ULazyDynamicWidgetSwitcher_C* LazyDynamicWidgetSwitcher; // 0x340(0x08)
	struct UVerticalBox* PageContentVBox; // 0x348(0x08)
	struct UWidgetSwitcher* PageLoadingSwitcher; // 0x350(0x08)
	struct UHorizontalBox* SeasonalRankContainer; // 0x358(0x08)
	struct UBorder* TopLevelBorder; // 0x360(0x08)
	struct UMatchHistoryViewModel* MatchHistoryViewModel; // 0x368(0x08)
	struct UMatchHistoryViewController* MatchHistoryController; // 0x370(0x08)
	struct FMulticastInlineDelegate OnMatchClicked; // 0x378(0x10)
	struct UAkAudioEvent* AUD_Click_Match_History_Open; // 0x388(0x08)
	struct UAkAudioEvent* AUD_Click_Match_History_Close; // 0x390(0x08)
	struct FMulticastInlineDelegate OnBackRequested; // 0x398(0x10)
	bool IsPopup; // 0x3a8(0x01)
	char pad_3A9[0x7]; // 0x3a9(0x07)
	struct USeasonHistory_C* SeasonHistory; // 0x3b0(0x08)
	bool MMRDataLoaded; // 0x3b8(0x01)
	bool MatchHistoryLoaded; // 0x3b9(0x01)
	bool IsActRankBadgeHidden; // 0x3ba(0x01)

	void Refresh IsActRankBadgeHidden(); // Function RankedWidget.RankedWidget_C.Refresh IsActRankBadgeHidden // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Update Hide Checked Status(); // Function RankedWidget.RankedWidget_C.Update Hide Checked Status // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Init(struct UMatchHistoryViewController* NewParam, bool ShowLeaderboard); // Function RankedWidget.RankedWidget_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnMatchClosed(); // Function RankedWidget.RankedWidget_C.OnMatchClosed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function RankedWidget.RankedWidget_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__LazyDynamicWidgetSwitcher_K2Node_ComponentBoundEvent_0_EnabledWidgetCreated__DelegateSignature(struct UUserWidget* NewWidget); // Function RankedWidget.RankedWidget_C.BndEvt__LazyDynamicWidgetSwitcher_K2Node_ComponentBoundEvent_0_EnabledWidgetCreated__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__LazyDynamicWidgetSwitcher_K2Node_ComponentBoundEvent_1_DisabledWidgetCreated__DelegateSignature(struct UUserWidget* NewWidget); // Function RankedWidget.RankedWidget_C.BndEvt__LazyDynamicWidgetSwitcher_K2Node_ComponentBoundEvent_1_DisabledWidgetCreated__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void Initialize(struct UMatchHistoryViewController* MatchHistoryController); // Function RankedWidget.RankedWidget_C.Initialize // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__HideCheckBox_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked); // Function RankedWidget.RankedWidget_C.BndEvt__HideCheckBox_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void OnHideError(enum class EMmrErrorEnum ErrorEnum); // Function RankedWidget.RankedWidget_C.OnHideError // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ClosePopUp(); // Function RankedWidget.RankedWidget_C.ClosePopUp // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_RankedWidget(int32_t EntryPoint); // Function RankedWidget.RankedWidget_C.ExecuteUbergraph_RankedWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
	void OnBackRequested__DelegateSignature(); // Function RankedWidget.RankedWidget_C.OnBackRequested__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnMatchClicked__DelegateSignature(struct FString MatchID, struct FString Subject); // Function RankedWidget.RankedWidget_C.OnMatchClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

