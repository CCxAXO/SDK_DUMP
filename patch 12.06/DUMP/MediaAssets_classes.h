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

	void UpdateResource(); // Function MediaAssets.MediaTexture.UpdateResource // (Native|Public|BlueprintCallable) // @ game+0x3ba6450
	void SetMediaPlayer(struct UMediaPlayer* NewMediaPlayer); // Function MediaAssets.MediaTexture.SetMediaPlayer // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3ba6480
	int32_t GetWidth(); // Function MediaAssets.MediaTexture.GetWidth // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3ba6600
	int32_t GetTextureNumMips(); // Function MediaAssets.MediaTexture.GetTextureNumMips // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3ba65e0
	struct UMediaPlayer* GetMediaPlayer(); // Function MediaAssets.MediaTexture.GetMediaPlayer // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3ba65a0
	int32_t GetHeight(); // Function MediaAssets.MediaTexture.GetHeight // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3ba6620
	float GetAspectRatio(); // Function MediaAssets.MediaTexture.GetAspectRatio // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3ba6640
};

// Class MediaAssets.MediaSource
// Size: 0x88 (Inherited: 0x30)
struct UMediaSource : UObject {
	char pad_30[0x58]; // 0x30(0x58)

	bool Validate(); // Function MediaAssets.MediaSource.Validate // (RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bbbbf0
	void SetMediaOptionString(struct FName& Key, struct FString Value); // Function MediaAssets.MediaSource.SetMediaOptionString // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3bbb400
	void SetMediaOptionInt64(struct FName& Key, int64_t Value); // Function MediaAssets.MediaSource.SetMediaOptionInt64 // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3bbb660
	void SetMediaOptionFloat(struct FName& Key, float Value); // Function MediaAssets.MediaSource.SetMediaOptionFloat // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3bbb850
	void SetMediaOptionBool(struct FName& Key, bool Value); // Function MediaAssets.MediaSource.SetMediaOptionBool // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3bbba00
	struct FString GetUrl(); // Function MediaAssets.MediaSource.GetUrl // (RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bbbc30
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

	void SetFilePath(struct FString Path); // Function MediaAssets.FileMediaSource.SetFilePath // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3ba7290
};

// Class MediaAssets.MediaComponent
// Size: 0xe8 (Inherited: 0xd8)
struct UMediaComponent : UActorComponent {
	struct UMediaTexture* MediaTexture; // 0xd8(0x08)
	struct UMediaPlayer* MediaPlayer; // 0xe0(0x08)

	struct UMediaTexture* GetMediaTexture(); // Function MediaAssets.MediaComponent.GetMediaTexture // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3ba8780
	struct UMediaPlayer* GetMediaPlayer(); // Function MediaAssets.MediaComponent.GetMediaPlayer // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3ba87a0
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

