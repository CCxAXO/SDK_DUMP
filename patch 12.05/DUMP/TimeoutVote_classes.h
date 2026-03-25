// BlueprintGeneratedClass TimeoutVote.TimeoutVote_C
// Size: 0x714 (Inherited: 0x6f8)
struct ATimeoutVote_C : AGameplayVoteBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x6f8(0x08)
	struct UTimeoutYesOption_C* TimeoutYesOption; // 0x700(0x08)
	struct UTimeoutNoOption_C* TimeoutNoOption; // 0x708(0x08)
	int32_t TeamMaxVotesAllowedPreOvertime; // 0x710(0x04)

	void GetTeamNumSuccessfulTimeoutVotesCalled(struct UBaseTeamComponent* RequestingTeam, int32_t& NumTimeoutVotesCalled); // Function TimeoutVote.TimeoutVote_C.GetTeamNumSuccessfulTimeoutVotesCalled // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1af5410
	void AuthDoesVotePreventTimeout(struct UVoteManagerComponent* VoteManagerComponent, int32_t Round, struct AGameplayVote* VoteClass, struct AShooterPlayerState* Requester, struct UGameplayVoteOptionComponent* VoteOptionClass, struct UBaseTeamComponent* Team, bool VoteInOvertime, bool ShouldUseFlexableTimeoutRules, bool& DoesBlockTimeout, struct FText& Reason); // Function TimeoutVote.TimeoutVote_C.AuthDoesVotePreventTimeout // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1af5410
	struct FText GetVoteDebugText(); // Function TimeoutVote.TimeoutVote_C.GetVoteDebugText // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1af5410
	void GetTimeoutGamePhaseText(int32_t Round, struct FText& Game Mode); // Function TimeoutVote.TimeoutVote_C.GetTimeoutGamePhaseText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1af5410
	void GetRoundHalf(int32_t Round, int32_t& half); // Function TimeoutVote.TimeoutVote_C.GetRoundHalf // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1af5410
	void AuthIsTimeoutAvailableForPlayer(struct AShooterGameState* Game State, struct UBaseTeamComponent* Team, bool& Timeout Is Available, struct FText& Reason); // Function TimeoutVote.TimeoutVote_C.AuthIsTimeoutAvailableForPlayer // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1af5410
	struct TArray<struct AShooterPlayerState*> GenerateParticipants(struct AShooterPlayerState* RequestingPlayer); // Function TimeoutVote.TimeoutVote_C.GenerateParticipants // (BlueprintAuthorityOnly|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1af5410
	bool Validate(struct AShooterPlayerState* RequestingPlayer, struct AShooterGameState* GameState, struct FText& OutInvalidText); // Function TimeoutVote.TimeoutVote_C.Validate // (BlueprintAuthorityOnly|Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1af5410
	void AuthOnStarted(); // Function TimeoutVote.TimeoutVote_C.AuthOnStarted // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_TimeoutVote(int32_t EntryPoint); // Function TimeoutVote.TimeoutVote_C.ExecuteUbergraph_TimeoutVote // (Final|UbergraphFunction) // @ game+0x1af5410
};

