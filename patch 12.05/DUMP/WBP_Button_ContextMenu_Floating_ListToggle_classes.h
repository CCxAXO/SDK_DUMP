// WidgetBlueprintGeneratedClass WBP_Button_ContextMenu_Floating_ListToggle.WBP_Button_ContextMenu_Floating_ListToggle_C
// Size: 0x1b74 (Inherited: 0x1b40)
struct UWBP_Button_ContextMenu_Floating_ListToggle_C : UAresMaterialToggleButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1b40(0x08)
	struct UImage* Img_Toggle; // 0x1b48(0x08)
	struct USizeBox* SizeBox_Icon; // 0x1b50(0x08)
	struct USpacer* Spacer_IconToText; // 0x1b58(0x08)
	struct FSlateColor IconTintColor; // 0x1b60(0x14)

	void UpdateInteractionAppearance(); // Function WBP_Button_ContextMenu_Floating_ListToggle.WBP_Button_ContextMenu_Floating_ListToggle_C.UpdateInteractionAppearance // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	struct TMap<struct FName, struct UMaterialInstanceDynamic*> GetAnimatableMaterialsMap(); // Function WBP_Button_ContextMenu_Floating_ListToggle.WBP_Button_ContextMenu_Floating_ListToggle_C.GetAnimatableMaterialsMap // (Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnToggleStateChanged(bool bIsSelected); // Function WBP_Button_ContextMenu_Floating_ListToggle.WBP_Button_ContextMenu_Floating_ListToggle_C.OnToggleStateChanged // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void UpdateToggleText(bool bIsSelected); // Function WBP_Button_ContextMenu_Floating_ListToggle.WBP_Button_ContextMenu_Floating_ListToggle_C.UpdateToggleText // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetIconBrush(struct FSlateBrush& InIconBrush); // Function WBP_Button_ContextMenu_Floating_ListToggle.WBP_Button_ContextMenu_Floating_ListToggle_C.SetIconBrush // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnMaterialCreated(); // Function WBP_Button_ContextMenu_Floating_ListToggle.WBP_Button_ContextMenu_Floating_ListToggle_C.OnMaterialCreated // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void BP_OnClicked(); // Function WBP_Button_ContextMenu_Floating_ListToggle.WBP_Button_ContextMenu_Floating_ListToggle_C.BP_OnClicked // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void BP_OnHovered(); // Function WBP_Button_ContextMenu_Floating_ListToggle.WBP_Button_ContextMenu_Floating_ListToggle_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void BP_OnUnhovered(); // Function WBP_Button_ContextMenu_Floating_ListToggle.WBP_Button_ContextMenu_Floating_ListToggle_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void BP_OnPressed(); // Function WBP_Button_ContextMenu_Floating_ListToggle.WBP_Button_ContextMenu_Floating_ListToggle_C.BP_OnPressed // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void BP_OnReleased(); // Function WBP_Button_ContextMenu_Floating_ListToggle.WBP_Button_ContextMenu_Floating_ListToggle_C.BP_OnReleased // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Button_ContextMenu_Floating_ListToggle(int32_t EntryPoint); // Function WBP_Button_ContextMenu_Floating_ListToggle.WBP_Button_ContextMenu_Floating_ListToggle_C.ExecuteUbergraph_WBP_Button_ContextMenu_Floating_ListToggle // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

