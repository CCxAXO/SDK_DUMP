// BlueprintGeneratedClass SurrenderVote.SurrenderVote_C
// Size: 0x720 (Inherited: 0x6f8)
struct ASurrenderVote_C : AGameplayVoteBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x6f8(0x08)
	struct USurrenderYesOption_C* SurrenderYesOption; // 0x700(0x08)
	struct USurrenderNoOption_C* SurrenderNoOption; // 0x708(0x08)
	struct TArray<bool> TeamHasAttemptedSurrender; // 0x710(0x10)

	int32_t GetUnanimousVoteTolerence(); // Function SurrenderVote.SurrenderVote_C.GetUnanimousVoteTolerence // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1b42740
	struct FText GetVoteDebugText(); // Function SurrenderVote.SurrenderVote_C.GetVoteDebugText // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1b42740
	struct TArray<struct AShooterPlayerState*> GenerateParticipants(struct AShooterPlayerState* RequestingPlayer); // Function SurrenderVote.SurrenderVote_C.GenerateParticipants // (BlueprintAuthorityOnly|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1b42740
	bool Validate(struct AShooterPlayerState* RequestingPlayer, struct AShooterGameState* GameState, struct FText& OutInvalidText); // Function SurrenderVote.SurrenderVote_C.Validate // (BlueprintAuthorityOnly|Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1b42740
	void ReceiveBeginPlay(); // Function SurrenderVote.SurrenderVote_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void AuthOnStarted(); // Function SurrenderVote.SurrenderVote_C.AuthOnStarted // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_SurrenderVote(int32_t EntryPoint); // Function SurrenderVote.SurrenderVote_C.ExecuteUbergraph_SurrenderVote // (Final|UbergraphFunction) // @ game+0x1b42740
};

