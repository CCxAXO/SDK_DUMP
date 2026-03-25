// WidgetBlueprintGeneratedClass Audio_GeneralSettings.Audio_GeneralSettings_C
// Size: 0x3b0 (Inherited: 0x318)
struct UAudio_GeneralSettings_C : USettingsSubsectionBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UAudioSettingSelector_C* AudioSpeakerConfigSelector; // 0x320(0x08)
	struct UAudioSliderSettingsWidget_C* CharacterSelectMusicVolume; // 0x328(0x08)
	struct USettingsV2_Subheader_C* GeneralHeader; // 0x330(0x08)
	struct UVerticalBox* GeneralSubsection; // 0x338(0x08)
	struct UAudioCheckboxSettingsWidget_C* HRTFEnabled; // 0x340(0x08)
	struct USettingsV2_SettingsMessage_C* HRTFNoticeText; // 0x348(0x08)
	struct UAudioSliderSettingsWidget_C* MasterVolumeWidget; // 0x350(0x08)
	struct UAudioSliderSettingsWidget_C* MenuLobbyMusicVolumeWidget; // 0x358(0x08)
	struct UAudioSliderSettingsWidget_C* MusicVolumeWidget; // 0x360(0x08)
	struct UAudioCheckboxSettingsWidget_C* MuteMusicOnWindopwDeactivate; // 0x368(0x08)
	struct USettingsV2_SettingsMessage_C* RestartToApplyAudioSettingsText; // 0x370(0x08)
	struct UAudioSliderSettingsWidget_C* SFXVolumeWidget; // 0x378(0x08)
	struct UAudioSliderSettingsWidget_C* VideoVolume; // 0x380(0x08)
	struct UAudioCheckboxSettingsWidget_C* VoipDucksMusic; // 0x388(0x08)
	struct UAudioSliderSettingsWidget_C* VOVolumeWidget; // 0x390(0x08)
	struct TArray<struct UWidget*> WidgetsToToggleVisibility; // 0x398(0x10)
	struct UConfirmResolutionSettingsModal_C* ResolutionConfirmationPopup; // 0x3a8(0x08)

	void HandleGameFeatureToggle(enum class EGameFeatureToggleName GameFeatureToggleName, bool Enabled); // Function Audio_GeneralSettings.Audio_GeneralSettings_C.HandleGameFeatureToggle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function Audio_GeneralSettings.Audio_GeneralSettings_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnGameFeatureToggleChanged(enum class EGameFeatureToggleName GameFeatureToggleName, bool bEnabled); // Function Audio_GeneralSettings.Audio_GeneralSettings_C.OnGameFeatureToggleChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void EnableOrDisableHrtfBasedOnAudioSetup(); // Function Audio_GeneralSettings.Audio_GeneralSettings_C.EnableOrDisableHrtfBasedOnAudioSetup // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Allow Toggleing HRTF(); // Function Audio_GeneralSettings.Audio_GeneralSettings_C.Allow Toggleing HRTF // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Do Not Allow Toggleing HRTF(); // Function Audio_GeneralSettings.Audio_GeneralSettings_C.Do Not Allow Toggleing HRTF // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_Audio_GeneralSettings(int32_t EntryPoint); // Function Audio_GeneralSettings.Audio_GeneralSettings_C.ExecuteUbergraph_Audio_GeneralSettings // (Final|UbergraphFunction) // @ game+0x1af5410
};

