// WidgetBlueprintGeneratedClass WBP_Panel_ContextMenuItem_Toggle_Base.WBP_Panel_ContextMenuItem_Toggle_Base_C
// Size: 0x430 (Inherited: 0x400)
struct UWBP_Panel_ContextMenuItem_Toggle_Base_C : UWBP_Panel_ContextMenuItem_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x400(0x08)
	struct USizeBox* Size_Button; // 0x408(0x08)
	struct UAresCommonButton* ButtonClass; // 0x410(0x08)
	struct UAresCommonButton* ButtonInstance; // 0x418(0x08)
	double Button Height; // 0x420(0x08)
	struct UAresContextMenuItemBoolViewModel* BoolViewModel; // 0x428(0x08)

	void HandleIconChanged(struct UTexture2D* Icon); // Function WBP_Panel_ContextMenuItem_Toggle_Base.WBP_Panel_ContextMenuItem_Toggle_Base_C.HandleIconChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindOrUnbindViewModels(bool bDoBind); // Function WBP_Panel_ContextMenuItem_Toggle_Base.WBP_Panel_ContextMenuItem_Toggle_Base_C.BindOrUnbindViewModels // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleItemLabelChanged(struct FText Label); // Function WBP_Panel_ContextMenuItem_Toggle_Base.WBP_Panel_ContextMenuItem_Toggle_Base_C.HandleItemLabelChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	struct UWidget* BP_GetDesiredFocusTarget(); // Function WBP_Panel_ContextMenuItem_Toggle_Base.WBP_Panel_ContextMenuItem_Toggle_Base_C.BP_GetDesiredFocusTarget // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_ContextMenuItem_Toggle_Base.WBP_Panel_ContextMenuItem_Toggle_Base_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void HandleButtonSelectedStateChanged(struct UCommonButtonBase* Button, bool Selected); // Function WBP_Panel_ContextMenuItem_Toggle_Base.WBP_Panel_ContextMenuItem_Toggle_Base_C.HandleButtonSelectedStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnViewModelValueChanged(struct UAresContextMenuItemBoolViewModel* Item, bool bValue); // Function WBP_Panel_ContextMenuItem_Toggle_Base.WBP_Panel_ContextMenuItem_Toggle_Base_C.OnViewModelValueChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Panel_ContextMenuItem_Toggle_Base(int32_t EntryPoint); // Function WBP_Panel_ContextMenuItem_Toggle_Base.WBP_Panel_ContextMenuItem_Toggle_Base_C.ExecuteUbergraph_WBP_Panel_ContextMenuItem_Toggle_Base // (Final|UbergraphFunction) // @ game+0x1af5410
};

