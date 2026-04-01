// WidgetBlueprintGeneratedClass WBP_Panel_ContextMenuItem_Slider_Base.WBP_Panel_ContextMenuItem_Slider_Base_C
// Size: 0x426 (Inherited: 0x400)
struct UWBP_Panel_ContextMenuItem_Slider_Base_C : UWBP_Panel_ContextMenuItem_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x400(0x08)
	struct UAresContextMenuItemIntViewModel* IntViewModel; // 0x408(0x08)
	struct FTimerHandle UpdateTimerHandle; // 0x410(0x08)
	double UpdateViewModelDelayDuration; // 0x418(0x08)
	int32_t PendingViewModelEventCount; // 0x420(0x04)
	bool bIgnoreViewModelEventsAfterInitialization; // 0x424(0x01)
	bool bIsIgnoringViewModelEvents; // 0x425(0x01)

	void DecrementPendingViewModelBroadcastCount(); // Function WBP_Panel_ContextMenuItem_Slider_Base.WBP_Panel_ContextMenuItem_Slider_Base_C.DecrementPendingViewModelBroadcastCount // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void IncrementPendingViewModelBroadcastCount(); // Function WBP_Panel_ContextMenuItem_Slider_Base.WBP_Panel_ContextMenuItem_Slider_Base_C.IncrementPendingViewModelBroadcastCount // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateViewModelValue(); // Function WBP_Panel_ContextMenuItem_Slider_Base.WBP_Panel_ContextMenuItem_Slider_Base_C.UpdateViewModelValue // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetSliderWidgetValue(double NewValue); // Function WBP_Panel_ContextMenuItem_Slider_Base.WBP_Panel_ContextMenuItem_Slider_Base_C.SetSliderWidgetValue // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BeginViewModelUpdate(); // Function WBP_Panel_ContextMenuItem_Slider_Base.WBP_Panel_ContextMenuItem_Slider_Base_C.BeginViewModelUpdate // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetSliderWidgetValue(double& Value); // Function WBP_Panel_ContextMenuItem_Slider_Base.WBP_Panel_ContextMenuItem_Slider_Base_C.GetSliderWidgetValue // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void HandleViewModelValueChanged(struct UAresContextMenuItemIntViewModel* Item, int32_t Value); // Function WBP_Panel_ContextMenuItem_Slider_Base.WBP_Panel_ContextMenuItem_Slider_Base_C.HandleViewModelValueChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindOrUnbindViewModels(bool bDoBind); // Function WBP_Panel_ContextMenuItem_Slider_Base.WBP_Panel_ContextMenuItem_Slider_Base_C.BindOrUnbindViewModels // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void K2_BindToViewModel(); // Function WBP_Panel_ContextMenuItem_Slider_Base.WBP_Panel_ContextMenuItem_Slider_Base_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Panel_ContextMenuItem_Slider_Base(int32_t EntryPoint); // Function WBP_Panel_ContextMenuItem_Slider_Base.WBP_Panel_ContextMenuItem_Slider_Base_C.ExecuteUbergraph_WBP_Panel_ContextMenuItem_Slider_Base // (Final|UbergraphFunction) // @ game+0x1b42740
};

