// BlueprintGeneratedClass BombGameMode.BombGameMode_C
// Size: 0x10c9 (Inherited: 0xc01)
struct ABombGameMode_C : ABaseGameMode_C {
	char pad_C01[0x7]; // 0xc01(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc08(0x08)
	struct UComp_GameMode_DelayableFinishers_C* Comp_GameMode_DelayableFinishers; // 0xc10(0x08)
	struct UTimeGameStateComponent* GameStateTimeoutCountdown; // 0xc18(0x08)
	struct UComp_Actor_MultiTargetHandler_Buff_C* Comp_Actor_MultiTargetHandler_Buff_TimeoutFreeze; // 0xc20(0x08)
	struct UBaseGameStateComponent* GameStateTimeoutQueued; // 0xc28(0x08)
	struct UTimeGameStateComponent* GameStateTimeout; // 0xc30(0x08)
	struct UBaseGameStateComponent* GameStateTimeoutInactive; // 0xc38(0x08)
	struct UStateMachineComponent* TimeoutStateMachine; // 0xc40(0x08)
	struct UComp_MatchResults_StayedInSpawn_C* Comp_MatchResults_StayedInSpawn; // 0xc48(0x08)
	struct UComp_BombRoundStateLog_C* Comp_BombRoundStateLog; // 0xc50(0x08)
	struct UGameStateVoteComponent_C* GameStateVoteComponent; // 0xc58(0x08)
	struct UComp_GameMode_OvertimeDrawVotes_C* Comp_GameMode_OvertimeDrawVotes; // 0xc60(0x08)
	struct UComp_GameMode_GrantPurchasables_C* Comp_GameMode_GrantPurchasables; // 0xc68(0x08)
	struct UComp_MatchResults_RoundCeremony_C* Comp_MatchResults_RoundCeremony; // 0xc70(0x08)
	struct UComp_MatchResults_PlayerScores_C* Comp_MatchResults_PlayerScores; // 0xc78(0x08)
	struct UComp_MatchResults_Penalites_C* Comp_MatchResults_Penalites; // 0xc80(0x08)
	struct UComp_MatchResults_Kill_C* Comp_MatchResults_Kill; // 0xc88(0x08)
	struct UComp_MatchResults_Economy_C* Comp_MatchResults_Economy; // 0xc90(0x08)
	struct UComp_MatchResults_Damage_C* Comp_MatchResults_Damage; // 0xc98(0x08)
	struct UComp_MatchResults_Bomb_C* Comp_MatchResults_Bomb; // 0xca0(0x08)
	struct UComp_MatchResults_Abilities_C* Comp_MatchResults_Abilities; // 0xca8(0x08)
	struct UTimeGameStateComponent* GameStateBuyPhase; // 0xcb0(0x08)
	struct UTimeGameStateComponent* GameStateBombPlanted; // 0xcb8(0x08)
	struct UBaseGameStateComponent* GameStateTeamSwitch; // 0xcc0(0x08)
	struct UTimeGameStateComponent* GameStatePostRound; // 0xcc8(0x08)
	struct UTimeGameStateComponent* GameStateRound; // 0xcd0(0x08)
	char pad_CD8[0x8]; // 0xcd8(0x08)
	struct FTransform BombSpawnTransform; // 0xce0(0x60)
	struct APlantedBomb_C* BombPlantedObject; // 0xd40(0x08)
	double MatchTimerWarning; // 0xd48(0x08)
	bool HasPlayedMatchTimerWarning; // 0xd50(0x01)
	char pad_D51[0x7]; // 0xd51(0x07)
	double BombPlantedMatchTimerWarning; // 0xd58(0x08)
	struct FAresGameRewardMultiplier BombPlantTeamMateMultiplier; // 0xd60(0x24)
	int32_t WinSpread; // 0xd84(0x04)
	int32_t WinningDirection; // 0xd88(0x04)
	char pad_D8C[0x4]; // 0xd8c(0x04)
	struct TArray<double> CloseLossBonuses; // 0xd90(0x10)
	struct UBaseTeamComponent* L_LosingTeam; // 0xda0(0x08)
	double EscalatingMoney; // 0xda8(0x08)
	double PerRoundEscalationMoney; // 0xdb0(0x08)
	struct FName L_RewardName; // 0xdb8(0x0c)
	char pad_DC4[0x4]; // 0xdc4(0x04)
	double PerRoundEscalationEnergy; // 0xdc8(0x08)
	double EscalatingEnergy; // 0xdd0(0x08)
	int32_t EscalatingWinEnergy; // 0xdd8(0x04)
	int32_t PerRoundWinEnergyEscalation; // 0xddc(0x04)
	int32_t StartingEnergy; // 0xde0(0x04)
	char pad_DE4[0x4]; // 0xde4(0x04)
	struct TArray<struct FRoundEndRewards> RoundEndRewards; // 0xde8(0x10)
	double KillMoneyEscalation; // 0xdf8(0x08)
	struct AActor* SensorTowerMarker; // 0xe00(0x08)
	int32_t UltimatePointsGrantedOnKill; // 0xe08(0x04)
	char pad_E0C[0x4]; // 0xe0c(0x04)
	struct TArray<struct AOwnerExclusivePlayerInfo*> RedPlayersWhoGotUltimate; // 0xe10(0x10)
	struct TArray<struct AOwnerExclusivePlayerInfo*> BluePlayersWhoGotUltimate; // 0xe20(0x10)
	int32_t UltimatePointsGrantedOnDeath; // 0xe30(0x04)
	int32_t DeadWinners; // 0xe34(0x04)
	int32_t CloseLossKillBonus; // 0xe38(0x04)
	char pad_E3C[0x4]; // 0xe3c(0x04)
	struct TArray<struct FInsuranceRewards> InsuranceRewards; // 0xe40(0x10)
	struct FString Close Loss Reward Name; // 0xe50(0x10)
	int32_t ComputedUltimatePointsForKill; // 0xe60(0x04)
	char pad_E64[0x4]; // 0xe64(0x04)
	struct ABombDetonationActor_C* BombDetonationActor; // 0xe68(0x08)
	struct FMulticastInlineDelegate OnDefendersWipe; // 0xe70(0x10)
	struct FMulticastInlineDelegate OnAttackersWipe; // 0xe80(0x10)
	struct UAudBombGameModeVOComponent_C* AudBombGameModeVOComponent; // 0xe90(0x08)
	double InitialEquippableCooldownOnRoundStart; // 0xe98(0x08)
	int32_t BombPlanterUltimatePointReward; // 0xea0(0x04)
	int32_t BombDefuserUltimatePointReward; // 0xea4(0x04)
	struct FMulticastInlineDelegate AuthSideSwitchEvent; // 0xea8(0x10)
	double New Time Out Time; // 0xeb8(0x08)
	bool IsFirstRoundOnSide; // 0xec0(0x01)
	bool IsGameserverLoggingEnabled; // 0xec1(0x01)
	char pad_EC2[0x6]; // 0xec2(0x06)
	struct UBaseAudioComponent_C* Aud_BombGameMode; // 0xec8(0x08)
	struct TArray<struct AGameObject*> BuyDomes; // 0xed0(0x10)
	struct ABaseCeremony_C* AceCeremony; // 0xee0(0x08)
	struct TSoftClassPtr<UObject> BasePistolClass; // 0xee8(0x30)
	struct TArray<struct AAresItem*> DroppedBasePistols; // 0xf18(0x10)
	int32_t MaxOnGroundBasePistols; // 0xf28(0x04)
	char pad_F2C[0x4]; // 0xf2c(0x04)
	struct FClassInclusionExclusionFilter DeletableOnGroundEquippable; // 0xf30(0x50)
	struct FMulticastInlineDelegate BuyPhaseStarted; // 0xf80(0x10)
	char DefaultTickRate; // 0xf90(0x01)
	char PreRoundTickRate; // 0xf91(0x01)
	char pad_F92[0x6]; // 0xf92(0x06)
	struct TArray<struct AShooterPlayerState*> LightArmorGrantsForDisconnects; // 0xf98(0x10)
	struct TMap<struct UBaseTeamComponent*, int32_t> UltOrbGrantsForDisconnects; // 0xfa8(0x50)
	bool HasPendingDisconnectGrants; // 0xff8(0x01)
	bool BombPlantPhaseStarted; // 0xff9(0x01)
	bool IsStoreEnabled; // 0xffa(0x01)
	bool ShouldSpawnBomb; // 0xffb(0x01)
	bool ShouldTrackPistolDropsForDeletion; // 0xffc(0x01)
	char pad_FFD[0x3]; // 0xffd(0x03)
	double MatchTimeoutQueued; // 0x1000(0x08)
	struct UBaseTeamComponent* LastRoundWinningTeam; // 0x1008(0x08)
	struct ABombEquippable_C* BombEquippableActor; // 0x1010(0x08)
	struct FMulticastInlineDelegate InitializeTimeoutStateMachine; // 0x1018(0x10)
	struct FMulticastInlineDelegate QueueTimeout; // 0x1028(0x10)
	struct AShooterPlayerState* MatchTimeoutCallingPlayer; // 0x1038(0x08)
	struct FMulticastInlineDelegate CancelTimeout; // 0x1040(0x10)
	bool MatchTimeoutWasStoreEnabled; // 0x1050(0x01)
	bool NewVar_1; // 0x1051(0x01)
	bool SwitchingSide_VO; // 0x1052(0x01)
	bool MatchPoint_VO; // 0x1053(0x01)
	char pad_1054[0x4]; // 0x1054(0x04)
	struct FTimerHandle OvertimeCheatTimerHandle; // 0x1058(0x08)
	struct FTimerHandle AdvanceNumRoundsCheatTimerHandle; // 0x1060(0x08)
	int32_t AdvanceNumRoundsCheatTotalStartPoints; // 0x1068(0x04)
	bool DisableVandalRound2; // 0x106c(0x01)
	char pad_106D[0x3]; // 0x106d(0x03)
	struct TArray<struct TSoftClassPtr<UObject>> AllowedWeapons; // 0x1070(0x10)
	struct FMulticastInlineDelegate OnPostRoundEnded; // 0x1080(0x10)
	struct FMulticastInlineDelegate OnPostRoundPreExit; // 0x1090(0x10)
	struct UInteractableUserComponent* FurthestProgressCharacter; // 0x10a0(0x08)
	struct FName RoundWinReasonAttacker; // 0x10a8(0x0c)
	struct FName RoundWinReasonDefender; // 0x10b4(0x0c)
	double MinTimeRemainingForDisplayOnDefuse; // 0x10c0(0x08)
	bool ResetStateFlowOnGameStateRoundEnter; // 0x10c8(0x01)

