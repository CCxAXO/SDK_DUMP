// WidgetBlueprintGeneratedClass VoiceDevicesOptionWidget.VoiceDevicesOptionWidget_C
// Size: 0x368 (Inherited: 0x320)
struct UVoiceDevicesOptionWidget_C : UDesignableUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UButton* OptionButton; // 0x328(0x08)
	struct UTextBlock* OptionText; // 0x330(0x08)
	struct FVoiceDevice InputDevice; // 0x338(0x28)
	struct UVoiceDevicesWidget_C* Parent; // 0x360(0x08)

	struct TArray<struct FVoiceDevice> Get Voice Devices(); // Function VoiceDevicesOptionWidget.VoiceDevicesOptionWidget_C.Get Voice Devices // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function VoiceDevicesOptionWidget.VoiceDevicesOptionWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__OptionButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function VoiceDevicesOptionWidget.VoiceDevicesOptionWidget_C.BndEvt__OptionButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_VoiceDevicesOptionWidget(int32_t EntryPoint); // Function VoiceDevicesOptionWidget.VoiceDevicesOptionWidget_C.ExecuteUbergraph_VoiceDevicesOptionWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

