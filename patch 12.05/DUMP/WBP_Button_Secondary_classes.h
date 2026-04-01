// WidgetBlueprintGeneratedClass WBP_Button_Secondary.WBP_Button_Secondary_C
// Size: 0x1b41 (Inherited: 0x1ae0)
struct UWBP_Button_Secondary_C : UAresCommonButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1ae0(0x08)
	struct UWidgetAnimation* Release; // 0x1ae8(0x08)
	struct UWidgetAnimation* Press; // 0x1af0(0x08)
	struct UWidgetAnimation* Unfocus; // 0x1af8(0x08)
	struct UWidgetAnimation* Focus; // 0x1b00(0x08)
	struct UGenericTextTooltipContainer_C* GenericTextTooltipContainer; // 0x1b08(0x08)
	struct UHorizontalBox* HorizontalBox_25; // 0x1b10(0x08)
	struct UAresButtonRichTextComponent* RTCPrimaryText; // 0x1b18(0x08)
	enum class EHorizontalAlignment ContentsHorizontalAlignment; // 0x1b20(0x01)
	enum class EVerticalAlignment ContentsVerticalAlignment; // 0x1b21(0x01)
	char pad_1B22[0x6]; // 0x1b22(0x06)
	struct FText Tooltip Text; // 0x1b28(0x18)
	enum class EMenuPlacement TooltipPosition; // 0x1b40(0x01)

	void PreConstruct(bool IsDesignTime); // Function WBP_Button_Secondary.WBP_Button_Secondary_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void BP_OnTransitionHovered(); // Function WBP_Button_Secondary.WBP_Button_Secondary_C.BP_OnTransitionHovered // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void BP_OnTransitionUnHovered(); // Function WBP_Button_Secondary.WBP_Button_Secondary_C.BP_OnTransitionUnHovered // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void BP_OnTransitionPressed(); // Function WBP_Button_Secondary.WBP_Button_Secondary_C.BP_OnTransitionPressed // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void BP_OnTransitionReleased(); // Function WBP_Button_Secondary.WBP_Button_Secondary_C.BP_OnTransitionReleased // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void Destruct(); // Function WBP_Button_Secondary.WBP_Button_Secondary_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Button_Secondary(int32_t EntryPoint); // Function WBP_Button_Secondary.WBP_Button_Secondary_C.ExecuteUbergraph_WBP_Button_Secondary // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

