// Class MediaAssets.MediaSourceRendererInterface
// Size: 0x30 (Inherited: 0x30)
struct UMediaSourceRendererInterface : UInterface {
};

// Class MediaAssets.MediaTexture
// Size: 0x2c0 (Inherited: 0x1e0)
struct UMediaTexture : UTexture {
	enum class TextureAddress AddressX; // 0x1d8(0x01)
	enum class TextureAddress AddressY; // 0x1d9(0x01)
	bool AutoClear; // 0x1da(0x01)
	struct FLinearColor ClearColor; // 0x1dc(0x10)
	bool EnableGenMips; // 0x1ec(0x01)
	char NumMips; // 0x1ed(0x01)
	bool NewStyleOutput; // 0x1ee(0x01)
	enum class MediaTextureOutputFormat OutputFormat; // 0x1ef(0x01)
	float CurrentAspectRatio; // 0x1f0(0x04)
	enum class MediaTextureOrientation CurrentOrientation; // 0x1f4(0x01)
	struct UMediaPlayer* MediaPlayer; // 0x1f8(0x08)
	char pad_204[0xbc]; // 0x204(0xbc)

	void UpdateResource(); // Function MediaAssets.MediaTexture.UpdateResource // (Native|Public|BlueprintCallable) // @ game+0x3b57f70
	void SetMediaPlayer(struct UMediaPlayer* NewMediaPlayer); // Function MediaAssets.MediaTexture.SetMediaPlayer // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3b57fa0
	int32_t GetWidth(); // Function MediaAssets.MediaTexture.GetWidth // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3b58120
	int32_t GetTextureNumMips(); // Function MediaAssets.MediaTexture.GetTextureNumMips // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3b58100
	struct UMediaPlayer* GetMediaPlayer(); // Function MediaAssets.MediaTexture.GetMediaPlayer // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3b580c0
	int32_t GetHeight(); // Function MediaAssets.MediaTexture.GetHeight // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3b58140
	float GetAspectRatio(); // Function MediaAssets.MediaTexture.GetAspectRatio // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3b58160
};

// Class MediaAssets.MediaSource
// Size: 0x88 (Inherited: 0x30)
struct UMediaSource : UObject {
	char pad_30[0x58]; // 0x30(0x58)

	bool Validate(); // Function MediaAssets.MediaSource.Validate // (RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3b6d630
	void SetMediaOptionString(struct FName& Key, struct FString Value); // Function MediaAssets.MediaSource.SetMediaOptionString // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3b6ce40
	void SetMediaOptionInt64(struct FName& Key, int64_t Value); // Function MediaAssets.MediaSource.SetMediaOptionInt64 // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3b6d0a0
	void SetMediaOptionFloat(struct FName& Key, float Value); // Function MediaAssets.MediaSource.SetMediaOptionFloat // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3b6d290
	void SetMediaOptionBool(struct FName& Key, bool Value); // Function MediaAssets.MediaSource.SetMediaOptionBool // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3b6d440
	struct FString GetUrl(); // Function MediaAssets.MediaSource.GetUrl // (RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3b6d670
};

// Class MediaAssets.BaseMediaSource
// Size: 0x98 (Inherited: 0x88)
struct UBaseMediaSource : UMediaSource {
	struct FName PlayerName; // 0x88(0x0c)
	char pad_94[0x4]; // 0x94(0x04)
};

// Class MediaAssets.FileMediaSource
// Size: 0xc0 (Inherited: 0x98)
struct UFileMediaSource : UBaseMediaSource {
	struct FString FilePath; // 0x98(0x10)
	bool PrecacheFile; // 0xa8(0x01)
	char pad_A9[0x17]; // 0xa9(0x17)

	void SetFilePath(struct FString Path); // Function MediaAssets.FileMediaSource.SetFilePath // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3b58db0
};

