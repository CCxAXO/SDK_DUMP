// WidgetBlueprintGeneratedClass InterfaceControls_GeneralSettings.InterfaceControls_GeneralSettings_C
// Size: 0x390 (Inherited: 0x318)
struct UInterfaceControls_GeneralSettings_C : USettingsSubsectionBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UActionBindingWidget_C* CharacterAbilityTooltipBinding; // 0x320(0x08)
	struct UActionBindingWidget_C* CombatReport; // 0x328(0x08)
	struct UActionBindingWidget_C* DumpDiagnostics; // 0x330(0x08)
	struct UBoolSettingsWidget_C* EnableLiveDiagnostics; // 0x338(0x08)
	struct USettingsV2_Subheader_C* GeneralHeader; // 0x340(0x08)
	struct UVerticalBox* GeneralSubsection; // 0x348(0x08)
	struct UActionBindingWidget_C* HoldForMap; // 0x350(0x08)
	struct UActionBindingWidget_C* Scoreboard; // 0x358(0x08)
	struct UActionBindingWidget_C* Shop; // 0x360(0x08)
	struct UActionBindingWidget_C* ShowExtendedInfo; // 0x368(0x08)
	struct UActionBindingWidget_C* ToggleMap; // 0x370(0x08)
	struct UActionBindingWidget_C* ToggleMouseCursor; // 0x378(0x08)
	struct TArray<struct UWidget*> WidgetsToToggleVisibility; // 0x380(0x10)

	void Construct(); // Function InterfaceControls_GeneralSettings.InterfaceControls_GeneralSettings_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnOptionsScreenToggled_Event_1(bool IsVisible); // Function InterfaceControls_GeneralSettings.InterfaceControls_GeneralSettings_C.OnOptionsScreenToggled_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ClientConfigUpdated(struct FName& ConfigName); // Function InterfaceControls_GeneralSettings.InterfaceControls_GeneralSettings_C.ClientConfigUpdated // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_InterfaceControls_GeneralSettings(int32_t EntryPoint); // Function InterfaceControls_GeneralSettings.InterfaceControls_GeneralSettings_C.ExecuteUbergraph_InterfaceControls_GeneralSettings // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

