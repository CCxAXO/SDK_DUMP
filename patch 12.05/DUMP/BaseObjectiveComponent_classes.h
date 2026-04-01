// BlueprintGeneratedClass BaseObjectiveComponent.BaseObjectiveComponent_C
// Size: 0x218 (Inherited: 0x168)
struct UBaseObjectiveComponent_C : UObjectiveComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x168(0x08)
	double DamageTaken; // 0x170(0x08)
	int32_t Deaths; // 0x178(0x04)
	int32_t ShotsFired; // 0x17c(0x04)
	bool bShouldCountShotsFired; // 0x180(0x01)
	char pad_181[0x7]; // 0x181(0x07)
	double IdleTime; // 0x188(0x08)
	double TotalTime; // 0x190(0x08)
	char pad_198[0x8]; // 0x198(0x08)
	struct FTransform PreviousPlayerTransform; // 0x1a0(0x60)
	bool bTimerEnabled; // 0x200(0x01)
	char pad_201[0x7]; // 0x201(0x07)
	double ObjectiveStartTimestamp; // 0x208(0x08)
	double ObjectiveCompletedTimestamp; // 0x210(0x08)

	void OnUsedEquippable(struct AAresEquippable* Equippable); // Function BaseObjectiveComponent.BaseObjectiveComponent_C.OnUsedEquippable // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateIdleTimer(double DeltaSeconds); // Function BaseObjectiveComponent.BaseObjectiveComponent_C.UpdateIdleTimer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetTotalObjectiveTimeMillis(int32_t& TotalTime); // Function BaseObjectiveComponent.BaseObjectiveComponent_C.GetTotalObjectiveTimeMillis // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1af5410
	void GetIdleTimeMillis(int32_t& IdleTime); // Function BaseObjectiveComponent.BaseObjectiveComponent_C.GetIdleTimeMillis // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1af5410
	void OnPlayerTookDamage(struct AActor* DamagedActor, float Damage, struct UDamageType* DamageType, struct AController* InstigatedBy, struct AActor* DamageCauser); // Function BaseObjectiveComponent.BaseObjectiveComponent_C.OnPlayerTookDamage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnKilled(struct AShooterCharacter* Character, struct UDamageResponse* Response); // Function BaseObjectiveComponent.BaseObjectiveComponent_C.OnKilled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UnbindCharacterTelemetryEvents(); // Function BaseObjectiveComponent.BaseObjectiveComponent_C.UnbindCharacterTelemetryEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindCharacterTelemetryEvents(struct APawn* Character); // Function BaseObjectiveComponent.BaseObjectiveComponent_C.BindCharacterTelemetryEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnObjectiveActivated_BaseEvent(struct UObjectiveComponent* ChangedObjective, enum class EObjectiveType Type, enum class EObjectiveStatus OldStatus, enum class EObjectiveStatus NewStatus, int32_t OldProgress, int32_t NewProgress); // Function BaseObjectiveComponent.BaseObjectiveComponent_C.OnObjectiveActivated_BaseEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnObjectiveCompleted_BaseEvent(struct UObjectiveComponent* ChangedObjective, enum class EObjectiveType Type, enum class EObjectiveStatus OldStatus, enum class EObjectiveStatus NewStatus, int32_t OldProgress, int32_t NewProgress); // Function BaseObjectiveComponent.BaseObjectiveComponent_C.OnObjectiveCompleted_BaseEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ReceiveBeginPlay(); // Function BaseObjectiveComponent.BaseObjectiveComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ReceiveTick(float DeltaSeconds); // Function BaseObjectiveComponent.BaseObjectiveComponent_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_BaseObjectiveComponent(int32_t EntryPoint); // Function BaseObjectiveComponent.BaseObjectiveComponent_C.ExecuteUbergraph_BaseObjectiveComponent // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

