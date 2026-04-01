// Enum ChaosCaching.ECacheMode
enum class ECacheMode : uint8 {
	None = 0,
	Play = 1,
	Record = 2,
	ECacheMode_MAX = 3
};

// Enum ChaosCaching.EStartMode
enum class EStartMode : uint8 {
	Timed = 0,
	Triggered = 1,
	EStartMode_MAX = 2
};

// ScriptStruct ChaosCaching.CacheEventBase
// Size: 0x08 (Inherited: 0x00)
struct FCacheEventBase {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct ChaosCaching.EnableStateEvent
// Size: 0x10 (Inherited: 0x08)
struct FEnableStateEvent : FCacheEventBase {
	int32_t Index; // 0x08(0x04)
	bool bEnable; // 0x0c(0x01)
	char pad_D[0x3]; // 0x0d(0x03)
};

// ScriptStruct ChaosCaching.BreakingEvent
// Size: 0x90 (Inherited: 0x08)
struct FBreakingEvent : FCacheEventBase {
	int32_t Index; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FVector Location; // 0x10(0x18)
	struct FVector Velocity; // 0x28(0x18)
	struct FVector AngularVelocity; // 0x40(0x18)
	float Mass; // 0x58(0x04)
	char pad_5C[0x4]; // 0x5c(0x04)
	struct FVector BoundingBoxMin; // 0x60(0x18)
	struct FVector BoundingBoxMax; // 0x78(0x18)
};

// ScriptStruct ChaosCaching.CollisionEvent
// Size: 0xf0 (Inherited: 0x08)
struct FCollisionEvent : FCacheEventBase {
	struct FVector Location; // 0x08(0x18)
	struct FVector AccumulatedImpulse; // 0x20(0x18)
	struct FVector Normal; // 0x38(0x18)
	struct FVector Velocity1; // 0x50(0x18)
	struct FVector Velocity2; // 0x68(0x18)
	struct FVector DeltaVelocity1; // 0x80(0x18)
	struct FVector DeltaVelocity2; // 0x98(0x18)
	struct FVector AngularVelocity1; // 0xb0(0x18)
	struct FVector AngularVelocity2; // 0xc8(0x18)
	float Mass1; // 0xe0(0x04)
	float Mass2; // 0xe4(0x04)
	float PenetrationDepth; // 0xe8(0x04)
	char pad_EC[0x4]; // 0xec(0x04)
};

// ScriptStruct ChaosCaching.TrailingEvent
// Size: 0x88 (Inherited: 0x08)
struct FTrailingEvent : FCacheEventBase {
	int32_t Index; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FVector Location; // 0x10(0x18)
	struct FVector Velocity; // 0x28(0x18)
	struct FVector AngularVelocity; // 0x40(0x18)
	struct FVector BoundingBoxMin; // 0x58(0x18)
	struct FVector BoundingBoxMax; // 0x70(0x18)
};

// ScriptStruct ChaosCaching.CacheEventTrack
// Size: 0x40 (Inherited: 0x00)
struct FCacheEventTrack {
	struct FName Name; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct UScriptStruct* Struct; // 0x10(0x08)
	struct TArray<float> TimeStamps; // 0x18(0x10)
	char pad_28[0x18]; // 0x28(0x18)
};

// ScriptStruct ChaosCaching.ObservedComponent
// Size: 0x190 (Inherited: 0x00)
struct FObservedComponent {
	struct FName CacheName; // 0x00(0x0c)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FComponentReference ComponentRef; // 0x10(0x30)
	struct FSoftComponentReference SoftComponentRef; // 0x40(0x58)
	bool bIsSimulating; // 0x98(0x01)
	bool bPlaybackEnabled; // 0x99(0x01)
	char pad_9A[0xf6]; // 0x9a(0xf6)
};

// ScriptStruct ChaosCaching.ParticleTransformTrack
// Size: 0x48 (Inherited: 0x00)
struct FParticleTransformTrack {
	struct FRawAnimSequenceTrack RawTransformTrack; // 0x00(0x30)
	float BeginOffset; // 0x30(0x04)
	bool bDeactivateOnEnd; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	struct TArray<float> KeyTimestamps; // 0x38(0x10)
};

// ScriptStruct ChaosCaching.PerParticleCacheData
// Size: 0x98 (Inherited: 0x00)
struct FPerParticleCacheData {
	struct FParticleTransformTrack TransformData; // 0x00(0x48)
	struct TMap<struct FName, struct FRichCurve> CurveData; // 0x48(0x50)
};

// ScriptStruct ChaosCaching.CacheSpawnableTemplate
// Size: 0xd0 (Inherited: 0x00)
struct FCacheSpawnableTemplate {
	struct UObject* DuplicatedTemplate; // 0x00(0x08)
	char pad_8[0x8]; // 0x08(0x08)
	struct FTransform InitialTransform; // 0x10(0x60)
	struct FTransform ComponentTransform; // 0x70(0x60)
};

// ScriptStruct ChaosCaching.RichCurves
// Size: 0x10 (Inherited: 0x00)
struct FRichCurves {
	struct TArray<struct FRichCurve> RichCurves; // 0x00(0x10)
};

// ScriptStruct ChaosCaching.CompressedRichCurves
// Size: 0x10 (Inherited: 0x00)
struct FCompressedRichCurves {
	struct TArray<struct FCompressedRichCurve> CompressedRichCurves; // 0x00(0x10)
};

// ScriptStruct ChaosCaching.MovieSceneChaosCacheParams
// Size: 0x28 (Inherited: 0x20)
struct FMovieSceneChaosCacheParams : FMovieSceneBaseCacheParams {
	struct UChaosCacheCollection* CacheCollection; // 0x20(0x08)
};

// ScriptStruct ChaosCaching.MovieSceneChaosCacheSectionTemplateParameters
// Size: 0x30 (Inherited: 0x08)
struct FMovieSceneChaosCacheSectionTemplateParameters : FMovieSceneBaseCacheSectionTemplateParameters {
	struct FMovieSceneChaosCacheParams ChaosCacheParams; // 0x08(0x28)
};

// ScriptStruct ChaosCaching.MovieSceneChaosCacheSectionTemplate
// Size: 0x50 (Inherited: 0x20)
struct FMovieSceneChaosCacheSectionTemplate : FMovieSceneEvalTemplate {
	struct FMovieSceneChaosCacheSectionTemplateParameters Params; // 0x20(0x30)
};

