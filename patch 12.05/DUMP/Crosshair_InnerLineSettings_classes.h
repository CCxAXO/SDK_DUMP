// WidgetBlueprintGeneratedClass Crosshair_InnerLineSettings.Crosshair_InnerLineSettings_C
// Size: 0x391 (Inherited: 0x318)
struct UCrosshair_InnerLineSettings_C : USettingsSubsectionBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UCrosshair_LineScalingWidget_C* Crosshair_LineScalingWidget; // 0x320(0x08)
	struct UCrosshair_TextSettingsWidgetWithSlider_C* CrosshairInnerLineFiringErrorSlider; // 0x328(0x08)
	struct UCrosshair_TextSettingsWidgetWithSlider_C* CrosshairInnerLineLength; // 0x330(0x08)
	struct UCrosshair_TextSettingsWidgetWithSlider_C* CrosshairInnerLineMovementErrorSlider; // 0x338(0x08)
	struct UCrosshair_TextSettingsWidgetWithSlider_C* CrosshairInnerLineOffset; // 0x340(0x08)
	struct UCrosshair_TextSettingsWidgetWithSlider_C* CrosshairInnerLineOpacity; // 0x348(0x08)
	struct UCrosshair_BoolSettingsWidget_C* CrosshairInnerLineShow; // 0x350(0x08)
	struct UCrosshair_BoolSettingsWidget_C* CrosshairInnerLineShowError; // 0x358(0x08)
	struct UCrosshair_BoolSettingsWidget_C* CrosshairInnerLineShowError2; // 0x360(0x08)
	struct UCrosshair_TextSettingsWidgetWithSlider_C* CrosshairInnerLineThickness; // 0x368(0x08)
	struct USettingsV2_Subheader_C* InnerLinesHeader; // 0x370(0x08)
	struct UVerticalBox* InnerLineSubsection; // 0x378(0x08)
	struct TArray<struct UWidget*> WidgetsToToggleVisibility; // 0x380(0x10)
	bool AreSettingsForADS; // 0x390(0x01)

	void Construct(); // Function Crosshair_InnerLineSettings.Crosshair_InnerLineSettings_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnInitialized(); // Function Crosshair_InnerLineSettings.Crosshair_InnerLineSettings_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void SetUseADSSettings(bool ForADS); // Function Crosshair_InnerLineSettings.Crosshair_InnerLineSettings_C.SetUseADSSettings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_Crosshair_InnerLineSettings(int32_t EntryPoint); // Function Crosshair_InnerLineSettings.Crosshair_InnerLineSettings_C.ExecuteUbergraph_Crosshair_InnerLineSettings // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

