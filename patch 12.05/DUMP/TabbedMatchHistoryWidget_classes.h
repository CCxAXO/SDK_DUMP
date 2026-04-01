// WidgetBlueprintGeneratedClass TabbedMatchHistoryWidget.TabbedMatchHistoryWidget_C
// Size: 0x371 (Inherited: 0x318)
struct UTabbedMatchHistoryWidget_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UImage* Background; // 0x320(0x08)
	struct UMenuOrnament_C* MenuOrnament; // 0x328(0x08)
	struct USharedBackButton_C* SharedBackButton; // 0x330(0x08)
	struct UTabbedContent_C* TabbedContent; // 0x338(0x08)
	struct UBorder* TopLevelBorder; // 0x340(0x08)
	struct UMatchHistoryViewController* MatchHistoryController; // 0x348(0x08)
	struct FMulticastInlineDelegate OnBackRequested; // 0x350(0x10)
	struct FMulticastInlineDelegate OnMatchClicked; // 0x360(0x10)
	bool ShowLeaderboard; // 0x370(0x01)

	void OnMatchClosed(); // Function TabbedMatchHistoryWidget.TabbedMatchHistoryWidget_C.OnMatchClosed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnMatchHistoryLoaded(struct UUserWidget* TabContent); // Function TabbedMatchHistoryWidget.TabbedMatchHistoryWidget_C.OnMatchHistoryLoaded // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnLeaderboardLoaded(struct UUserWidget* TabContent); // Function TabbedMatchHistoryWidget.TabbedMatchHistoryWidget_C.OnLeaderboardLoaded // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Init(struct UMatchHistoryViewController* NewParam, bool ShowLeaderboard); // Function TabbedMatchHistoryWidget.TabbedMatchHistoryWidget_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function TabbedMatchHistoryWidget.TabbedMatchHistoryWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Event_OnMatchClicked(struct FString MatchID, struct FString Subject); // Function TabbedMatchHistoryWidget.TabbedMatchHistoryWidget_C.Event_OnMatchClicked // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnRankedLoaded(struct UUserWidget* TabContent); // Function TabbedMatchHistoryWidget.TabbedMatchHistoryWidget_C.OnRankedLoaded // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__SharedBackButton_K2Node_ComponentBoundEvent_0_OnBackRequested__DelegateSignature(); // Function TabbedMatchHistoryWidget.TabbedMatchHistoryWidget_C.BndEvt__SharedBackButton_K2Node_ComponentBoundEvent_0_OnBackRequested__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function TabbedMatchHistoryWidget.TabbedMatchHistoryWidget_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void On Premier Crests Loaded(struct UUserWidget* TabContent); // Function TabbedMatchHistoryWidget.TabbedMatchHistoryWidget_C.On Premier Crests Loaded // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_TabbedMatchHistoryWidget(int32_t EntryPoint); // Function TabbedMatchHistoryWidget.TabbedMatchHistoryWidget_C.ExecuteUbergraph_TabbedMatchHistoryWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
	void OnMatchClicked__DelegateSignature(struct FString MatchID, struct FString Subject); // Function TabbedMatchHistoryWidget.TabbedMatchHistoryWidget_C.OnMatchClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnBackRequested__DelegateSignature(); // Function TabbedMatchHistoryWidget.TabbedMatchHistoryWidget_C.OnBackRequested__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

