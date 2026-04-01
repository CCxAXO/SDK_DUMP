// WidgetBlueprintGeneratedClass WBP_Panel_ContextMenuItem_Action_Base.WBP_Panel_ContextMenuItem_Action_Base_C
// Size: 0x428 (Inherited: 0x400)
struct UWBP_Panel_ContextMenuItem_Action_Base_C : UWBP_Panel_ContextMenuItem_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x400(0x08)
	struct USizeBox* Size_Button; // 0x408(0x08)
	struct UAresCommonButton* ButtonClass; // 0x410(0x08)
	struct UAresCommonButton* ButtonInstance; // 0x418(0x08)
	double Button Height; // 0x420(0x08)

	void UpdateWidgetVisibility(); // Function WBP_Panel_ContextMenuItem_Action_Base.WBP_Panel_ContextMenuItem_Action_Base_C.UpdateWidgetVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleIconChanged(struct UTexture2D* Icon); // Function WBP_Panel_ContextMenuItem_Action_Base.WBP_Panel_ContextMenuItem_Action_Base_C.HandleIconChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleItemLabelChanged(struct FText Label); // Function WBP_Panel_ContextMenuItem_Action_Base.WBP_Panel_ContextMenuItem_Action_Base_C.HandleItemLabelChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	struct UWidget* BP_GetDesiredFocusTarget(); // Function WBP_Panel_ContextMenuItem_Action_Base.WBP_Panel_ContextMenuItem_Action_Base_C.BP_GetDesiredFocusTarget // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_ContextMenuItem_Action_Base.WBP_Panel_ContextMenuItem_Action_Base_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void HandleButtonBaseClicked(struct UCommonButtonBase* Button); // Function WBP_Panel_ContextMenuItem_Action_Base.WBP_Panel_ContextMenuItem_Action_Base_C.HandleButtonBaseClicked // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Panel_ContextMenuItem_Action_Base(int32_t EntryPoint); // Function WBP_Panel_ContextMenuItem_Action_Base.WBP_Panel_ContextMenuItem_Action_Base_C.ExecuteUbergraph_WBP_Panel_ContextMenuItem_Action_Base // (Final|UbergraphFunction) // @ game+0x1af5410
};

