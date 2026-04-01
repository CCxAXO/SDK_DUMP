// Class ChaosSolverEngine.ChaosDebugDrawComponent
// Size: 0xe0 (Inherited: 0xd8)
struct UChaosDebugDrawComponent : UActorComponent {
	char pad_D8[0x8]; // 0xd8(0x08)
};

// Class ChaosSolverEngine.ChaosEventListenerComponent
// Size: 0xe0 (Inherited: 0xd8)
struct UChaosEventListenerComponent : UActorComponent {
	char pad_D8[0x8]; // 0xd8(0x08)
};

// Class ChaosSolverEngine.ChaosGameplayEventDispatcher
// Size: 0x2f0 (Inherited: 0xe0)
struct UChaosGameplayEventDispatcher : UChaosEventListenerComponent {
	char pad_E0[0xc0]; // 0xe0(0xc0)
	struct TMap<struct UPrimitiveComponent*, struct FChaosHandlerSet> CollisionEventRegistrations; // 0x1a0(0x50)
	struct TMap<struct UPrimitiveComponent*, struct FBreakEventCallbackWrapper> BreakEventRegistrations; // 0x1f0(0x50)
	struct TMap<struct UPrimitiveComponent*, struct FRemovalEventCallbackWrapper> RemovalEventRegistrations; // 0x240(0x50)
	struct TMap<struct UPrimitiveComponent*, struct FCrumblingEventCallbackWrapper> CrumblingEventRegistrations; // 0x290(0x50)
	char pad_2E0[0x10]; // 0x2e0(0x10)
};

// Class ChaosSolverEngine.ChaosNotifyHandlerInterface
// Size: 0x30 (Inherited: 0x30)
struct UChaosNotifyHandlerInterface : UInterface {
};

// Class ChaosSolverEngine.ChaosSolverEngineBlueprintLibrary
// Size: 0x30 (Inherited: 0x30)
struct UChaosSolverEngineBlueprintLibrary : UBlueprintFunctionLibrary {

	struct FHitResult ConvertPhysicsCollisionToHitResult(struct FChaosPhysicsCollisionInfo& PhysicsCollision); // Function ChaosSolverEngine.ChaosSolverEngineBlueprintLibrary.ConvertPhysicsCollisionToHitResult // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x361a910
};

// Class ChaosSolverEngine.ChaosSolver
// Size: 0x30 (Inherited: 0x30)
struct UChaosSolver : UObject {
};

// Class ChaosSolverEngine.ChaosSolverActor
// Size: 0x558 (Inherited: 0x460)
struct AChaosSolverActor : AActor {
	struct FChaosSolverConfiguration Properties; // 0x460(0x68)
	float TimeStepMultiplier; // 0x4c8(0x04)
	int32_t CollisionIterations; // 0x4cc(0x04)
	int32_t PushOutIterations; // 0x4d0(0x04)
	int32_t PushOutPairIterations; // 0x4d4(0x04)
	float ClusterConnectionFactor; // 0x4d8(0x04)
	enum class EClusterConnectionTypeEnum ClusterUnionConnectionType; // 0x4dc(0x01)
	bool DoGenerateCollisionData; // 0x4dd(0x01)
	char pad_4DE[0x2]; // 0x4de(0x02)
	struct FSolverCollisionFilterSettings CollisionFilterSettings; // 0x4e0(0x10)
	bool DoGenerateBreakingData; // 0x4f0(0x01)
	char pad_4F1[0x3]; // 0x4f1(0x03)
	struct FSolverBreakingFilterSettings BreakingFilterSettings; // 0x4f4(0x10)
	bool DoGenerateTrailingData; // 0x504(0x01)
	char pad_505[0x3]; // 0x505(0x03)
	struct FSolverTrailingFilterSettings TrailingFilterSettings; // 0x508(0x10)
	float MassScale; // 0x518(0x04)
	bool bHasFloor; // 0x51c(0x01)
	char pad_51D[0x3]; // 0x51d(0x03)
	float FloorHeight; // 0x520(0x04)
	struct FChaosDebugSubstepControl ChaosDebugSubstepControl; // 0x524(0x03)
	char pad_527[0x1]; // 0x527(0x01)
	struct UBillboardComponent* SpriteComponent; // 0x528(0x08)
	char pad_530[0x18]; // 0x530(0x18)
	struct UChaosGameplayEventDispatcher* GameplayEventDispatcherComponent; // 0x548(0x08)
	char pad_550[0x8]; // 0x550(0x08)

	void SetSolverActive(bool bActive); // Function ChaosSolverEngine.ChaosSolverActor.SetSolverActive // (RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x361b0b0
	void SetAsCurrentWorldSolver(); // Function ChaosSolverEngine.ChaosSolverActor.SetAsCurrentWorldSolver // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x361b1b0
};

// Class ChaosSolverEngine.ChaosSolverSettings
// Size: 0x78 (Inherited: 0x48)
struct UChaosSolverSettings : UDeveloperSettings {
	char pad_48[0x8]; // 0x48(0x08)
	struct FSoftClassPath DefaultChaosSolverActorClass; // 0x50(0x28)
};

