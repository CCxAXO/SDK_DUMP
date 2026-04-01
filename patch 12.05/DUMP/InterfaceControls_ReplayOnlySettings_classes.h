// WidgetBlueprintGeneratedClass InterfaceControls_ReplayOnlySettings.InterfaceControls_ReplayOnlySettings_C
// Size: 0x368 (Inherited: 0x318)
struct UInterfaceControls_ReplayOnlySettings_C : USettingsSubsectionBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UActionBindingWidget_C* DecreaseReplaySpeed; // 0x320(0x08)
	struct UActionBindingWidget_C* IncreaseReplaySpeed; // 0x328(0x08)
	struct UActionBindingWidget_C* ReplayBookmarkEvent; // 0x330(0x08)
	struct USettingsV2_Subheader_C* ReplayHeader; // 0x338(0x08)
	struct UVerticalBox* ReplaySubsection; // 0x340(0x08)
	struct UActionBindingWidget_C* TogglePause; // 0x348(0x08)
	struct UActionBindingWidget_C* ToggleReplayUI; // 0x350(0x08)
	struct TArray<struct UWidget*> WidgetsToToggleVisibility; // 0x358(0x10)

	void Construct(); // Function InterfaceControls_ReplayOnlySettings.InterfaceControls_ReplayOnlySettings_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_InterfaceControls_ReplayOnlySettings(int32_t EntryPoint); // Function InterfaceControls_ReplayOnlySettings.InterfaceControls_ReplayOnlySettings_C.ExecuteUbergraph_InterfaceControls_ReplayOnlySettings // (Final|UbergraphFunction) // @ game+0x1af5410
};

