// WidgetBlueprintGeneratedClass Gameplay_OtherSettingsWidgetV2.Gameplay_OtherSettingsWidgetV2_C
// Size: 0x3a8 (Inherited: 0x318)
struct UGameplay_OtherSettingsWidgetV2_C : USettingsSubsectionBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UBoolSettingsWidget_C* AlwaysShowWeaponInventory; // 0x320(0x08)
	struct UBoolSettingsWidget_C* HideUIWidget; // 0x328(0x08)
	struct UBoolSettingsWidget_C* IncludeSpikeInCycle; // 0x330(0x08)
	struct UBoolSettingsWidget_C* InstabilityIndicators; // 0x338(0x08)
	struct ULeftHandedWidget_C* LeftHandedWidget; // 0x340(0x08)
	struct UMatureSettingWidget_C* MatureSettingWidget; // 0x348(0x08)
	struct UQualityWidget_C* NetworkBufferingSetting; // 0x350(0x08)
	struct UVerticalBox* OtherSubsection; // 0x358(0x08)
	struct UBoolSettingsWidget_C* PlayerLoadoutsAlwaysVisible; // 0x360(0x08)
	struct USettingsV2_Subheader_C* SettingsV2_Subheader_C_2; // 0x368(0x08)
	struct UBoolSettingsWidget_C* ShowBloodWidget; // 0x370(0x08)
	struct UBoolSettingsWidget_C* ShowColoredMuzzleFlashes; // 0x378(0x08)
	struct UBoolSettingsWidget_C* ShowCorpsesWidget; // 0x380(0x08)
	struct UBoolSettingsWidget_C* ShowNewPlayerTips; // 0x388(0x08)
	struct UBoolSettingsWidget_C* ShowSpectatorCountWidget; // 0x390(0x08)
	struct UBoolSettingsWidget_C* TracersWidget; // 0x398(0x08)
	struct UBoolSettingsWidget_C* WeaponsWrapped; // 0x3a0(0x08)

	void Construct(); // Function Gameplay_OtherSettingsWidgetV2.Gameplay_OtherSettingsWidgetV2_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void MatureSettingUpdated(bool Value); // Function Gameplay_OtherSettingsWidgetV2.Gameplay_OtherSettingsWidgetV2_C.MatureSettingUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_Gameplay_OtherSettingsWidgetV2(int32_t EntryPoint); // Function Gameplay_OtherSettingsWidgetV2.Gameplay_OtherSettingsWidgetV2_C.ExecuteUbergraph_Gameplay_OtherSettingsWidgetV2 // (Final|UbergraphFunction) // @ game+0x1af5410
};

