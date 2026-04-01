// WidgetBlueprintGeneratedClass WBP_Button_TertiaryButton.WBP_Button_TertiaryButton_C
// Size: 0x1c04 (Inherited: 0x1ae0)
struct UWBP_Button_TertiaryButton_C : UAresCommonButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1ae0(0x08)
	struct UHorizontalBox* ContentHBOX; // 0x1ae8(0x08)
	struct USpacer* Spacer_RightSide; // 0x1af0(0x08)
	struct FText DisplayText; // 0x1af8(0x18)
	struct FSlateBrush ImageBrush; // 0x1b10(0xd0)
	struct FMargin ImageMargin; // 0x1be0(0x10)
	int32_t Spacer_RightSide_Width; // 0x1bf0(0x04)
	struct FMargin ContentPadding; // 0x1bf4(0x10)

	void PreConstruct(bool IsDesignTime); // Function WBP_Button_TertiaryButton.WBP_Button_TertiaryButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void BP_OnClicked(); // Function WBP_Button_TertiaryButton.WBP_Button_TertiaryButton_C.BP_OnClicked // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void BP_OnHovered(); // Function WBP_Button_TertiaryButton.WBP_Button_TertiaryButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void BP_OnUnhovered(); // Function WBP_Button_TertiaryButton.WBP_Button_TertiaryButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void BP_OnPressed(); // Function WBP_Button_TertiaryButton.WBP_Button_TertiaryButton_C.BP_OnPressed // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void BP_OnReleased(); // Function WBP_Button_TertiaryButton.WBP_Button_TertiaryButton_C.BP_OnReleased // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void BP_OnTransitionUnHovered(); // Function WBP_Button_TertiaryButton.WBP_Button_TertiaryButton_C.BP_OnTransitionUnHovered // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void BP_OnTransitionHovered(); // Function WBP_Button_TertiaryButton.WBP_Button_TertiaryButton_C.BP_OnTransitionHovered // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Button_TertiaryButton(int32_t EntryPoint); // Function WBP_Button_TertiaryButton.WBP_Button_TertiaryButton_C.ExecuteUbergraph_WBP_Button_TertiaryButton // (Final|UbergraphFunction) // @ game+0x1af5410
};

