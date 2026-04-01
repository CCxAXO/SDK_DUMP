// Class RGITrace.RGITraceServerSubsystem
// Size: 0x38 (Inherited: 0x38)
struct URGITraceServerSubsystem : UGameInstanceSubsystem {
};

// Class RGITrace.RGITraceBlueprintLibrary
// Size: 0x30 (Inherited: 0x30)
struct URGITraceBlueprintLibrary : UBlueprintFunctionLibrary {

	struct FString GetTraceTime(); // Function RGITrace.RGITraceBlueprintLibrary.GetTraceTime // (Final|Native|Static|Private|BlueprintCallable) // @ game+0x57e9bb0
};

// Class RGITrace.RGITraceCaptureWidget
// Size: 0x320 (Inherited: 0x318)
struct URGITraceCaptureWidget : UUserWidget {
	struct UTextBlock* TextBlock; // 0x318(0x08)
};

// Class RGITrace.RGITraceComponent
// Size: 0xf8 (Inherited: 0xd8)
struct URGITraceComponent : UActorComponent {
	char pad_D8[0x18]; // 0xd8(0x18)
	struct URGITraceCaptureWidget* CaptureWidget; // 0xf0(0x08)

	void ServerCaptureTailTraceRPC(); // Function RGITrace.RGITraceComponent.ServerCaptureTailTraceRPC // (Final|Net|NetReliableNative|Event|Private|NetServer) // @ game+0x57ea440
	void ClientDownloadTraceFromUrl(struct FString TracePortAndAbsPath); // Function RGITrace.RGITraceComponent.ClientDownloadTraceFromUrl // (Final|Net|NetReliableNative|Event|Private|NetClient) // @ game+0x57ea050
	void ClientCaptureSucceededOnServerRPC(struct FString ServerCapturePath); // Function RGITrace.RGITraceComponent.ClientCaptureSucceededOnServerRPC // (Final|Net|NetReliableNative|Event|Private|NetClient) // @ game+0x57ea300
	void ClientCaptureOnServerStartedRPC(); // Function RGITrace.RGITraceComponent.ClientCaptureOnServerStartedRPC // (Final|Net|NetReliableNative|Event|Private|NetClient) // @ game+0x47a45b0
	void ClientCaptureOnServerCouldNotStreamRPC(struct FString ServerCapturePath); // Function RGITrace.RGITraceComponent.ClientCaptureOnServerCouldNotStreamRPC // (Final|Net|NetReliableNative|Event|Private|NetClient) // @ game+0x57ea190
	void ClientCaptureFailedOnServerRPC(); // Function RGITrace.RGITraceComponent.ClientCaptureFailedOnServerRPC // (Final|Net|NetReliableNative|Event|Private|NetClient) // @ game+0x57ea2d0
};

// Class RGITrace.RGITraceSettings
// Size: 0xa0 (Inherited: 0x48)
struct URGITraceSettings : UDeveloperSettings {
	bool bShouldAutoConnectToInsights; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct TArray<struct FString> ChannelsToEnable; // 0x50(0x10)
	bool bShouldStreamServerCapturesToRequestingClient; // 0x60(0x01)
	bool bShouldAvoidStreamingServerCapturesThroughLoopback; // 0x61(0x01)
	bool bAllowHitchTraceCaptures; // 0x62(0x01)
	char pad_63[0x1]; // 0x63(0x01)
	float HitchCaptureCooldownSeconds; // 0x64(0x04)
	int32_t MaxDiskSizeOfProfilingFolderMB; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct TSoftClassPtr<UObject> CaptureNotificationClass; // 0x70(0x30)

	struct TArray<struct FString> GetChannelNames(); // Function RGITrace.RGITraceSettings.GetChannelNames // (Final|Native|Static|Private) // @ game+0x57ea870
};

