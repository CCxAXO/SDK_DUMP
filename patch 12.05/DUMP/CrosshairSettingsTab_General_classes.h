// WidgetBlueprintGeneratedClass CrosshairSettingsTab_General.CrosshairSettingsTab_General_C
// Size: 0x370 (Inherited: 0x318)
struct UCrosshairSettingsTab_General_C : USettingsSubsectionBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UVerticalBox* AdvancedSubsection; // 0x320(0x08)
	struct USettingsV2_Subheader_C* CrosshairHeader; // 0x328(0x08)
	struct UBoolSettingsWidget_C* FadeCrosshairWithFiringError; // 0x330(0x08)
	struct UVerticalBox* GeneralSubsection; // 0x338(0x08)
	struct UBoolSettingsWidget_C* HideCrosshair; // 0x340(0x08)
	struct USettingsV2_Subheader_C* OtherHeader; // 0x348(0x08)
	struct UBoolSettingsWidget_C* SpectatorCrosshairMode; // 0x350(0x08)
	struct UBoolSettingsWidget_C* UseAdvancedOptions; // 0x358(0x08)
	struct TArray<struct UWidget*> WidgetsToToggleVisibility; // 0x360(0x10)

	void Construct(); // Function CrosshairSettingsTab_General.CrosshairSettingsTab_General_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_CrosshairSettingsTab_General(int32_t EntryPoint); // Function CrosshairSettingsTab_General.CrosshairSettingsTab_General_C.ExecuteUbergraph_CrosshairSettingsTab_General // (Final|UbergraphFunction) // @ game+0x1af5410
};

