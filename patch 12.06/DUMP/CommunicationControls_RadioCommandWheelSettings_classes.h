// WidgetBlueprintGeneratedClass CommunicationControls_RadioCommandWheelSettings.CommunicationControls_RadioCommandWheelSettings_C
// Size: 0x358 (Inherited: 0x318)
struct UCommunicationControls_RadioCommandWheelSettings_C : USettingsSubsectionBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UActionBindingWidget_C* CombatCommWheel; // 0x320(0x08)
	struct UActionBindingWidget_C* RadioCommandWheel; // 0x328(0x08)
	struct UVerticalBox* RadioCommandWheelSubsection; // 0x330(0x08)
	struct UActionBindingWidget_C* SocialCommWheel; // 0x338(0x08)
	struct UActionBindingWidget_C* StrategyTacticsCommWheel; // 0x340(0x08)
	struct TArray<struct UWidget*> WidgetsToToggleVisibility; // 0x348(0x10)

	void Construct(); // Function CommunicationControls_RadioCommandWheelSettings.CommunicationControls_RadioCommandWheelSettings_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_CommunicationControls_RadioCommandWheelSettings(int32_t EntryPoint); // Function CommunicationControls_RadioCommandWheelSettings.CommunicationControls_RadioCommandWheelSettings_C.ExecuteUbergraph_CommunicationControls_RadioCommandWheelSettings // (Final|UbergraphFunction) // @ game+0x1b42740
};

