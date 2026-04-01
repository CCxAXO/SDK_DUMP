// WidgetBlueprintGeneratedClass Gameplay_MinimapSettingsWidget.Gameplay_MinimapSettingsWidget_C
// Size: 0x378 (Inherited: 0x318)
struct UGameplay_MinimapSettingsWidget_C : USettingsSubsectionBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UBoolSettingsWidget_C* mapFixedOrientation; // 0x320(0x08)
	struct UDropdownIntSettingsWidget_C* MapRegionsVisibility; // 0x328(0x08)
	struct UBoolSettingsWidget_C* mapRotation; // 0x330(0x08)
	struct UTextSettingsWidgetWithSlider_C* mapSizeSlider; // 0x338(0x08)
	struct UBoolSettingsWidget_C* mapTranslation; // 0x340(0x08)
	struct UBoolSettingsWidget_C* mapVisionCones; // 0x348(0x08)
	struct UTextSettingsWidgetWithSlider_C* mapZoomSlider; // 0x350(0x08)
	struct UVerticalBox* MinimapSubsection; // 0x358(0x08)
	struct USettingsV2_Subheader_C* SettingsV2_Subheader; // 0x360(0x08)
	struct TArray<struct UWidget*> WidgetsToToggleVisibility; // 0x368(0x10)

	void Construct(); // Function Gameplay_MinimapSettingsWidget.Gameplay_MinimapSettingsWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void CustomEvent_4(enum class EAresBoolSettingName SettingName, bool OldValue, bool NewValue); // Function Gameplay_MinimapSettingsWidget.Gameplay_MinimapSettingsWidget_C.CustomEvent_4 // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_Gameplay_MinimapSettingsWidget(int32_t EntryPoint); // Function Gameplay_MinimapSettingsWidget.Gameplay_MinimapSettingsWidget_C.ExecuteUbergraph_Gameplay_MinimapSettingsWidget // (Final|UbergraphFunction) // @ game+0x1b42740
};

