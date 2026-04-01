// Class AudioAnalyzer.AudioAnalyzerAssetBase
// Size: 0x30 (Inherited: 0x30)
struct UAudioAnalyzerAssetBase : UObject {
};

// Class AudioAnalyzer.AudioAnalyzerSettings
// Size: 0x30 (Inherited: 0x30)
struct UAudioAnalyzerSettings : UAudioAnalyzerAssetBase {
};

// Class AudioAnalyzer.AudioAnalyzer
// Size: 0x98 (Inherited: 0x30)
struct UAudioAnalyzer : UObject {
	struct UAudioBus* AudioBus; // 0x30(0x08)
	char pad_38[0x8]; // 0x38(0x08)
	struct UAudioAnalyzerSubsystem* AudioAnalyzerSubsystem; // 0x40(0x08)
	char pad_48[0x50]; // 0x48(0x50)

	void StopAnalyzing(struct UObject* WorldContextObject); // Function AudioAnalyzer.AudioAnalyzer.StopAnalyzing // (Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x848d790
	void StartAnalyzing(struct UObject* WorldContextObject, struct UAudioBus* AudioBusToAnalyze); // Function AudioAnalyzer.AudioAnalyzer.StartAnalyzing // (Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable) // @ game+0x848d880
};

// Class AudioAnalyzer.AudioAnalyzerNRTSettings
// Size: 0x30 (Inherited: 0x30)
struct UAudioAnalyzerNRTSettings : UAudioAnalyzerAssetBase {
};

// Class AudioAnalyzer.AudioAnalyzerNRT
// Size: 0x80 (Inherited: 0x30)
struct UAudioAnalyzerNRT : UAudioAnalyzerAssetBase {
	struct USoundWave* Sound; // 0x30(0x08)
	float DurationInSeconds; // 0x38(0x04)
	char pad_3C[0x44]; // 0x3c(0x44)
};

// Class AudioAnalyzer.AudioAnalyzerSubsystem
// Size: 0x58 (Inherited: 0x38)
struct UAudioAnalyzerSubsystem : UEngineSubsystem {
	struct TArray<struct UAudioAnalyzer*> AudioAnalyzers; // 0x38(0x10)
	char pad_48[0x10]; // 0x48(0x10)
};

