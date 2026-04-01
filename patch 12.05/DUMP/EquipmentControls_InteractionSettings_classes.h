// WidgetBlueprintGeneratedClass EquipmentControls_InteractionSettings.EquipmentControls_InteractionSettings_C
// Size: 0x378 (Inherited: 0x318)
struct UEquipmentControls_InteractionSettings_C : USettingsSubsectionBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UBoolSettingsWidget_C* BoolSettingsWidget; // 0x320(0x08)
	struct UVerticalBox* EquipmentSubsection; // 0x328(0x08)
	struct UActionBindingWidget_C* Inspect; // 0x330(0x08)
	struct USettingsV2_Subheader_C* InteractionHeader; // 0x338(0x08)
	struct UActionBindingWidget_C* OpenSprayWheel; // 0x340(0x08)
	struct UActionBindingWidget_C* Spray; // 0x348(0x08)
	struct UTextSettingsWidgetWithSlider_C* SprayWheelDelaySlider; // 0x350(0x08)
	struct UActionBindingWidget_C* UseBinding; // 0x358(0x08)
	struct UActionBindingWidget_C* UseBomb; // 0x360(0x08)
	struct TArray<struct UWidget*> WidgetsToToggleVisibility; // 0x368(0x10)

	struct FLinearColor Get_AutoRescopeWidget_ColorAndOpacity_1(); // Function EquipmentControls_InteractionSettings.EquipmentControls_InteractionSettings_C.Get_AutoRescopeWidget_ColorAndOpacity_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	struct FLinearColor Get_LeverSniperZoomInput_ColorAndOpacity_1(); // Function EquipmentControls_InteractionSettings.EquipmentControls_InteractionSettings_C.Get_LeverSniperZoomInput_ColorAndOpacity_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void Construct(); // Function EquipmentControls_InteractionSettings.EquipmentControls_InteractionSettings_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void AES Wheel Hold Enabled Changed(enum class EAresBoolSettingName SettingName, bool OldValue, bool NewValue); // Function EquipmentControls_InteractionSettings.EquipmentControls_InteractionSettings_C.AES Wheel Hold Enabled Changed // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_EquipmentControls_InteractionSettings(int32_t EntryPoint); // Function EquipmentControls_InteractionSettings.EquipmentControls_InteractionSettings_C.ExecuteUbergraph_EquipmentControls_InteractionSettings // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