// Class MediaAssets.MediaComponent
// Size: 0xe8 (Inherited: 0xd8)
struct UMediaComponent : UActorComponent {
	struct UMediaTexture* MediaTexture; // 0xd8(0x08)
	struct UMediaPlayer* MediaPlayer; // 0xe0(0x08)

	struct UMediaTexture* GetMediaTexture(); // Function MediaAssets.MediaComponent.GetMediaTexture // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3b5a2a0
	struct UMediaPlayer* GetMediaPlayer(); // Function MediaAssets.MediaComponent.GetMediaPlayer // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3b5a2c0
};

// Class MediaAssets.MediaTimeStampInfo
// Size: 0x40 (Inherited: 0x30)
struct UMediaTimeStampInfo : UObject {
	struct FTimespan Time; // 0x30(0x08)
	int64_t SequenceIndex; // 0x38(0x08)
};

// Class MediaAssets.MediaPlayer
// Size: 0x170 (Inherited: 0x30)
struct UMediaPlayer : UObject {
	char pad_30[0x8]; // 0x30(0x08)
	struct FMulticastInlineDelegate OnEndReached; // 0x38(0x10)
	struct FMulticastInlineDelegate OnMediaClosed; // 0x48(0x10)
	struct FMulticastInlineDelegate OnMediaOpened; // 0x58(0x10)
	struct FMulticastInlineDelegate OnMediaOpenFailed; // 0x68(0x10)
	struct FMulticastInlineDelegate OnPlaybackResumed; // 0x78(0x10)
	struct FMulticastInlineDelegate OnPlaybackSuspended; // 0x88(0x10)
	struct FMulticastInlineDelegate OnSeekCompleted; // 0x98(0x10)
	struct FMulticastInlineDelegate OnTracksChanged; // 0xa8(0x10)
	struct FMulticastInlineDelegate OnMetadataChanged; // 0xb8(0x10)
	struct FTimespan CacheAhead; // 0xc8(0x08)
	struct FTimespan CacheBehind; // 0xd0(0x08)
	struct FTimespan CacheBehindGame; // 0xd8(0x08)
	bool NativeAudioOut; // 0xe0(0x01)
	bool PlayOnOpen; // 0xe1(0x01)
	char pad_E2[0x2]; // 0xe2(0x02)
	char Shuffle : 1; // 0xe4(0x01)
	char Loop : 1; // 0xe4(0x01)
	char pad_E4_2 : 6; // 0xe4(0x01)
	char pad_E5[0x3]; // 0xe5(0x03)
	struct UMediaPlaylist* Playlist; // 0xe8(0x08)
	int32_t PlaylistIndex; // 0xf0(0x04)
	char pad_F4[0x4]; // 0xf4(0x04)
	struct FTimespan TimeDelay; // 0xf8(0x08)
	float HorizontalFieldOfView; // 0x100(0x04)
	float VerticalFieldOfView; // 0x104(0x04)
	struct FRotator ViewRotation; // 0x108(0x18)
	char pad_120[0x28]; // 0x120(0x28)
	struct FGuid PlayerGuid; // 0x148(0x10)
	char pad_158[0x18]; // 0x158(0x18)

