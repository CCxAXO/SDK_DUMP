// BlueprintGeneratedClass BaseGameMode.BaseGameMode_C
// Size: 0xc01 (Inherited: 0xaa8)
struct ABaseGameMode_C : AShooterGameMode {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xaa8(0x08)
	struct UComp_GameMode_DPTCommandExecution_C* Comp_GameMode_DPTCommandExecution; // 0xab0(0x08)
	struct UComp_GameMode_KillVO_C* Comp_GameMode_KillVO; // 0xab8(0x08)
	struct UGameStateGameOverComponent_C* GameStateGameOverComponent; // 0xac0(0x08)
	struct UGameStateSetupComponent_C* GameStateSetupComponent; // 0xac8(0x08)
	struct UGameStateIntroComponent_C* GameStateIntroComponent; // 0xad0(0x08)
	struct UGameStateLoadInComponent_C* GameStateLoadInComponent; // 0xad8(0x08)
	struct UBombTeamComponent* RedBombTeam; // 0xae0(0x08)
	struct UBombTeamComponent* BlueBombTeam; // 0xae8(0x08)
	struct UBaseGameStateComponent* GameStateAwaitingShutdown; // 0xaf0(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0xaf8(0x08)
	struct UAudBaseGameModeVOComponent_C* AudGameModeVOComponentClass; // 0xb00(0x08)
	struct UAudBaseGameModeVOComponent_C* AudGameModeVOComponent; // 0xb08(0x08)
	struct TArray<struct AShooterPlayerState*> PlayersToSpawn; // 0xb10(0x10)
	struct TArray<double> PlayerSpawnTimes; // 0xb20(0x10)
	double RespawnDelay; // 0xb30(0x08)
	struct USpawnPointPlayerSpawner* SpawnPointSpawn; // 0xb38(0x08)
	double CorpseLifetime; // 0xb40(0x08)
	struct TArray<struct AGameObject*> Domes; // 0xb48(0x10)
	struct TArray<struct AGameObject*> SoundBarriers; // 0xb58(0x10)
	struct TArray<struct AGameObject*> BarrierVFX; // 0xb68(0x10)
	struct FMulticastInlineDelegate OnLevelStreamingComplete; // 0xb78(0x10)
	struct TSet<struct AShooterPlayerState*> SuccessfullySpawnedPlayers; // 0xb88(0x50)
	enum class EMatchCompletionState MatchCompletionState; // 0xbd8(0x01)
	bool IsGameEnding; // 0xbd9(0x01)
	char pad_BDA[0x6]; // 0xbda(0x06)
	struct UBaseTeamComponent* WinningTeam; // 0xbe0(0x08)
	bool bPlayCharDeathmatchWinVO; // 0xbe8(0x01)
	bool bIsNPE; // 0xbe9(0x01)
	bool bAllowAbilitySharing; // 0xbea(0x01)
	char pad_BEB[0x5]; // 0xbeb(0x05)
	struct FMulticastInlineDelegate AuthWinRoundEvent2; // 0xbf0(0x10)
	bool FirstTimeRunningWinGameCheat; // 0xc00(0x01)

