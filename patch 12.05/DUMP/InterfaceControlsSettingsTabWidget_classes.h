// WidgetBlueprintGeneratedClass InterfaceControlsSettingsTabWidget.InterfaceControlsSettingsTabWidget_C
// Size: 0x330 (Inherited: 0x318)
struct UInterfaceControlsSettingsTabWidget_C : USettingsSubsectionWrapperBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UInterfaceControls_GeneralSettings_C* InterfaceControls_GeneralSettings; // 0x320(0x08)
	struct UInterfaceControls_VoteSettings_C* InterfaceControls_VoteSettings; // 0x328(0x08)

	void UpdateCharacterForSettings(struct UCharacterHandle* CharacterHandle); // Function InterfaceControlsSettingsTabWidget.InterfaceControlsSettingsTabWidget_C.UpdateCharacterForSettings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function InterfaceControlsSettingsTabWidget.InterfaceControlsSettingsTabWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_InterfaceControlsSettingsTabWidget(int32_t EntryPoint); // Function InterfaceControlsSettingsTabWidget.InterfaceControlsSettingsTabWidget_C.ExecuteUbergraph_InterfaceControlsSettingsTabWidget // (Final|UbergraphFunction) // @ game+0x1af5410
};

