// WidgetBlueprintGeneratedClass WBP_Button_SelectBox.WBP_Button_SelectBox_C
// Size: 0x1b04 (Inherited: 0x1ae0)
struct UWBP_Button_SelectBox_C : UAresCommonButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1ae0(0x08)
	struct USizeBox* SBIcon; // 0x1ae8(0x08)
	struct USpacer* Spacer_RightSide; // 0x1af0(0x08)
	double TurnOn_Pattern; // 0x1af8(0x08)
	int32_t Spacer_Right_Width; // 0x1b00(0x04)

	void SetIconSize(double IconSize_X, double IconSize_Y, bool VertFlip); // Function WBP_Button_SelectBox.WBP_Button_SelectBox_C.SetIconSize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetIcon(struct UTexture* Icon); // Function WBP_Button_SelectBox.WBP_Button_SelectBox_C.SetIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BP_OnHovered(); // Function WBP_Button_SelectBox.WBP_Button_SelectBox_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void BP_OnClicked(); // Function WBP_Button_SelectBox.WBP_Button_SelectBox_C.BP_OnClicked // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void BP_OnUnhovered(); // Function WBP_Button_SelectBox.WBP_Button_SelectBox_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void BP_OnPressed(); // Function WBP_Button_SelectBox.WBP_Button_SelectBox_C.BP_OnPressed // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void BP_OnReleased(); // Function WBP_Button_SelectBox.WBP_Button_SelectBox_C.BP_OnReleased // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WBP_Button_SelectBox.WBP_Button_SelectBox_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void BP_OnTransitionUnHovered(); // Function WBP_Button_SelectBox.WBP_Button_SelectBox_C.BP_OnTransitionUnHovered // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void BP_OnTransitionHovered(); // Function WBP_Button_SelectBox.WBP_Button_SelectBox_C.BP_OnTransitionHovered // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Button_SelectBox(int32_t EntryPoint); // Function WBP_Button_SelectBox.WBP_Button_SelectBox_C.ExecuteUbergraph_WBP_Button_SelectBox // (Final|UbergraphFunction) // @ game+0x1b42740
};

