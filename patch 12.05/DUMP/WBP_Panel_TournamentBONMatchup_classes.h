// WidgetBlueprintGeneratedClass WBP_Panel_TournamentBONMatchup.WBP_Panel_TournamentBONMatchup_C
// Size: 0x1b62 (Inherited: 0x1ae0)
struct UWBP_Panel_TournamentBONMatchup_C : UAresCommonButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1ae0(0x08)
	struct UImage* IMG_BG_Live; // 0x1ae8(0x08)
	struct UImage* IMG_MatchBorder; // 0x1af0(0x08)
	struct UImage* IMG_MatchBorder_2; // 0x1af8(0x08)
	struct UOverlay* O_LiveArea; // 0x1b00(0x08)
	struct UWBP_TournamentBONTeamSlot_C* Team_1; // 0x1b08(0x08)
	struct UWBP_TournamentBONTeamSlot_C* Team_2; // 0x1b10(0x08)
	struct UAresCommonText* Text_Game; // 0x1b18(0x08)
	struct UWBP_Panel_TournamentLiveTag_C* WBP_TournamentLiveTag; // 0x1b20(0x08)
	struct UTournamentMatchupModel* Matchup; // 0x1b28(0x08)
	struct FMulticastInlineDelegate WInnerDetermined; // 0x1b30(0x10)
	struct FString MyRosterID; // 0x1b40(0x10)
	struct FMulticastInlineDelegate MatchupSelected; // 0x1b50(0x10)
	bool bIsSelected; // 0x1b60(0x01)
	bool bIsHybridBONBracket; // 0x1b61(0x01)

	void SetGame(int32_t GameIndex); // Function WBP_Panel_TournamentBONMatchup.WBP_Panel_TournamentBONMatchup_C.SetGame // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetTeams(struct UMatchupParticipantModel* Participant_1, struct UMatchupParticipantModel* Participant_2); // Function WBP_Panel_TournamentBONMatchup.WBP_Panel_TournamentBONMatchup_C.SetTeams // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateSelectedState(); // Function WBP_Panel_TournamentBONMatchup.WBP_Panel_TournamentBONMatchup_C.UpdateSelectedState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void DetermineTeamSlotState(struct UMatchupParticipantModel* Participant_1, struct UMatchupParticipantModel* Participant_2, enum class E_TournamentBracketTeamSlotState& TeamState_1, enum class E_TournamentBracketTeamSlotState& TeamState_2); // Function WBP_Panel_TournamentBONMatchup.WBP_Panel_TournamentBONMatchup_C.DetermineTeamSlotState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetStatus(enum class EMatchupStatus InStatus); // Function WBP_Panel_TournamentBONMatchup.WBP_Panel_TournamentBONMatchup_C.SetStatus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetSelected(bool InSelected); // Function WBP_Panel_TournamentBONMatchup.WBP_Panel_TournamentBONMatchup_C.SetSelected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void RefreshWidget(); // Function WBP_Panel_TournamentBONMatchup.WBP_Panel_TournamentBONMatchup_C.RefreshWidget // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitWithMatchup(struct UTournamentMatchupModel* Matchup, struct FString RosterID, bool IsHybridBONBracket); // Function WBP_Panel_TournamentBONMatchup.WBP_Panel_TournamentBONMatchup_C.InitWithMatchup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function WBP_Panel_TournamentBONMatchup.WBP_Panel_TournamentBONMatchup_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void BP_OnHovered(); // Function WBP_Panel_TournamentBONMatchup.WBP_Panel_TournamentBONMatchup_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void BP_OnUnhovered(); // Function WBP_Panel_TournamentBONMatchup.WBP_Panel_TournamentBONMatchup_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void BP_OnClicked(); // Function WBP_Panel_TournamentBONMatchup.WBP_Panel_TournamentBONMatchup_C.BP_OnClicked // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Panel_TournamentBONMatchup(int32_t EntryPoint); // Function WBP_Panel_TournamentBONMatchup.WBP_Panel_TournamentBONMatchup_C.ExecuteUbergraph_WBP_Panel_TournamentBONMatchup // (Final|UbergraphFunction) // @ game+0x1af5410
	void MatchupSelected__DelegateSignature(struct UWBP_Panel_TournamentBONMatchup_C* Widget, struct FString MatchupID); // Function WBP_Panel_TournamentBONMatchup.WBP_Panel_TournamentBONMatchup_C.MatchupSelected__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void WinnerDetermined__DelegateSignature(struct UMatchupParticipantModel* Winner); // Function WBP_Panel_TournamentBONMatchup.WBP_Panel_TournamentBONMatchup_C.WinnerDetermined__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

