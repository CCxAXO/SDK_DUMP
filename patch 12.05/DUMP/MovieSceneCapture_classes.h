// Class MovieSceneCapture.MovieSceneCaptureProtocolBase
// Size: 0x60 (Inherited: 0x30)
struct UMovieSceneCaptureProtocolBase : UObject {
	char pad_30[0x28]; // 0x30(0x28)
	enum class EMovieSceneCaptureProtocolState State; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)

	bool IsCapturing(); // Function MovieSceneCapture.MovieSceneCaptureProtocolBase.IsCapturing // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3b3b2c0
	enum class EMovieSceneCaptureProtocolState GetState(); // Function MovieSceneCapture.MovieSceneCaptureProtocolBase.GetState // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3b3b300
};

// Class MovieSceneCapture.MovieSceneAudioCaptureProtocolBase
// Size: 0x60 (Inherited: 0x60)
struct UMovieSceneAudioCaptureProtocolBase : UMovieSceneCaptureProtocolBase {
};

// Class MovieSceneCapture.NullAudioCaptureProtocol
// Size: 0x60 (Inherited: 0x60)
struct UNullAudioCaptureProtocol : UMovieSceneAudioCaptureProtocolBase {
};

// Class MovieSceneCapture.MasterAudioSubmixCaptureProtocol
// Size: 0x98 (Inherited: 0x60)
struct UMasterAudioSubmixCaptureProtocol : UMovieSceneAudioCaptureProtocolBase {
	struct FString Filename; // 0x60(0x10)
	char pad_70[0x28]; // 0x70(0x28)
};

// Class MovieSceneCapture.MovieSceneImageCaptureProtocolBase
// Size: 0x60 (Inherited: 0x60)
struct UMovieSceneImageCaptureProtocolBase : UMovieSceneCaptureProtocolBase {
};

// Class MovieSceneCapture.CompositionGraphCaptureProtocol
// Size: 0xd8 (Inherited: 0x60)
struct UCompositionGraphCaptureProtocol : UMovieSceneImageCaptureProtocolBase {
	struct FCompositionGraphCapturePasses IncludeRenderPasses; // 0x60(0x10)
	bool bCaptureFramesInHDR; // 0x70(0x01)
	char pad_71[0x3]; // 0x71(0x03)
	int32_t HDRCompressionQuality; // 0x74(0x04)
	enum class EHDRCaptureGamut CaptureGamut; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
	struct FSoftObjectPath PostProcessingMaterial; // 0x80(0x28)
	bool bDisableScreenPercentage; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
	struct UMaterialInterface* PostProcessingMaterialPtr; // 0xb0(0x08)
	char pad_B8[0x20]; // 0xb8(0x20)
};

// Class MovieSceneCapture.MovieSceneCaptureInterface
// Size: 0x30 (Inherited: 0x30)
struct UMovieSceneCaptureInterface : UInterface {
};

// Class MovieSceneCapture.FrameGrabberProtocol
// Size: 0x70 (Inherited: 0x60)
struct UFrameGrabberProtocol : UMovieSceneImageCaptureProtocolBase {
	char pad_60[0x10]; // 0x60(0x10)
};

// Class MovieSceneCapture.ImageSequenceProtocol
// Size: 0xe0 (Inherited: 0x70)
struct UImageSequenceProtocol : UFrameGrabberProtocol {
	char pad_70[0x70]; // 0x70(0x70)
};

// Class MovieSceneCapture.CompressedImageSequenceProtocol
// Size: 0xe8 (Inherited: 0xe0)
struct UCompressedImageSequenceProtocol : UImageSequenceProtocol {
	int32_t CompressionQuality; // 0xe0(0x04)
	char pad_E4[0x4]; // 0xe4(0x04)
};

// Class MovieSceneCapture.ImageSequenceProtocol_BMP
// Size: 0xe0 (Inherited: 0xe0)
struct UImageSequenceProtocol_BMP : UImageSequenceProtocol {
};

// Class MovieSceneCapture.ImageSequenceProtocol_PNG
// Size: 0xe8 (Inherited: 0xe8)
struct UImageSequenceProtocol_PNG : UCompressedImageSequenceProtocol {
};

