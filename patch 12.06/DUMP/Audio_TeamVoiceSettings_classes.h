// WidgetBlueprintGeneratedClass Audio_TeamVoiceSettings.Audio_TeamVoiceSettings_C
// Size: 0x360 (Inherited: 0x318)
struct UAudio_TeamVoiceSettings_C : USettingsSubsectionBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UHorizontalBox* HorizontalBox_TeamVoiceInfo; // 0x320(0x08)
	struct UTextBlock* TeamVoiceBindingPreviewText; // 0x328(0x08)
	struct UBoolSettingsWidget_C* TeamVoiceEnabled; // 0x330(0x08)
	struct UVerticalBox* TeamVoiceSubsection; // 0x338(0x08)
	struct USettingsV2_Subheader_C* VoiceTeamHeader; // 0x340(0x08)
	struct TArray<struct UWidget*> WidgetsToToggleVisibility; // 0x348(0x10)
	struct UConfirmResolutionSettingsModal_C* ResolutionConfirmationPopup; // 0x358(0x08)

	void SetTeamVoiceChatBindPreview(); // Function Audio_TeamVoiceSettings.Audio_TeamVoiceSettings_C.SetTeamVoiceChatBindPreview // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function Audio_TeamVoiceSettings.Audio_TeamVoiceSettings_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_Audio_TeamVoiceSettings(int32_t EntryPoint); // Function Audio_TeamVoiceSettings.Audio_TeamVoiceSettings_C.ExecuteUbergraph_Audio_TeamVoiceSettings // (Final|UbergraphFunction) // @ game+0x1b42740
};

