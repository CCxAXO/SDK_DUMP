// Class MediaPlate.MediaPlate
// Size: 0x470 (Inherited: 0x460)
struct AMediaPlate : AActor {
	struct UMediaPlateComponent* MediaPlateComponent; // 0x460(0x08)
	struct UStaticMeshComponent* StaticMeshComponent; // 0x468(0x08)
};

// Class MediaPlate.MediaPlateAssetUserData
// Size: 0x40 (Inherited: 0x30)
struct UMediaPlateAssetUserData : UAssetUserData {
	char pad_30[0x10]; // 0x30(0x10)
};

// Class MediaPlate.MediaPlateComponent
// Size: 0x1a0 (Inherited: 0xd8)
struct UMediaPlateComponent : UActorComponent {
	char pad_D8[0x8]; // 0xd8(0x08)
	bool bPlayOnOpen; // 0xe0(0x01)
	bool bAutoPlay; // 0xe1(0x01)
	bool bEnableAudio; // 0xe2(0x01)
	char pad_E3[0x1]; // 0xe3(0x01)
	float StartTime; // 0xe4(0x04)
	struct UMediaSoundComponent* SoundComponent; // 0xe8(0x08)
	struct UStaticMeshComponent* StaticMeshComponent; // 0xf0(0x08)
	struct TArray<struct UStaticMeshComponent*> Letterboxes; // 0xf8(0x10)
	struct UMediaPlaylist* MediaPlaylist; // 0x108(0x08)
	int32_t PlaylistIndex; // 0x110(0x04)
	struct FMediaSourceCacheSettings CacheSettings; // 0x114(0x08)
	bool bIsMediaPlatePlaying; // 0x11c(0x01)
	char pad_11D[0x7]; // 0x11d(0x07)
	bool bPlayOnlyWhenVisible; // 0x124(0x01)
	bool bLoop; // 0x125(0x01)
	enum class EMediaTextureVisibleMipsTiles VisibleMipsTilesCalculations; // 0x126(0x01)
	char pad_127[0x1]; // 0x127(0x01)
	float MipMapBias; // 0x128(0x04)
	bool bIsAspectRatioAuto; // 0x12c(0x01)
	bool bEnableMipMapUpscaling; // 0x12d(0x01)
	char pad_12E[0x2]; // 0x12e(0x02)
	int32_t MipLevelToUpscale; // 0x130(0x04)
	float LetterboxAspectRatio; // 0x134(0x04)
	char pad_138[0x8]; // 0x138(0x08)
	struct FVector2D MeshRange; // 0x140(0x10)
	struct TArray<struct UMediaTexture*> MediaTextures; // 0x150(0x10)
	struct UMediaPlayer* MediaPlayer; // 0x160(0x08)
	char pad_168[0x38]; // 0x168(0x38)

	void SetPlayOnlyWhenVisible(bool bInPlayOnlyWhenVisible); // Function MediaPlate.MediaPlateComponent.SetPlayOnlyWhenVisible // (Final|Native|Public|BlueprintCallable) // @ game+0x7c6ae80
	void SetMeshRange(struct FVector2D InMeshRange); // Function MediaPlate.MediaPlateComponent.SetMeshRange // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x7c6af80
	void SetLoop(bool bInLoop); // Function MediaPlate.MediaPlateComponent.SetLoop // (Final|Native|Public|BlueprintCallable) // @ game+0x7c6b080
	void SetLetterboxAspectRatio(float AspectRatio); // Function MediaPlate.MediaPlateComponent.SetLetterboxAspectRatio // (Final|Native|Public|BlueprintCallable) // @ game+0x7c6ac00
	void SetIsAspectRatioAuto(bool bInIsAspectRatioAuto); // Function MediaPlate.MediaPlateComponent.SetIsAspectRatioAuto // (Final|Native|Public|BlueprintCallable) // @ game+0x7c6ad80
	bool Seek(struct FTimespan& Time); // Function MediaPlate.MediaPlateComponent.Seek // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x7c6b210
	bool Rewind(); // Function MediaPlate.MediaPlateComponent.Rewind // (Final|Native|Public|BlueprintCallable) // @ game+0x7c6b330
	void Play(); // Function MediaPlate.MediaPlateComponent.Play // (Final|Native|Public|BlueprintCallable) // @ game+0x7c6b3e0
	void Pause(); // Function MediaPlate.MediaPlateComponent.Pause // (Final|Native|Public|BlueprintCallable) // @ game+0x7c6b390
	void Open(); // Function MediaPlate.MediaPlateComponent.Open // (Final|Native|Public|BlueprintCallable) // @ game+0x7c6b430
	void OnMediaOpened(struct FString DeviceUrl); // Function MediaPlate.MediaPlateComponent.OnMediaOpened // (Final|Native|Private) // @ game+0x7c6aa70
	void OnMediaEnd(); // Function MediaPlate.MediaPlateComponent.OnMediaEnd // (Final|Native|Private) // @ game+0x7c6aa50
	bool IsMediaPlatePlaying(); // Function MediaPlate.MediaPlateComponent.IsMediaPlatePlaying // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5bffa10
	struct FVector2D GetMeshRange(); // Function MediaPlate.MediaPlateComponent.GetMeshRange // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x5eaa920
	struct UMediaTexture* GetMediaTexture(int32_t Index); // Function MediaPlate.MediaPlateComponent.GetMediaTexture // (Final|Native|Public|BlueprintCallable) // @ game+0x7c6b450
	struct UMediaPlayer* GetMediaPlayer(); // Function MediaPlate.MediaPlateComponent.GetMediaPlayer // (Final|Native|Public|BlueprintCallable) // @ game+0x59a0770
	bool GetLoop(); // Function MediaPlate.MediaPlateComponent.GetLoop // (Final|Native|Public|BlueprintCallable|BlueprintPure) // @ game+0x7c6b190
	float GetLetterboxAspectRatio(); // Function MediaPlate.MediaPlateComponent.GetLetterboxAspectRatio // (Final|Native|Public|BlueprintCallable) // @ game+0x5a33440
	bool GetIsAspectRatioAuto(); // Function MediaPlate.MediaPlateComponent.GetIsAspectRatioAuto // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x5819780
	void Close(); // Function MediaPlate.MediaPlateComponent.Close // (Final|Native|Public|BlueprintCallable) // @ game+0x7c6b1b0
};

