// WidgetBlueprintGeneratedClass Audio_PartyVoiceSettings.Audio_PartyVoiceSettings_C
// Size: 0x368 (Inherited: 0x318)
struct UAudio_PartyVoiceSettings_C : USettingsSubsectionBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UVerticalBox* DisplaySubsection; // 0x320(0x08)
	struct UBoolSettingsWidget_C* PartyActivationMode; // 0x328(0x08)
	struct UTextBlock* PartyVoiceBindingPreviewText; // 0x330(0x08)
	struct UBoolSettingsWidget_C* PartyVoiceCUSTOMEnabled; // 0x338(0x08)
	struct UBoolSettingsWidget_C* PartyVoiceEnabled; // 0x340(0x08)
	struct USettingsV2_Subheader_C* VoicePartyHeader; // 0x348(0x08)
	struct TArray<struct UWidget*> WidgetsToToggleVisibility; // 0x350(0x10)
	struct UConfirmResolutionSettingsModal_C* ResolutionConfirmationPopup; // 0x360(0x08)

	void SetPartyVoiceChatBindPreview(); // Function Audio_PartyVoiceSettings.Audio_PartyVoiceSettings_C.SetPartyVoiceChatBindPreview // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function Audio_PartyVoiceSettings.Audio_PartyVoiceSettings_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_Audio_PartyVoiceSettings(int32_t EntryPoint); // Function Audio_PartyVoiceSettings.Audio_PartyVoiceSettings_C.ExecuteUbergraph_Audio_PartyVoiceSettings // (Final|UbergraphFunction) // @ game+0x1af5410
};