// Class MovieSceneCapture.ImageSequenceProtocol_JPG
// Size: 0xe8 (Inherited: 0xe8)
struct UImageSequenceProtocol_JPG : UCompressedImageSequenceProtocol {
};

// Class MovieSceneCapture.ImageSequenceProtocol_EXR
// Size: 0xf0 (Inherited: 0xe0)
struct UImageSequenceProtocol_EXR : UImageSequenceProtocol {
	bool bCompressed; // 0xe0(0x01)
	enum class EHDRCaptureGamut CaptureGamut; // 0xe1(0x01)
	char pad_E2[0xe]; // 0xe2(0x0e)
};

// Class MovieSceneCapture.MovieSceneCapture
// Size: 0x250 (Inherited: 0x30)
struct UMovieSceneCapture : UObject {
	char pad_30[0x10]; // 0x30(0x10)
	struct FSoftClassPath ImageCaptureProtocolType; // 0x40(0x28)
	struct FSoftClassPath AudioCaptureProtocolType; // 0x68(0x28)
	struct UMovieSceneImageCaptureProtocolBase* ImageCaptureProtocol; // 0x90(0x08)
	struct UMovieSceneAudioCaptureProtocolBase* AudioCaptureProtocol; // 0x98(0x08)
	struct FMovieSceneCaptureSettings Settings; // 0xa0(0x70)
	bool bUseSeparateProcess; // 0x110(0x01)
	bool bCloseEditorWhenCaptureStarts; // 0x111(0x01)
	char pad_112[0x6]; // 0x112(0x06)
	struct FString AdditionalCommandLineArguments; // 0x118(0x10)
	struct FString InheritedCommandLineArguments; // 0x128(0x10)
	char pad_138[0x118]; // 0x138(0x118)

	void SetImageCaptureProtocolType(struct UMovieSceneCaptureProtocolBase* ProtocolType); // Function MovieSceneCapture.MovieSceneCapture.SetImageCaptureProtocolType // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3b33e60
	void SetAudioCaptureProtocolType(struct UMovieSceneCaptureProtocolBase* ProtocolType); // Function MovieSceneCapture.MovieSceneCapture.SetAudioCaptureProtocolType // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3b33d70
	struct UMovieSceneCaptureProtocolBase* GetImageCaptureProtocol(); // Function MovieSceneCapture.MovieSceneCapture.GetImageCaptureProtocol // (Final|Native|Public|BlueprintCallable) // @ game+0x3b33f70
	struct UMovieSceneCaptureProtocolBase* GetAudioCaptureProtocol(); // Function MovieSceneCapture.MovieSceneCapture.GetAudioCaptureProtocol // (Final|Native|Public|BlueprintCallable) // @ game+0x3b33f50
};

// Class MovieSceneCapture.LevelCapture
// Size: 0x270 (Inherited: 0x250)
struct ULevelCapture : UMovieSceneCapture {
	bool bAutoStartCapture; // 0x250(0x01)
	char pad_251[0xb]; // 0x251(0x0b)
	struct FGuid PrerequisiteActorId; // 0x25c(0x10)
	char pad_26C[0x4]; // 0x26c(0x04)
};

// Class MovieSceneCapture.MovieSceneCaptureEnvironment
// Size: 0x30 (Inherited: 0x30)
struct UMovieSceneCaptureEnvironment : UObject {

	bool IsCaptureInProgress(); // Function MovieSceneCapture.MovieSceneCaptureEnvironment.IsCaptureInProgress // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0x3b392b0
	int32_t GetCaptureFrameNumber(); // Function MovieSceneCapture.MovieSceneCaptureEnvironment.GetCaptureFrameNumber // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x3b39380
	float GetCaptureElapsedTime(); // Function MovieSceneCapture.MovieSceneCaptureEnvironment.GetCaptureElapsedTime // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x3b39300
	struct UMovieSceneImageCaptureProtocolBase* FindImageCaptureProtocol(); // Function MovieSceneCapture.MovieSceneCaptureEnvironment.FindImageCaptureProtocol // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0x3b39210
	struct UMovieSceneAudioCaptureProtocolBase* FindAudioCaptureProtocol(); // Function MovieSceneCapture.MovieSceneCaptureEnvironment.FindAudioCaptureProtocol // (Final|RequiredAPI|Native|Static|Public|BlueprintCallable) // @ game+0x3b39170
};

