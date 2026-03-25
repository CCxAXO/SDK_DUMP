// BlueprintGeneratedClass InWorldTeamVisionActor.InWorldTeamVisionActor_C
// Size: 0x4e0 (Inherited: 0x460)
struct AInWorldTeamVisionActor_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x460(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x468(0x08)
	struct UParticleSystemComponent* PingEmitter; // 0x470(0x08)
	struct AShooterCharacter* ShooterCharacter; // 0x478(0x08)
	double StateTimer; // 0x480(0x08)
	bool bDestroyOnEnteringCooldownState; // 0x488(0x01)
	enum class InWorldTeamVisionActorState CurrentState; // 0x489(0x01)
	bool bDisplayDebug; // 0x48a(0x01)
	char pad_48B[0x5]; // 0x48b(0x05)
	struct FVector PingLocation; // 0x490(0x18)
	struct FRotator pingRotation; // 0x4a8(0x18)
	double enterVisibilityTime; // 0x4c0(0x08)
	bool onEnterShouldRenderParticle; // 0x4c8(0x01)
	char pad_4C9[0x7]; // 0x4c9(0x07)
	struct TArray<double> KilledAlliesThatHadTeamSightTimeStamps; // 0x4d0(0x10)

	void GetTimeSinceKilledEnemySawShooterCharacter(bool& IsValid, double& TimeInSeconds); // Function InWorldTeamVisionActor.InWorldTeamVisionActor_C.GetTimeSinceKilledEnemySawShooterCharacter // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1af5410
	void RefreshParticleLocation(); // Function InWorldTeamVisionActor.InWorldTeamVisionActor_C.RefreshParticleLocation // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void TickDebug(double DeltaTime); // Function InWorldTeamVisionActor.InWorldTeamVisionActor_C.TickDebug // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetCurrentState(enum class InWorldTeamVisionActorState NewState); // Function InWorldTeamVisionActor.InWorldTeamVisionActor_C.SetCurrentState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void RefreshParticle(); // Function InWorldTeamVisionActor.InWorldTeamVisionActor_C.RefreshParticle // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ShouldRenderParticle(bool& Return); // Function InWorldTeamVisionActor.InWorldTeamVisionActor_C.ShouldRenderParticle // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnShooterCharacterExitedTeamVisibility(); // Function InWorldTeamVisionActor.InWorldTeamVisionActor_C.OnShooterCharacterExitedTeamVisibility // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ReceiveDestroyed(); // Function InWorldTeamVisionActor.InWorldTeamVisionActor_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnShooterCharacterEnteredTeamVisibility(); // Function InWorldTeamVisionActor.InWorldTeamVisionActor_C.OnShooterCharacterEnteredTeamVisibility // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnPlayerKill(struct AShooterPlayerState* KillerPlayerState, struct AShooterPlayerState* KilledPlayerState, int32_t KillNumberInRoundForKiller, int32_t KillNumberInRoundForKilled, struct UDamageResponse* Response, struct AAresEquippable* EquippableUsed, struct TArray<struct FAresAssist>& AssistsList); // Function InWorldTeamVisionActor.InWorldTeamVisionActor_C.OnPlayerKill // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ReceiveBeginPlay(); // Function InWorldTeamVisionActor.InWorldTeamVisionActor_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_InWorldTeamVisionActor(int32_t EntryPoint); // Function InWorldTeamVisionActor.InWorldTeamVisionActor_C.ExecuteUbergraph_InWorldTeamVisionActor // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

