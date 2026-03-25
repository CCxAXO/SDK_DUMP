// WidgetBlueprintGeneratedClass QualityVideo_QualitySettings.QualityVideo_QualitySettings_C
// Size: 0x3a8 (Inherited: 0x318)
struct UQualityVideo_QualitySettings_C : USettingsSubsectionBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UAnisotropicFilteringWidget_C* AnisotropicFilteringWidget_73; // 0x320(0x08)
	struct UAntiAliasingWidget_C* AntiAliasingWidget_86; // 0x328(0x08)
	struct UBloomSettingWidget_C* BloomSettingWidget; // 0x330(0x08)
	struct UBoolSettingsWidget_C* ClarityWidget; // 0x338(0x08)
	struct UQualityWidget_C* DetailModeQualityWidget; // 0x340(0x08)
	struct UBoolSettingsWidget_C* DistortionWidget; // 0x348(0x08)
	struct UBoolSettingsWidget_C* FirstPersonShadowsWidget; // 0x350(0x08)
	struct UQualityWidget_C* MaterialQualityWidget; // 0x358(0x08)
	struct UMultithreadedRenderingWidget_C* MultithreadedRenderingWidget; // 0x360(0x08)
	struct UVerticalBox* QualitySubsection; // 0x368(0x08)
	struct USettingsV2_Subheader_C* SettingsV2_Subheader_C_244; // 0x370(0x08)
	struct UBoolSettingsWidget_C* SharpeningWidget; // 0x378(0x08)
	struct UQualityWidget_C* TextureQualityWidget; // 0x380(0x08)
	struct UBoolSettingsWidget_C* Vignette; // 0x388(0x08)
	struct UVSyncWidget_C* VSyncWidget_152; // 0x390(0x08)
	struct TArray<struct UWidget*> WidgetsToToggleVisibility; // 0x398(0x10)

	void Construct(); // Function QualityVideo_QualitySettings.QualityVideo_QualitySettings_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_QualityVideo_QualitySettings(int32_t EntryPoint); // Function QualityVideo_QualitySettings.QualityVideo_QualitySettings_C.ExecuteUbergraph_QualityVideo_QualitySettings // (Final|UbergraphFunction) // @ game+0x1af5410
};

