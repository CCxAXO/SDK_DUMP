// WidgetBlueprintGeneratedClass Audio_VoiceoverSettings.Audio_VoiceoverSettings_C
// Size: 0x3a8 (Inherited: 0x318)
struct UAudio_VoiceoverSettings_C : USettingsSubsectionBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UAudioCheckboxSettingsWidget_C* Announcer; // 0x320(0x08)
	struct UAudioVOAmountDropdownSettingsWidget_C* AudioVOAmountDropdownSettingsWidget; // 0x328(0x08)
	struct UConsoleStepingSliderSettingWidget_C* AudioVOFrequencySliderSettingWidget; // 0x330(0x08)
	struct UAudioVOLanguageSelector_C* AudioVOLanguageSelector; // 0x338(0x08)
	struct UAudioCheckboxSettingsWidget_C* AutomatedTactical; // 0x340(0x08)
	struct UAudioCheckboxSettingsWidget_C* CharFlavor; // 0x348(0x08)
	struct UAudioCheckboxSettingsWidget_C* Emotes; // 0x350(0x08)
	struct UAudioCheckboxSettingsWidget_C* Gameplay; // 0x358(0x08)
	struct UAudioCheckboxSettingsWidget_C* MaxbotFlavorVO; // 0x360(0x08)
	struct UAudioCheckboxSettingsWidget_C* MaxbotGameplayVO; // 0x368(0x08)
	struct USettingsV2_Subheader_C* SettingsV2_Subheader_C_251; // 0x370(0x08)
	struct UAudioCheckboxSettingsWidget_C* Tactical; // 0x378(0x08)
	struct UVerticalBox* VoiceoverSubsection; // 0x380(0x08)
	struct UAudioCheckboxSettingsWidget_C* VoipDucksFlavorVO; // 0x388(0x08)
	struct TArray<struct UWidget*> WidgetsToToggleVisibility; // 0x390(0x10)
	struct UConfirmResolutionSettingsModal_C* ResolutionConfirmationPopup; // 0x3a0(0x08)

	void Construct(); // Function Audio_VoiceoverSettings.Audio_VoiceoverSettings_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_Audio_VoiceoverSettings(int32_t EntryPoint); // Function Audio_VoiceoverSettings.Audio_VoiceoverSettings_C.ExecuteUbergraph_Audio_VoiceoverSettings // (Final|UbergraphFunction) // @ game+0x1b42740
};

