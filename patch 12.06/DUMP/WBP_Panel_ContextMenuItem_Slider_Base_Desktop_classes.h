// WidgetBlueprintGeneratedClass WBP_Panel_ContextMenuItem_Slider_Base_Desktop.WBP_Panel_ContextMenuItem_Slider_Base_Desktop_C
// Size: 0x438 (Inherited: 0x426)
struct UWBP_Panel_ContextMenuItem_Slider_Base_Desktop_C : UWBP_Panel_ContextMenuItem_Slider_Base_C {
	char pad_426[0x2]; // 0x426(0x02)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x428(0x08)
	struct USlider* SliderWidget; // 0x430(0x08)

	void SetSliderWidgetValue(double NewValue); // Function WBP_Panel_ContextMenuItem_Slider_Base_Desktop.WBP_Panel_ContextMenuItem_Slider_Base_Desktop_C.SetSliderWidgetValue // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetSliderWidgetValue(double& Value); // Function WBP_Panel_ContextMenuItem_Slider_Base_Desktop.WBP_Panel_ContextMenuItem_Slider_Base_Desktop_C.GetSliderWidgetValue // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void HandleSliderValueChanged(float NewValue); // Function WBP_Panel_ContextMenuItem_Slider_Base_Desktop.WBP_Panel_ContextMenuItem_Slider_Base_Desktop_C.HandleSliderValueChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindOrUnbindSliderWidget(bool bDoBind); // Function WBP_Panel_ContextMenuItem_Slider_Base_Desktop.WBP_Panel_ContextMenuItem_Slider_Base_Desktop_C.BindOrUnbindSliderWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ConfigureSliderWidget(); // Function WBP_Panel_ContextMenuItem_Slider_Base_Desktop.WBP_Panel_ContextMenuItem_Slider_Base_Desktop_C.ConfigureSliderWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitializeSliderWidget(struct USlider* InSliderWidget); // Function WBP_Panel_ContextMenuItem_Slider_Base_Desktop.WBP_Panel_ContextMenuItem_Slider_Base_Desktop_C.InitializeSliderWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void K2_BindToViewModel(); // Function WBP_Panel_ContextMenuItem_Slider_Base_Desktop.WBP_Panel_ContextMenuItem_Slider_Base_Desktop_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Destruct(); // Function WBP_Panel_ContextMenuItem_Slider_Base_Desktop.WBP_Panel_ContextMenuItem_Slider_Base_Desktop_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Panel_ContextMenuItem_Slider_Base_Desktop(int32_t EntryPoint); // Function WBP_Panel_ContextMenuItem_Slider_Base_Desktop.WBP_Panel_ContextMenuItem_Slider_Base_Desktop_C.ExecuteUbergraph_WBP_Panel_ContextMenuItem_Slider_Base_Desktop // (Final|UbergraphFunction) // @ game+0x1b42740
};

