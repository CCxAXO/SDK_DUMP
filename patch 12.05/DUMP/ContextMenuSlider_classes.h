// WidgetBlueprintGeneratedClass ContextMenuSlider.ContextMenuSlider_C
// Size: 0x3c8 (Inherited: 0x358)
struct UContextMenuSlider_C : UAresContextMenuActionBaseWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x358(0x08)
	struct UButton* Button; // 0x360(0x08)
	struct UImage* Image_246; // 0x368(0x08)
	struct UImage* Image_248; // 0x370(0x08)
	struct UTextBlock* TitleText; // 0x378(0x08)
	struct USlider* ValueSlider; // 0x380(0x08)
	struct FMulticastInlineDelegate OnActionTaken; // 0x388(0x10)
	struct FText Title; // 0x398(0x18)
	double InitialSliderValue; // 0x3b0(0x08)
	double DisabledStateOpacity; // 0x3b8(0x08)
	double EnabledStateOpacity; // 0x3c0(0x08)

	void UpdateContentAppearance(); // Function ContextMenuSlider.ContextMenuSlider_C.UpdateContentAppearance // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__ValueSlider_K2Node_ComponentBoundEvent_1_OnMouseCaptureEndEvent__DelegateSignature(); // Function ContextMenuSlider.ContextMenuSlider_C.BndEvt__ValueSlider_K2Node_ComponentBoundEvent_1_OnMouseCaptureEndEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function ContextMenuSlider.ContextMenuSlider_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void HandleActionEnabledStateChanged(bool bEnabled); // Function ContextMenuSlider.ContextMenuSlider_C.HandleActionEnabledStateChanged // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_ContextMenuSlider(int32_t EntryPoint); // Function ContextMenuSlider.ContextMenuSlider_C.ExecuteUbergraph_ContextMenuSlider // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
	void OnActionTaken__DelegateSignature(double Value); // Function ContextMenuSlider.ContextMenuSlider_C.OnActionTaken__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

