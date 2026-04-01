// BlueprintGeneratedClass Vote_Draw_Base.Vote_Draw_Base_C
// Size: 0x718 (Inherited: 0x6f8)
struct AVote_Draw_Base_C : AGameplayVoteBase_C {
	struct UVoteOption_Draw_DrawMatch_C* VoteOption_Draw_DrawMatch; // 0x6f8(0x08)
	struct UVoteOption_Draw_ContinueMatch_C* VoteOption_Draw_ContinueMatch; // 0x700(0x08)
	struct FMulticastInlineDelegate OnVotingPhaseComplete; // 0x708(0x10)

	struct FText GetOnStartedNotification(); // Function Vote_Draw_Base.Vote_Draw_Base_C.GetOnStartedNotification // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1b42740
	struct TArray<struct AShooterPlayerState*> GenerateParticipants(struct AShooterPlayerState* RequestingPlayer); // Function Vote_Draw_Base.Vote_Draw_Base_C.GenerateParticipants // (BlueprintAuthorityOnly|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1b42740
	void OnVotingPhaseComplete__DelegateSignature(bool HasPassed); // Function Vote_Draw_Base.Vote_Draw_Base_C.OnVotingPhaseComplete__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

