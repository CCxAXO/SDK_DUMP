// Class ImgMedia.ImgMediaSource
// Size: 0xe0 (Inherited: 0x98)
struct UImgMediaSource : UBaseMediaSource {
	bool IsPathRelativeToProjectRoot; // 0x98(0x01)
	char pad_99[0x3]; // 0x99(0x03)
	struct FFrameRate FrameRateOverride; // 0x9c(0x08)
	char pad_A4[0x4]; // 0xa4(0x04)
	struct FString ProxyOverride; // 0xa8(0x10)
	bool bFillGapsInSequence; // 0xb8(0x01)
	char pad_B9[0x7]; // 0xb9(0x07)
	struct FDirectoryPath SequencePath; // 0xc0(0x10)
	char pad_D0[0x10]; // 0xd0(0x10)

	void SetTokenizedSequencePath(struct FString Path); // Function ImgMedia.ImgMediaSource.SetTokenizedSequencePath // (Final|Native|Public|BlueprintCallable) // @ game+0x7c47350
	void SetSequencePath(struct FString Path); // Function ImgMedia.ImgMediaSource.SetSequencePath // (Final|Native|Public|BlueprintCallable) // @ game+0x7c474f0
	void SetMipLevelDistance(float Distance); // Function ImgMedia.ImgMediaSource.SetMipLevelDistance // (Final|Native|Public|BlueprintCallable) // @ game+0x3ec3d70
	void RemoveTargetObject(struct AActor* InActor); // Function ImgMedia.ImgMediaSource.RemoveTargetObject // (Final|Native|Public|BlueprintCallable) // @ game+0x7c470b0
	void RemoveGlobalCamera(struct AActor* InActor); // Function ImgMedia.ImgMediaSource.RemoveGlobalCamera // (Final|Native|Public|BlueprintCallable) // @ game+0x35441f0
	struct FString GetSequencePath(); // Function ImgMedia.ImgMediaSource.GetSequencePath // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x7c47620
	void GetProxies(struct TArray<struct FString>& OutProxies); // Function ImgMedia.ImgMediaSource.GetProxies // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x7c476c0
	void AddTargetObject(struct AActor* InActor); // Function ImgMedia.ImgMediaSource.AddTargetObject // (Final|Native|Public|BlueprintCallable) // @ game+0x7c47250
	void AddGlobalCamera(struct AActor* InActor); // Function ImgMedia.ImgMediaSource.AddGlobalCamera // (Final|Native|Public|BlueprintCallable) // @ game+0x35441f0
};

