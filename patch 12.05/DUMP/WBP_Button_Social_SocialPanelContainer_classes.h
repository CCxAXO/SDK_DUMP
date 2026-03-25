// WidgetBlueprintGeneratedClass WBP_Button_Social_SocialPanelContainer.WBP_Button_Social_SocialPanelContainer_C
// Size: 0x1b49 (Inherited: 0x1b20)
struct UWBP_Button_Social_SocialPanelContainer_C : USocialContainerButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1b20(0x08)
	struct UWidgetAnimation* Anim_Hover; // 0x1b28(0x08)
	struct UImage* Image_Chevron; // 0x1b30(0x08)
	struct UImage* Image_Overlay; // 0x1b38(0x08)
	struct UNamedSlot* NamedSlot_SocialPanel; // 0x1b40(0x08)
	bool bIsVisuallyHovered; // 0x1b48(0x01)

	void UpdateInteractionAppearance(); // Function WBP_Button_Social_SocialPanelContainer.WBP_Button_Social_SocialPanelContainer_C.UpdateInteractionAppearance // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	struct TMap<struct FName, struct UMaterialInstanceDynamic*> GetAnimatableMaterialsMap(); // Function WBP_Button_Social_SocialPanelContainer.WBP_Button_Social_SocialPanelContainer_C.GetAnimatableMaterialsMap // (Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnContainerButtonHovered(); // Function WBP_Button_Social_SocialPanelContainer.WBP_Button_Social_SocialPanelContainer_C.OnContainerButtonHovered // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void OnContainerButtonUnhovered(); // Function WBP_Button_Social_SocialPanelContainer.WBP_Button_Social_SocialPanelContainer_C.OnContainerButtonUnhovered // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void OnContainerButtonPressed(); // Function WBP_Button_Social_SocialPanelContainer.WBP_Button_Social_SocialPanelContainer_C.OnContainerButtonPressed // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void OnContainerButtonReleased(); // Function WBP_Button_Social_SocialPanelContainer.WBP_Button_Social_SocialPanelContainer_C.OnContainerButtonReleased // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Button_Social_SocialPanelContainer(int32_t EntryPoint); // Function WBP_Button_Social_SocialPanelContainer.WBP_Button_Social_SocialPanelContainer_C.ExecuteUbergraph_WBP_Button_Social_SocialPanelContainer // (Final|UbergraphFunction) // @ game+0x1af5410
};

