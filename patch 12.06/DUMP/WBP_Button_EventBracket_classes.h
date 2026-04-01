// WidgetBlueprintGeneratedClass WBP_Button_EventBracket.WBP_Button_EventBracket_C
// Size: 0x1b40 (Inherited: 0x1ae0)
struct UWBP_Button_EventBracket_C : UAresCommonButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1ae0(0x08)
	struct UWidgetAnimation* OnUnhover; // 0x1ae8(0x08)
	struct UWidgetAnimation* OnHover; // 0x1af0(0x08)
	struct UAresButtonImageComponent* BG; // 0x1af8(0x08)
	struct UImage* bg_Hovered; // 0x1b00(0x08)
	struct UImage* Border; // 0x1b08(0x08)
	struct UImage* Dots; // 0x1b10(0x08)
	struct UImage* Dots_2; // 0x1b18(0x08)
	struct UImage* Dots_3; // 0x1b20(0x08)
	struct UImage* Dots_4; // 0x1b28(0x08)
	struct UEsports_BracketBtnMulti_C* Esports_BracketBtnMulti; // 0x1b30(0x08)
	struct UImage* Image_282; // 0x1b38(0x08)

	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function WBP_Button_EventBracket.WBP_Button_EventBracket_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1b42740
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function WBP_Button_EventBracket.WBP_Button_EventBracket_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Button_EventBracket(int32_t EntryPoint); // Function WBP_Button_EventBracket.WBP_Button_EventBracket_C.ExecuteUbergraph_WBP_Button_EventBracket // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

