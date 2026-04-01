// WidgetBlueprintGeneratedClass WBP_View_CustomLobbyParty.WBP_View_CustomLobbyParty_C
// Size: 0x3f0 (Inherited: 0x3e0)
struct UWBP_View_CustomLobbyParty_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UWBP_Panel_CustomLobbyTeams_C* Pnl_TeamCategories; // 0x3e8(0x08)

	void UpdateForTournamentMode(bool bIsTournamentModeEnabled); // Function WBP_View_CustomLobbyParty.WBP_View_CustomLobbyParty_C.UpdateForTournamentMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	struct UWidget* BP_GetDesiredFocusTarget(); // Function WBP_View_CustomLobbyParty.WBP_View_CustomLobbyParty_C.BP_GetDesiredFocusTarget // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1af5410
	void BndEvt__WBP_View_CustomLobbyParty_Pnl_TeamCategories_K2Node_ComponentBoundEvent_2_OnInviteCicked__DelegateSignature(enum class ECustomGameTeam Team); // Function WBP_View_CustomLobbyParty.WBP_View_CustomLobbyParty_C.BndEvt__WBP_View_CustomLobbyParty_Pnl_TeamCategories_K2Node_ComponentBoundEvent_2_OnInviteCicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_View_CustomLobbyParty_Pnl_TeamCategories_K2Node_ComponentBoundEvent_3_OnPlayerClicked__DelegateSignature(enum class ECustomGameTeam Team, struct FString PlayerSubject); // Function WBP_View_CustomLobbyParty.WBP_View_CustomLobbyParty_C.BndEvt__WBP_View_CustomLobbyParty_Pnl_TeamCategories_K2Node_ComponentBoundEvent_3_OnPlayerClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_View_CustomLobbyParty(int32_t EntryPoint); // Function WBP_View_CustomLobbyParty.WBP_View_CustomLobbyParty_C.ExecuteUbergraph_WBP_View_CustomLobbyParty // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

