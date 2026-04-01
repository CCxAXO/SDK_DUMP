// WidgetBlueprintGeneratedClass CrosshairSettingsTab_SniperScope.CrosshairSettingsTab_SniperScope_C
// Size: 0x360 (Inherited: 0x318)
struct UCrosshairSettingsTab_SniperScope_C : USettingsSubsectionBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UTextSettingsWidgetWithSlider_C* CenterDotOpacity; // 0x320(0x08)
	struct UTextSettingsWidgetWithSlider_C* CenterDotThickness; // 0x328(0x08)
	struct UCrosshairColorWidget_C* CrosshairColorWidget; // 0x330(0x08)
	struct UBoolSettingsWidget_C* CrosshairShowCenterDot; // 0x338(0x08)
	struct USettingsV2_Subheader_C* GeneralHeader; // 0x340(0x08)
	struct UVerticalBox* GeneralSubsection; // 0x348(0x08)
	struct TArray<struct UWidget*> WidgetsToToggleVisibility; // 0x350(0x10)

	void Construct(); // Function CrosshairSettingsTab_SniperScope.CrosshairSettingsTab_SniperScope_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void crosshairColorUpdated(struct FColor Value); // Function CrosshairSettingsTab_SniperScope.CrosshairSettingsTab_SniperScope_C.crosshairColorUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void CrosshairSettingsUpdated(); // Function CrosshairSettingsTab_SniperScope.CrosshairSettingsTab_SniperScope_C.CrosshairSettingsUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_CrosshairSettingsTab_SniperScope(int32_t EntryPoint); // Function CrosshairSettingsTab_SniperScope.CrosshairSettingsTab_SniperScope_C.ExecuteUbergraph_CrosshairSettingsTab_SniperScope // (Final|UbergraphFunction) // @ game+0x1af5410
};

