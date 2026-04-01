// WidgetBlueprintGeneratedClass CommunicationControls_VOSettings.CommunicationControls_VOSettings_C
// Size: 0x360 (Inherited: 0x318)
struct UCommunicationControls_VOSettings_C : USettingsSubsectionBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UActionBindingWidget_C* CombatRadioCommands; // 0x320(0x08)
	struct UActionBindingWidget_C* RadioCommandIndex; // 0x328(0x08)
	struct UActionBindingWidget_C* SocialRadioCommands; // 0x330(0x08)
	struct UActionBindingWidget_C* StrategyRadioCommands; // 0x338(0x08)
	struct UActionBindingWidget_C* TacticsRadioCommands; // 0x340(0x08)
	struct UVerticalBox* VOSubsection; // 0x348(0x08)
	struct TArray<struct UWidget*> WidgetsToToggleVisibility; // 0x350(0x10)

	void Construct(); // Function CommunicationControls_VOSettings.CommunicationControls_VOSettings_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_CommunicationControls_VOSettings(int32_t EntryPoint); // Function CommunicationControls_VOSettings.CommunicationControls_VOSettings_C.ExecuteUbergraph_CommunicationControls_VOSettings // (Final|UbergraphFunction) // @ game+0x1b42740
};

