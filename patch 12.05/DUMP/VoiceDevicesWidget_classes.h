// WidgetBlueprintGeneratedClass VoiceDevicesWidget.VoiceDevicesWidget_C
// Size: 0x3d0 (Inherited: 0x320)
struct UVoiceDevicesWidget_C : UBaseSettingsWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UImage* Background; // 0x328(0x08)
	struct UTextBlock* DisplayNameText; // 0x330(0x08)
	struct UButton* DropdownButton; // 0x338(0x08)
	struct UImage* Image_2; // 0x340(0x08)
	struct UMenuAnchor* OptionsAnchor; // 0x348(0x08)
	struct UTextBlock* SelectedText; // 0x350(0x08)
	struct USettingsUniversalHoverBG_C* SettingsUniversalHoverBG; // 0x358(0x08)
	struct FText DisplayText; // 0x360(0x18)
	struct FText DisplayTooltip; // 0x378(0x18)
	bool IsInitialized; // 0x390(0x01)
	char pad_391[0x7]; // 0x391(0x07)
	struct TArray<struct UVoiceDevicesOptionWidget_C*> OptionWidgets; // 0x398(0x10)
	struct TArray<struct FVoiceDevice> DeviceList; // 0x3a8(0x10)
	enum class EAresStringSettingName SettingName; // 0x3b8(0x01)
	char pad_3B9[0x7]; // 0x3b9(0x07)
	struct FString ValueToSave; // 0x3c0(0x10)

	bool ShouldDisplay(); // Function VoiceDevicesWidget.VoiceDevicesWidget_C.ShouldDisplay // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	struct UWidget* OnMenuDisplay(); // Function VoiceDevicesWidget.VoiceDevicesWidget_C.OnMenuDisplay // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateDropdownOptions(struct TArray<struct FVoiceDevice>& DeviceList, struct FString SelectedDeviceHandle); // Function VoiceDevicesWidget.VoiceDevicesWidget_C.UpdateDropdownOptions // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateSettingNameVar(struct FString HandleValue); // Function VoiceDevicesWidget.VoiceDevicesWidget_C.UpdateSettingNameVar // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetStaticText(); // Function VoiceDevicesWidget.VoiceDevicesWidget_C.SetStaticText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function VoiceDevicesWidget.VoiceDevicesWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnSynchronizeProperties(); // Function VoiceDevicesWidget.VoiceDevicesWidget_C.OnSynchronizeProperties // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__DropdownButton_K2Node_ComponentBoundEvent_542_OnButtonPressedEvent__DelegateSignature(); // Function VoiceDevicesWidget.VoiceDevicesWidget_C.BndEvt__DropdownButton_K2Node_ComponentBoundEvent_542_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function VoiceDevicesWidget.VoiceDevicesWidget_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1af5410
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function VoiceDevicesWidget.VoiceDevicesWidget_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1af5410
	void SaveSetting(); // Function VoiceDevicesWidget.VoiceDevicesWidget_C.SaveSetting // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_VoiceDevicesWidget(int32_t EntryPoint); // Function VoiceDevicesWidget.VoiceDevicesWidget_C.ExecuteUbergraph_VoiceDevicesWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

