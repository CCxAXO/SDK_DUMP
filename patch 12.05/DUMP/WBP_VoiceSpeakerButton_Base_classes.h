// WidgetBlueprintGeneratedClass WBP_VoiceSpeakerButton_Base.WBP_VoiceSpeakerButton_Base_C
// Size: 0x363 (Inherited: 0x318)
struct UWBP_VoiceSpeakerButton_Base_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct FString PlayerSubject; // 0x320(0x10)
	struct UWBP_Panel_VoiceIndicator_SpeakerIcon_C* SpeakerIconWidget; // 0x330(0x08)
	bool bIsHovered; // 0x338(0x01)
	bool bIsPressed; // 0x339(0x01)
	bool bSpeakerIconReactsToInteraction; // 0x33a(0x01)
	char pad_33B[0x1]; // 0x33b(0x01)
	struct FSlateColor SpeakerIconHoveredColor; // 0x33c(0x14)
	double SpeakerIconPressedOpacity; // 0x350(0x08)
	struct UWidget* ButtonWidget; // 0x358(0x08)
	enum class ESlateVisibility ActiveVisibility; // 0x360(0x01)
	enum class ESlateVisibility InactiveVisibility; // 0x361(0x01)
	bool bDisableButtonWhenInactive; // 0x362(0x01)

	void UpdateDetailText(); // Function WBP_VoiceSpeakerButton_Base.WBP_VoiceSpeakerButton_Base_C.UpdateDetailText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateButtonVisibility(); // Function WBP_VoiceSpeakerButton_Base.WBP_VoiceSpeakerButton_Base_C.UpdateButtonVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateAppearance(); // Function WBP_VoiceSpeakerButton_Base.WBP_VoiceSpeakerButton_Base_C.UpdateAppearance // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetIsPressed(bool bNewValue); // Function WBP_VoiceSpeakerButton_Base.WBP_VoiceSpeakerButton_Base_C.SetIsPressed // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetIsHovered(bool bNewValue); // Function WBP_VoiceSpeakerButton_Base.WBP_VoiceSpeakerButton_Base_C.SetIsHovered // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleButtonClicked(); // Function WBP_VoiceSpeakerButton_Base.WBP_VoiceSpeakerButton_Base_C.HandleButtonClicked // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetObservedPlayer(struct FString PlayerSubject); // Function WBP_VoiceSpeakerButton_Base.WBP_VoiceSpeakerButton_Base_C.SetObservedPlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OpenVoiceSettings(); // Function WBP_VoiceSpeakerButton_Base.WBP_VoiceSpeakerButton_Base_C.OpenVoiceSettings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Initialize(struct UWBP_Panel_VoiceIndicator_SpeakerIcon_C* InSpeakerIcon, struct UWidget* InButtonWidget); // Function WBP_VoiceSpeakerButton_Base.WBP_VoiceSpeakerButton_Base_C.Initialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleIsMutedChanged(bool bIsMuted); // Function WBP_VoiceSpeakerButton_Base.WBP_VoiceSpeakerButton_Base_C.HandleIsMutedChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleIsRestrictedChanged(bool bIsRestricted); // Function WBP_VoiceSpeakerButton_Base.WBP_VoiceSpeakerButton_Base_C.HandleIsRestrictedChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleIsLocalPlayerChanged(bool bIsLocalPlayer); // Function WBP_VoiceSpeakerButton_Base.WBP_VoiceSpeakerButton_Base_C.HandleIsLocalPlayerChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleIsInRoomChanged(bool bIsInRoom); // Function WBP_VoiceSpeakerButton_Base.WBP_VoiceSpeakerButton_Base_C.HandleIsInRoomChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnInitialized(); // Function WBP_VoiceSpeakerButton_Base.WBP_VoiceSpeakerButton_Base_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void HandleVoiceSettingsUIIsEnabledChanged(); // Function WBP_VoiceSpeakerButton_Base.WBP_VoiceSpeakerButton_Base_C.HandleVoiceSettingsUIIsEnabledChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Destruct(); // Function WBP_VoiceSpeakerButton_Base.WBP_VoiceSpeakerButton_Base_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_VoiceSpeakerButton_Base(int32_t EntryPoint); // Function WBP_VoiceSpeakerButton_Base.WBP_VoiceSpeakerButton_Base_C.ExecuteUbergraph_WBP_VoiceSpeakerButton_Base // (Final|UbergraphFunction) // @ game+0x1af5410
};

