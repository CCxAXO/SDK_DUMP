// WidgetBlueprintGeneratedClass ViewingControlsSettingsTabWidget.ViewingControlsSettingsTabWidget_C
// Size: 0x340 (Inherited: 0x318)
struct UViewingControlsSettingsTabWidget_C : USettingsSubsectionWrapperBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UInterfaceControls_ObserverAndReplaySettings_C* InterfaceControls_ObserverAndReplaySettings; // 0x320(0x08)
	struct UInterfaceControls_ObserverOnlySettings_C* InterfaceControls_ObserverOnlySettings; // 0x328(0x08)
	struct UInterfaceControls_ObserverSettings_C* InterfaceControls_ObserverSettings; // 0x330(0x08)
	struct UInterfaceControls_ReplayOnlySettings_C* InterfaceControls_ReplayOnlySettings; // 0x338(0x08)

	void UpdateCharacterForSettings(struct UCharacterHandle* CharacterHandle); // Function ViewingControlsSettingsTabWidget.ViewingControlsSettingsTabWidget_C.UpdateCharacterForSettings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function ViewingControlsSettingsTabWidget.ViewingControlsSettingsTabWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_ViewingControlsSettingsTabWidget(int32_t EntryPoint); // Function ViewingControlsSettingsTabWidget.ViewingControlsSettingsTabWidget_C.ExecuteUbergraph_ViewingControlsSettingsTabWidget // (Final|UbergraphFunction) // @ game+0x1af5410
};

