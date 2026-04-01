// Class Wwise.WwiseAudioLinkComponent
// Size: 0x530 (Inherited: 0x500)
struct UWwiseAudioLinkComponent : UAkComponent {
	char pad_500[0x8]; // 0x500(0x08)
	struct UWwiseAudioLinkSettings* Settings; // 0x508(0x08)
	struct USoundBase* Sound; // 0x510(0x08)
	bool bAutoPlay; // 0x518(0x01)
	char pad_519[0x7]; // 0x519(0x07)
	struct UAudioComponent* AudioComponent; // 0x520(0x08)
	char pad_528[0x8]; // 0x528(0x08)
};

// Class Wwise.WwiseAudioLinkSettings
// Size: 0x98 (Inherited: 0x40)
struct UWwiseAudioLinkSettings : UAudioLinkSettingsAbstract {
	struct TSoftObjectPtr<UAkAudioEvent> StartEvent; // 0x40(0x30)
	bool bShouldClearBufferOnReceipt; // 0x70(0x01)
	char pad_71[0x3]; // 0x71(0x03)
	float ProducerToConsumerBufferRatio; // 0x74(0x04)
	float InitialSilenceFillRatio; // 0x78(0x04)
	char pad_7C[0x14]; // 0x7c(0x14)
	struct UAkAudioEvent* StartEventResolved; // 0x90(0x08)
};

