// BlueprintGeneratedClass BaseGameState.BaseGameState_C
// Size: 0x1000 (Inherited: 0xe30)
struct ABaseGameState_C : AShooterGameState {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe30(0x08)
	struct UComp_GameState_GameplayStrings_C* Comp_GameState_GameplayStrings; // 0xe38(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0xe40(0x08)
	struct UHUDVisibilityData* HUDVisibilityData; // 0xe48(0x08)
	struct UComp_WidgetPool_C* Comp_WidgetPool; // 0xe50(0x08)
	struct UComp_GameState_KillChampion_C* Comp_GameState_KillChampion; // 0xe58(0x08)
	struct UComp_GameState_TrackedDebuffTags_C* Comp_GameState_TrackedDebuffTags; // 0xe60(0x08)
	struct UBaseGameplayNotificationSystemComp_C* GameplayNotificationSystemComp; // 0xe68(0x08)
	struct UComp_GameState_HUDEvents_C* Comp_GameState_HUDEvents; // 0xe70(0x08)
	struct ABlueprintTelemetryActor_C* BlueprintTelemetryActor; // 0xe78(0x08)
	int32_t MaxSides; // 0xe80(0x04)
	char pad_E84[0x4]; // 0xe84(0x04)
	struct TArray<struct FSlowTimeRequest> SlowTimeRequests; // 0xe88(0x10)
	double Temp_SlowTimeTransitionSpeed; // 0xe98(0x08)
	double Temp_TimeDilationGoal; // 0xea0(0x08)
	double Temp_AfterDilation; // 0xea8(0x08)
	bool ActiveSlowTimeEffects; // 0xeb0(0x01)
	char pad_EB1[0x7]; // 0xeb1(0x07)
	struct FMulticastInlineDelegate OnWaitingForPlayersChanged; // 0xeb8(0x10)
	bool IsWaitingForPlayers; // 0xec8(0x01)
	char pad_EC9[0x7]; // 0xec9(0x07)
	struct FMulticastInlineDelegate OnLevelStreamingComplete; // 0xed0(0x10)
	struct FMulticastInlineDelegate OnThreeSecCountdownStart; // 0xee0(0x10)
	struct FMulticastInlineDelegate OnFiveSecCountdownStart; // 0xef0(0x10)
	struct FText DefaultRoundNotifyText; // 0xf00(0x18)
	bool IsWarmupRound; // 0xf18(0x01)
	char pad_F19[0x7]; // 0xf19(0x07)
	struct FMulticastInlineDelegate OnCountdownEventsReset; // 0xf20(0x10)
	struct FMulticastInlineDelegate OnWarmupRoundChanged; // 0xf30(0x10)
	bool ShowCharacterSpecificHUD; // 0xf40(0x01)
	char pad_F41[0x7]; // 0xf41(0x07)
	double CorpseReplaceDelayOffset; // 0xf48(0x08)
	int32_t DefaultScoreLimit; // 0xf50(0x04)
	bool DisableEnemySpottedVO; // 0xf54(0x01)
	char pad_F55[0x3]; // 0xf55(0x03)
	struct FMulticastInlineDelegate OnTeamsAdded; // 0xf58(0x10)
	bool DisableEnemySpotted_NoRegionVO; // 0xf68(0x01)
	bool ThreeSecondCountdownTriggered; // 0xf69(0x01)
	bool FiveSecondCountdownTriggered; // 0xf6a(0x01)
	struct FGameStateInfo GameStateInfo; // 0xf6b(0x01)
	char pad_F6C[0x4]; // 0xf6c(0x04)
	struct FMulticastInlineDelegate OnOvertimeRulesSet; // 0xf70(0x10)
	struct FMulticastInlineDelegate AlertThreatCompass; // 0xf80(0x10)
	struct TSoftClassPtr<UObject> FootstepABTestClass; // 0xf90(0x30)
	bool ShouldShowEconomyTooltip; // 0xfc0(0x01)
	char pad_FC1[0x7]; // 0xfc1(0x07)
	struct AEffectContainer* AbilityCannotBeUsedFXC; // 0xfc8(0x08)
	double PostDeathActionWindowDuration; // 0xfd0(0x08)
	double UpdateSlowTimeDelta; // 0xfd8(0x08)
	struct FMulticastInlineDelegate OnShowCharacterSpecificHUDChanged; // 0xfe0(0x10)
	struct UAkAudioEvent* AkAud_3SecCountdownEvent; // 0xff0(0x08)
	double TimeDilationToApply; // 0xff8(0x08)

