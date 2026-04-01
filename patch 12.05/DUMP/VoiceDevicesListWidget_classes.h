// WidgetBlueprintGeneratedClass VoiceDevicesListWidget.VoiceDevicesListWidget_C
// Size: 0x340 (Inherited: 0x318)
struct UVoiceDevicesListWidget_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UVerticalBox* OptionsVBox; // 0x320(0x08)
	struct TArray<struct FVoiceDevice> VoiceDevices; // 0x328(0x10)
	struct UVoiceDevicesWidget_C* Parent; // 0x338(0x08)

	void Construct(); // Function VoiceDevicesListWidget.VoiceDevicesListWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_VoiceDevicesListWidget(int32_t EntryPoint); // Function VoiceDevicesListWidget.VoiceDevicesListWidget_C.ExecuteUbergraph_VoiceDevicesListWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

