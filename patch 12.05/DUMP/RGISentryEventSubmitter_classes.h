// Class RGISentryEventSubmitter.RGIBaseSentryEvent
// Size: 0xc0 (Inherited: 0x30)
struct URGIBaseSentryEvent : UObject {
	char pad_30[0x10]; // 0x30(0x10)
	struct FString ProjectID; // 0x40(0x10)
	struct FString SentryPublicKey; // 0x50(0x10)
	struct FString SentrySecretKey; // 0x60(0x10)
	struct TArray<struct FString> ListOfFilesToUpload; // 0x70(0x10)
	char pad_80[0x40]; // 0x80(0x40)
};

// Class RGISentryEventSubmitter.RGISubmitLogsToSentryEvent
// Size: 0xc0 (Inherited: 0xc0)
struct URGISubmitLogsToSentryEvent : URGIBaseSentryEvent {
};

// Class RGISentryEventSubmitter.RGISentryEventSubmitter
// Size: 0x48 (Inherited: 0x38)
struct URGISentryEventSubmitter : UGameInstanceSubsystem {
	char pad_38[0x10]; // 0x38(0x10)

	void SubmitEventToSentry(struct URGIBaseSentryEvent* EventToSubmit); // Function RGISentryEventSubmitter.RGISentryEventSubmitter.SubmitEventToSentry // (Final|Native|Public|BlueprintCallable) // @ game+0x54d7bd0
};

// Class RGISentryEventSubmitter.RGISentryEventSubmitterSettings
// Size: 0x50 (Inherited: 0x48)
struct URGISentryEventSubmitterSettings : UDeveloperSettings {
	double SubmissionDelaySeconds; // 0x48(0x08)
};

