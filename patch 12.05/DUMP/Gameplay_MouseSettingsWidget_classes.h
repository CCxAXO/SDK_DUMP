// WidgetBlueprintGeneratedClass Gameplay_MouseSettingsWidget.Gameplay_MouseSettingsWidget_C
// Size: 0x350 (Inherited: 0x318)
struct UGameplay_MouseSettingsWidget_C : USettingsSubsectionBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UBoolSettingsWidget_C* MouseInverted; // 0x320(0x08)
	struct UVerticalBox* MouseSubsection; // 0x328(0x08)
	struct UTextSettingsWidgetWithSlider_C* Sensitivity_ADS_Slider; // 0x330(0x08)
	struct UTextSettingsWidgetWithSlider_C* Sensitivity_Scope_Slider; // 0x338(0x08)
	struct UTextSettingsWidgetWithSlider_C* Sensitivty_Aim_Slider; // 0x340(0x08)
	struct USettingsV2_Subheader_C* SettingsV2_Subheader_C_231; // 0x348(0x08)

	void Construct(); // Function Gameplay_MouseSettingsWidget.Gameplay_MouseSettingsWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_Gameplay_MouseSettingsWidget(int32_t EntryPoint); // Function Gameplay_MouseSettingsWidget.Gameplay_MouseSettingsWidget_C.ExecuteUbergraph_Gameplay_MouseSettingsWidget // (Final|UbergraphFunction) // @ game+0x1af5410
};

