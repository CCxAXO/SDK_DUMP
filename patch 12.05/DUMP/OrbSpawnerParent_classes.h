// BlueprintGeneratedClass OrbSpawnerParent.OrbSpawnerParent_C
// Size: 0x550 (Inherited: 0x4b0)
struct AOrbSpawnerParent_C : AGameObject {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4b0(0x08)
	struct USpawnerVisibilityComponent* SpawnerVisibility; // 0x4b8(0x08)
	struct UComp_Actor_MultiTargetHandler_FXC_C* Comp_Actor_MultiTargetHandler_FXC; // 0x4c0(0x08)
	struct UBoxComponent* VisibleBounds; // 0x4c8(0x08)
	struct UOrbSpawnerMinimapComponent_C* OrbSpawnerMinimapComponent; // 0x4d0(0x08)
	struct UReplicationSleepComponent* ReplicationSleep; // 0x4d8(0x08)
	struct UCountdownState_C* CountdownState; // 0x4e0(0x08)
	struct UGamePhaseTriggerState_C* GamePhaseInRoundState; // 0x4e8(0x08)
	struct UActorStateMachineComponent* ActorStateMachine; // 0x4f0(0x08)
	struct UPointLightComponent* PointLight; // 0x4f8(0x08)
	struct UParticleSystemComponent* ParticleSystem; // 0x500(0x08)
	double End Time Stamp; // 0x508(0x08)
	struct FMulticastInlineDelegate UpdatedState; // 0x510(0x10)
	enum class OrbSpawnerStateEnum CurrentState; // 0x520(0x01)
	char pad_521[0x7]; // 0x521(0x07)
	struct ASpawningPreview_OrbSpawner_C* SpawningPreview; // 0x528(0x08)
	double OrbSpawnTimeStamp; // 0x530(0x08)
	struct FText CurrentCountdownText; // 0x538(0x18)

	void On Updated Countdown Text(struct FText CountdownText); // Function OrbSpawnerParent.OrbSpawnerParent_C.On Updated Countdown Text // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PlayPreviewAnimation(); // Function OrbSpawnerParent.OrbSpawnerParent_C.PlayPreviewAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetRemainingTime(double& RemainingTime); // Function OrbSpawnerParent.OrbSpawnerParent_C.GetRemainingTime // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void OnRep_CurrentState(); // Function OrbSpawnerParent.OrbSpawnerParent_C.OnRep_CurrentState // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnRep_End Time Stamp(); // Function OrbSpawnerParent.OrbSpawnerParent_C.OnRep_End Time Stamp // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void State Machine Setup(); // Function OrbSpawnerParent.OrbSpawnerParent_C.State Machine Setup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void MulticastOrbCollected(); // Function OrbSpawnerParent.OrbSpawnerParent_C.MulticastOrbCollected // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ReceiveBeginPlay(); // Function OrbSpawnerParent.OrbSpawnerParent_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void UpdateCountdownTimer(); // Function OrbSpawnerParent.OrbSpawnerParent_C.UpdateCountdownTimer // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void MulticastSyncedSpawnTimer(double EndTimeStamp); // Function OrbSpawnerParent.OrbSpawnerParent_C.MulticastSyncedSpawnTimer // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ReceiveTick(float DeltaSeconds); // Function OrbSpawnerParent.OrbSpawnerParent_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void MulticastOrbSpawned(); // Function OrbSpawnerParent.OrbSpawnerParent_C.MulticastOrbSpawned // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnPreviewStarted(); // Function OrbSpawnerParent.OrbSpawnerParent_C.OnPreviewStarted // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_OrbSpawnerParent(int32_t EntryPoint); // Function OrbSpawnerParent.OrbSpawnerParent_C.ExecuteUbergraph_OrbSpawnerParent // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
	void UpdatedState__DelegateSignature(enum class OrbSpawnerStateEnum NewState); // Function OrbSpawnerParent.OrbSpawnerParent_C.UpdatedState__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

