// WidgetBlueprintGeneratedClass CommunicationControls_TextChatSettings.CommunicationControls_TextChatSettings_C
// Size: 0x350 (Inherited: 0x318)
struct UCommunicationControls_TextChatSettings_C : USettingsSubsectionBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UChatFilterSettingsWidget_C* ChatFilterSettingsWidget; // 0x320(0x08)
	struct UStringTagsSettingsWidget_C* StringTagsSettingsWidget; // 0x328(0x08)
	struct UBoolSettingsWidget_C* TacticalCallouts; // 0x330(0x08)
	struct UVerticalBox* TextChatSubsection; // 0x338(0x08)
	struct TArray<struct UWidget*> WidgetsToToggleVisibility; // 0x340(0x10)

	void Construct(); // Function CommunicationControls_TextChatSettings.CommunicationControls_TextChatSettings_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_CommunicationControls_TextChatSettings(int32_t EntryPoint); // Function CommunicationControls_TextChatSettings.CommunicationControls_TextChatSettings_C.ExecuteUbergraph_CommunicationControls_TextChatSettings // (Final|UbergraphFunction) // @ game+0x1af5410
};

