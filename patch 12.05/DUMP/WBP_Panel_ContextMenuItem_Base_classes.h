// WidgetBlueprintGeneratedClass WBP_Panel_ContextMenuItem_Base.WBP_Panel_ContextMenuItem_Base_C
// Size: 0x400 (Inherited: 0x3f8)
struct UWBP_Panel_ContextMenuItem_Base_C : UAresContextMenuItemWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3f8(0x08)

	void BindOrUnbindViewModels(bool bDoBind); // Function WBP_Panel_ContextMenuItem_Base.WBP_Panel_ContextMenuItem_Base_C.BindOrUnbindViewModels // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	struct UWidget* BP_GetDesiredFocusTarget(); // Function WBP_Panel_ContextMenuItem_Base.WBP_Panel_ContextMenuItem_Base_C.BP_GetDesiredFocusTarget // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1af5410
	void UpdateWidgetVisibility(); // Function WBP_Panel_ContextMenuItem_Base.WBP_Panel_ContextMenuItem_Base_C.UpdateWidgetVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleVisibleStateChanged(bool bIsVisible); // Function WBP_Panel_ContextMenuItem_Base.WBP_Panel_ContextMenuItem_Base_C.HandleVisibleStateChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleEnabledStateChanged(bool bIsEnabled); // Function WBP_Panel_ContextMenuItem_Base.WBP_Panel_ContextMenuItem_Base_C.HandleEnabledStateChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleIconChanged(struct UTexture2D* Icon); // Function WBP_Panel_ContextMenuItem_Base.WBP_Panel_ContextMenuItem_Base_C.HandleIconChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleItemLabelChanged(struct FText Label); // Function WBP_Panel_ContextMenuItem_Base.WBP_Panel_ContextMenuItem_Base_C.HandleItemLabelChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void K2_BindToViewModel(); // Function WBP_Panel_ContextMenuItem_Base.WBP_Panel_ContextMenuItem_Base_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Destruct(); // Function WBP_Panel_ContextMenuItem_Base.WBP_Panel_ContextMenuItem_Base_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Panel_ContextMenuItem_Base(int32_t EntryPoint); // Function WBP_Panel_ContextMenuItem_Base.WBP_Panel_ContextMenuItem_Base_C.ExecuteUbergraph_WBP_Panel_ContextMenuItem_Base // (Final|UbergraphFunction) // @ game+0x1af5410
};