// Class MovieSceneCapture.UserDefinedCaptureProtocol
// Size: 0xe0 (Inherited: 0x60)
struct UUserDefinedCaptureProtocol : UMovieSceneImageCaptureProtocolBase {
	struct UWorld* World; // 0x60(0x08)
	char pad_68[0x78]; // 0x68(0x78)

	void StopCapturingFinalPixels(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.StopCapturingFinalPixels // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3b3c700
	void StartCapturingFinalPixels(struct FCapturedPixelsID& StreamID); // Function MovieSceneCapture.UserDefinedCaptureProtocol.StartCapturingFinalPixels // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3b3c740
	void ResolveBuffer(struct UTexture* Buffer, struct FCapturedPixelsID& BufferID); // Function MovieSceneCapture.UserDefinedCaptureProtocol.ResolveBuffer // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3b3c9a0
	void OnWarmUp(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.OnWarmUp // (RequiredAPI|Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void OnTick(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.OnTick // (RequiredAPI|Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void OnStartCapture(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.OnStartCapture // (RequiredAPI|Event|Protected|BlueprintEvent) // @ game+0x1af5410
	bool OnSetup(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.OnSetup // (RequiredAPI|Native|Event|Protected|BlueprintEvent) // @ game+0x3b3cca0
	void OnPreTick(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.OnPreTick // (RequiredAPI|Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void OnPixelsReceived(struct FCapturedPixels& Pixels, struct FCapturedPixelsID& ID, struct FFrameMetrics FrameMetrics); // Function MovieSceneCapture.UserDefinedCaptureProtocol.OnPixelsReceived // (RequiredAPI|Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x1af5410
	void OnPauseCapture(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.OnPauseCapture // (RequiredAPI|Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void OnFinalize(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.OnFinalize // (RequiredAPI|Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void OnCaptureFrame(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.OnCaptureFrame // (RequiredAPI|Event|Protected|BlueprintEvent) // @ game+0x1af5410
	bool OnCanFinalize(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.OnCanFinalize // (RequiredAPI|Native|Event|Protected|BlueprintEvent|Const) // @ game+0x3b3cc60
	void OnBeginFinalize(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.OnBeginFinalize // (RequiredAPI|Event|Protected|BlueprintEvent) // @ game+0x1af5410
	struct FFrameMetrics GetCurrentFrameMetrics(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.GetCurrentFrameMetrics // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3b3c560
	struct FString GenerateFilename(struct FFrameMetrics& InFrameMetrics); // Function MovieSceneCapture.UserDefinedCaptureProtocol.GenerateFilename // (RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x3b3c580
};

// Class MovieSceneCapture.UserDefinedImageCaptureProtocol
// Size: 0xe8 (Inherited: 0xe0)
struct UUserDefinedImageCaptureProtocol : UUserDefinedCaptureProtocol {
	enum class EDesiredImageFormat Format; // 0xe0(0x01)
	bool bEnableCompression; // 0xe1(0x01)
	char pad_E2[0x2]; // 0xe2(0x02)
	int32_t CompressionQuality; // 0xe4(0x04)

	void WriteImageToDisk(struct FCapturedPixels& PixelData, struct FCapturedPixelsID& StreamID, struct FFrameMetrics& FrameMetrics, bool bCopyImageData); // Function MovieSceneCapture.UserDefinedImageCaptureProtocol.WriteImageToDisk // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3b3d440
	struct FString GenerateFilenameForCurrentFrame(); // Function MovieSceneCapture.UserDefinedImageCaptureProtocol.GenerateFilenameForCurrentFrame // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3b3d8b0
	struct FString GenerateFilenameForBuffer(struct UTexture* Buffer, struct FCapturedPixelsID& StreamID); // Function MovieSceneCapture.UserDefinedImageCaptureProtocol.GenerateFilenameForBuffer // (Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3b3d970
};

// Class MovieSceneCapture.VideoCaptureProtocol
// Size: 0x88 (Inherited: 0x70)
struct UVideoCaptureProtocol : UFrameGrabberProtocol {
	bool bUseCompression; // 0x70(0x01)
	char pad_71[0x3]; // 0x71(0x03)
	float CompressionQuality; // 0x74(0x04)
	char pad_78[0x10]; // 0x78(0x10)
};

