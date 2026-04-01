// WidgetBlueprintGeneratedClass EquipmentControls_WeaponsSettings.EquipmentControls_WeaponsSettings_C
// Size: 0x389 (Inherited: 0x318)
struct UEquipmentControls_WeaponsSettings_C : USettingsSubsectionBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UBoolSettingsWidget_C* AimDownSightsMode; // 0x320(0x08)
	struct UBoolSettingsWidget_C* AimThroughScopeMode; // 0x328(0x08)
	struct UActionBindingWidget_C* AltFireBinding; // 0x330(0x08)
	struct UBoolSettingsWidget_C* AutoRescopeWidget; // 0x338(0x08)
	struct UVerticalBox* EquipmentSubsection; // 0x340(0x08)
	struct UActionBindingWidget_C* FireBinding; // 0x348(0x08)
	struct UBoolSettingsWidget_C* LeverSniperZoomHoldMode; // 0x350(0x08)
	struct UBoolSettingsWidget_C* LeverSniperZoomInput; // 0x358(0x08)
	struct UActionBindingWidget_C* ReloadBinding; // 0x360(0x08)
	struct UActionBindingWidget_C* ToggleZoomLevel; // 0x368(0x08)
	struct USettingsV2_Subheader_C* WeaponsHeader; // 0x370(0x08)
	struct TArray<struct UWidget*> WidgetsToToggleVisibility; // 0x378(0x10)
	bool SniperUseToggleZoom; // 0x388(0x01)

	void OnHoldInputForSniperScopesChanged(enum class EAresBoolSettingName SettingName, bool OldValue, bool NewValue); // Function EquipmentControls_WeaponsSettings.EquipmentControls_WeaponsSettings_C.OnHoldInputForSniperScopesChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function EquipmentControls_WeaponsSettings.EquipmentControls_WeaponsSettings_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnOperatorZoomCycleChanged(enum class EAresBoolSettingName SettingName, bool OldValue, bool NewValue); // Function EquipmentControls_WeaponsSettings.EquipmentControls_WeaponsSettings_C.OnOperatorZoomCycleChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_EquipmentControls_WeaponsSettings(int32_t EntryPoint); // Function EquipmentControls_WeaponsSettings.EquipmentControls_WeaponsSettings_C.ExecuteUbergraph_EquipmentControls_WeaponsSettings // (Final|UbergraphFunction) // @ game+0x1af5410
};