	void Clean Up Round(enum class EAresRoundOutcome RoundResult, struct UBaseTeamComponent* WinningTeam, struct FName Reason); // Function BombGameMode.BombGameMode_C.Clean Up Round // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Bomb Defused Round Cleanup(struct AShooterCharacter* DefusingCharacter, bool& BombStateSet); // Function BombGameMode.BombGameMode_C.Bomb Defused Round Cleanup // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	bool Did Bomb Defuser Die(); // Function BombGameMode.BombGameMode_C.Did Bomb Defuser Die // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void CheatAdvanceRoundsEnd(struct FTimerHandle TickTimerToInvalidate); // Function BombGameMode.BombGameMode_C.CheatAdvanceRoundsEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void CheatAdvanceRoundsTick(); // Function BombGameMode.BombGameMode_C.CheatAdvanceRoundsTick // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandlePostRoundEnded(); // Function BombGameMode.BombGameMode_C.HandlePostRoundEnded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	struct AActor* CheatGetGameModeItem(); // Function BombGameMode.BombGameMode_C.CheatGetGameModeItem // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void On Player Spawned Any Phase(struct APawn* SpawnedPawn); // Function BombGameMode.BombGameMode_C.On Player Spawned Any Phase // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void AuthHandlePlayerKilled(struct AOwnerExclusivePlayerInfo* Killer, struct AOwnerExclusivePlayerInfo* Victim, struct APawn* KilledPawn, struct UDamageResponse* Response, struct TArray<struct FAresAssist>& AssistList, struct UDamageType* DamageType); // Function BombGameMode.BombGameMode_C.AuthHandlePlayerKilled // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindToShooterCharacterPreventTeamWipeAttribute(struct AShooterCharacter* ShooterCharacter); // Function BombGameMode.BombGameMode_C.BindToShooterCharacterPreventTeamWipeAttribute // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnPreventTeamWipeAttributeChanged(struct UAresAbilitySystemComponent* AbilitySystem, struct FGameplayAttribute& Attribute, float OldValue, float NewValue); // Function BombGameMode.BombGameMode_C.OnPreventTeamWipeAttributeChanged // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void CheckTeamsForAllDead(bool bCheckPreventionAttribute, bool& IsATeamWiped); // Function BombGameMode.BombGameMode_C.CheckTeamsForAllDead // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void IsWeaponAllowedInGameMode(struct UAresPurchasable* Weapon, bool& IsAllowed); // Function BombGameMode.BombGameMode_C.IsWeaponAllowedInGameMode // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BombDropped(struct AShooterCharacter* CharacterThatDroppedBomb); // Function BombGameMode.BombGameMode_C.BombDropped // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetGameStatePostRound(struct UTimeGameStateComponent*& GameStatePostRound); // Function BombGameMode.BombGameMode_C.GetGameStatePostRound // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void AuthCancelMatchTimeout(); // Function BombGameMode.BombGameMode_C.AuthCancelMatchTimeout // (BlueprintAuthorityOnly|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetPreviousRoundWinner(struct UBaseTeamComponent*& WinningTeam); // Function BombGameMode.BombGameMode_C.GetPreviousRoundWinner // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1af5410
	void GetBombGameState(struct ABombGameState_C*& BombGameState); // Function BombGameMode.BombGameMode_C.GetBombGameState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void ShouldPlayBombDroppedVO(bool& ShouldPlay); // Function BombGameMode.BombGameMode_C.ShouldPlayBombDroppedVO // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	bool AuthStartMatchTimeout(float Duration, struct AShooterPlayerState* CallingPlayer); // Function BombGameMode.BombGameMode_C.AuthStartMatchTimeout // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void TriggerMatchPointVOIfNeeded(); // Function BombGameMode.BombGameMode_C.TriggerMatchPointVOIfNeeded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ApplyDeathUltimatePoints(struct AShooterCharacter* Character, bool IsDelayed); // Function BombGameMode.BombGameMode_C.ApplyDeathUltimatePoints // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GrantDeathUltimatePoints(struct AOwnerExclusivePlayerInfo* KillerInfo, struct AOwnerExclusivePlayerInfo* VictimInfo, struct UObject* VictimPawn); // Function BombGameMode.BombGameMode_C.GrantDeathUltimatePoints // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GrantStartOfRoundCompensationForDisconnects(); // Function BombGameMode.BombGameMode_C.GrantStartOfRoundCompensationForDisconnects // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void RedistributeDisconnectedMoneyForTeam(struct UBaseTeamComponent* Team); // Function BombGameMode.BombGameMode_C.RedistributeDisconnectedMoneyForTeam // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Set Up Defuser Equippable(); // Function BombGameMode.BombGameMode_C.Set Up Defuser Equippable // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PerformEconomyReset(); // Function BombGameMode.BombGameMode_C.PerformEconomyReset // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ResetPlayerResources(struct AOwnerExclusivePlayerInfo* PlayerInfo); // Function BombGameMode.BombGameMode_C.ResetPlayerResources // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void RemoveDamagedArmor(); // Function BombGameMode.BombGameMode_C.RemoveDamagedArmor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void RemoveWeaponsLoweredBuff(); // Function BombGameMode.BombGameMode_C.RemoveWeaponsLoweredBuff // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ApplyWeaponsLoweredBuff(); // Function BombGameMode.BombGameMode_C.ApplyWeaponsLoweredBuff // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void CleanBuyDomes(); // Function BombGameMode.BombGameMode_C.CleanBuyDomes // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SpawnBuyDomes(); // Function BombGameMode.BombGameMode_C.SpawnBuyDomes // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetRoundEndReason(enum class EBombRoundEndReason& BombRoundEndReason); // Function BombGameMode.BombGameMode_C.GetRoundEndReason // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetGameModeVOState(struct FString& RedTeamState_RoundStart, struct FString& BlueTeamState_RoundStart, struct FString& RedTeamState_BubbleDown, struct FString& BlueTeamState_BubbleDown, struct FString& RedTeamState_BubbleDown_New, struct FString& BlueTeamState_BubbleDown_New, struct TArray<struct FAkSwitch>& Attacker Bubble Down Ak Switches, struct TArray<struct FAkSwitch>& Defender BubbleDown Ak Switches); // Function BombGameMode.BombGameMode_C.GetGameModeVOState // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1af5410
	bool CanPlayOnKillEffects(struct AShooterCharacter* Victim); // Function BombGameMode.BombGameMode_C.CanPlayOnKillEffects // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1af5410
	void GameserverLogMessage(struct FString Log String); // Function BombGameMode.BombGameMode_C.GameserverLogMessage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetTimeUntilPlantedBombExplodes(double TimeToExplode); // Function BombGameMode.BombGameMode_C.SetTimeUntilPlantedBombExplodes // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void AdjustScoreKillStreak(struct AOwnerExclusivePlayerInfo* Killer); // Function BombGameMode.BombGameMode_C.AdjustScoreKillStreak // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void AdjustScoreForPlant(struct AShooterCharacter* Planting Character); // Function BombGameMode.BombGameMode_C.AdjustScoreForPlant // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	bool IsSpawnpointValid(struct AShooterTeamStart* SpawnPoint, struct AShooterPlayerState* PlayerState); // Function BombGameMode.BombGameMode_C.IsSpawnpointValid // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1af5410
	void ConsumeUltimatePointsForAllPlayers(); // Function BombGameMode.BombGameMode_C.ConsumeUltimatePointsForAllPlayers // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GrantBombPlantReward(struct AShooterCharacter* Planting Character, enum class BombSiteEnum BombSite); // Function BombGameMode.BombGameMode_C.GrantBombPlantReward // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PlaySideSwitchTransition(); // Function BombGameMode.BombGameMode_C.PlaySideSwitchTransition // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void AuthApplyMoveToGameObject(struct FVector EndPoint, double Time); // Function BombGameMode.BombGameMode_C.AuthApplyMoveToGameObject // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnBuyPhaseStarted(); // Function BombGameMode.BombGameMode_C.OnBuyPhaseStarted // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnSideSwitch(); // Function BombGameMode.BombGameMode_C.OnSideSwitch // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleWinningTeamRewards(struct UBaseTeamComponent* WinningTeam); // Function BombGameMode.BombGameMode_C.HandleWinningTeamRewards // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdatePerRoundEscalatingRewards(); // Function BombGameMode.BombGameMode_C.UpdatePerRoundEscalatingRewards // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleLosingTeamRewards(struct UBaseTeamComponent* LosingTeam); // Function BombGameMode.BombGameMode_C.HandleLosingTeamRewards // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BombExplode_ShooterCharacters(); // Function BombGameMode.BombGameMode_C.BombExplode_ShooterCharacters // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GrantCloseLossBonus(struct UBaseTeamComponent* WinningTeam); // Function BombGameMode.BombGameMode_C.GrantCloseLossBonus // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BombExplode_WorldDynamic(); // Function BombGameMode.BombGameMode_C.BombExplode_WorldDynamic // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BombExplode_WorldStatic(); // Function BombGameMode.BombGameMode_C.BombExplode_WorldStatic // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GiveUltimatePointsToLoser(struct UBaseTeamComponent* Losing Team); // Function BombGameMode.BombGameMode_C.GiveUltimatePointsToLoser // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void CheatAutoHeal(struct AShooterPlayerController* ExecutingController); // Function BombGameMode.BombGameMode_C.CheatAutoHeal // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetBombState(enum class EAresBombStates& CurrentState); // Function BombGameMode.BombGameMode_C.GetBombState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void AuthBombDefused(struct AShooterCharacter* Defuser); // Function BombGameMode.BombGameMode_C.AuthBombDefused // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnBombExploded(struct ABombDetonationActor_C* Detonation); // Function BombGameMode.BombGameMode_C.OnBombExploded // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BombPlanted(struct AShooterCharacter* PlantingCharacter, enum class BombSiteEnum Site, struct APlantedBomb_C* PlantedBomb); // Function BombGameMode.BombGameMode_C.BombPlanted // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BombPickedUp(struct AShooterCharacter* PickupCharacter); // Function BombGameMode.BombGameMode_C.BombPickedUp // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetBombState(enum class EAresBombStates NewBombState); // Function BombGameMode.BombGameMode_C.SetBombState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void RoundTeardown(); // Function BombGameMode.BombGameMode_C.RoundTeardown // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void RoundSetup(); // Function BombGameMode.BombGameMode_C.RoundSetup // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitializeTimeoutStateMachine_Event(); // Function BombGameMode.BombGameMode_C.InitializeTimeoutStateMachine_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__GameStateTimeoutQueued_K2Node_ComponentBoundEvent_0_OnGameStateEnterSignature__DelegateSignature(struct UBaseGameStateComponent* EnteredState, struct UStateTransitionContext* StateTransitionContext); // Function BombGameMode.BombGameMode_C.BndEvt__GameStateTimeoutQueued_K2Node_ComponentBoundEvent_0_OnGameStateEnterSignature__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void TransitionToTimeout(struct UBaseGameStateComponent* EnteredState, struct UStateTransitionContext* StateTransitionContext); // Function BombGameMode.BombGameMode_C.TransitionToTimeout // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__GameStateTimeoutQueued_K2Node_ComponentBoundEvent_1_OnGameStateExitSignature__DelegateSignature(struct UBaseGameStateComponent* ExitedState, struct UStateTransitionContext* StateTransitionContext); // Function BombGameMode.BombGameMode_C.BndEvt__GameStateTimeoutQueued_K2Node_ComponentBoundEvent_1_OnGameStateExitSignature__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__GameStateTimeout_K2Node_ComponentBoundEvent_2_OnGameStateEnterSignature__DelegateSignature(struct UBaseGameStateComponent* EnteredState, struct UStateTransitionContext* StateTransitionContext); // Function BombGameMode.BombGameMode_C.BndEvt__GameStateTimeout_K2Node_ComponentBoundEvent_2_OnGameStateEnterSignature__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__GameStateTimeout_K2Node_ComponentBoundEvent_3_OnGameStateExitSignature__DelegateSignature(struct UBaseGameStateComponent* ExitedState, struct UStateTransitionContext* StateTransitionContext); // Function BombGameMode.BombGameMode_C.BndEvt__GameStateTimeout_K2Node_ComponentBoundEvent_3_OnGameStateExitSignature__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void QueueTimeout_Event(double Duration); // Function BombGameMode.BombGameMode_C.QueueTimeout_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Exit Timeout State(struct UBaseGameStateComponent* ExitedState, struct UStateTransitionContext* StateTransitionContext); // Function BombGameMode.BombGameMode_C.Exit Timeout State // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void CancelTimeout_Event(); // Function BombGameMode.BombGameMode_C.CancelTimeout_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__GameStateTimeoutCountdown_K2Node_ComponentBoundEvent_4_OnGameStateEnterSignature__DelegateSignature(struct UBaseGameStateComponent* EnteredState, struct UStateTransitionContext* StateTransitionContext); // Function BombGameMode.BombGameMode_C.BndEvt__GameStateTimeoutCountdown_K2Node_ComponentBoundEvent_4_OnGameStateEnterSignature__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void Play Three Second Countdown Events(); // Function BombGameMode.BombGameMode_C.Play Three Second Countdown Events // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ReceiveBeginPlay(); // Function BombGameMode.BombGameMode_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void OnGameRestart_Event_1(struct UBaseGameStateComponent* CurrentState); // Function BombGameMode.BombGameMode_C.OnGameRestart_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnDefendersWipe_GameStateRound(); // Function BombGameMode.BombGameMode_C.OnDefendersWipe_GameStateRound // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnAttackersWipe_GameStateRound(); // Function BombGameMode.BombGameMode_C.OnAttackersWipe_GameStateRound // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnTimeout_GameStateRound(); // Function BombGameMode.BombGameMode_C.OnTimeout_GameStateRound // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void TurnOffBuying(); // Function BombGameMode.BombGameMode_C.TurnOffBuying // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GoingToPreGame(); // Function BombGameMode.BombGameMode_C.GoingToPreGame // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnAuthTookDamage_GameStateRound(struct AShooterCharacter* VictimCharacter, struct AController* DamageInstigator, struct AActor* DamagCauser, float Damage); // Function BombGameMode.BombGameMode_C.OnAuthTookDamage_GameStateRound // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnDefendersWipe_GameStateBombPlanted(); // Function BombGameMode.BombGameMode_C.OnDefendersWipe_GameStateBombPlanted // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnTimeout_GameStateBombPlanted(); // Function BombGameMode.BombGameMode_C.OnTimeout_GameStateBombPlanted // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandlePlayerSpawnInRound(struct APawn* SpawnedPawn); // Function BombGameMode.BombGameMode_C.HandlePlayerSpawnInRound // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnDamageSectionDestroyed(struct UDamageableComponent* DamageHandler, struct UDamageSectionComponent* Section, struct UDamageType* DamageTypeClass, struct AController* Instigator, struct AActor* DamageCauser); // Function BombGameMode.BombGameMode_C.OnDamageSectionDestroyed // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void FiveSecondsBeforeSetupEnds(); // Function BombGameMode.BombGameMode_C.FiveSecondsBeforeSetupEnds // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnStateEnter (GameStateBuyPhase)(struct UBaseGameStateComponent* EnteredState, struct UStateTransitionContext* StateTransitionContext); // Function BombGameMode.BombGameMode_C.OnStateEnter (GameStateBuyPhase) // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnStateEnter (GameStateRound)(struct UBaseGameStateComponent* EnteredState, struct UStateTransitionContext* StateTransitionContext); // Function BombGameMode.BombGameMode_C.OnStateEnter (GameStateRound) // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnStateExit (GameStateRound)(struct UBaseGameStateComponent* ExitedState, struct UStateTransitionContext* StateTransitionContext); // Function BombGameMode.BombGameMode_C.OnStateExit (GameStateRound) // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnStateEnter (GameStatePostRound)(struct UBaseGameStateComponent* EnteredState, struct UStateTransitionContext* StateTransitionContext); // Function BombGameMode.BombGameMode_C.OnStateEnter (GameStatePostRound) // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnStateExit (GameStatePostRound)(struct UBaseGameStateComponent* ExitedState, struct UStateTransitionContext* StateTransitionContext); // Function BombGameMode.BombGameMode_C.OnStateExit (GameStatePostRound) // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnStateEnter (GameStateTeamSwitch)(struct UBaseGameStateComponent* EnteredState, struct UStateTransitionContext* StateTransitionContext); // Function BombGameMode.BombGameMode_C.OnStateEnter (GameStateTeamSwitch) // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnStateExit (GameStateTeamSwitch)(struct UBaseGameStateComponent* ExitedState, struct UStateTransitionContext* StateTransitionContext); // Function BombGameMode.BombGameMode_C.OnStateExit (GameStateTeamSwitch) // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnStateEnter (GameStateBombPlanted)(struct UBaseGameStateComponent* EnteredState, struct UStateTransitionContext* StateTransitionContext); // Function BombGameMode.BombGameMode_C.OnStateEnter (GameStateBombPlanted) // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnStateExit (GameStateBombPlanted)(struct UBaseGameStateComponent* ExitedState, struct UStateTransitionContext* StateTransitionContext); // Function BombGameMode.BombGameMode_C.OnStateExit (GameStateBombPlanted) // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnStateTick (GameStateBuyPhase)(struct UBaseGameStateComponent* State, float DeltaTimeSeconds); // Function BombGameMode.BombGameMode_C.OnStateTick (GameStateBuyPhase) // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnStateExit (GameStateBuyPhase)(struct UBaseGameStateComponent* ExitedState, struct UStateTransitionContext* StateTransitionContext); // Function BombGameMode.BombGameMode_C.OnStateExit (GameStateBuyPhase) // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ThreeSecCountdownEvent(); // Function BombGameMode.BombGameMode_C.ThreeSecCountdownEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnStateTick (GameStateRound)(struct UBaseGameStateComponent* State, float DeltaTimeSeconds); // Function BombGameMode.BombGameMode_C.OnStateTick (GameStateRound) // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnBombPlanted(struct FVector PlantLocation, struct AShooterCharacter* BombPlanter, enum class BombSiteEnum PlantSite); // Function BombGameMode.BombGameMode_C.OnBombPlanted // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnBombDefused_GameStateBombPlanted(struct AShooterCharacter* DefusingCharacter); // Function BombGameMode.BombGameMode_C.OnBombDefused_GameStateBombPlanted // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ClearWinEvents(); // Function BombGameMode.BombGameMode_C.ClearWinEvents // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleAwayPenaltiesAndEndRound(bool PersistDuringReset); // Function BombGameMode.BombGameMode_C.HandleAwayPenaltiesAndEndRound // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void FinalizeEndOfGame(); // Function BombGameMode.BombGameMode_C.FinalizeEndOfGame // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__GameStateLoadInComponent_K2Node_ComponentBoundEvent_2_OnGameStateEnterSignature__DelegateSignature(struct UBaseGameStateComponent* EnteredState, struct UStateTransitionContext* StateTransitionContext); // Function BombGameMode.BombGameMode_C.BndEvt__GameStateLoadInComponent_K2Node_ComponentBoundEvent_2_OnGameStateEnterSignature__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__GameStateGameOverComponent_K2Node_ComponentBoundEvent_0_OnGameStateEnterSignature__DelegateSignature(struct UBaseGameStateComponent* EnteredState, struct UStateTransitionContext* StateTransitionContext); // Function BombGameMode.BombGameMode_C.BndEvt__GameStateGameOverComponent_K2Node_ComponentBoundEvent_0_OnGameStateEnterSignature__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__GameStateSetupComponent_K2Node_ComponentBoundEvent_3_OnGameStateEnterSignature__DelegateSignature(struct UBaseGameStateComponent* EnteredState, struct UStateTransitionContext* StateTransitionContext); // Function BombGameMode.BombGameMode_C.BndEvt__GameStateSetupComponent_K2Node_ComponentBoundEvent_3_OnGameStateEnterSignature__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__GameStateIntroComponent_K2Node_ComponentBoundEvent_8_OnGameStateExitSignature__DelegateSignature(struct UBaseGameStateComponent* ExitedState, struct UStateTransitionContext* StateTransitionContext); // Function BombGameMode.BombGameMode_C.BndEvt__GameStateIntroComponent_K2Node_ComponentBoundEvent_8_OnGameStateExitSignature__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void OnPlayerSpawned (BuyPhase)(struct APawn* SpawnedPawn); // Function BombGameMode.BombGameMode_C.OnPlayerSpawned (BuyPhase) // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ModifyRewards(); // Function BombGameMode.BombGameMode_C.ModifyRewards // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__GameStateLoadInComponent_K2Node_ComponentBoundEvent_4_OnGameStateExitSignature__DelegateSignature(struct UBaseGameStateComponent* ExitedState, struct UStateTransitionContext* StateTransitionContext); // Function BombGameMode.BombGameMode_C.BndEvt__GameStateLoadInComponent_K2Node_ComponentBoundEvent_4_OnGameStateExitSignature__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void CheatAdvanceToOvertime(); // Function BombGameMode.BombGameMode_C.CheatAdvanceToOvertime // (BlueprintAuthorityOnly|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void AdvanceToOvertimeTick(); // Function BombGameMode.BombGameMode_C.AdvanceToOvertimeTick // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void CheatAdvanceNumRounds(int32_t NumRounds); // Function BombGameMode.BombGameMode_C.CheatAdvanceNumRounds // (BlueprintAuthorityOnly|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void AdvanceNumRoundsTick(); // Function BombGameMode.BombGameMode_C.AdvanceNumRoundsTick // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreGameStatePostRoundExit(); // Function BombGameMode.BombGameMode_C.PreGameStatePostRoundExit // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__BombGameMode_VoteManagerComponent_K2Node_ComponentBoundEvent_5_OnVoteManagerRoundStarting__DelegateSignature(); // Function BombGameMode.BombGameMode_C.BndEvt__BombGameMode_VoteManagerComponent_K2Node_ComponentBoundEvent_5_OnVoteManagerRoundStarting__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void OnAuthWinRound(struct UBaseTeamComponent* WinningTeam); // Function BombGameMode.BombGameMode_C.OnAuthWinRound // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void BroadcastErrorMessage(struct FString ErrorMessage); // Function BombGameMode.BombGameMode_C.BroadcastErrorMessage // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void AudSetupComponents(); // Function BombGameMode.BombGameMode_C.AudSetupComponents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnMatchTimerWarning(); // Function BombGameMode.BombGameMode_C.OnMatchTimerWarning // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BeginTrackingPistolDrops(); // Function BombGameMode.BombGameMode_C.BeginTrackingPistolDrops // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void EndTrackingPistolDrops(); // Function BombGameMode.BombGameMode_C.EndTrackingPistolDrops // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void AuthOnInventoryTransaction_Event_1(enum class EInventoryTransaction Transaction, struct UAresInventory* Inventory, struct AAresItem* Item); // Function BombGameMode.BombGameMode_C.AuthOnInventoryTransaction_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void RedistributeDisconnectedPlayerMoney(); // Function BombGameMode.BombGameMode_C.RedistributeDisconnectedPlayerMoney // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Aud On Bomb Carrier Killed(struct AShooterCharacter* OldCarrier); // Function BombGameMode.BombGameMode_C.Aud On Bomb Carrier Killed // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void CheatSetLossStreakSettings(int32_t Loss Streak Multiplier, int32_t Loss Streak Max); // Function BombGameMode.BombGameMode_C.CheatSetLossStreakSettings // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void CheatSetGameReward(struct FName RewardName, int32_t Money); // Function BombGameMode.BombGameMode_C.CheatSetGameReward // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void CheatSetPlantReward(int32_t Money); // Function BombGameMode.BombGameMode_C.CheatSetPlantReward // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GrantDelayedUltPointDeathReward(struct AShooterCharacter* Character); // Function BombGameMode.BombGameMode_C.GrantDelayedUltPointDeathReward // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_BombGameMode(int32_t EntryPoint); // Function BombGameMode.BombGameMode_C.ExecuteUbergraph_BombGameMode // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
	void OnPostRoundPreExit__DelegateSignature(); // Function BombGameMode.BombGameMode_C.OnPostRoundPreExit__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnPostRoundEnded__DelegateSignature(); // Function BombGameMode.BombGameMode_C.OnPostRoundEnded__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void CancelTimeout__DelegateSignature(); // Function BombGameMode.BombGameMode_C.CancelTimeout__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void QueueTimeout__DelegateSignature(); // Function BombGameMode.BombGameMode_C.QueueTimeout__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitializeTimeoutStateMachine__DelegateSignature(); // Function BombGameMode.BombGameMode_C.InitializeTimeoutStateMachine__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BuyPhaseStarted__DelegateSignature(); // Function BombGameMode.BombGameMode_C.BuyPhaseStarted__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void AuthSideSwitchEvent__DelegateSignature(); // Function BombGameMode.BombGameMode_C.AuthSideSwitchEvent__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnAttackersWipe__DelegateSignature(); // Function BombGameMode.BombGameMode_C.OnAttackersWipe__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnDefendersWipe__DelegateSignature(); // Function BombGameMode.BombGameMode_C.OnDefendersWipe__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

