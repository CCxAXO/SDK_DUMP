// WidgetBlueprintGeneratedClass WBP_TournamentBONMatchupTeam.WBP_TournamentBONMatchupTeam_C
// Size: 0x442 (Inherited: 0x3e0)
struct UWBP_TournamentBONMatchupTeam_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UImage* IMG_BG; // 0x3e8(0x08)
	struct UImage* IMG_Border; // 0x3f0(0x08)
	struct UImage* IMG_gradientBG; // 0x3f8(0x08)
	struct UOverlay* O_TeamInfo; // 0x400(0x08)
	struct UTournamentsTeamCustomization_C* TeamCustomization; // 0x408(0x08)
	struct UHorizontalBox* TeamInfoWrapper; // 0x410(0x08)
	struct UAresCommonText* TXT_Score; // 0x418(0x08)
	struct UAresCommonText* TXT_TeamName; // 0x420(0x08)
	struct UAresCommonText* TXT_TeamTag; // 0x428(0x08)
	struct UMatchupParticipantModel* MatchupParticipant; // 0x430(0x08)
	bool bIsMyTeam; // 0x438(0x01)
	char pad_439[0x3]; // 0x439(0x03)
	int32_t BestOfN; // 0x43c(0x04)
	bool bIsLive; // 0x440(0x01)
	bool bIsHybricBONBracket; // 0x441(0x01)

	void SetScoreForBON(); // Function WBP_TournamentBONMatchupTeam.WBP_TournamentBONMatchupTeam_C.SetScoreForBON // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetIsLive(bool bIsLive); // Function WBP_TournamentBONMatchupTeam.WBP_TournamentBONMatchupTeam_C.SetIsLive // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetNumWinsNeededForBON(int32_t& NumWins); // Function WBP_TournamentBONMatchupTeam.WBP_TournamentBONMatchupTeam_C.GetNumWinsNeededForBON // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void StyleCommonOutcome(enum class EMatchupParticipantOutcome InOutcome); // Function WBP_TournamentBONMatchupTeam.WBP_TournamentBONMatchupTeam_C.StyleCommonOutcome // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void StyleMyTeamsOutcome(enum class EMatchupParticipantOutcome InOutcome); // Function WBP_TournamentBONMatchupTeam.WBP_TournamentBONMatchupTeam_C.StyleMyTeamsOutcome // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void StyleOtherTeamsOutcome(enum class EMatchupParticipantOutcome InOutcome); // Function WBP_TournamentBONMatchupTeam.WBP_TournamentBONMatchupTeam_C.StyleOtherTeamsOutcome // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetScore(int32_t InScore, bool bHasScore); // Function WBP_TournamentBONMatchupTeam.WBP_TournamentBONMatchupTeam_C.SetScore // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Set Outcome(enum class EMatchupParticipantOutcome InOutcome); // Function WBP_TournamentBONMatchupTeam.WBP_TournamentBONMatchupTeam_C.Set Outcome // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetTeamCustomization(struct FPremierRosterCustomization InCustomization); // Function WBP_TournamentBONMatchupTeam.WBP_TournamentBONMatchupTeam_C.SetTeamCustomization // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetTag(struct FString InTag); // Function WBP_TournamentBONMatchupTeam.WBP_TournamentBONMatchupTeam_C.SetTag // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetName(struct FString InName); // Function WBP_TournamentBONMatchupTeam.WBP_TournamentBONMatchupTeam_C.SetName // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void RefreshWidget(); // Function WBP_TournamentBONMatchupTeam.WBP_TournamentBONMatchupTeam_C.RefreshWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitWithParticipant(struct UMatchupParticipantModel* InParticipant, bool bIsMyTeam, int32_t BestOfN, bool bIsHybridBONBracket); // Function WBP_TournamentBONMatchupTeam.WBP_TournamentBONMatchupTeam_C.InitWithParticipant // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function WBP_TournamentBONMatchupTeam.WBP_TournamentBONMatchupTeam_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function WBP_TournamentBONMatchupTeam.WBP_TournamentBONMatchupTeam_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_TournamentBONMatchupTeam(int32_t EntryPoint); // Function WBP_TournamentBONMatchupTeam.WBP_TournamentBONMatchupTeam_C.ExecuteUbergraph_WBP_TournamentBONMatchupTeam // (Final|UbergraphFunction) // @ game+0x1af5410
};

