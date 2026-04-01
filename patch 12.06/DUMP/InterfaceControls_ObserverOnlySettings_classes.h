// WidgetBlueprintGeneratedClass InterfaceControls_ObserverOnlySettings.InterfaceControls_ObserverOnlySettings_C
// Size: 0x360 (Inherited: 0x318)
struct UInterfaceControls_ObserverOnlySettings_C : USettingsSubsectionBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UActionBindingWidget_C* ModifyObservePlayer; // 0x320(0x08)
	struct UActionBindingWidget_C* ObserverCycleCinematicCams; // 0x328(0x08)
	struct UActionBindingWidget_C* ObserverFollowNext; // 0x330(0x08)
	struct UActionBindingWidget_C* ObserverFollowPrev; // 0x338(0x08)
	struct USettingsV2_Subheader_C* ObserverHeader; // 0x340(0x08)
	struct UVerticalBox* ObserverSubsection; // 0x348(0x08)
	struct TArray<struct UWidget*> WidgetsToToggleVisibility; // 0x350(0x10)

	void Construct(); // Function InterfaceControls_ObserverOnlySettings.InterfaceControls_ObserverOnlySettings_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_InterfaceControls_ObserverOnlySettings(int32_t EntryPoint); // Function InterfaceControls_ObserverOnlySettings.InterfaceControls_ObserverOnlySettings_C.ExecuteUbergraph_InterfaceControls_ObserverOnlySettings // (Final|UbergraphFunction) // @ game+0x1b42740
};