	void OnRep_ShowCharacterSpecificHUD(); // Function BaseGameState.BaseGameState_C.OnRep_ShowCharacterSpecificHUD // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void RefreshModifiersAvailable(); // Function BaseGameState.BaseGameState_C.RefreshModifiersAvailable // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Match End(struct FAresMatchResult& MatchResult); // Function BaseGameState.BaseGameState_C.Match End // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnChosenCeremonyForRoundUpdate(struct AAresCeremony* ChosenCeremony); // Function BaseGameState.BaseGameState_C.OnChosenCeremonyForRoundUpdate // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	bool IsNextRoundOvertime(); // Function BaseGameState.BaseGameState_C.IsNextRoundOvertime // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1af5410
	void InitABTesting(); // Function BaseGameState.BaseGameState_C.InitABTesting // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ShouldAnnouncerPlayForObserver(struct UAnnouncerVOComponent_C* Announcer Component, struct AObserverPlayerState*& Observer, bool& Should Play); // Function BaseGameState.BaseGameState_C.ShouldAnnouncerPlayForObserver // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void IsTeamOnMatchPoint(struct UBaseTeamComponent* Team, bool& IsOnMatchPoint); // Function BaseGameState.BaseGameState_C.IsTeamOnMatchPoint // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1af5410
	void GetDefuseProgress(double& CurProgress, double& MaxProgress); // Function BaseGameState.BaseGameState_C.GetDefuseProgress // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void GetPlantProgress(double& CurProgress, double& MaxProgress); // Function BaseGameState.BaseGameState_C.GetPlantProgress // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetPlantInProgress(bool& InProgress); // Function BaseGameState.BaseGameState_C.GetPlantInProgress // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetBombState(enum class EAresBombStates& CurrentState); // Function BaseGameState.BaseGameState_C.GetBombState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ShouldPlayBombEvents(bool& ReturnVal); // Function BaseGameState.BaseGameState_C.ShouldPlayBombEvents // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void Set Minimum Income Variables(int32_t MinimumIncomeForLoss, bool WillResetMoneyNextRound, int32_t IncomeForWin, int32_t IncomeForLossStreak); // Function BaseGameState.BaseGameState_C.Set Minimum Income Variables // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void CalculateNextRoundMinimumMoney(int32_t CurrentMoney, int32_t& MinimumMoney); // Function BaseGameState.BaseGameState_C.CalculateNextRoundMinimumMoney // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void CalculateLossStreakBonusMoney(bool IsForNextRound, int32_t& Return Value); // Function BaseGameState.BaseGameState_C.CalculateLossStreakBonusMoney // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1af5410
	void HasThreeSecondCountdownTriggered(bool& Triggered); // Function BaseGameState.BaseGameState_C.HasThreeSecondCountdownTriggered // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void IsMinimumRoundRequirementMet(int32_t Current Round, bool& Has Played Minimum Rounds); // Function BaseGameState.BaseGameState_C.IsMinimumRoundRequirementMet // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1af5410
	void AuthSetIsWarmupRound(bool IsWarmupRound); // Function BaseGameState.BaseGameState_C.AuthSetIsWarmupRound // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnRep_IsWarmupRound(); // Function BaseGameState.BaseGameState_C.OnRep_IsWarmupRound // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	bool IsInOvertime(); // Function BaseGameState.BaseGameState_C.IsInOvertime // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1af5410
	void GetOtherTeam(struct UBaseTeamComponent* Team, struct UBaseTeamComponent*& OtherTeam); // Function BaseGameState.BaseGameState_C.GetOtherTeam // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void GetDefenderTeam(struct UBaseTeamComponent*& Team); // Function BaseGameState.BaseGameState_C.GetDefenderTeam // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1af5410
	void GetAttackerTeam(struct UBaseTeamComponent*& Team); // Function BaseGameState.BaseGameState_C.GetAttackerTeam // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1af5410
	void AuthSetIsWaitingForPlayers(bool WaitingForPlayers); // Function BaseGameState.BaseGameState_C.AuthSetIsWaitingForPlayers // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnRep_IsWaitingForPlayers(); // Function BaseGameState.BaseGameState_C.OnRep_IsWaitingForPlayers // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetRoundNotifyText_Deprecated(struct FText& OutRoundNotifyString); // Function BaseGameState.BaseGameState_C.GetRoundNotifyText_Deprecated // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void AuthCancelSlowTimeRequest(struct AActor* OriginalRequestingActor); // Function BaseGameState.BaseGameState_C.AuthCancelSlowTimeRequest // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void AuthUpdateSlowTimeRequests(double DeltaSeconds); // Function BaseGameState.BaseGameState_C.AuthUpdateSlowTimeRequests // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void AuthSlowTime(struct FSlowTimeRequest New Slow Time Request); // Function BaseGameState.BaseGameState_C.AuthSlowTime // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ShouldSwitchSides(bool& Should Switch Sides); // Function BaseGameState.BaseGameState_C.ShouldSwitchSides // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void IsOvertime(bool& Ret); // Function BaseGameState.BaseGameState_C.IsOvertime // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void HasTeamWon(struct UBaseTeamComponent* Team, bool& HasWon); // Function BaseGameState.BaseGameState_C.HasTeamWon // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void IsFirstGameRound(bool& IsFirstGameRound); // Function BaseGameState.BaseGameState_C.IsFirstGameRound // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void IsSideSwitchRound(bool& Ret); // Function BaseGameState.BaseGameState_C.IsSideSwitchRound // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void IsMatchPoint(bool& Ret); // Function BaseGameState.BaseGameState_C.IsMatchPoint // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void GetMaxRoundsPerSide(int32_t& MaxRoundsPerSide); // Function BaseGameState.BaseGameState_C.GetMaxRoundsPerSide // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1af5410
	void GetSidesPlayed(int32_t& SidesPlayed); // Function BaseGameState.BaseGameState_C.GetSidesPlayed // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void GetRoundsPlayedThisSide(int32_t& RoundsPlayedThisSide); // Function BaseGameState.BaseGameState_C.GetRoundsPlayedThisSide // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void TryOverrideMatchTimerText(bool& ShouldOverride, struct FText& OverrideText); // Function BaseGameState.BaseGameState_C.TryOverrideMatchTimerText // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void TryOverrideMatchTimerColor(bool& ShouldOverride, struct FLinearColor& OverrideColor); // Function BaseGameState.BaseGameState_C.TryOverrideMatchTimerColor // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnPreInitGame(); // Function BaseGameState.BaseGameState_C.OnPreInitGame // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void ReceiveTick(float DeltaSeconds); // Function BaseGameState.BaseGameState_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void AuthUpdateSlowTime(double DeltaTime); // Function BaseGameState.BaseGameState_C.AuthUpdateSlowTime // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetWaitingForPlayers(bool bWaitingForPlayers); // Function BaseGameState.BaseGameState_C.SetWaitingForPlayers // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void LevelStreamingComplete(); // Function BaseGameState.BaseGameState_C.LevelStreamingComplete // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ThreeSecCountdownEvent(); // Function BaseGameState.BaseGameState_C.ThreeSecCountdownEvent // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void FiveSecCountdownEvent(); // Function BaseGameState.BaseGameState_C.FiveSecCountdownEvent // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Multicast Warmup Ending(); // Function BaseGameState.BaseGameState_C.Multicast Warmup Ending // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ReceiveBeginPlay(); // Function BaseGameState.BaseGameState_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void GFTFloatChanged(enum class EGameFeatureFloatConfigName GameFeatureFloatConfigName, float ConfigValue); // Function BaseGameState.BaseGameState_C.GFTFloatChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ScoreLimitChanged(bool IsValid, double Value); // Function BaseGameState.BaseGameState_C.ScoreLimitChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ResetCoundownEvents(); // Function BaseGameState.BaseGameState_C.ResetCoundownEvents // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void MarkDroppedBombEvent(struct AEquippableGroundPickup_C* DroppedBombActor); // Function BaseGameState.BaseGameState_C.MarkDroppedBombEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OrbPickedUpRPC(struct AShooterCharacter* Orb Gatherer, struct ABaseCollectableOrb_C* Collectable Orb); // Function BaseGameState.BaseGameState_C.OrbPickedUpRPC // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void MulticastTimeoutEnding(); // Function BaseGameState.BaseGameState_C.MulticastTimeoutEnding // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void RoundEnd(int32_t RoundNumberEnded); // Function BaseGameState.BaseGameState_C.RoundEnd // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BaseGameState.BaseGameState_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void TryCheckModifiersOnPlayerSpawn(struct AShooterPlayerState* PlayerState, struct APawn* Pawn); // Function BaseGameState.BaseGameState_C.TryCheckModifiersOnPlayerSpawn // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ModifierManagerReadyForCheck(); // Function BaseGameState.BaseGameState_C.ModifierManagerReadyForCheck // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OrbSpawned(struct ABaseCollectableOrb_C* Collectable Orb); // Function BaseGameState.BaseGameState_C.OrbSpawned // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OrbUseStarted(struct AShooterCharacter* Orb Gatherer, struct ABaseCollectableOrb_C* Collectable Orb); // Function BaseGameState.BaseGameState_C.OrbUseStarted // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OrbUseCancelled(struct AShooterCharacter* Orb Gatherer, struct ABaseCollectableOrb_C* Collectable Orb); // Function BaseGameState.BaseGameState_C.OrbUseCancelled // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OrbDespawned(struct ABaseCollectableOrb_C* Collectable Orb); // Function BaseGameState.BaseGameState_C.OrbDespawned // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void CheatSetGameSpeed(float GameSpeedPercent, float SlowDurationSeconds, float SlowSpeed); // Function BaseGameState.BaseGameState_C.CheatSetGameSpeed // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnGameRuleBoolChanged(enum class EGameRuleBoolName GameRuleName, bool bEnabled); // Function BaseGameState.BaseGameState_C.OnGameRuleBoolChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PlasmaArmorRegenPoolUpdated(struct AShooterCharacter* OwningPlayer, double NewValue); // Function BaseGameState.BaseGameState_C.PlasmaArmorRegenPoolUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PlasmaArmorMaxRegenPoolUpdated(struct AShooterCharacter* OwningPlayer, double NewValue); // Function BaseGameState.BaseGameState_C.PlasmaArmorMaxRegenPoolUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void TryCheckModifiersOnPlayerStateChanged(struct AAresPlayerStateBase* NewValue); // Function BaseGameState.BaseGameState_C.TryCheckModifiersOnPlayerStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_BaseGameState(int32_t EntryPoint); // Function BaseGameState.BaseGameState_C.ExecuteUbergraph_BaseGameState // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
	void OnShowCharacterSpecificHUDChanged__DelegateSignature(bool CharacterSpecificHUDEnabled); // Function BaseGameState.BaseGameState_C.OnShowCharacterSpecificHUDChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnCountdownEventsReset__DelegateSignature(); // Function BaseGameState.BaseGameState_C.OnCountdownEventsReset__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void AlertThreatCompass__DelegateSignature(struct ADangerCompassActor_C* Location); // Function BaseGameState.BaseGameState_C.AlertThreatCompass__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnOvertimeRulesSet__DelegateSignature(); // Function BaseGameState.BaseGameState_C.OnOvertimeRulesSet__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnTeamsAdded__DelegateSignature(); // Function BaseGameState.BaseGameState_C.OnTeamsAdded__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnWarmupRoundChanged__DelegateSignature(bool IsWarmupRound); // Function BaseGameState.BaseGameState_C.OnWarmupRoundChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnFiveSecCountdownStart__DelegateSignature(); // Function BaseGameState.BaseGameState_C.OnFiveSecCountdownStart__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnThreeSecCountdownStart__DelegateSignature(); // Function BaseGameState.BaseGameState_C.OnThreeSecCountdownStart__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnLevelStreamingComplete__DelegateSignature(); // Function BaseGameState.BaseGameState_C.OnLevelStreamingComplete__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnWaitingForPlayersChanged__DelegateSignature(bool WaitingForPlayers); // Function BaseGameState.BaseGameState_C.OnWaitingForPlayersChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

