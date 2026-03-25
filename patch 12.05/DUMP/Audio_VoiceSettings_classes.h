// WidgetBlueprintGeneratedClass Audio_VoiceSettings.Audio_VoiceSettings_C
// Size: 0x368 (Inherited: 0x318)
struct UAudio_VoiceSettings_C : USettingsSubsectionBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UAudio_LoopbackVolumePreview_C* Audio_LoopbackVolumePreview; // 0x320(0x08)
	struct UCaptureDevicesOptionWidget_C* CaptureDevicesOptionWidget; // 0x328(0x08)
	struct UVerticalBox* DisplaySubsection; // 0x330(0x08)
	struct UBoolSettingsWidget_C* LoopbackEnabled; // 0x338(0x08)
	struct URenderDevicesOptionWidget_C* RenderDevicesOptionWidget; // 0x340(0x08)
	struct USettingsV2_Subheader_C* VoiceHeader; // 0x348(0x08)
	struct TArray<struct UWidget*> WidgetsToToggleVisibility; // 0x350(0x10)
	struct UConfirmResolutionSettingsModal_C* ResolutionConfirmationPopup; // 0x360(0x08)

	void Construct(); // Function Audio_VoiceSettings.Audio_VoiceSettings_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_Audio_VoiceSettings(int32_t EntryPoint); // Function Audio_VoiceSettings.Audio_VoiceSettings_C.ExecuteUbergraph_Audio_VoiceSettings // (Final|UbergraphFunction) // @ game+0x1af5410
};

