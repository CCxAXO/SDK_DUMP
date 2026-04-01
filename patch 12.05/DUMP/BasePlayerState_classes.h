// BlueprintGeneratedClass BasePlayerState.BasePlayerState_C
// Size: 0xc98 (Inherited: 0xb90)
struct ABasePlayerState_C : AShooterPlayerState {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb90(0x08)
	struct UComp_PlayerState_InPerilHandler_C* Comp_PlayerState_InPerilHandler; // 0xb98(0x08)
	struct UComp_PlayerState_DownedState_C* Comp_PlayerState_DownedState; // 0xba0(0x08)
	struct UComp_PlayerState_TimedVO_C* Comp_PlayerState_TimedVO; // 0xba8(0x08)
	struct UPlayerSprayComponent_C* PlayerSprayComponent; // 0xbb0(0x08)
	struct UPlayerScoreCombatTrackerComponent_C* PlayerScoreCombatTrackerComponent; // 0xbb8(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0xbc0(0x08)
	struct FMulticastInlineDelegate intentionUpdated; // 0xbc8(0x10)
	struct FNewPlayerExperienceDetails NewPlayerExperienceDetails; // 0xbd8(0xb8)
	struct AActor* LastUsedSpawnPoint; // 0xc90(0x08)

	void PopulateParticipantMatchResults(struct FParticipantMatchResults& OutParticpantMatchResults); // Function BasePlayerState.BasePlayerState_C.PopulateParticipantMatchResults // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1af5410
	bool ShouldPopulateParticipantMatchResults(); // Function BasePlayerState.BasePlayerState_C.ShouldPopulateParticipantMatchResults // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1af5410
	void GetUltActive(bool& UltActivated); // Function BasePlayerState.BasePlayerState_C.GetUltActive // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void ReceiveBeginPlay(); // Function BasePlayerState.BasePlayerState_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void OnMakeGunRequest_Event_1(struct FAresGunRequest UpdatedGunRequest, struct AShooterPlayerState* RequestingPlayer); // Function BasePlayerState.BasePlayerState_C.OnMakeGunRequest_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnFulfillGunRequest_Event_1(struct FAresGunRequest UpdatedGunRequest, struct AShooterPlayerState* FulfillingPlayer, struct AShooterPlayerState* RequestingPlayer); // Function BasePlayerState.BasePlayerState_C.OnFulfillGunRequest_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnPlayerConnectionStatusChanged_2(struct AAresPlayerStateBase* Player, enum class EConnectionStatus OldStatus, enum class EConnectionStatus NewStatus); // Function BasePlayerState.BasePlayerState_C.OnPlayerConnectionStatusChanged_2 // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_BasePlayerState(int32_t EntryPoint); // Function BasePlayerState.BasePlayerState_C.ExecuteUbergraph_BasePlayerState // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
	void intentionUpdated__DelegateSignature(struct AShooterCharacter* Character, struct UStaticMeshComponent* intendedMeshComponent); // Function BasePlayerState.BasePlayerState_C.intentionUpdated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

