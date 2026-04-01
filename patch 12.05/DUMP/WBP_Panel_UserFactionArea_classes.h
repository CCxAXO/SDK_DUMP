// WidgetBlueprintGeneratedClass WBP_Panel_UserFactionArea.WBP_Panel_UserFactionArea_C
// Size: 0x488 (Inherited: 0x3e0)
struct UWBP_Panel_UserFactionArea_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UEsportsTournamentViewModel* EsportsTournamentViewModel; // 0x3e8(0x08)
	struct UPickemFactionViewModel* PickemFactionViewModel; // 0x3f0(0x08)
	struct UPickemFactionsLeaderboardViewModel* PickemFactionsLeaderboardViewModel; // 0x3f8(0x08)
	struct UAresWidgetSwitcher* AresWidgetSwitcher; // 0x400(0x08)
	struct UWBP_Button_Esports_Secondary_C* Button_JoinFaction; // 0x408(0x08)
	struct UAresCommonText* CT_FactionName; // 0x410(0x08)
	struct UAresCommonText* CT_FactionNumParticipants; // 0x418(0x08)
	struct UAresCommonText* CT_FactionPoints; // 0x420(0x08)
	struct UAresCommonText* CT_FactionRank; // 0x428(0x08)
	struct UAresCommonText* CT_HostName; // 0x430(0x08)
	struct UImage* Image_53; // 0x438(0x08)
	struct UImage* Image_79; // 0x440(0x08)
	struct UImage* Image_FactionHost; // 0x448(0x08)
	struct UOverlay* O_StartedState; // 0x450(0x08)
	struct UOverlay* O_UnstartedState; // 0x458(0x08)
	struct USizeBox* SizeBox_Parent; // 0x460(0x08)
	struct UPickemFactionViewModel* Joined Faction VM; // 0x468(0x08)
	struct FDateTime Tournament Start Time UTC; // 0x470(0x08)
	struct FString Tournament ID; // 0x478(0x10)

	void SetEsportsTournamentViewModel(struct UEsportsTournamentViewModel* ViewModel); // Function WBP_Panel_UserFactionArea.WBP_Panel_UserFactionArea_C.SetEsportsTournamentViewModel // (Final|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetPickemFactionViewModel(struct UPickemFactionViewModel* ViewModel); // Function WBP_Panel_UserFactionArea.WBP_Panel_UserFactionArea_C.SetPickemFactionViewModel // (Final|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetPickemFactionsLeaderboardViewModel(struct UPickemFactionsLeaderboardViewModel* ViewModel); // Function WBP_Panel_UserFactionArea.WBP_Panel_UserFactionArea_C.SetPickemFactionsLeaderboardViewModel // (Final|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void On Faction Num Participants Changed(int32_t In Num Participants); // Function WBP_Panel_UserFactionArea.WBP_Panel_UserFactionArea_C.On Faction Num Participants Changed // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void On Faction Host Image Changed(struct UTexture2D* In Image); // Function WBP_Panel_UserFactionArea.WBP_Panel_UserFactionArea_C.On Faction Host Image Changed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void On Faction Rank Changed(int32_t InRank); // Function WBP_Panel_UserFactionArea.WBP_Panel_UserFactionArea_C.On Faction Rank Changed // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Calculate Widget State(); // Function WBP_Panel_UserFactionArea.WBP_Panel_UserFactionArea_C.Calculate Widget State // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void On Tournament Start Time Changed(struct FDateTime In Start Time UTC); // Function WBP_Panel_UserFactionArea.WBP_Panel_UserFactionArea_C.On Tournament Start Time Changed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void On Joined Faction Changed(struct UPickemFactionViewModel* In Joined Faction); // Function WBP_Panel_UserFactionArea.WBP_Panel_UserFactionArea_C.On Joined Faction Changed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void On Faction Points Changed(int32_t FactionPoints); // Function WBP_Panel_UserFactionArea.WBP_Panel_UserFactionArea_C.On Faction Points Changed // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void On Host Name Changed(struct FString HostName); // Function WBP_Panel_UserFactionArea.WBP_Panel_UserFactionArea_C.On Host Name Changed // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void On Faction Name Changed(struct FString FactionName); // Function WBP_Panel_UserFactionArea.WBP_Panel_UserFactionArea_C.On Faction Name Changed // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Init(struct UPickemFactionsLeaderboardViewModel* InFactionsLeaderboardVM, struct UEsportsTournamentViewModel* InTournamentVM); // Function WBP_Panel_UserFactionArea.WBP_Panel_UserFactionArea_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_UserFactionArea.WBP_Panel_UserFactionArea_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_Panel_UserFactionArea_Button_JoinFaction_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_UserFactionArea.WBP_Panel_UserFactionArea_C.BndEvt__WBP_Panel_UserFactionArea_Button_JoinFaction_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Panel_UserFactionArea(int32_t EntryPoint); // Function WBP_Panel_UserFactionArea.WBP_Panel_UserFactionArea_C.ExecuteUbergraph_WBP_Panel_UserFactionArea // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

