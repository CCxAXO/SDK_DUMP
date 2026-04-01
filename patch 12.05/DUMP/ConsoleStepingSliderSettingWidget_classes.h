// WidgetBlueprintGeneratedClass ConsoleStepingSliderSettingWidget.ConsoleStepingSliderSettingWidget_C
// Size: 0x384 (Inherited: 0x320)
struct UConsoleStepingSliderSettingWidget_C : UDesignableUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UImage* Background; // 0x328(0x08)
	struct UImage* Image_1; // 0x330(0x08)
	struct UTextBlock* LabelText; // 0x338(0x08)
	struct USlider* Slider_1; // 0x340(0x08)
	struct FText DisplayText; // 0x348(0x18)
	struct FText DisplayTooltip; // 0x360(0x18)
	enum class EAresIntSettingName SettingName; // 0x378(0x01)
	char pad_379[0x3]; // 0x379(0x03)
	int32_t Steps; // 0x37c(0x04)
	int32_t DefaultStep; // 0x380(0x04)

	void SetupSynchronizedConfig(); // Function ConsoleStepingSliderSettingWidget.ConsoleStepingSliderSettingWidget_C.SetupSynchronizedConfig // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__Slider_0_K2Node_ComponentBoundEvent_21_OnFloatValueChangedEvent__DelegateSignature(float Value); // Function ConsoleStepingSliderSettingWidget.ConsoleStepingSliderSettingWidget_C.BndEvt__Slider_0_K2Node_ComponentBoundEvent_21_OnFloatValueChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function ConsoleStepingSliderSettingWidget.ConsoleStepingSliderSettingWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__Slider_0_K2Node_ComponentBoundEvent_160_OnMouseCaptureEndEvent__DelegateSignature(); // Function ConsoleStepingSliderSettingWidget.ConsoleStepingSliderSettingWidget_C.BndEvt__Slider_0_K2Node_ComponentBoundEvent_160_OnMouseCaptureEndEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void OnSynchronizeProperties(); // Function ConsoleStepingSliderSettingWidget.ConsoleStepingSliderSettingWidget_C.OnSynchronizeProperties // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_ConsoleStepingSliderSettingWidget(int32_t EntryPoint); // Function ConsoleStepingSliderSettingWidget.ConsoleStepingSliderSettingWidget_C.ExecuteUbergraph_ConsoleStepingSliderSettingWidget // (Final|UbergraphFunction) // @ game+0x1af5410
};

