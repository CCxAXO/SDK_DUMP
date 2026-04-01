// WidgetBlueprintGeneratedClass WBP_Button_Icon_Primary.WBP_Button_Icon_Primary_C
// Size: 0x1b88 (Inherited: 0x1ae0)
struct UWBP_Button_Icon_Primary_C : UAresCommonButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1ae0(0x08)
	struct UWidgetAnimation* Release; // 0x1ae8(0x08)
	struct UWidgetAnimation* Press; // 0x1af0(0x08)
	struct UWidgetAnimation* Unfocus; // 0x1af8(0x08)
	struct UWidgetAnimation* Focus; // 0x1b00(0x08)
	struct UGenericTextTooltipContainer_C* GenericTextTooltipContainer; // 0x1b08(0x08)
	struct UHorizontalBox* Icon_HBox; // 0x1b10(0x08)
	struct FText Tooltip Text; // 0x1b18(0x18)
	enum class EMenuPlacement TooltipPosition; // 0x1b30(0x01)
	char pad_1B31[0x7]; // 0x1b31(0x07)
	struct TMap<struct FName, struct UMaterialInstanceDynamic*> MaterialsMap; // 0x1b38(0x50)

	void UpdateIconColorFromTextStyle(); // Function WBP_Button_Icon_Primary.WBP_Button_Icon_Primary_C.UpdateIconColorFromTextStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BP_OnTransitionUnHovered(); // Function WBP_Button_Icon_Primary.WBP_Button_Icon_Primary_C.BP_OnTransitionUnHovered // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void BP_OnTransitionHovered(); // Function WBP_Button_Icon_Primary.WBP_Button_Icon_Primary_C.BP_OnTransitionHovered // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void BP_OnTransitionReleased(); // Function WBP_Button_Icon_Primary.WBP_Button_Icon_Primary_C.BP_OnTransitionReleased // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WBP_Button_Icon_Primary.WBP_Button_Icon_Primary_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnCurrentTextStyleChanged(); // Function WBP_Button_Icon_Primary.WBP_Button_Icon_Primary_C.OnCurrentTextStyleChanged // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void BP_OnTransitionPressed(); // Function WBP_Button_Icon_Primary.WBP_Button_Icon_Primary_C.BP_OnTransitionPressed // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Button_Icon_Primary(int32_t EntryPoint); // Function WBP_Button_Icon_Primary.WBP_Button_Icon_Primary_C.ExecuteUbergraph_WBP_Button_Icon_Primary // (Final|UbergraphFunction) // @ game+0x1b42740
};

