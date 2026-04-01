// BlueprintGeneratedClass SurrenderVote_Debug.SurrenderVote_Debug_C
// Size: 0x728 (Inherited: 0x720)
struct ASurrenderVote_Debug_C : ASurrenderVote_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x720(0x08)

	bool Validate(struct AShooterPlayerState* RequestingPlayer, struct AShooterGameState* GameState, struct FText& OutInvalidText); // Function SurrenderVote_Debug.SurrenderVote_Debug_C.Validate // (BlueprintAuthorityOnly|Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1b42740
	void AuthOnStarted(); // Function SurrenderVote_Debug.SurrenderVote_Debug_C.AuthOnStarted // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_SurrenderVote_Debug(int32_t EntryPoint); // Function SurrenderVote_Debug.SurrenderVote_Debug_C.ExecuteUbergraph_SurrenderVote_Debug // (Final|UbergraphFunction) // @ game+0x1b42740
};

