// WidgetBlueprintGeneratedClass WBP_Button_ContextMenu_Floating_List.WBP_Button_ContextMenu_Floating_List_C
// Size: 0x1b0c (Inherited: 0x1ae0)
struct UWBP_Button_ContextMenu_Floating_List_C : UAresCommonButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1ae0(0x08)
	struct USizeBox* SizeBox_Icon; // 0x1ae8(0x08)
	struct USpacer* Spacer_IconToText; // 0x1af0(0x08)
	struct FSlateColor IconTintColor; // 0x1af8(0x14)

	void UpdateInteractionAppearance(); // Function WBP_Button_ContextMenu_Floating_List.WBP_Button_ContextMenu_Floating_List_C.UpdateInteractionAppearance // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetIconBrush(struct FSlateBrush& InIconBrush); // Function WBP_Button_ContextMenu_Floating_List.WBP_Button_ContextMenu_Floating_List_C.SetIconBrush // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BP_OnHovered(); // Function WBP_Button_ContextMenu_Floating_List.WBP_Button_ContextMenu_Floating_List_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void BP_OnUnhovered(); // Function WBP_Button_ContextMenu_Floating_List.WBP_Button_ContextMenu_Floating_List_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void BP_OnPressed(); // Function WBP_Button_ContextMenu_Floating_List.WBP_Button_ContextMenu_Floating_List_C.BP_OnPressed // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void BP_OnReleased(); // Function WBP_Button_ContextMenu_Floating_List.WBP_Button_ContextMenu_Floating_List_C.BP_OnReleased // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Button_ContextMenu_Floating_List(int32_t EntryPoint); // Function WBP_Button_ContextMenu_Floating_List.WBP_Button_ContextMenu_Floating_List_C.ExecuteUbergraph_WBP_Button_ContextMenu_Floating_List // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

