// Class Constraints.ConstraintsActor
// Size: 0x468 (Inherited: 0x460)
struct AConstraintsActor : AActor {
	struct UConstraintsManager* ConstraintsManager; // 0x460(0x08)
};

// Class Constraints.TickableConstraint
// Size: 0x78 (Inherited: 0x30)
struct UTickableConstraint : UObject {
	struct FConstraintTickFunction ConstraintTick; // 0x30(0x40)
	bool Active; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
};

// Class Constraints.ConstraintsManager
// Size: 0x50 (Inherited: 0x30)
struct UConstraintsManager : UObject {
	struct FMulticastSparseDelegate OnConstraintAdded_BP; // 0x30(0x01)
	struct FMulticastSparseDelegate OnConstraintRemoved_BP; // 0x31(0x01)
	char pad_32[0xe]; // 0x32(0x0e)
	struct TArray<struct UTickableConstraint*> Constraints; // 0x40(0x10)
};

// Class Constraints.ConstraintsScriptingLibrary
// Size: 0x30 (Inherited: 0x30)
struct UConstraintsScriptingLibrary : UBlueprintFunctionLibrary {

	bool RemoveThisConstraint(struct UWorld* InWorld, struct UTickableConstraint* InTickableConstraint); // Function Constraints.ConstraintsScriptingLibrary.RemoveThisConstraint // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0x3774230
	bool RemoveConstraint(struct UWorld* InWorld, int32_t InIndex); // Function Constraints.ConstraintsScriptingLibrary.RemoveConstraint // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0x3774090
	struct UConstraintsManager* GetManager(struct UWorld* InWorld); // Function Constraints.ConstraintsScriptingLibrary.GetManager // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0x3775520
	struct TArray<struct UTickableConstraint*> GetConstraintsArray(struct UWorld* InWorld); // Function Constraints.ConstraintsScriptingLibrary.GetConstraintsArray // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0x3774410
	struct UTransformableHandle* CreateTransformableHandle(struct UWorld* InWorld, struct UObject* InObject, struct FName& InAttachmentName); // Function Constraints.ConstraintsScriptingLibrary.CreateTransformableHandle // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x3774fa0
	struct UTransformableComponentHandle* CreateTransformableComponentHandle(struct UWorld* InWorld, struct USceneComponent* InSceneComponent, struct FName& InSocketName); // Function Constraints.ConstraintsScriptingLibrary.CreateTransformableComponentHandle // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x37752d0
	struct UTickableTransformConstraint* CreateFromType(struct UWorld* InWorld, enum class ETransformConstraintType InType); // Function Constraints.ConstraintsScriptingLibrary.CreateFromType // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0x3774e10
	bool AddConstraint(struct UWorld* InWorld, struct UTransformableHandle* InParentHandle, struct UTransformableHandle* InChildHandle, struct UTickableTransformConstraint* InConstraint, bool bMaintainOffset); // Function Constraints.ConstraintsScriptingLibrary.AddConstraint // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0x37745f0
};

// Class Constraints.TransformableHandle
// Size: 0x60 (Inherited: 0x30)
struct UTransformableHandle : UObject {
	struct FMovieSceneObjectBindingID ConstraintBindingID; // 0x30(0x18)
	char pad_48[0x18]; // 0x48(0x18)
};

// Class Constraints.TransformableComponentHandle
// Size: 0x78 (Inherited: 0x60)
struct UTransformableComponentHandle : UTransformableHandle {
	struct TWeakObjectPtr<struct USceneComponent> Component; // 0x60(0x08)
	struct FName SocketName; // 0x68(0x0c)
	char pad_74[0x4]; // 0x74(0x04)
};

// Class Constraints.TickableTransformConstraint
// Size: 0x98 (Inherited: 0x78)
struct UTickableTransformConstraint : UTickableConstraint {
	struct UTransformableHandle* ParentTRSHandle; // 0x78(0x08)
	struct UTransformableHandle* ChildTRSHandle; // 0x80(0x08)
	bool bMaintainOffset; // 0x88(0x01)
	char pad_89[0x3]; // 0x89(0x03)
	float Weight; // 0x8c(0x04)
	bool bDynamicOffset; // 0x90(0x01)
	enum class ETransformConstraintType Type; // 0x91(0x01)
	char pad_92[0x6]; // 0x92(0x06)
};

// Class Constraints.TickableTranslationConstraint
// Size: 0xc0 (Inherited: 0x98)
struct UTickableTranslationConstraint : UTickableTransformConstraint {
	char pad_98[0x8]; // 0x98(0x08)
	struct FVector OffsetTranslation; // 0xa0(0x18)
	struct FFilterOptionPerAxis AxisFilter; // 0xb8(0x03)
	char pad_BB[0x5]; // 0xbb(0x05)
};

// Class Constraints.TickableRotationConstraint
// Size: 0xd0 (Inherited: 0x98)
struct UTickableRotationConstraint : UTickableTransformConstraint {
	char pad_98[0x8]; // 0x98(0x08)
	struct FQuat OffsetRotation; // 0xa0(0x20)
	struct FFilterOptionPerAxis AxisFilter; // 0xc0(0x03)
	char pad_C3[0xd]; // 0xc3(0x0d)
};

// Class Constraints.TickableScaleConstraint
// Size: 0xc0 (Inherited: 0x98)
struct UTickableScaleConstraint : UTickableTransformConstraint {
	char pad_98[0x8]; // 0x98(0x08)
	struct FVector OffsetScale; // 0xa0(0x18)
	struct FFilterOptionPerAxis AxisFilter; // 0xb8(0x03)
	char pad_BB[0x5]; // 0xbb(0x05)
};

// Class Constraints.TickableParentConstraint
// Size: 0x110 (Inherited: 0x98)
struct UTickableParentConstraint : UTickableTransformConstraint {
	char pad_98[0x8]; // 0x98(0x08)
	struct FTransform OffsetTransform; // 0xa0(0x60)
	bool bScaling; // 0x100(0x01)
	struct FTransformFilter TransformFilter; // 0x101(0x09)
	char pad_10A[0x6]; // 0x10a(0x06)
};

// Class Constraints.TickableLookAtConstraint
// Size: 0xb0 (Inherited: 0x98)
struct UTickableLookAtConstraint : UTickableTransformConstraint {
	struct FVector Axis; // 0x98(0x18)
};

