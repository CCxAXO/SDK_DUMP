// WidgetBlueprintGeneratedClass RenderDevicesOptionWidget.RenderDevicesOptionWidget_C
// Size: 0x360 (Inherited: 0x320)
struct URenderDevicesOptionWidget_C : UDesignableUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UVoiceDevicesWidget_C* VoiceDevicesWidget; // 0x328(0x08)
	struct FVoiceDevice InputDevice; // 0x330(0x28)
	struct UVoiceDevicesWidget_C* Parent; // 0x358(0x08)

	void Construct(); // Function RenderDevicesOptionWidget.RenderDevicesOptionWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnRenderDevicesUpdated(); // Function RenderDevicesOptionWidget.RenderDevicesOptionWidget_C.OnRenderDevicesUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_RenderDevicesOptionWidget(int32_t EntryPoint); // Function RenderDevicesOptionWidget.RenderDevicesOptionWidget_C.ExecuteUbergraph_RenderDevicesOptionWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