	void CheckAFKPlayersAndEndEarly(); // Function BaseGameMode.BaseGameMode_C.CheckAFKPlayersAndEndEarly // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ChooseWinningTeamBasedOnCurrentScore(struct UBaseTeamComponent*& WinningTeam); // Function BaseGameMode.BaseGameMode_C.ChooseWinningTeamBasedOnCurrentScore // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitializeLoadInStateLength(); // Function BaseGameMode.BaseGameMode_C.InitializeLoadInStateLength // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetLastInRoundGameState(struct UTimeGameStateComponent*& LastInRoundGameState); // Function BaseGameMode.BaseGameMode_C.GetLastInRoundGameState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ShouldSpawnPlayer(struct AShooterPlayerState* Player, bool& ShouldSpawn); // Function BaseGameMode.BaseGameMode_C.ShouldSpawnPlayer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void BombDropped(struct AShooterCharacter* CharacterThatDroppedBomb); // Function BaseGameMode.BaseGameMode_C.BombDropped // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetGameStatePostRound(struct UTimeGameStateComponent*& GameStatePostRound); // Function BaseGameMode.BaseGameMode_C.GetGameStatePostRound // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void GetPreviousRoundWinner(struct UBaseTeamComponent*& WinningTeam); // Function BaseGameMode.BaseGameMode_C.GetPreviousRoundWinner // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1af5410
	void StopScoreboardUpdating(); // Function BaseGameMode.BaseGameMode_C.StopScoreboardUpdating // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ShouldPlayBombDroppedVO(bool& ShouldPlay); // Function BaseGameMode.BaseGameMode_C.ShouldPlayBombDroppedVO // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void FinalizeEndOfGame(); // Function BaseGameMode.BaseGameMode_C.FinalizeEndOfGame // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitiateEndOfGame(struct UBaseTeamComponent* WinningTeam, enum class EMatchCompletionState CompletionState); // Function BaseGameMode.BaseGameMode_C.InitiateEndOfGame // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ResetAllPlayers(); // Function BaseGameMode.BaseGameMode_C.ResetAllPlayers // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void EndOfMatchSlowTime(); // Function BaseGameMode.BaseGameMode_C.EndOfMatchSlowTime // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ForceGameOverState(); // Function BaseGameMode.BaseGameMode_C.ForceGameOverState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void CleanDomes(); // Function BaseGameMode.BaseGameMode_C.CleanDomes // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SpawnDomes(); // Function BaseGameMode.BaseGameMode_C.SpawnDomes // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecutePlayerSpawns(bool& Finished); // Function BaseGameMode.BaseGameMode_C.ExecutePlayerSpawns // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetupPlayerSpawns(bool ShouldAddSpawnDelay, bool RespawnSuccessfullySpawnedPlayers); // Function BaseGameMode.BaseGameMode_C.SetupPlayerSpawns // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void AudSetupComponents(); // Function BaseGameMode.BaseGameMode_C.AudSetupComponents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ReceiveBeginPlay(); // Function BaseGameMode.BaseGameMode_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void DrawGameEvent(); // Function BaseGameMode.BaseGameMode_C.DrawGameEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void RemakeGameEvent(); // Function BaseGameMode.BaseGameMode_C.RemakeGameEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void WinGameEvent(struct UBaseTeamComponent* Team); // Function BaseGameMode.BaseGameMode_C.WinGameEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void CheatWinGame(struct UBaseTeamComponent* WinningTeam); // Function BaseGameMode.BaseGameMode_C.CheatWinGame // (BlueprintAuthorityOnly|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__GameStateSetupComponent_K2Node_ComponentBoundEvent_0_OnGameStateEnterSignature__DelegateSignature(struct UBaseGameStateComponent* EnteredState, struct UStateTransitionContext* StateTransitionContext); // Function BaseGameMode.BaseGameMode_C.BndEvt__GameStateSetupComponent_K2Node_ComponentBoundEvent_0_OnGameStateEnterSignature__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void CheatAdvanceToRoundStarting(); // Function BaseGameMode.BaseGameMode_C.CheatAdvanceToRoundStarting // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void WinCheatInternal(struct UBaseTeamComponent* WinningTeam); // Function BaseGameMode.BaseGameMode_C.WinCheatInternal // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void AuthHandlePlayerDisassociated(struct AShooterPlayerState* PlayerState); // Function BaseGameMode.BaseGameMode_C.AuthHandlePlayerDisassociated // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void CheatDrawGame(); // Function BaseGameMode.BaseGameMode_C.CheatDrawGame // (BlueprintAuthorityOnly|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void CheatEndGame(); // Function BaseGameMode.BaseGameMode_C.CheatEndGame // (BlueprintAuthorityOnly|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_BaseGameMode(int32_t EntryPoint); // Function BaseGameMode.BaseGameMode_C.ExecuteUbergraph_BaseGameMode // (Final|UbergraphFunction) // @ game+0x1af5410
	void AuthWinRoundEvent2__DelegateSignature(struct UBaseTeamComponent* Winning Team); // Function BaseGameMode.BaseGameMode_C.AuthWinRoundEvent2__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnLevelStreamingComplete__DelegateSignature(); // Function BaseGameMode.BaseGameMode_C.OnLevelStreamingComplete__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

