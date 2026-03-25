// BlueprintGeneratedClass RemakeVoteNew.RemakeVoteNew_C
// Size: 0x710 (Inherited: 0x6f8)
struct ARemakeVoteNew_C : AGameplayVoteBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x6f8(0x08)
	struct URemakeYesOption_C* RemakeYesOption; // 0x700(0x08)
	struct URemakeNoOption_C* RemakeNoOption; // 0x708(0x08)

	struct TArray<struct AShooterPlayerState*> GenerateParticipantsFromTeam(struct UBaseTeamComponent* RequestingTeam); // Function RemakeVoteNew.RemakeVoteNew_C.GenerateParticipantsFromTeam // (BlueprintAuthorityOnly|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1af5410
	bool ValidateTeamVote(struct UBaseTeamComponent* RequestingTeam, struct AShooterGameState* GameState, struct FText& OutInvalidText); // Function RemakeVoteNew.RemakeVoteNew_C.ValidateTeamVote // (BlueprintAuthorityOnly|Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1af5410
	struct FText GetVoteDebugText(); // Function RemakeVoteNew.RemakeVoteNew_C.GetVoteDebugText // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1af5410
	struct TArray<struct AShooterPlayerState*> GenerateParticipants(struct AShooterPlayerState* RequestingPlayer); // Function RemakeVoteNew.RemakeVoteNew_C.GenerateParticipants // (BlueprintAuthorityOnly|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1af5410
	bool Validate(struct AShooterPlayerState* RequestingPlayer, struct AShooterGameState* GameState, struct FText& OutInvalidText); // Function RemakeVoteNew.RemakeVoteNew_C.Validate // (BlueprintAuthorityOnly|Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1af5410
	void AuthOnStarted(); // Function RemakeVoteNew.RemakeVoteNew_C.AuthOnStarted // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_RemakeVoteNew(int32_t EntryPoint); // Function RemakeVoteNew.RemakeVoteNew_C.ExecuteUbergraph_RemakeVoteNew // (Final|UbergraphFunction) // @ game+0x1af5410
};

