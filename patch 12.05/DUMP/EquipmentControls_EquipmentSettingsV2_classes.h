// WidgetBlueprintGeneratedClass EquipmentControls_EquipmentSettingsV2.EquipmentControls_EquipmentSettingsV2_C
// Size: 0x390 (Inherited: 0x318)
struct UEquipmentControls_EquipmentSettingsV2_C : USettingsSubsectionBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UAudioCheckboxSettingsWidget_C* AutoEquipIgnoresMelee; // 0x320(0x08)
	struct UBoolSettingsWidget_C* AutoEquipPrioritizes; // 0x328(0x08)
	struct UActionBindingWidget_C* CycleNextWeaponBinding; // 0x330(0x08)
	struct UActionBindingWidget_C* CyclePreviousWeaponBinding; // 0x338(0x08)
	struct UActionBindingWidget_C* DropBinding; // 0x340(0x08)
	struct USettingsV2_Subheader_C* EquipmentHeader; // 0x348(0x08)
	struct UVerticalBox* EquipmentSubsection; // 0x350(0x08)
	struct UActionBindingWidget_C* LastUsedEquippable; // 0x358(0x08)
	struct UActionBindingWidget_C* SelectBombBinding; // 0x360(0x08)
	struct UActionBindingWidget_C* SelectMeleeBinding; // 0x368(0x08)
	struct UActionBindingWidget_C* SelectPrimaryBinding; // 0x370(0x08)
	struct UActionBindingWidget_C* SelectSecondaryBinding; // 0x378(0x08)
	struct TArray<struct UWidget*> WidgetsToToggleVisibility; // 0x380(0x10)

	struct FLinearColor Get_AutoRescopeWidget_ColorAndOpacity_1(); // Function EquipmentControls_EquipmentSettingsV2.EquipmentControls_EquipmentSettingsV2_C.Get_AutoRescopeWidget_ColorAndOpacity_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	struct FLinearColor Get_LeverSniperZoomInput_ColorAndOpacity_1(); // Function EquipmentControls_EquipmentSettingsV2.EquipmentControls_EquipmentSettingsV2_C.Get_LeverSniperZoomInput_ColorAndOpacity_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void Construct(); // Function EquipmentControls_EquipmentSettingsV2.EquipmentControls_EquipmentSettingsV2_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_EquipmentControls_EquipmentSettingsV2(int32_t EntryPoint); // Function EquipmentControls_EquipmentSettingsV2.EquipmentControls_EquipmentSettingsV2_C.ExecuteUbergraph_EquipmentControls_EquipmentSettingsV2 // (Final|UbergraphFunction) // @ game+0x1af5410
};

