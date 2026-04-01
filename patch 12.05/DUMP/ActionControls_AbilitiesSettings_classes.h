// WidgetBlueprintGeneratedClass ActionControls_AbilitiesSettings.ActionControls_AbilitiesSettings_C
// Size: 0x360 (Inherited: 0x318)
struct UActionControls_AbilitiesSettings_C : USettingsSubsectionBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct USettingsV2_Subheader_C* AbilitiesHeader; // 0x320(0x08)
	struct UVerticalBox* ActionSubsection; // 0x328(0x08)
	struct UCharacterAbilityActionBindingWidget_C* SelectGrenadeAbilityBinding; // 0x330(0x08)
	struct UCharacterAbilityActionBindingWidget_C* SelectPrimaryAbilityBinding; // 0x338(0x08)
	struct UCharacterAbilityActionBindingWidget_C* SelectSecondaryAbilityBinding; // 0x340(0x08)
	struct UCharacterAbilityActionBindingWidget_C* SelectUltimateAbilityBinding; // 0x348(0x08)
	struct TArray<struct UWidget*> WidgetsToToggleVisibility; // 0x350(0x10)

	struct FLinearColor Get_AutoRescopeWidget_ColorAndOpacity_1(); // Function ActionControls_AbilitiesSettings.ActionControls_AbilitiesSettings_C.Get_AutoRescopeWidget_ColorAndOpacity_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	struct FLinearColor Get_LeverSniperZoomInput_ColorAndOpacity_1(); // Function ActionControls_AbilitiesSettings.ActionControls_AbilitiesSettings_C.Get_LeverSniperZoomInput_ColorAndOpacity_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void Construct(); // Function ActionControls_AbilitiesSettings.ActionControls_AbilitiesSettings_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_ActionControls_AbilitiesSettings(int32_t EntryPoint); // Function ActionControls_AbilitiesSettings.ActionControls_AbilitiesSettings_C.ExecuteUbergraph_ActionControls_AbilitiesSettings // (Final|UbergraphFunction) // @ game+0x1af5410
};

