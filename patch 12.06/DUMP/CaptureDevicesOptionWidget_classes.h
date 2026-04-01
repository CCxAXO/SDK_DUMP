// WidgetBlueprintGeneratedClass CaptureDevicesOptionWidget.CaptureDevicesOptionWidget_C
// Size: 0x360 (Inherited: 0x320)
struct UCaptureDevicesOptionWidget_C : UDesignableUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UVoiceDevicesWidget_C* VoiceDevicesWidget; // 0x328(0x08)
	struct FVoiceDevice InputDevice; // 0x330(0x28)
	struct UVoiceDevicesWidget_C* Parent; // 0x358(0x08)

	void Construct(); // Function CaptureDevicesOptionWidget.CaptureDevicesOptionWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnCaptureDevicesUpdated(); // Function CaptureDevicesOptionWidget.CaptureDevicesOptionWidget_C.OnCaptureDevicesUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_CaptureDevicesOptionWidget(int32_t EntryPoint); // Function CaptureDevicesOptionWidget.CaptureDevicesOptionWidget_C.ExecuteUbergraph_CaptureDevicesOptionWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

