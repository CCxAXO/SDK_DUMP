// Class ChaosCaching.ChaosCacheCollection
// Size: 0x40 (Inherited: 0x30)
struct UChaosCacheCollection : UObject {
	struct TArray<struct UChaosCache*> Caches; // 0x30(0x10)
};

// Class ChaosCaching.ChaosCacheManager
// Size: 0x510 (Inherited: 0x460)
struct AChaosCacheManager : AActor {
	struct UChaosCacheCollection* CacheCollection; // 0x460(0x08)
	enum class ECacheMode CacheMode; // 0x468(0x01)
	enum class EStartMode StartMode; // 0x469(0x01)
	char pad_46A[0x2]; // 0x46a(0x02)
	float StartTime; // 0x46c(0x04)
	char pad_470[0x8]; // 0x470(0x08)
	struct TArray<struct FObservedComponent> ObservedComponents; // 0x478(0x10)
	char pad_488[0x88]; // 0x488(0x88)

	void TriggerComponentByCache(struct FName InCacheName); // Function ChaosCaching.ChaosCacheManager.TriggerComponentByCache // (Final|RequiredAPI|Native|Protected|BlueprintCallable) // @ game+0x7873c30
	void TriggerComponent(struct UPrimitiveComponent* InComponent); // Function ChaosCaching.ChaosCacheManager.TriggerComponent // (Final|RequiredAPI|Native|Protected|BlueprintCallable) // @ game+0x7873da0
	void TriggerAll(); // Function ChaosCaching.ChaosCacheManager.TriggerAll // (Final|RequiredAPI|Native|Protected|BlueprintCallable) // @ game+0x7873b90
	void SetStartTime(float InStartTime); // Function ChaosCaching.ChaosCacheManager.SetStartTime // (Final|RequiredAPI|Native|Public) // @ game+0x7874310
	void SetCacheCollection(struct UChaosCacheCollection* InCacheCollection); // Function ChaosCaching.ChaosCacheManager.SetCacheCollection // (Final|RequiredAPI|Native|Protected|BlueprintCallable) // @ game+0x7873ef0
	void ResetSingleTransform(int32_t InIndex); // Function ChaosCaching.ChaosCacheManager.ResetSingleTransform // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x78740b0
	void ResetAllComponentTransforms(); // Function ChaosCaching.ChaosCacheManager.ResetAllComponentTransforms // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x7874200
	void EnablePlaybackByCache(struct FName InCacheName, bool bEnable); // Function ChaosCaching.ChaosCacheManager.EnablePlaybackByCache // (Final|RequiredAPI|Native|Protected|BlueprintCallable) // @ game+0x78739b0
	void EnablePlayback(int32_t Index, bool bEnable); // Function ChaosCaching.ChaosCacheManager.EnablePlayback // (Final|RequiredAPI|Native|Protected|BlueprintCallable) // @ game+0x7873800
};

// Class ChaosCaching.ChaosCachePlayer
// Size: 0x510 (Inherited: 0x510)
struct AChaosCachePlayer : AChaosCacheManager {
};

// Class ChaosCaching.ChaosCache
// Size: 0x370 (Inherited: 0x30)
struct UChaosCache : UObject {
	float RecordedDuration; // 0x30(0x04)
	uint32_t NumRecordedFrames; // 0x34(0x04)
	struct TArray<int32_t> TrackToParticle; // 0x38(0x10)
	struct TArray<struct FPerParticleCacheData> ParticleTracks; // 0x48(0x10)
	struct TArray<int32_t> ChannelCurveToParticle; // 0x58(0x10)
	struct TMap<struct FName, struct FRichCurves> ChannelsTracks; // 0x68(0x50)
	struct TMap<struct FName, struct FCompressedRichCurves> CompressedChannelsTracks; // 0xb8(0x50)
	struct TMap<struct FName, struct FRichCurve> CurveData; // 0x108(0x50)
	struct TMap<struct FName, struct FParticleTransformTrack> NamedTransformTracks; // 0x158(0x50)
	bool bCompressChannels; // 0x1a8(0x01)
	char pad_1A9[0x3]; // 0x1a9(0x03)
	float ChannelsCompressionErrorThreshold; // 0x1ac(0x04)
	float ChannelsCompressionSampleRate; // 0x1b0(0x04)
	char pad_1B4[0x4]; // 0x1b4(0x04)
	struct TMap<struct FName, struct FCacheEventTrack> EventTracks; // 0x1b8(0x50)
	char pad_208[0x8]; // 0x208(0x08)
	struct FCacheSpawnableTemplate Spawnable; // 0x210(0xd0)
	struct FGuid AdapterGuid; // 0x2e0(0x10)
	int32_t Version; // 0x2f0(0x04)
	char pad_2F4[0x7c]; // 0x2f4(0x7c)
};

// Class ChaosCaching.MovieSceneChaosCacheSection
// Size: 0x128 (Inherited: 0x100)
struct UMovieSceneChaosCacheSection : UMovieSceneBaseCacheSection {
	struct FMovieSceneChaosCacheParams Params; // 0x100(0x28)
};

// Class ChaosCaching.MovieSceneChaosCacheTrack
// Size: 0xb8 (Inherited: 0xa0)
struct UMovieSceneChaosCacheTrack : UMovieSceneNameableTrack {
	char pad_A0[0x8]; // 0xa0(0x08)
	struct TArray<struct UMovieSceneSection*> AnimationSections; // 0xa8(0x10)
};

