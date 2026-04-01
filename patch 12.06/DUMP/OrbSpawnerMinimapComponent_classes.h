// BlueprintGeneratedClass OrbSpawnerMinimapComponent.OrbSpawnerMinimapComponent_C
// Size: 0x168 (Inherited: 0xd8)
struct UOrbSpawnerMinimapComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd8(0x08)
	struct AOrbSpawnerParent_C* OrbSpawnerParent; // 0xe0(0x08)
	struct FText TextToDisplay; // 0xe8(0x18)
	enum class OrbSpawnerStateEnum CurrentState; // 0x100(0x01)
	char pad_101[0x7]; // 0x101(0x07)
	struct USpawnerVisibilityComponent* VisibilityComponent; // 0x108(0x08)
	bool OverrideCountdownVision; // 0x110(0x01)
	bool OverrideCountdownVisionOnce; // 0x111(0x01)
	char pad_112[0x6]; // 0x112(0x06)
	struct TMap<enum class OrbSpawnerStateEnum, struct FMinimapComponents> MinimapComponents; // 0x118(0x50)

	void ShowMinimapComponents(enum class OrbSpawnerStateEnum State); // Function OrbSpawnerMinimapComponent.OrbSpawnerMinimapComponent_C.ShowMinimapComponents // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetMinimapComponents(struct TArray<struct UAresMinimapComponent*>& Inactive, struct TArray<struct UAresMinimapComponent*>& Countdown, struct TArray<struct UAresMinimapComponent*>& Spawned, struct TArray<struct UAresMinimapComponent*>& Claimed); // Function OrbSpawnerMinimapComponent.OrbSpawnerMinimapComponent_C.SetMinimapComponents // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnClaimedState(); // Function OrbSpawnerMinimapComponent.OrbSpawnerMinimapComponent_C.OnClaimedState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnInactiveState(); // Function OrbSpawnerMinimapComponent.OrbSpawnerMinimapComponent_C.OnInactiveState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnSpawnedState(); // Function OrbSpawnerMinimapComponent.OrbSpawnerMinimapComponent_C.OnSpawnedState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnCountdownState(); // Function OrbSpawnerMinimapComponent.OrbSpawnerMinimapComponent_C.OnCountdownState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OverrideVisionForCooldown(bool& ShouldSeeCountdown); // Function OrbSpawnerMinimapComponent.OrbSpawnerMinimapComponent_C.OverrideVisionForCooldown // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void TeamSightChanged(bool Vision); // Function OrbSpawnerMinimapComponent.OrbSpawnerMinimapComponent_C.TeamSightChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HasVision(bool& ShouldUpdate); // Function OrbSpawnerMinimapComponent.OrbSpawnerMinimapComponent_C.HasVision // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ReceiveBeginPlay(); // Function OrbSpawnerMinimapComponent.OrbSpawnerMinimapComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnOwnerEnteredTeamSight(struct AActor* ActorThatEnteredTeamSight, struct TArray<struct AShooterCharacter*>& CharactersWithVisibility); // Function OrbSpawnerMinimapComponent.OrbSpawnerMinimapComponent_C.OnOwnerEnteredTeamSight // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnStateChanged(enum class OrbSpawnerStateEnum NewState); // Function OrbSpawnerMinimapComponent.OrbSpawnerMinimapComponent_C.OnStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_OrbSpawnerMinimapComponent(int32_t EntryPoint); // Function OrbSpawnerMinimapComponent.OrbSpawnerMinimapComponent_C.ExecuteUbergraph_OrbSpawnerMinimapComponent // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

