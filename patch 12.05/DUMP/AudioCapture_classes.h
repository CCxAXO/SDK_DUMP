// Class AudioCapture.AudioCapture
// Size: 0xb8 (Inherited: 0xb0)
struct UAudioCapture : UAudioGenerator {
	char pad_B0[0x8]; // 0xb0(0x08)

	void StopCapturingAudio(); // Function AudioCapture.AudioCapture.StopCapturingAudio // (Final|Native|Public|BlueprintCallable) // @ game+0x78cf6b0
	void StartCapturingAudio(); // Function AudioCapture.AudioCapture.StartCapturingAudio // (Final|Native|Public|BlueprintCallable) // @ game+0x78cf710
	bool IsCapturingAudio(); // Function AudioCapture.AudioCapture.IsCapturingAudio // (Final|Native|Public|BlueprintCallable) // @ game+0x78cf660
	bool GetAudioCaptureDeviceInfo(struct FAudioCaptureDeviceInfo& OutInfo); // Function AudioCapture.AudioCapture.GetAudioCaptureDeviceInfo // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x78cf770
};

// Class AudioCapture.AudioCaptureFunctionLibrary
// Size: 0x30 (Inherited: 0x30)
struct UAudioCaptureFunctionLibrary : UBlueprintFunctionLibrary {

	struct UAudioCapture* CreateAudioCapture(); // Function AudioCapture.AudioCaptureFunctionLibrary.CreateAudioCapture // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x78cfa50
};

// Class AudioCapture.AudioCaptureBlueprintLibrary
// Size: 0x30 (Inherited: 0x30)
struct UAudioCaptureBlueprintLibrary : UBlueprintFunctionLibrary {

	void GetAvailableAudioInputDevices(struct UObject* WorldContextObject, struct FDelegate& OnObtainDevicesEvent); // Function AudioCapture.AudioCaptureBlueprintLibrary.GetAvailableAudioInputDevices // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x78d00c0
	struct FString Conv_AudioInputDeviceInfoToString(struct FAudioInputDeviceInfo& Info); // Function AudioCapture.AudioCaptureBlueprintLibrary.Conv_AudioInputDeviceInfoToString // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x78d0280
};

// Class AudioCapture.AudioCaptureComponent
// Size: 0xa60 (Inherited: 0x9a0)
struct UAudioCaptureComponent : USynthComponent {
	int32_t JitterLatencyFrames; // 0x9a0(0x04)
	char pad_9A4[0xbc]; // 0x9a4(0xbc)
};

