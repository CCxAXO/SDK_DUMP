// ScriptStruct LevelSequence.LevelSequenceCameraSettings
// Size: 0x02 (Inherited: 0x00)
struct FLevelSequenceCameraSettings {
	bool bOverrideAspectRatioAxisConstraint; // 0x00(0x01)
	enum class EAspectRatioAxisConstraint AspectRatioAxisConstraint; // 0x01(0x01)
};

// ScriptStruct LevelSequence.LevelSequenceLegacyObjectReference
// Size: 0x20 (Inherited: 0x00)
struct FLevelSequenceLegacyObjectReference {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct LevelSequence.LevelSequenceObjectReferenceMap
// Size: 0x50 (Inherited: 0x00)
struct FLevelSequenceObjectReferenceMap {
	char pad_0[0x50]; // 0x00(0x50)
};

// ScriptStruct LevelSequence.BoundActorProxy
// Size: 0x01 (Inherited: 0x00)
struct FBoundActorProxy {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct LevelSequence.LevelSequenceAnimSequenceLinkItem
// Size: 0x40 (Inherited: 0x00)
struct FLevelSequenceAnimSequenceLinkItem {
	struct FGuid SkelTrackGuid; // 0x00(0x10)
	struct FSoftObjectPath PathToAnimSequence; // 0x10(0x28)
	bool bExportTransforms; // 0x38(0x01)
	bool bExportMorphTargets; // 0x39(0x01)
	bool bExportAttributeCurves; // 0x3a(0x01)
	bool bExportMaterialCurves; // 0x3b(0x01)
	enum class EAnimInterpolationType Interpolation; // 0x3c(0x01)
	enum class ERichCurveInterpMode CurveInterpolation; // 0x3d(0x01)
	bool bRecordInWorldSpace; // 0x3e(0x01)
	bool bEvaluateAllSkeletalMeshComponents; // 0x3f(0x01)
};

// ScriptStruct LevelSequence.LevelSequenceBindingReference
// Size: 0x48 (Inherited: 0x00)
struct FLevelSequenceBindingReference {
	struct FString PackageName; // 0x00(0x10)
	struct FSoftObjectPath ExternalObjectPath; // 0x10(0x28)
	struct FString ObjectPath; // 0x38(0x10)
};

// ScriptStruct LevelSequence.LevelSequenceBindingReferenceArray
// Size: 0x10 (Inherited: 0x00)
struct FLevelSequenceBindingReferenceArray {
	struct TArray<struct FLevelSequenceBindingReference> References; // 0x00(0x10)
};

// ScriptStruct LevelSequence.LevelSequenceBindingReferences
// Size: 0xf0 (Inherited: 0x00)
struct FLevelSequenceBindingReferences {
	struct TMap<struct FGuid, struct FLevelSequenceBindingReferenceArray> BindingIdToReferences; // 0x00(0x50)
	struct TSet<struct FGuid> AnimSequenceInstances; // 0x50(0x50)
	struct TSet<struct FGuid> PostProcessInstances; // 0xa0(0x50)
};

// ScriptStruct LevelSequence.LevelSequenceObject
// Size: 0x30 (Inherited: 0x00)
struct FLevelSequenceObject {
	LazyObjectProperty ObjectOrOwner; // 0x00(0x18)
	struct FString ComponentName; // 0x18(0x10)
	struct TWeakObjectPtr<struct UObject> CachedComponent; // 0x28(0x08)
};

// ScriptStruct LevelSequence.LevelSequencePlayerSnapshot
// Size: 0xd0 (Inherited: 0x00)
struct FLevelSequencePlayerSnapshot {
	struct FString RootName; // 0x00(0x10)
	struct FQualifiedFrameTime RootTime; // 0x10(0x10)
	struct FQualifiedFrameTime SourceTime; // 0x20(0x10)
	struct FString CurrentShotName; // 0x30(0x10)
	struct FQualifiedFrameTime CurrentShotLocalTime; // 0x40(0x10)
	struct FQualifiedFrameTime CurrentShotSourceTime; // 0x50(0x10)
	struct FString SourceTimecode; // 0x60(0x10)
	struct TSoftObjectPtr<UCameraComponent> CameraComponent; // 0x70(0x30)
	struct ULevelSequence* ActiveShot; // 0xa0(0x08)
	struct FMovieSceneSequenceID ShotID; // 0xa8(0x04)
	char pad_AC[0x4]; // 0xac(0x04)
	struct FString MasterName; // 0xb0(0x10)
	struct FQualifiedFrameTime MasterTime; // 0xc0(0x10)
};

