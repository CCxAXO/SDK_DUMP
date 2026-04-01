// WidgetBlueprintGeneratedClass EndOfGame.EndOfGame_C
// Size: 0x340 (Inherited: 0x330)
struct UEndOfGame_C : UCoordinatedHUDElement {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x330(0x08)
	struct UCoordinatedHUDModel* HUDModel; // 0x338(0x08)

	void OnGameEnd(struct UBaseTeamComponent* WinningTeam, enum class EMatchCompletionState CompletionState); // Function EndOfGame.EndOfGame_C.OnGameEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function EndOfGame.EndOfGame_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void SetHUDModel(struct UCoordinatedHUDModel* HUDModel); // Function EndOfGame.EndOfGame_C.SetHUDModel // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnMatchEnd(struct FAresMatchResult& MatchResult); // Function EndOfGame.EndOfGame_C.OnMatchEnd // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_EndOfGame(int32_t EntryPoint); // Function EndOfGame.EndOfGame_C.ExecuteUbergraph_EndOfGame // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

