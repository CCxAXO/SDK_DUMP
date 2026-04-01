// WidgetBlueprintGeneratedClass Audio_LoopbackVolumePreview.Audio_LoopbackVolumePreview_C
// Size: 0x342 (Inherited: 0x318)
struct UAudio_LoopbackVolumePreview_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UProgressBar* Bar_CurrentEnergy; // 0x320(0x08)
	struct UProgressBar* Bar_MaxEnergy; // 0x328(0x08)
	struct UImage* Img_Background; // 0x330(0x08)
	struct UOverlay* Overlay_Root; // 0x338(0x08)
	bool bIsListening; // 0x340(0x01)
	bool bIsHiddenWhenInactive; // 0x341(0x01)

	void GetCurrentMicEnergy(double& MicEnergy); // Function Audio_LoopbackVolumePreview.Audio_LoopbackVolumePreview_C.GetCurrentMicEnergy // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void Reset Bars(); // Function Audio_LoopbackVolumePreview.Audio_LoopbackVolumePreview_C.Reset Bars // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnAudioPropertiesUpdated(); // Function Audio_LoopbackVolumePreview.Audio_LoopbackVolumePreview_C.OnAudioPropertiesUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnLoopbackEnabledChanged(bool NewValue); // Function Audio_LoopbackVolumePreview.Audio_LoopbackVolumePreview_C.OnLoopbackEnabledChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function Audio_LoopbackVolumePreview.Audio_LoopbackVolumePreview_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_Audio_LoopbackVolumePreview(int32_t EntryPoint); // Function Audio_LoopbackVolumePreview.Audio_LoopbackVolumePreview_C.ExecuteUbergraph_Audio_LoopbackVolumePreview // (Final|UbergraphFunction) // @ game+0x1af5410
};

