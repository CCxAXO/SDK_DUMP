// Enum Constraints.EHandleEvent
enum class EHandleEvent : uint8 {
	LocalTransformUpdated = 0,
	GlobalTransformUpdated = 1,
	ComponentUpdated = 2,
	Max = 3,
	EHandleEvent_MAX = 4
};

// ScriptStruct Constraints.MovieSceneConstraintChannel
// Size: 0x100 (Inherited: 0x100)
struct FMovieSceneConstraintChannel : FMovieSceneBoolChannel {
};

// ScriptStruct Constraints.ConstraintAndActiveChannel
// Size: 0x138 (Inherited: 0x00)
struct FConstraintAndActiveChannel {
	struct TSoftObjectPtr<UTickableConstraint> Constraint; // 0x00(0x30)
	struct FMovieSceneConstraintChannel ActiveChannel; // 0x30(0x100)
	struct UTickableConstraint* ConstraintCopyToSpawn; // 0x130(0x08)
};

// ScriptStruct Constraints.ConstraintTickFunction
// Size: 0x40 (Inherited: 0x28)
struct FConstraintTickFunction : FTickFunction {
	char pad_28[0x18]; // 0x28(0x18)
};

