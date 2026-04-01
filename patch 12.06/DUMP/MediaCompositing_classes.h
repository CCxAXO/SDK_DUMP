// Class MediaCompositing.MovieSceneMediaPlayerPropertySection
// Size: 0x108 (Inherited: 0xf8)
struct UMovieSceneMediaPlayerPropertySection : UMovieSceneSection {
	struct UMediaSource* MediaSource; // 0xf8(0x08)
	bool bLoop; // 0x100(0x01)
	char pad_101[0x7]; // 0x101(0x07)
};

// Class MediaCompositing.MovieSceneMediaPlayerPropertyTrack
// Size: 0xe0 (Inherited: 0xd8)
struct UMovieSceneMediaPlayerPropertyTrack : UMovieScenePropertyTrack {
	char pad_D8[0x8]; // 0xd8(0x08)
};

// Class MediaCompositing.MovieSceneMediaSection
// Size: 0x258 (Inherited: 0xf8)
struct UMovieSceneMediaSection : UMovieSceneSection {
	struct UMediaSource* MediaSource; // 0xf8(0x08)
	int32_t MediaSourceProxyIndex; // 0x100(0x04)
	bool bLooping; // 0x104(0x01)
	char pad_105[0x3]; // 0x105(0x03)
	struct FFrameNumber StartFrameOffset; // 0x108(0x04)
	char pad_10C[0x4]; // 0x10c(0x04)
	struct UMediaTexture* MediaTexture; // 0x110(0x08)
	struct UMediaSoundComponent* MediaSoundComponent; // 0x118(0x08)
	bool bUseExternalMediaPlayer; // 0x120(0x01)
	char pad_121[0x7]; // 0x121(0x07)
	struct UMediaPlayer* ExternalMediaPlayer; // 0x128(0x08)
	struct FMediaSourceCacheSettings CacheSettings; // 0x130(0x08)
	int32_t TextureIndex; // 0x138(0x04)
	bool bHasMediaPlayerProxy; // 0x13c(0x01)
	char pad_13D[0x3]; // 0x13d(0x03)
	struct FMovieSceneBoolChannel ChannelCanPlayerBeOpen; // 0x140(0x100)
	struct FMovieSceneObjectBindingID MediaSourceProxyBindingID; // 0x240(0x18)
};

// Class MediaCompositing.MovieSceneMediaTrack
// Size: 0xb8 (Inherited: 0xa0)
struct UMovieSceneMediaTrack : UMovieSceneNameableTrack {
	char pad_A0[0x8]; // 0xa0(0x08)
	struct TArray<struct UMovieSceneSection*> MediaSections; // 0xa8(0x10)
};

