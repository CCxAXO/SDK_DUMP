// BlueprintGeneratedClass RemakeVoteNew_Debug.RemakeVoteNew_Debug_C
// Size: 0x718 (Inherited: 0x710)
struct ARemakeVoteNew_Debug_C : ARemakeVoteNew_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x710(0x08)

	bool Validate(struct AShooterPlayerState* RequestingPlayer, struct AShooterGameState* GameState, struct FText& OutInvalidText); // Function RemakeVoteNew_Debug.RemakeVoteNew_Debug_C.Validate // (BlueprintAuthorityOnly|Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1af5410
	void AuthOnStarted(); // Function RemakeVoteNew_Debug.RemakeVoteNew_Debug_C.AuthOnStarted // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_RemakeVoteNew_Debug(int32_t EntryPoint); // Function RemakeVoteNew_Debug.RemakeVoteNew_Debug_C.ExecuteUbergraph_RemakeVoteNew_Debug // (Final|UbergraphFunction) // @ game+0x1af5410
};