	bool SupportsSeeking(); // Function MediaAssets.MediaPlayer.SupportsSeeking // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3ba94e0
	bool SupportsScrubbing(); // Function MediaAssets.MediaPlayer.SupportsScrubbing // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3ba9510
	bool SupportsRate(float Rate, bool Unthinned); // Function MediaAssets.MediaPlayer.SupportsRate // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3ba9540
	bool SetViewRotation(struct FRotator& Rotation, bool Absolute); // Function MediaAssets.MediaPlayer.SetViewRotation // (Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x3ba9870
	bool SetViewField(float Horizontal, float Vertical, bool Absolute); // Function MediaAssets.MediaPlayer.SetViewField // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3ba9a60
	bool SetVideoTrackFrameRate(int32_t TrackIndex, int32_t FormatIndex, float FrameRate); // Function MediaAssets.MediaPlayer.SetVideoTrackFrameRate // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3ba9cc0
	bool SetTrackFormat(enum class EMediaPlayerTrack TrackType, int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.SetTrackFormat // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3ba9f50
	void SetTimeDelay(struct FTimespan TimeDelay); // Function MediaAssets.MediaPlayer.SetTimeDelay // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x3ba9770
	bool SetRate(float Rate); // Function MediaAssets.MediaPlayer.SetRate // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3baa2e0
	bool SetNativeVolume(float Volume); // Function MediaAssets.MediaPlayer.SetNativeVolume // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3baa1c0
	void SetMediaOptions(struct UMediaSource* OPTIONS); // Function MediaAssets.MediaPlayer.SetMediaOptions // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x35441f0
	bool SetLooping(bool Looping); // Function MediaAssets.MediaPlayer.SetLooping // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3baa3e0
	void SetDesiredPlayerName(struct FName PlayerName); // Function MediaAssets.MediaPlayer.SetDesiredPlayerName // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3baa4e0
	void SetBlockOnTime(struct FTimespan& Time); // Function MediaAssets.MediaPlayer.SetBlockOnTime // (Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x3baa5e0
	bool SelectTrack(enum class EMediaPlayerTrack TrackType, int32_t TrackIndex); // Function MediaAssets.MediaPlayer.SelectTrack // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3baa7c0
	bool Seek(struct FTimespan& Time); // Function MediaAssets.MediaPlayer.Seek // (Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x3baa950
	bool Rewind(); // Function MediaAssets.MediaPlayer.Rewind // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3baaa50
	bool Reopen(); // Function MediaAssets.MediaPlayer.Reopen // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3baaa90
	bool Previous(); // Function MediaAssets.MediaPlayer.Previous // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3baaae0
	void PlayAndSeek(); // Function MediaAssets.MediaPlayer.PlayAndSeek // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3baab10
	bool Play(); // Function MediaAssets.MediaPlayer.Play // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3baab30
	bool Pause(); // Function MediaAssets.MediaPlayer.Pause // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3baab70
	bool OpenUrl(struct FString URL); // Function MediaAssets.MediaPlayer.OpenUrl // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3baabb0
	bool OpenSourceWithOptions(struct UMediaSource* MediaSource, struct FMediaPlayerOptions& OPTIONS); // Function MediaAssets.MediaPlayer.OpenSourceWithOptions // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3bab200
	void OpenSourceLatent(struct UObject* WorldContextObject, struct FLatentActionInfo LatentInfo, struct UMediaSource* MediaSource, struct FMediaPlayerOptions& OPTIONS, bool& bSuccess); // Function MediaAssets.MediaPlayer.OpenSourceLatent // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3baae40
	bool OpenSource(struct UMediaSource* MediaSource); // Function MediaAssets.MediaPlayer.OpenSource // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3bab3d0
	bool OpenPlaylistIndex(struct UMediaPlaylist* InPlaylist, int32_t Index); // Function MediaAssets.MediaPlayer.OpenPlaylistIndex // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3bab830
	bool OpenPlaylist(struct UMediaPlaylist* InPlaylist); // Function MediaAssets.MediaPlayer.OpenPlaylist // (Final|Native|Public|BlueprintCallable) // @ game+0x3babbd0
	bool OpenFile(struct FString FilePath); // Function MediaAssets.MediaPlayer.OpenFile // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3babec0
	bool Next(); // Function MediaAssets.MediaPlayer.Next // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3bac750
	bool IsReady(); // Function MediaAssets.MediaPlayer.IsReady // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bac780
	bool IsPreparing(); // Function MediaAssets.MediaPlayer.IsPreparing // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bac7e0
	bool IsPlaying(); // Function MediaAssets.MediaPlayer.IsPlaying // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bac820
	bool IsPaused(); // Function MediaAssets.MediaPlayer.IsPaused // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bac860
	bool IsLooping(); // Function MediaAssets.MediaPlayer.IsLooping // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bac890
	bool IsConnecting(); // Function MediaAssets.MediaPlayer.IsConnecting // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bac8c0
	bool IsClosed(); // Function MediaAssets.MediaPlayer.IsClosed // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bac7b0
	bool IsBuffering(); // Function MediaAssets.MediaPlayer.IsBuffering // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bac8f0
	bool HasError(); // Function MediaAssets.MediaPlayer.HasError // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bac920
	struct FRotator GetViewRotation(); // Function MediaAssets.MediaPlayer.GetViewRotation // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bac990
	struct FString GetVideoTrackType(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetVideoTrackType // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bac9d0
	struct FFloatRange GetVideoTrackFrameRates(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetVideoTrackFrameRates // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bacbd0
	float GetVideoTrackFrameRate(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetVideoTrackFrameRate // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bace30
	struct FIntPoint GetVideoTrackDimensions(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetVideoTrackDimensions // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bad0a0
	float GetVideoTrackAspectRatio(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetVideoTrackAspectRatio // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bad310
	float GetVerticalFieldOfView(); // Function MediaAssets.MediaPlayer.GetVerticalFieldOfView // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bad590
	struct FString GetUrl(); // Function MediaAssets.MediaPlayer.GetUrl // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bad5c0
	struct FString GetTrackLanguage(enum class EMediaPlayerTrack TrackType, int32_t TrackIndex); // Function MediaAssets.MediaPlayer.GetTrackLanguage // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bad5f0
	int32_t GetTrackFormat(enum class EMediaPlayerTrack TrackType, int32_t TrackIndex); // Function MediaAssets.MediaPlayer.GetTrackFormat // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bad7f0
	struct FText GetTrackDisplayName(enum class EMediaPlayerTrack TrackType, int32_t TrackIndex); // Function MediaAssets.MediaPlayer.GetTrackDisplayName // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bad980
	struct UMediaTimeStampInfo* GetTimeStamp(); // Function MediaAssets.MediaPlayer.GetTimeStamp // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3badbc0
	struct FTimespan GetTimeDelay(); // Function MediaAssets.MediaPlayer.GetTimeDelay // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bac960
	struct FTimespan GetTime(); // Function MediaAssets.MediaPlayer.GetTime // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x3badca0
	void GetSupportedRates(struct TArray<struct FFloatRange>& OutRates, bool Unthinned); // Function MediaAssets.MediaPlayer.GetSupportedRates // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x3badce0
	int32_t GetSelectedTrack(enum class EMediaPlayerTrack TrackType); // Function MediaAssets.MediaPlayer.GetSelectedTrack // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3badf50
	float GetRate(); // Function MediaAssets.MediaPlayer.GetRate // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bae050
	int32_t GetPlaylistIndex(); // Function MediaAssets.MediaPlayer.GetPlaylistIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bae090
	struct UMediaPlaylist* GetPlaylist(); // Function MediaAssets.MediaPlayer.GetPlaylist // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bae0b0
	struct FName GetPlayerName(); // Function MediaAssets.MediaPlayer.GetPlayerName // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bae0e0
	int32_t GetNumTracks(enum class EMediaPlayerTrack TrackType); // Function MediaAssets.MediaPlayer.GetNumTracks // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bae2c0
	int32_t GetNumTrackFormats(enum class EMediaPlayerTrack TrackType, int32_t TrackIndex); // Function MediaAssets.MediaPlayer.GetNumTrackFormats // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bae130
	struct FText GetMediaName(); // Function MediaAssets.MediaPlayer.GetMediaName // (RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bae3c0
	struct TMap<struct FString, struct FMediaMetadataItemsBPT> GetMediaMetadataItems(); // Function MediaAssets.MediaPlayer.GetMediaMetadataItems // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3ba93e0
	float GetHorizontalFieldOfView(); // Function MediaAssets.MediaPlayer.GetHorizontalFieldOfView // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bae420
	struct FTimespan GetDuration(); // Function MediaAssets.MediaPlayer.GetDuration // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bae450
	struct UMediaTimeStampInfo* GetDisplayTimeStamp(); // Function MediaAssets.MediaPlayer.GetDisplayTimeStamp // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3badb40
	struct FTimespan GetDisplayTime(); // Function MediaAssets.MediaPlayer.GetDisplayTime // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x3badc40
	struct FName GetDesiredPlayerName(); // Function MediaAssets.MediaPlayer.GetDesiredPlayerName // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bae490
	struct FString GetAudioTrackType(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetAudioTrackType // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bae4c0
	int32_t GetAudioTrackSampleRate(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetAudioTrackSampleRate // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bae6c0
	int32_t GetAudioTrackChannels(int32_t TrackIndex, int32_t FormatIndex); // Function MediaAssets.MediaPlayer.GetAudioTrackChannels // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bae920
	void Close(); // Function MediaAssets.MediaPlayer.Close // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3baeb80
	bool CanPlayUrl(struct FString URL); // Function MediaAssets.MediaPlayer.CanPlayUrl // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3baeba0
	bool CanPlaySource(struct UMediaSource* MediaSource); // Function MediaAssets.MediaPlayer.CanPlaySource // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3baed30
	bool CanPause(); // Function MediaAssets.MediaPlayer.CanPause // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3baeec0
};

// Class MediaAssets.MediaPlayerProxyInterface
// Size: 0x30 (Inherited: 0x30)
struct UMediaPlayerProxyInterface : UInterface {
};

// Class MediaAssets.MediaPlaylist
// Size: 0x40 (Inherited: 0x30)
struct UMediaPlaylist : UObject {
	struct TArray<struct UMediaSource*> Items; // 0x30(0x10)

	bool Replace(int32_t Index, struct UMediaSource* Replacement); // Function MediaAssets.MediaPlaylist.Replace // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3bb6050
	bool RemoveAt(int32_t Index); // Function MediaAssets.MediaPlaylist.RemoveAt // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3bb6200
	bool Remove(struct UMediaSource* MediaSource); // Function MediaAssets.MediaPlaylist.Remove // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3bb6330
	int32_t Num(); // Function MediaAssets.MediaPlaylist.Num // (Final|Native|Public|BlueprintCallable) // @ game+0x3bb6520
	void Insert(struct UMediaSource* MediaSource, int32_t Index); // Function MediaAssets.MediaPlaylist.Insert // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3bb6540
	struct UMediaSource* GetRandom(int32_t& OutIndex); // Function MediaAssets.MediaPlaylist.GetRandom // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3bb6720
	struct UMediaSource* GetPrevious(int32_t& InOutIndex); // Function MediaAssets.MediaPlaylist.GetPrevious // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3bb6820
	struct UMediaSource* GetNext(int32_t& InOutIndex); // Function MediaAssets.MediaPlaylist.GetNext // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3bb6960
	struct UMediaSource* GET(int32_t Index); // Function MediaAssets.MediaPlaylist.GET // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3bb6aa0
	bool AddUrl(struct FString URL); // Function MediaAssets.MediaPlaylist.AddUrl // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3bb6bc0
	bool AddFile(struct FString FilePath); // Function MediaAssets.MediaPlaylist.AddFile // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3bb6e00
	bool Add(struct UMediaSource* MediaSource); // Function MediaAssets.MediaPlaylist.Add // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3bb7610
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

	void SetSpectralAnalysisSettings(struct TArray<float> InFrequenciesToAnalyze, enum class EMediaSoundComponentFFTSize InFFTSize); // Function MediaAssets.MediaSoundComponent.SetSpectralAnalysisSettings // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3bb86f0
	void SetMediaPlayer(struct UMediaPlayer* NewMediaPlayer); // Function MediaAssets.MediaSoundComponent.SetMediaPlayer // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3bb8af0
	void SetEnvelopeFollowingsettings(int32_t AttackTimeMsec, int32_t ReleaseTimeMsec); // Function MediaAssets.MediaSoundComponent.SetEnvelopeFollowingsettings // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3bb8280
	void SetEnableSpectralAnalysis(bool bInSpectralAnalysisEnabled); // Function MediaAssets.MediaSoundComponent.SetEnableSpectralAnalysis // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3bb89c0
	void SetEnableEnvelopeFollowing(bool bInEnvelopeFollowing); // Function MediaAssets.MediaSoundComponent.SetEnableEnvelopeFollowing // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3bb8440
	struct TArray<struct FMediaSoundComponentSpectralData> GetSpectralData(); // Function MediaAssets.MediaSoundComponent.GetSpectralData // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3bb8650
	struct TArray<struct FMediaSoundComponentSpectralData> GetNormalizedSpectralData(); // Function MediaAssets.MediaSoundComponent.GetNormalizedSpectralData // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3bb8570
	struct UMediaPlayer* GetMediaPlayer(); // Function MediaAssets.MediaSoundComponent.GetMediaPlayer // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bb8c10
	float GetEnvelopeValue(); // Function MediaAssets.MediaSoundComponent.GetEnvelopeValue // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3bb8240
	bool BP_GetAttenuationSettingsToApply(struct FSoundAttenuationSettings& OutAttenuationSettings); // Function MediaAssets.MediaSoundComponent.BP_GetAttenuationSettingsToApply // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3bb8c50
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

	void EnumerateWebcamCaptureDevices(struct TArray<struct FMediaCaptureDevice>& OutDevices, int32_t Filter); // Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateWebcamCaptureDevices // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x3bc0a60
	void EnumerateVideoCaptureDevices(struct TArray<struct FMediaCaptureDevice>& OutDevices, int32_t Filter); // Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateVideoCaptureDevices // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x3bc0c90
	void EnumerateAudioCaptureDevices(struct TArray<struct FMediaCaptureDevice>& OutDevices, int32_t Filter); // Function MediaAssets.MediaBlueprintFunctionLibrary.EnumerateAudioCaptureDevices // (Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x3bc0ec0
};

