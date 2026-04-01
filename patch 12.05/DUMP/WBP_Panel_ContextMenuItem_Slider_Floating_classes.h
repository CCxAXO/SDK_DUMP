// WidgetBlueprintGeneratedClass WBP_Panel_ContextMenuItem_Slider_Floating.WBP_Panel_ContextMenuItem_Slider_Floating_C
// Size: 0xe80 (Inherited: 0x438)
struct UWBP_Panel_ContextMenuItem_Slider_Floating_C : UWBP_Panel_ContextMenuItem_Slider_Base_Desktop_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x438(0x08)
	struct USlider* Slider; // 0x440(0x08)
	struct UAresCommonText* Text_Label; // 0x448(0x08)
	struct UMaterialInterface* BarMaterial_Normal; // 0x450(0x08)
	struct UMaterialInterface* BarMaterial_Hovered; // 0x458(0x08)
	struct UMaterialInstanceDynamic* DynamicBarMaterial_Normal; // 0x460(0x08)
	struct UMaterialInstanceDynamic* DynamicBarMaterial_Hovered; // 0x468(0x08)
	struct UAkAudioEvent* PressSound; // 0x470(0x08)
	char pad_478[0x8]; // 0x478(0x08)
	struct FSliderStyle StandardSliderStyle; // 0x480(0x500)
	struct FSliderStyle PressedSliderStyle; // 0x980(0x500)

	void ConfigureSliderWidget(); // Function WBP_Panel_ContextMenuItem_Slider_Floating.WBP_Panel_ContextMenuItem_Slider_Floating_C.ConfigureSliderWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateBarMaterials(); // Function WBP_Panel_ContextMenuItem_Slider_Floating.WBP_Panel_ContextMenuItem_Slider_Floating_C.UpdateBarMaterials // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitializeSliderWidget(struct USlider* InSliderWidget); // Function WBP_Panel_ContextMenuItem_Slider_Floating.WBP_Panel_ContextMenuItem_Slider_Floating_C.InitializeSliderWidget // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleSliderValueChanged(float NewValue); // Function WBP_Panel_ContextMenuItem_Slider_Floating.WBP_Panel_ContextMenuItem_Slider_Floating_C.HandleSliderValueChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleItemLabelChanged(struct FText Label); // Function WBP_Panel_ContextMenuItem_Slider_Floating.WBP_Panel_ContextMenuItem_Slider_Floating_C.HandleItemLabelChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnInitialized(); // Function WBP_Panel_ContextMenuItem_Slider_Floating.WBP_Panel_ContextMenuItem_Slider_Floating_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_Panel_ContextMenuItem_Slider_Floating_Slider_K2Node_ComponentBoundEvent_0_OnMouseCaptureBeginEvent__DelegateSignature(); // Function WBP_Panel_ContextMenuItem_Slider_Floating.WBP_Panel_ContextMenuItem_Slider_Floating_C.BndEvt__WBP_Panel_ContextMenuItem_Slider_Floating_Slider_K2Node_ComponentBoundEvent_0_OnMouseCaptureBeginEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_Panel_ContextMenuItem_Slider_Floating_Slider_K2Node_ComponentBoundEvent_1_OnMouseCaptureEndEvent__DelegateSignature(); // Function WBP_Panel_ContextMenuItem_Slider_Floating.WBP_Panel_ContextMenuItem_Slider_Floating_C.BndEvt__WBP_Panel_ContextMenuItem_Slider_Floating_Slider_K2Node_ComponentBoundEvent_1_OnMouseCaptureEndEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Panel_ContextMenuItem_Slider_Floating(int32_t EntryPoint); // Function WBP_Panel_ContextMenuItem_Slider_Floating.WBP_Panel_ContextMenuItem_Slider_Floating_C.ExecuteUbergraph_WBP_Panel_ContextMenuItem_Slider_Floating // (Final|UbergraphFunction) // @ game+0x1af5410
};

