// WidgetBlueprintGeneratedClass CommunicationControls_VOIPSettings.CommunicationControls_VOIPSettings_C
// Size: 0x360 (Inherited: 0x318)
struct UCommunicationControls_VOIPSettings_C : USettingsSubsectionBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UActionBindingWidget_C* PartyClutchMuteBinding; // 0x320(0x08)
	struct UActionBindingWidget_C* PartyPushToTalkBinding; // 0x328(0x08)
	struct UActionBindingWidget_C* TeamClutchMuteBinding; // 0x330(0x08)
	struct UActionBindingWidget_C* TeamPushToTalkBinding; // 0x338(0x08)
	struct USettingsV2_Subheader_C* VOIPControlsHeader; // 0x340(0x08)
	struct UVerticalBox* VOIPSubsection; // 0x348(0x08)
	struct TArray<struct UWidget*> WidgetsToToggleVisibility; // 0x350(0x10)

	void DisableVoiceIfNeeded(); // Function CommunicationControls_VOIPSettings.CommunicationControls_VOIPSettings_C.DisableVoiceIfNeeded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function CommunicationControls_VOIPSettings.CommunicationControls_VOIPSettings_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_CommunicationControls_VOIPSettings(int32_t EntryPoint); // Function CommunicationControls_VOIPSettings.CommunicationControls_VOIPSettings_C.ExecuteUbergraph_CommunicationControls_VOIPSettings // (Final|UbergraphFunction) // @ game+0x1b42740
};

