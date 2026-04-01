// WidgetBlueprintGeneratedClass CommunicationControls_PingSettings.CommunicationControls_PingSettings_C
// Size: 0x358 (Inherited: 0x318)
struct UCommunicationControls_PingSettings_C : USettingsSubsectionBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UActionBindingWidget_C* CautionPing; // 0x320(0x08)
	struct UActionBindingWidget_C* NeedSupportPing; // 0x328(0x08)
	struct UActionBindingWidget_C* OnMyMarkPing; // 0x330(0x08)
	struct UActionBindingWidget_C* PingBinding; // 0x338(0x08)
	struct UVerticalBox* PingSubsection; // 0x340(0x08)
	struct UTextSettingsWidgetWithSlider_C* PingWheelDelaySlider; // 0x348(0x08)
	struct UActionBindingWidget_C* WatchingHerePing; // 0x350(0x08)

	void Construct(); // Function CommunicationControls_PingSettings.CommunicationControls_PingSettings_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_CommunicationControls_PingSettings(int32_t EntryPoint); // Function CommunicationControls_PingSettings.CommunicationControls_PingSettings_C.ExecuteUbergraph_CommunicationControls_PingSettings // (Final|UbergraphFunction) // @ game+0x1b42740
};

