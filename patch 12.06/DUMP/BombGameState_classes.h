// BlueprintGeneratedClass BombGameState.BombGameState_C
// Size: 0x1260 (Inherited: 0x1030)
struct ABombGameState_C : ABaseTwoTeamGameState_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1030(0x08)
	struct USyncedTimerComponent* BeforePostRoundTransitionSyncTimer; // 0x1038(0x08)
	struct URoundRestoreManagerComponent* RoundRestoreManager; // 0x1040(0x08)
	struct UBombCinematicsManagerComponent_C* BombCinematicsManagerComponent; // 0x1048(0x08)
	struct UComp_GameMode_Overtime_SuddenDeath_C* Comp_GameMode_Overtime_SuddenDeath; // 0x1050(0x08)
	struct UComp_BombEvents_C* Comp_BombEvents; // 0x1058(0x08)
	struct UAnnouncerVOComponent_C* AttackerAnnouncer; // 0x1060(0x08)
	struct UAnnouncerVOComponent_C* DefenderAnnouncer; // 0x1068(0x08)
	enum class EAresBombStates BombState; // 0x1070(0x01)
	bool ShouldOverrideMatchTimer; // 0x1071(0x01)
	char pad_1072[0x6]; // 0x1072(0x06)
	struct APlantedBomb_C* PlantedBomb; // 0x1078(0x08)
	struct FText OverrideMatchTimerText; // 0x1080(0x18)
	struct TArray<int32_t> BombRewardStacksPerSite; // 0x1098(0x10)
	struct TArray<int32_t> BombRewardPerStacks; // 0x10a8(0x10)
	enum class BombSiteEnum BombSiteRewardReset; // 0x10b8(0x01)
	bool ShouldResetBombSiteReward; // 0x10b9(0x01)
	char pad_10BA[0x2]; // 0x10ba(0x02)
	int32_t LostStreakMultiplier; // 0x10bc(0x04)
	int32_t CurrentLossStreak; // 0x10c0(0x04)
	int32_t MaxLossStreak; // 0x10c4(0x04)
	struct UBaseTeamComponent* LossStreakTeam; // 0x10c8(0x08)
	struct FMulticastInlineDelegate OnOrbPickedUp; // 0x10d0(0x10)
	bool bDebugInWorldTeamVision; // 0x10e0(0x01)
	bool bVerboseDebugInWorldTeamVision; // 0x10e1(0x01)
	char pad_10E2[0x6]; // 0x10e2(0x06)
	struct TMap<struct AShooterCharacter*, struct AInWorldTeamVisionActor_C*> ShooterCharacterToInWorldTeamVisionActor; // 0x10e8(0x50)
	struct AShooterCharacter* BombCarrier; // 0x1138(0x08)
	struct FDateTime CarrierSpottedTimestamp; // 0x1140(0x08)
	bool enableInWorldTeamVision; // 0x1148(0x01)
	char pad_1149[0x7]; // 0x1149(0x07)
	struct FMulticastInlineDelegate EnemyEnteredVisibility; // 0x1150(0x10)
	struct FMulticastInlineDelegate EnemyExitVisibility; // 0x1160(0x10)
	struct TArray<struct ADangerCompassActor_C*> enemyLocationsToIndicate; // 0x1170(0x10)
	struct TArray<struct FSpottedCharacterEntry> SpottedEnemies; // 0x1180(0x10)
	struct AShooterCharacter* LastKilledShooterCharacter; // 0x1190(0x08)
	struct TArray<struct FSpottedCharacterEntry> SpottedEnemiesPlayer; // 0x1198(0x10)
	struct FMulticastInlineDelegate OnBuyPhaseUpdated; // 0x11a8(0x10)
	bool IsBuyPhase; // 0x11b8(0x01)
	char pad_11B9[0x7]; // 0x11b9(0x07)
	struct AShooterCharacter* BombDropper; // 0x11c0(0x08)
	bool ShouldPlayBombCarrierEvents; // 0x11c8(0x01)
	bool ShouldResetEconOnSideSwap; // 0x11c9(0x01)
	char pad_11CA[0x2]; // 0x11ca(0x02)
	int32_t MinimumIncomeForLoss; // 0x11cc(0x04)
	bool WillResetMoneyNextRound; // 0x11d0(0x01)
	char pad_11D1[0x7]; // 0x11d1(0x07)
	struct AShooterCharacter* CharacterVO_Killer; // 0x11d8(0x08)
	struct FMulticastInlineDelegate NewEventDispatcher_1; // 0x11e0(0x10)
	struct FMulticastInlineDelegate OnPostRoundTimerExpired; // 0x11f0(0x10)
	struct FMulticastInlineDelegate OnOrbSpawned; // 0x1200(0x10)
	struct FMulticastInlineDelegate OnOrbUseStarted; // 0x1210(0x10)
	struct FMulticastInlineDelegate OnOrbUseCancelled; // 0x1220(0x10)
	struct FMulticastInlineDelegate OnOrbDespawned; // 0x1230(0x10)
	struct FMulticastInlineDelegate OnPlasmaArmorRegenPoolUpdated; // 0x1240(0x10)
	struct FMulticastInlineDelegate OnPlasmaArmorMaxRegenPoolUpdated; // 0x1250(0x10)

	bool IsBombModeGameState(); // Function BombGameState.BombGameState_C.IsBombModeGameState // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1b42740
	void AuthOnPostRoundPreExit(); // Function BombGameState.BombGameState_C.AuthOnPostRoundPreExit // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void AuthOnPostRoundEnded(); // Function BombGameState.BombGameState_C.AuthOnPostRoundEnded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	bool IsNextRoundOvertime(); // Function BombGameState.BombGameState_C.IsNextRoundOvertime // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1b42740
	void IsOnePointAwayFromMatchPoint(struct UBaseTeamComponent* Team, bool& Ret); // Function BombGameState.BombGameState_C.IsOnePointAwayFromMatchPoint // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1b42740
	void ShouldAnnouncerPlayForObserver(struct UAnnouncerVOComponent_C* Announcer Component, struct AObserverPlayerState*& Observer, bool& Should Play); // Function BombGameState.BombGameState_C.ShouldAnnouncerPlayForObserver // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void GetDefuseProgress(double& CurProgress, double& MaxProgress); // Function BombGameState.BombGameState_C.GetDefuseProgress // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void GetPlantProgress(double& CurProgress, double& MaxProgress); // Function BombGameState.BombGameState_C.GetPlantProgress // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetPlantInProgress(bool& InProgress); // Function BombGameState.BombGameState_C.GetPlantInProgress // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetBombState(enum class EAresBombStates& CurrentState); // Function BombGameState.BombGameState_C.GetBombState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ShouldPlayBombEvents(bool& ReturnVal); // Function BombGameState.BombGameState_C.ShouldPlayBombEvents // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void Set Minimum Income Variables(int32_t MinimumIncomeForLoss, bool WillResetMoneyNextRound, int32_t IncomeForWin, int32_t IncomeForLossStreak); // Function BombGameState.BombGameState_C.Set Minimum Income Variables // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void CalculateNextRoundMinimumMoney(int32_t CurrentMoney, int32_t& MinimumMoney); // Function BombGameState.BombGameState_C.CalculateNextRoundMinimumMoney // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void CalculateLossStreakBonusMoney(bool IsForNextRound, int32_t& Return Value); // Function BombGameState.BombGameState_C.CalculateLossStreakBonusMoney // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1b42740
	void IsMinimumRoundRequirementMet(int32_t Current Round, bool& Has Played Minimum Rounds); // Function BombGameState.BombGameState_C.IsMinimumRoundRequirementMet // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1b42740
	void AuthResetCurrentLossStreak(); // Function BombGameState.BombGameState_C.AuthResetCurrentLossStreak // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void AuthSetSwitchedTeamRoles(); // Function BombGameState.BombGameState_C.AuthSetSwitchedTeamRoles // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnRep_BombState(); // Function BombGameState.BombGameState_C.OnRep_BombState // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void MarkDroppedBombForAttackers(struct AAresOnGroundEquippable* DroppedBombActor, struct AShooterCharacter* BombDropper); // Function BombGameState.BombGameState_C.MarkDroppedBombForAttackers // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnBuyPhaseUpdate(bool IsBuyPhase); // Function BombGameState.BombGameState_C.OnBuyPhaseUpdate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void CheckVisibleEnemyAgainstMarkedLocations(struct AShooterCharacter* SpottedCharacter); // Function BombGameState.BombGameState_C.CheckVisibleEnemyAgainstMarkedLocations // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ShouldSwitchSides(bool& Should Switch Sides); // Function BombGameState.BombGameState_C.ShouldSwitchSides // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void IsMatchPoint(bool& Ret); // Function BombGameState.BombGameState_C.IsMatchPoint // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void HasTeamWon(struct UBaseTeamComponent* Team, bool& HasWon); // Function BombGameState.BombGameState_C.HasTeamWon // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void GetTeamByName(struct FName TeamName, struct UBaseTeamComponent*& Team); // Function BombGameState.BombGameState_C.GetTeamByName // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ClearLossStreak(); // Function BombGameState.BombGameState_C.ClearLossStreak // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetCurrentDefuser(struct AShooterCharacter*& Defuser); // Function BombGameState.BombGameState_C.GetCurrentDefuser // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void OnUseCancelled(struct AShooterCharacter* User, enum class EUsableCancelReason Reason); // Function BombGameState.BombGameState_C.OnUseCancelled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void CheckPlayerKill(struct AShooterCharacter* Player); // Function BombGameState.BombGameState_C.CheckPlayerKill // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetAnnouncerVOComponent(struct UBaseTeamComponent* Team, struct UAnnouncerVOComponent_C*& AnnouncerComponent); // Function BombGameState.BombGameState_C.GetAnnouncerVOComponent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1b42740
	void CheckForLossStreaking(struct UBaseTeamComponent* Team); // Function BombGameState.BombGameState_C.CheckForLossStreaking // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void FlagRewardResetForSite(enum class BombSiteEnum BombSite); // Function BombGameState.BombGameState_C.FlagRewardResetForSite // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetBombRewardForSite(enum class BombSiteEnum BombSite, int32_t& BombReward, bool& IsValid, bool& IsMax); // Function BombGameState.BombGameState_C.GetBombRewardForSite // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateBombRewardStacks(); // Function BombGameState.BombGameState_C.UpdateBombRewardStacks // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitializeBombRewardStacks(); // Function BombGameState.BombGameState_C.InitializeBombRewardStacks // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	int32_t GetPreRoundAddTime(int32_t RoundNumberIn); // Function BombGameState.BombGameState_C.GetPreRoundAddTime // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1b42740
	void SetOverrideMatchTimer(bool ShouldOverride, struct FText OverrideText); // Function BombGameState.BombGameState_C.SetOverrideMatchTimer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void TryOverrideMatchTimerText(bool& ShouldOverride, struct FText& OverrideText); // Function BombGameState.BombGameState_C.TryOverrideMatchTimerText // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void TryOverrideMatchTimerColor(bool& ShouldOverride, struct FLinearColor& OverrideColor); // Function BombGameState.BombGameState_C.TryOverrideMatchTimerColor // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void AuthSetBombState(enum class EAresBombStates NewState); // Function BombGameState.BombGameState_C.AuthSetBombState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ClientRoundStart(); // Function BombGameState.BombGameState_C.ClientRoundStart // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ReceiveBeginPlay(); // Function BombGameState.BombGameState_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void Auth Side Switch Event(); // Function BombGameState.BombGameState_C.Auth Side Switch Event // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Event Round Won(struct UBaseTeamComponent* Winning Team); // Function BombGameState.BombGameState_C.Event Round Won // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Multicast Side Switch Event(); // Function BombGameState.BombGameState_C.Multicast Side Switch Event // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnCharacterEnteredTeamVisibility(struct AShooterCharacter* Character); // Function BombGameState.BombGameState_C.OnCharacterEnteredTeamVisibility // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void HandleEnemyEnteringVisibility(struct AShooterCharacter* EnemyShooterCharacter); // Function BombGameState.BombGameState_C.HandleEnemyEnteringVisibility // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnCharacterExitedTeamVisibility(struct AShooterCharacter* Character); // Function BombGameState.BombGameState_C.OnCharacterExitedTeamVisibility // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnPlayerKilled(struct AOwnerExclusivePlayerInfo* Killer, struct AOwnerExclusivePlayerInfo* Victim, struct APawn* KilledPawn, struct UDamageResponse* Response, struct TArray<struct FAresAssist>& AssistList, struct UDamageType* DamageType); // Function BombGameState.BombGameState_C.OnPlayerKilled // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ClientBuyPhaseEnd(); // Function BombGameState.BombGameState_C.ClientBuyPhaseEnd // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void AnnouncerVOCeremony(struct AAresCeremony* ChosenCeremony); // Function BombGameState.BombGameState_C.AnnouncerVOCeremony // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SoundTheAlarm(struct TArray<struct FSpottedCharacterEntry>& SpottedCharactersOnDeath, struct AShooterCharacter* CallingCharacter); // Function BombGameState.BombGameState_C.SoundTheAlarm // (Net|NetReliableNetMulticast|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ActorDestroyed(struct AActor* DestroyedActor); // Function BombGameState.BombGameState_C.ActorDestroyed // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnBombPickedUp(struct AShooterCharacter* NewBombHolder); // Function BombGameState.BombGameState_C.OnBombPickedUp // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnBombDropped(struct AShooterCharacter* OldBombHolder); // Function BombGameState.BombGameState_C.OnBombDropped // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Event Set Overtime Rules(); // Function BombGameState.BombGameState_C.Event Set Overtime Rules // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GameRuleBoolChanged(enum class EGameRuleBoolName GameRuleName, bool bEnabled); // Function BombGameState.BombGameState_C.GameRuleBoolChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnBombPlanted(struct FVector PlantLocation, struct AShooterCharacter* BombPlanter, enum class BombSiteEnum PlantSite); // Function BombGameState.BombGameState_C.OnBombPlanted // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void EventRoundBegin(int32_t RoundNumberBeginning); // Function BombGameState.BombGameState_C.EventRoundBegin // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void MarkDroppedBombEvent(struct AEquippableGroundPickup_C* DroppedBombActor); // Function BombGameState.BombGameState_C.MarkDroppedBombEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OrbPickedUpRPC(struct AShooterCharacter* Orb Gatherer, struct ABaseCollectableOrb_C* Collectable Orb); // Function BombGameState.BombGameState_C.OrbPickedUpRPC // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void MulticastSetLossStreakSettings(int32_t Loss Streak Multiplier, int32_t Max Loss Streak); // Function BombGameState.BombGameState_C.MulticastSetLossStreakSettings // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__BombGameState_BeforePostRoundTransitionSyncTimer_K2Node_ComponentBoundEvent_1_OnTimerExpired__DelegateSignature(); // Function BombGameState.BombGameState_C.BndEvt__BombGameState_BeforePostRoundTransitionSyncTimer_K2Node_ComponentBoundEvent_1_OnTimerExpired__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void OrbSpawned(struct ABaseCollectableOrb_C* Collectable Orb); // Function BombGameState.BombGameState_C.OrbSpawned // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OrbUseStarted(struct AShooterCharacter* Orb Gatherer, struct ABaseCollectableOrb_C* Collectable Orb); // Function BombGameState.BombGameState_C.OrbUseStarted // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OrbUseCancelled(struct AShooterCharacter* Orb Gatherer, struct ABaseCollectableOrb_C* Collectable Orb); // Function BombGameState.BombGameState_C.OrbUseCancelled // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OrbDespawned(struct ABaseCollectableOrb_C* Collectable Orb); // Function BombGameState.BombGameState_C.OrbDespawned // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PlasmaArmorRegenPoolUpdated(struct AShooterCharacter* OwningPlayer, double NewValue); // Function BombGameState.BombGameState_C.PlasmaArmorRegenPoolUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PlasmaArmorMaxRegenPoolUpdated(struct AShooterCharacter* OwningPlayer, double NewValue); // Function BombGameState.BombGameState_C.PlasmaArmorMaxRegenPoolUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_BombGameState(int32_t EntryPoint); // Function BombGameState.BombGameState_C.ExecuteUbergraph_BombGameState // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
	void OnPlasmaArmorMaxRegenPoolUpdated__DelegateSignature(struct AShooterCharacter* OwningPlayer, double NewValue); // Function BombGameState.BombGameState_C.OnPlasmaArmorMaxRegenPoolUpdated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnPlasmaArmorRegenPoolUpdated__DelegateSignature(struct AShooterCharacter* OwningPlayer, double New Value); // Function BombGameState.BombGameState_C.OnPlasmaArmorRegenPoolUpdated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnOrbDespawned__DelegateSignature(struct ABaseCollectableOrb_C* Collectable Orb); // Function BombGameState.BombGameState_C.OnOrbDespawned__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnOrbUseCancelled__DelegateSignature(struct AShooterCharacter* Orb Gatherer, struct ABaseCollectableOrb_C* Collectable Orb); // Function BombGameState.BombGameState_C.OnOrbUseCancelled__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnOrbUseStarted__DelegateSignature(struct AShooterCharacter* Orb Gatherer, struct ABaseCollectableOrb_C* Collectable Orb); // Function BombGameState.BombGameState_C.OnOrbUseStarted__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnOrbSpawned__DelegateSignature(struct ABaseCollectableOrb_C* Collectable Orb); // Function BombGameState.BombGameState_C.OnOrbSpawned__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnPostRoundTimerExpired__DelegateSignature(); // Function BombGameState.BombGameState_C.OnPostRoundTimerExpired__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void NewEventDispatcher_0__DelegateSignature(); // Function BombGameState.BombGameState_C.NewEventDispatcher_0__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnBuyPhaseUpdated__DelegateSignature(bool IsBuyPhase); // Function BombGameState.BombGameState_C.OnBuyPhaseUpdated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void EnemyExitVisibility__DelegateSignature(struct AShooterCharacter* EnemyCharacter); // Function BombGameState.BombGameState_C.EnemyExitVisibility__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void EnemyEnteredVisibility__DelegateSignature(struct AShooterCharacter* NewParam); // Function BombGameState.BombGameState_C.EnemyEnteredVisibility__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnOrbPickedUp__DelegateSignature(struct AShooterCharacter* Orb Gatherer, struct ABaseCollectableOrb_C* Collectable Orb); // Function BombGameState.BombGameState_C.OnOrbPickedUp__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