	bool SupportsSeeking(); // Function MediaAssets.MediaPlayer.SupportsSeeking // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3b5b000
	bool SupportsScrubbing(); // Function MediaAssets.MediaPlayer.SupportsScrubbing // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3b5b030
	bool SupportsRate(float Rate, bool Unthinned); // Function MediaAssets.MediaPlayer.SupportsRate // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3b5b060
	bool SetViewRotation(struct FRotator& Rotation, bool Absolute); // Function MediaAssets.MediaPlayer.SetViewRotation // (Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x3b5b390
	bool SetViewField(float Horizontal, float Vertical, bool Absolute); // Function MediaAssets.MediaPlayer.SetViewField // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3b5b580
	bool SetVideoTrackFrameRate(int32_t TrackIndex, int32_t FormatIndex, float FrameRate); // Function MediaAssets.MediaPlayer.SetVideoTrackFrameRate // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3b5b7e0
	bool SetTrackFormat(enum class EMediaPlayerTrack TrackType, int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.SetTrackFormat // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3b5ba70
	void SetTimeDelay(struct FTimespan TimeDelay); // Function MediaAssets.MediaPlayer.SetTimeDelay // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x3b5b290
	bool SetRate(float Rate); // Function MediaAssets.MediaPlayer.SetRate // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3b5be00
	bool SetNativeVolume(float Volume); // Function MediaAssets.MediaPlayer.SetNativeVolume // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3b5bce0
	void SetMediaOptions(struct UMediaSource* OPTIONS); // Function MediaAssets.MediaPlayer.SetMediaOptions // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x34f6120
	bool SetLooping(bool Looping); // Function MediaAssets.MediaPlayer.SetLooping // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3b5bf00
	void SetDesiredPlayerName(struct FName PlayerName); // Function MediaAssets.MediaPlayer.SetDesiredPlayerName // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3b5c000
	void SetBlockOnTime(struct FTimespan& Time); // Function MediaAssets.MediaPlayer.SetBlockOnTime // (Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x3b5c100
	bool SelectTrack(enum class EMediaPlayerTrack TrackType, int32_t TrackIndex); // Function MediaAssets.MediaPlayer.SelectTrack // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3b5c2e0
	bool Seek(struct FTimespan& Time); // Function MediaAssets.MediaPlayer.Seek // (Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x3b5c470
	bool Rewind(); // Function MediaAssets.MediaPlayer.Rewind // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3b5c570
	bool Reopen(); // Function MediaAssets.MediaPlayer.Reopen // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3b5c5b0
	bool Previous(); // Function MediaAssets.MediaPlayer.Previous // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3b5c600
	void PlayAndSeek(); // Function MediaAssets.MediaPlayer.PlayAndSeek // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3b5c630
	bool Play(); // Function MediaAssets.MediaPlayer.Play // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3b5c650
	bool Pause(); // Function MediaAssets.MediaPlayer.Pause // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3b5c690
	bool OpenUrl(struct FString URL); // Function MediaAssets.MediaPlayer.OpenUrl // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3b5c6d0
	bool OpenSourceWithOptions(struct UMediaSource* MediaSource, struct FMediaPlayerOptions& OPTIONS); // Function MediaAssets.MediaPlayer.OpenSourceWithOptions // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3b5cd20
	void OpenSourceLatent(struct UObject* WorldContextObject, struct FLatentActionInfo LatentInfo, struct UMediaSource* MediaSource, struct FMediaPlayerOptions& OPTIONS, bool& bSuccess); // Function MediaAssets.MediaPlayer.OpenSourceLatent // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3b5c960
	bool OpenSource(struct UMediaSource* MediaSource); // Function MediaAssets.MediaPlayer.OpenSource // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3b5cef0
	bool OpenPlaylistIndex(struct UMediaPlaylist* InPlaylist, int32_t Index); // Function MediaAssets.MediaPlayer.OpenPlaylistIndex // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3b5d350
	bool OpenPlaylist(struct UMediaPlaylist* InPlaylist); // Function MediaAssets.MediaPlayer.OpenPlaylist // (Final|Native|Public|BlueprintCallable) // @ game+0x3b5d6f0
	bool OpenFile(struct FString FilePath); // Function MediaAssets.MediaPlayer.OpenFile // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3b5d9e0
	bool Next(); // Function MediaAssets.MediaPlayer.Next // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3b5e270
	bool IsReady(); // Function MediaAssets.MediaPlayer.IsReady // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3b5e2a0
	bool IsPreparing(); // Function MediaAssets.MediaPlayer.IsPreparing // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3b5e300
	bool IsPlaying(); // Function MediaAssets.MediaPlayer.IsPlaying // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3b5e340
	bool IsPaused(); // Function MediaAssets.MediaPlayer.IsPaused // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3b5e380
	bool IsLooping(); // Function MediaAssets.MediaPlayer.IsLooping // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3b5e3b0
	bool IsConnecting(); // Function MediaAssets.MediaPlayer.IsConnecting // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3b5e3e0
	bool IsClosed(); // Function MediaAssets.MediaPlayer.IsClosed // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3b5e2d0
	bool IsBuffering(); // Function MediaAssets.MediaPlayer.IsBuffering // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3b5e410
	bool HasError(); // Function MediaAssets.MediaPlayer.HasError // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3b5e440
	struct FRotator GetViewRotation(); // Function MediaAssets.MediaPlayer.GetViewRotation // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x3b5e4b0
	struct FString GetVideoTrackType(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetVideoTrackType // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3b5e4f0
	struct FFloatRange GetVideoTrackFrameRates(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetVideoTrackFrameRates // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3b5e6f0
	float GetVideoTrackFrameRate(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetVideoTrackFrameRate // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3b5e950
	struct FIntPoint GetVideoTrackDimensions(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetVideoTrackDimensions // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x3b5ebc0
	float GetVideoTrackAspectRatio(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetVideoTrackAspectRatio // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3b5ee30
	float GetVerticalFieldOfView(); // Function MediaAssets.MediaPlayer.GetVerticalFieldOfView // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3b5f0b0
	struct FString GetUrl(); // Function MediaAssets.MediaPlayer.GetUrl // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3b5f0e0
	struct FString GetTrackLanguage(enum class EMediaPlayerTrack TrackType, int32_t TrackIndex); // Function MediaAssets.MediaPlayer.GetTrackLanguage // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3b5f110
	int32_t GetTrackFormat(enum class EMediaPlayerTrack TrackType, int32_t TrackIndex); // Function MediaAssets.MediaPlayer.GetTrackFormat // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3b5f310
	struct FText GetTrackDisplayName(enum class EMediaPlayerTrack TrackType, int32_t TrackIndex); // Function MediaAssets.MediaPlayer.GetTrackDisplayName // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3b5f4a0
	struct UMediaTimeStampInfo* GetTimeStamp(); // Function MediaAssets.MediaPlayer.GetTimeStamp // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3b5f6e0
	struct FTimespan GetTimeDelay(); // Function MediaAssets.MediaPlayer.GetTimeDelay // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x3b5e480
	struct FTimespan GetTime(); // Function MediaAssets.MediaPlayer.GetTime // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x3b5f7c0
	void GetSupportedRates(struct TArray<struct FFloatRange>& OutRates, bool Unthinned); // Function MediaAssets.MediaPlayer.GetSupportedRates // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x3b5f800
	int32_t GetSelectedTrack(enum class EMediaPlayerTrack TrackType); // Function MediaAssets.MediaPlayer.GetSelectedTrack // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3b5fa70
	float GetRate(); // Function MediaAssets.MediaPlayer.GetRate // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3b5fb70
	int32_t GetPlaylistIndex(); // Function MediaAssets.MediaPlayer.GetPlaylistIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3b5fbb0
	struct UMediaPlaylist* GetPlaylist(); // Function MediaAssets.MediaPlayer.GetPlaylist // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3b5fbd0
	struct FName GetPlayerName(); // Function MediaAssets.MediaPlayer.GetPlayerName // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3b5fc00
	int32_t GetNumTracks(enum class EMediaPlayerTrack TrackType); // Function MediaAssets.MediaPlayer.GetNumTracks // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3b5fde0
	int32_t GetNumTrackFormats(enum class EMediaPlayerTrack TrackType, int32_t TrackIndex); // Function MediaAssets.MediaPlayer.GetNumTrackFormats // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3b5fc50
	struct FText GetMediaName(); // Function MediaAssets.MediaPlayer.GetMediaName // (RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3b5fee0
	struct TMap<struct FString, struct FMediaMetadataItemsBPT> GetMediaMetadataItems(); // Function MediaAssets.MediaPlayer.GetMediaMetadataItems // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3b5af00
	float GetHorizontalFieldOfView(); // Function MediaAssets.MediaPlayer.GetHorizontalFieldOfView // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3b5ff40
	struct FTimespan GetDuration(); // Function MediaAssets.MediaPlayer.GetDuration // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x3b5ff70
	struct UMediaTimeStampInfo* GetDisplayTimeStamp(); // Function MediaAssets.MediaPlayer.GetDisplayTimeStamp // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3b5f660
	struct FTimespan GetDisplayTime(); // Function MediaAssets.MediaPlayer.GetDisplayTime // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x3b5f760
	struct FName GetDesiredPlayerName(); // Function MediaAssets.MediaPlayer.GetDesiredPlayerName // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3b5ffb0
	struct FString GetAudioTrackType(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetAudioTrackType // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3b5ffe0
	int32_t GetAudioTrackSampleRate(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetAudioTrackSampleRate // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3b601e0
	int32_t GetAudioTrackChannels(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetAudioTrackChannels // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3b60440
	void Close(); // Function MediaAssets.MediaPlayer.Close // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3b606a0
	bool CanPlayUrl(struct FString URL); // Function MediaAssets.MediaPlayer.CanPlayUrl // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3b606c0
	bool CanPlaySource(struct UMediaSource* MediaSource); // Function MediaAssets.MediaPlayer.CanPlaySource // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3b60850
	bool CanPause(); // Function MediaAssets.MediaPlayer.CanPause // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3b609e0
};

// Class MediaAssets.MediaPlayerProxyInterface
// Size: 0x30 (Inherited: 0x30)
struct UMediaPlayerProxyInterface : UInterface {
};

// Class MediaAssets.MediaPlaylist
// Size: 0x40 (Inherited: 0x30)
struct UMediaPlaylist : UObject {
	struct TArray<struct UMediaSource*> Items; // 0x30(0x10)

	bool Replace(int32_t Index, struct UMediaSource* Replacement); // Function MediaAssets.MediaPlaylist.Replace // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3b67a90
	bool RemoveAt(int32_t Index); // Function MediaAssets.MediaPlaylist.RemoveAt // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3b67c40
	bool Remove(struct UMediaSource* MediaSource); // Function MediaAssets.MediaPlaylist.Remove // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3b67d70
	int32_t Num(); // Function MediaAssets.MediaPlaylist.Num // (Final|Native|Public|BlueprintCallable) // @ game+0x3b67f60
	void Insert(struct UMediaSource* MediaSource, int32_t Index); // Function MediaAssets.MediaPlaylist.Insert // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3b67f80
	struct UMediaSource* GetRandom(int32_t& OutIndex); // Function MediaAssets.MediaPlaylist.GetRandom // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3b68160
	struct UMediaSource* GetPrevious(int32_t& InOutIndex); // Function MediaAssets.MediaPlaylist.GetPrevious // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3b68260
	struct UMediaSource* GetNext(int32_t& InOutIndex); // Function MediaAssets.MediaPlaylist.GetNext // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3b683a0
	struct UMediaSource* GET(int32_t Index); // Function MediaAssets.MediaPlaylist.GET // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3b684e0
	bool AddUrl(struct FString URL); // Function MediaAssets.MediaPlaylist.AddUrl // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3b68600
	bool AddFile(struct FString FilePath); // Function MediaAssets.MediaPlaylist.AddFile // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3b68840
	bool Add(struct UMediaSource* MediaSource); // Function MediaAssets.MediaPlaylist.Add // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3b69050
};

// Class MediaAssets.MediaSoundComponent
// Size: 0xa80 (Inherited: 0x9a0)
struct UMediaSoundComponent : USynthComponent {
	enum class EMediaSoundChannels Channels; // 0x9a0(0x04)
	bool DynamicRateAdjustment; // 0x9a4(0x01)
	char pad_9A5[0x3]; // 0x9a5(0x03)
	float RateAdjustmentFactor; // 0x9a8(0x04)
	struct FFloatRange RateAdjustmentRange; // 0x9ac(0x10)
	char pad_9BC[0x4]; // 0x9bc(0x04)
	struct UMediaPlayer* MediaPlayer; // 0x9c0(0x08)
	char pad_9C8[0xb8]; // 0x9c8(0xb8)

	void SetSpectralAnalysisSettings(struct TArray<float> InFrequenciesToAnalyze, enum class EMediaSoundComponentFFTSize InFFTSize); // Function MediaAssets.MediaSoundComponent.SetSpectralAnalysisSettings // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3b6a130
	void SetMediaPlayer(struct UMediaPlayer* NewMediaPlayer); // Function MediaAssets.MediaSoundComponent.SetMediaPlayer // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3b6a530
	void SetEnvelopeFollowingsettings(int32_t AttackTimeMsec, int32_t ReleaseTimeMsec); // Function MediaAssets.MediaSoundComponent.SetEnvelopeFollowingsettings // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3b69cc0
	void SetEnableSpectralAnalysis(bool bInSpectralAnalysisEnabled); // Function MediaAssets.MediaSoundComponent.SetEnableSpectralAnalysis // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3b6a400
	void SetEnableEnvelopeFollowing(bool bInEnvelopeFollowing); // Function MediaAssets.MediaSoundComponent.SetEnableEnvelopeFollowing // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3b69e80
	struct TArray<struct FMediaSoundComponentSpectralData> GetSpectralData(); // Function MediaAssets.MediaSoundComponent.GetSpectralData // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3b6a090
	struct TArray<struct FMediaSoundComponentSpectralData> GetNormalizedSpectralData(); // Function MediaAssets.MediaSoundComponent.GetNormalizedSpectralData // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3b69fb0
	struct UMediaPlayer* GetMediaPlayer(); // Function MediaAssets.MediaSoundComponent.GetMediaPlayer // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3b6a650
	float GetEnvelopeValue(); // Function MediaAssets.MediaSoundComponent.GetEnvelopeValue // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3b69c80
	bool BP_GetAttenuationSettingsToApply(struct FSoundAttenuationSettings& OutAttenuationSettings); // Function MediaAssets.MediaSoundComponent.BP_GetAttenuationSettingsToApply // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3b6a690
};

// Class MediaAssets.PlatformMediaSource
// Size: 0x90 (Inherited: 0x88)
struct UPlatformMediaSource : UMediaSource {
	struct UMediaSource* MediaSource; // 0x88(0x08)
};

// Class MediaAssets.StreamMediaSource
// Size: 0xa8 (Inherited: 0x98)
struct UStreamMediaSource : UBaseMediaSource {
	struct FString StreamUrl; // 0x98(0x10)
};

// Class MediaAssets.TimeSynchronizableMediaSource
// Size: 0xb0 (Inherited: 0x98)
struct UTimeSynchronizableMediaSource : UBaseMediaSource {
	bool bUseTimeSynchronization; // 0x98(0x01)
	char pad_99[0x3]; // 0x99(0x03)
	int32_t FrameDelay; // 0x9c(0x04)
	double TimeDelay; // 0xa0(0x08)
	bool bAutoDetectInput; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
};

// Class MediaAssets.MediaBlueprintFunctionLibrary
// Size: 0x30 (Inherited: 0x30)
struct UMediaBlueprintFunctionLibrary : UBlueprintFunctionLibrary {

	void EnumerateWebcamCaptureDevices(struct TArray<struct FMediaCaptureDevice>& OutDevices, int32_t Filter); // Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateWebcamCaptureDevices // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x3b724a0
	void EnumerateVideoCaptureDevices(struct TArray<struct FMediaCaptureDevice>& OutDevices, int32_t Filter); // Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateVideoCaptureDevices // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x3b726d0
	void EnumerateAudioCaptureDevices(struct TArray<struct FMediaCaptureDevice>& OutDevices, int32_t Filter); // Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateAudioCaptureDevices // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x3b72900
};

