// BlueprintGeneratedClass OTPriority_Vote.OTPriority_Vote_C
// Size: 0x710 (Inherited: 0x6f8)
struct AOTPriority_Vote_C : AGameplayVoteBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x6f8(0x08)
	struct UOTPriority_VoteOption_StartAttacker_C* OTPriority_VoteOption_StartAttacker; // 0x700(0x08)
	struct UOTPriority_VoteOption_StartDefender_C* OTPriority_VoteOption_StartDefender; // 0x708(0x08)

	struct TArray<struct AShooterPlayerState*> GenerateParticipantsFromTeam(struct UBaseTeamComponent* RequestingTeam); // Function OTPriority_Vote.OTPriority_Vote_C.GenerateParticipantsFromTeam // (BlueprintAuthorityOnly|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1b42740
	struct FText GetOnStartedNotification(); // Function OTPriority_Vote.OTPriority_Vote_C.GetOnStartedNotification // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1b42740
	struct FText GetVoteDebugText(); // Function OTPriority_Vote.OTPriority_Vote_C.GetVoteDebugText // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1b42740
	struct TArray<struct AShooterPlayerState*> GenerateObservers(struct AShooterPlayerState* RequestingPlayer); // Function OTPriority_Vote.OTPriority_Vote_C.GenerateObservers // (BlueprintAuthorityOnly|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1b42740
	struct TArray<struct AShooterPlayerState*> GenerateParticipants(struct AShooterPlayerState* RequestingPlayer); // Function OTPriority_Vote.OTPriority_Vote_C.GenerateParticipants // (BlueprintAuthorityOnly|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1b42740
	void AuthOnStarted(); // Function OTPriority_Vote.OTPriority_Vote_C.AuthOnStarted // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_OTPriority_Vote(int32_t EntryPoint); // Function OTPriority_Vote.OTPriority_Vote_C.ExecuteUbergraph_OTPriority_Vote // (Final|UbergraphFunction) // @ game+0x1b42740
};

