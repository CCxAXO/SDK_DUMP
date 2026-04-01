// WidgetBlueprintGeneratedClass RosterHistoryBracketPopup.RosterHistoryBracketPopup_C
// Size: 0x378 (Inherited: 0x330)
struct URosterHistoryBracketPopup_C : UTournamentsScreenV1 {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x330(0x08)
	struct UWidgetSwitcher* BracketSwitcher; // 0x338(0x08)
	struct UCustomCloseButton_C* CustomCloseButton; // 0x340(0x08)
	struct UPremierTournamentBracket_C* PremierTournamentBracket; // 0x348(0x08)
	struct ULazyPlatformWidgetLoader_Universal_C* PremierTournamentBracket_LazyLoader; // 0x350(0x08)
	struct FMulticastInlineDelegate OnClose; // 0x358(0x10)
	bool bIsTournamentDataReady; // 0x368(0x01)
	bool bIsConstructReady; // 0x369(0x01)
	char pad_36A[0x6]; // 0x36a(0x06)
	struct UPartyViewController* PartyViewController; // 0x370(0x08)

	void TryInitBracket(); // Function RosterHistoryBracketPopup.RosterHistoryBracketPopup_C.TryInitBracket // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitBracketWithViewController(); // Function RosterHistoryBracketPopup.RosterHistoryBracketPopup_C.InitBracketWithViewController // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__CustomCloseButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(); // Function RosterHistoryBracketPopup.RosterHistoryBracketPopup_C.BndEvt__CustomCloseButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void Init(struct FString TournamentID); // Function RosterHistoryBracketPopup.RosterHistoryBracketPopup_C.Init // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Show Lower Bracket(); // Function RosterHistoryBracketPopup.RosterHistoryBracketPopup_C.Show Lower Bracket // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Destruct(); // Function RosterHistoryBracketPopup.RosterHistoryBracketPopup_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function RosterHistoryBracketPopup.RosterHistoryBracketPopup_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnTournamentsModelUpdated(); // Function RosterHistoryBracketPopup.RosterHistoryBracketPopup_C.OnTournamentsModelUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_RosterHistoryBracketPopup(int32_t EntryPoint); // Function RosterHistoryBracketPopup.RosterHistoryBracketPopup_C.ExecuteUbergraph_RosterHistoryBracketPopup // (Final|UbergraphFunction) // @ game+0x1b42740
	void OnClose__DelegateSignature(); // Function RosterHistoryBracketPopup.RosterHistoryBracketPopup_C.OnClose__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

