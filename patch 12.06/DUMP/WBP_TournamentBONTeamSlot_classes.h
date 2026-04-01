// WidgetBlueprintGeneratedClass WBP_TournamentBONTeamSlot.WBP_TournamentBONTeamSlot_C
// Size: 0x365 (Inherited: 0x318)
struct UWBP_TournamentBONTeamSlot_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UImage* Image; // 0x320(0x08)
	struct UImage* Image_2; // 0x328(0x08)
	struct UImage* Image_155; // 0x330(0x08)
	struct UWBP_TournamentBONMatchupTeam_C* MatchupTeam; // 0x338(0x08)
	struct UOverlay* O_Bye; // 0x340(0x08)
	struct UOverlay* O_Empty; // 0x348(0x08)
	struct UOverlay* O_Waiting; // 0x350(0x08)
	struct UWidgetSwitcher* WS_State; // 0x358(0x08)
	int32_t BestOfN; // 0x360(0x04)
	bool bIsHybridBONBracket; // 0x364(0x01)

	void SetIsLive(bool bIsLive); // Function WBP_TournamentBONTeamSlot.WBP_TournamentBONTeamSlot_C.SetIsLive // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitWithParticipant(struct UMatchupParticipantModel* InParticipant, enum class E_TournamentBracketTeamSlotState InParticipantSlotState, int32_t BestOfN, bool bIsMyTeam, bool bIsHybridBONBracket); // Function WBP_TournamentBONTeamSlot.WBP_TournamentBONTeamSlot_C.InitWithParticipant // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetTeamSlotState(enum class E_TournamentBracketTeamSlotState TeamSlotState); // Function WBP_TournamentBONTeamSlot.WBP_TournamentBONTeamSlot_C.SetTeamSlotState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetTeam(struct UMatchupParticipantModel* MatchupParticipant, bool bIsMyTeam); // Function WBP_TournamentBONTeamSlot.WBP_TournamentBONTeamSlot_C.SetTeam // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function WBP_TournamentBONTeamSlot.WBP_TournamentBONTeamSlot_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WBP_TournamentBONTeamSlot.WBP_TournamentBONTeamSlot_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_TournamentBONTeamSlot(int32_t EntryPoint); // Function WBP_TournamentBONTeamSlot.WBP_TournamentBONTeamSlot_C.ExecuteUbergraph_WBP_TournamentBONTeamSlot // (Final|UbergraphFunction) // @ game+0x1b42740
};

