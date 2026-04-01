// WidgetBlueprintGeneratedClass Crosshair_OuterLineSettings.Crosshair_OuterLineSettings_C
// Size: 0x381 (Inherited: 0x318)
struct UCrosshair_OuterLineSettings_C : USettingsSubsectionBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UCrosshair_LineScalingWidget_C* Crosshair_LineScalingWidget; // 0x320(0x08)
	struct UCrosshair_TextSettingsWidgetWithSlider_C* CrosshairInnerLineFiringErrorSlider; // 0x328(0x08)
	struct UCrosshair_TextSettingsWidgetWithSlider_C* CrosshairInnerLineMovementErrorSlider; // 0x330(0x08)
	struct UCrosshair_TextSettingsWidgetWithSlider_C* CrosshairOuterLineLength; // 0x338(0x08)
	struct UCrosshair_TextSettingsWidgetWithSlider_C* CrosshairOuterLineOffset; // 0x340(0x08)
	struct UCrosshair_TextSettingsWidgetWithSlider_C* CrosshairOuterLineOpacity; // 0x348(0x08)
	struct UCrosshair_BoolSettingsWidget_C* CrosshairOuterLineShow; // 0x350(0x08)
	struct UCrosshair_BoolSettingsWidget_C* CrosshairOuterLineShowError; // 0x358(0x08)
	struct UCrosshair_BoolSettingsWidget_C* CrosshairOuterLineShowError2; // 0x360(0x08)
	struct UCrosshair_TextSettingsWidgetWithSlider_C* CrosshairOuterLineThickness; // 0x368(0x08)
	struct USettingsV2_Subheader_C* OuterLinesHeader; // 0x370(0x08)
	struct UVerticalBox* OuterLinesSubsection; // 0x378(0x08)
	bool AreSettingsForADS; // 0x380(0x01)

	void Construct(); // Function Crosshair_OuterLineSettings.Crosshair_OuterLineSettings_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnInitialized(); // Function Crosshair_OuterLineSettings.Crosshair_OuterLineSettings_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void SetUseADSSettings(bool ForADS); // Function Crosshair_OuterLineSettings.Crosshair_OuterLineSettings_C.SetUseADSSettings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_Crosshair_OuterLineSettings(int32_t EntryPoint); // Function Crosshair_OuterLineSettings.Crosshair_OuterLineSettings_C.ExecuteUbergraph_Crosshair_OuterLineSettings // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

