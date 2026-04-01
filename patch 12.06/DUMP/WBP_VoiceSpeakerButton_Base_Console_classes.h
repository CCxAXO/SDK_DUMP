// WidgetBlueprintGeneratedClass WBP_VoiceSpeakerButton_Base_Console.WBP_VoiceSpeakerButton_Base_Console_C
// Size: 0x380 (Inherited: 0x363)
struct UWBP_VoiceSpeakerButton_Base_Console_C : UWBP_VoiceSpeakerButton_Base_C {
	char pad_363[0x5]; // 0x363(0x05)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x368(0x08)
	struct UAkAudioEvent* OpenModalSound; // 0x370(0x08)
	struct UAresCommonButton* AresCommonButton; // 0x378(0x08)

	void UpdateDetailText(); // Function WBP_VoiceSpeakerButton_Base_Console.WBP_VoiceSpeakerButton_Base_Console_C.UpdateDetailText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Initialize(struct UWBP_Panel_VoiceIndicator_SpeakerIcon_C* InSpeakerIcon, struct UWidget* InButtonWidget); // Function WBP_VoiceSpeakerButton_Base_Console.WBP_VoiceSpeakerButton_Base_Console_C.Initialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OpenVoiceSettings(); // Function WBP_VoiceSpeakerButton_Base_Console.WBP_VoiceSpeakerButton_Base_Console_C.OpenVoiceSettings // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Get Current Button Prompt(struct FText& Prompt Text, bool& bPromptIsActive); // Function WBP_VoiceSpeakerButton_Base_Console.WBP_VoiceSpeakerButton_Base_Console_C.Get Current Button Prompt // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateButtonPrompt(); // Function WBP_VoiceSpeakerButton_Base_Console.WBP_VoiceSpeakerButton_Base_Console_C.UpdateButtonPrompt // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_VoiceSpeakerButton_Base_Console(int32_t EntryPoint); // Function WBP_VoiceSpeakerButton_Base_Console.WBP_VoiceSpeakerButton_Base_Console_C.ExecuteUbergraph_WBP_VoiceSpeakerButton_Base_Console // (Final|UbergraphFunction) // @ game+0x1b42740
};

