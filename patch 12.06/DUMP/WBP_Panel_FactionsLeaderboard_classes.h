// WidgetBlueprintGeneratedClass WBP_Panel_FactionsLeaderboard.WBP_Panel_FactionsLeaderboard_C
// Size: 0x428 (Inherited: 0x3e0)
struct UWBP_Panel_FactionsLeaderboard_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UEsportsTournamentViewModel* EsportsTournamentViewModel; // 0x3e8(0x08)
	struct UPickemFactionsLeaderboardViewModel* PickemFactionsLeaderboardViewModel; // 0x3f0(0x08)
	struct UImage* BG; // 0x3f8(0x08)
	struct UImage* Image_40; // 0x400(0x08)
	struct UAresScrollBox* LeaderboardScrollBox; // 0x408(0x08)
	struct UWBP_Button_Esports_Secondary_C* WBP_Button_Esports_Secondary; // 0x410(0x08)
	struct FString Tournament Id; // 0x418(0x10)

	void SetEsportsTournamentViewModel(struct UEsportsTournamentViewModel* ViewModel); // Function WBP_Panel_FactionsLeaderboard.WBP_Panel_FactionsLeaderboard_C.SetEsportsTournamentViewModel // (Final|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetPickemFactionsLeaderboardViewModel(struct UPickemFactionsLeaderboardViewModel* ViewModel); // Function WBP_Panel_FactionsLeaderboard.WBP_Panel_FactionsLeaderboard_C.SetPickemFactionsLeaderboardViewModel // (Final|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Custom For textless button(); // Function WBP_Panel_FactionsLeaderboard.WBP_Panel_FactionsLeaderboard_C.Custom For textless button // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Init(struct UPickemFactionsLeaderboardViewModel* InFactionsLeaderboardVM, struct UEsportsTournamentViewModel* InTournamentVM); // Function WBP_Panel_FactionsLeaderboard.WBP_Panel_FactionsLeaderboard_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void On Factions Updated(struct TArray<struct UPickemFactionViewModel*>& Factions); // Function WBP_Panel_FactionsLeaderboard.WBP_Panel_FactionsLeaderboard_C.On Factions Updated // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__WBP_Panel_FactionsLeaderboard_WBP_Button_Esports_Secondary_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_FactionsLeaderboard.WBP_Panel_FactionsLeaderboard_C.BndEvt__WBP_Panel_FactionsLeaderboard_WBP_Button_Esports_Secondary_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Panel_FactionsLeaderboard(int32_t EntryPoint); // Function WBP_Panel_FactionsLeaderboard.WBP_Panel_FactionsLeaderboard_C.ExecuteUbergraph_WBP_Panel_FactionsLeaderboard // (Final|UbergraphFunction) // @ game+0x1b42740
};

