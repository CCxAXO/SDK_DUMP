// BlueprintGeneratedClass DangerCompassActor.DangerCompassActor_C
// Size: 0x4e0 (Inherited: 0x460)
struct ADangerCompassActor_C : AActor {
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

	void GetTimeSinceKilledEnemySawShooterCharacter(bool& IsValid, double& TimeInSeconds); // Function DangerCompassActor.DangerCompassActor_C.GetTimeSinceKilledEnemySawShooterCharacter // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1af5410
	void RefreshParticleLocation(); // Function DangerCompassActor.DangerCompassActor_C.RefreshParticleLocation // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void TickDebug(double DeltaTime); // Function DangerCompassActor.DangerCompassActor_C.TickDebug // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetCurrentState(enum class InWorldTeamVisionActorState NewState); // Function DangerCompassActor.DangerCompassActor_C.SetCurrentState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void RefreshParticle(); // Function DangerCompassActor.DangerCompassActor_C.RefreshParticle // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ShouldRenderParticle(bool& Return); // Function DangerCompassActor.DangerCompassActor_C.ShouldRenderParticle // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ReceiveBeginPlay(); // Function DangerCompassActor.DangerCompassActor_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void AssociatedCharacterDied(struct AShooterCharacter* Character, struct UDamageResponse* Response); // Function DangerCompassActor.DangerCompassActor_C.AssociatedCharacterDied // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void RoundEnded(int32_t RoundNumberEnded); // Function DangerCompassActor.DangerCompassActor_C.RoundEnded // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_DangerCompassActor(int32_t EntryPoint); // Function DangerCompassActor.DangerCompassActor_C.ExecuteUbergraph_DangerCompassActor // (Final|UbergraphFunction) // @ game+0x1af5410
};

