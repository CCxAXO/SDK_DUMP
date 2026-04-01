// WidgetBlueprintGeneratedClass WBP_EsportsPickemBracketTemplate.WBP_EsportsPickemBracketTemplate_C
// Size: 0x850 (Inherited: 0x520)
struct UWBP_EsportsPickemBracketTemplate_C : UAresScreenBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x520(0x08)
	struct UImage* BracketBodyBorder; // 0x528(0x08)
	struct UNamedSlot* BracketSlot; // 0x530(0x08)
	struct UWidgetSwitcher* CloseButtonWidgetSwitcher; // 0x538(0x08)
	struct UAresInputGate* ConvergedCloseGate; // 0x540(0x08)
	struct UCustomCloseButton_C* CustomCloseButton; // 0x548(0x08)
	struct UCustomCloseButton_C* CustomCloseButtonConverged; // 0x550(0x08)
	struct UImage* Divider; // 0x558(0x08)
	struct UImage* Divider_2; // 0x560(0x08)
	struct UImage* Divider_3; // 0x568(0x08)
	struct UNamedSlot* HeaderSlot; // 0x570(0x08)
	struct UImage* Image_167; // 0x578(0x08)
	struct UImage* OverlayBG; // 0x580(0x08)
	struct UImage* TopStrip; // 0x588(0x08)
	struct UWBP_Panel_Arrows_C* WBP_Panel_Arrows; // 0x590(0x08)
	char pad_598[0x8]; // 0x598(0x08)
	struct FSlateBrush BG_Brush_Champs; // 0x5a0(0xd0)
	struct FLinearColor PrimaryColor_Champs; // 0x670(0x10)
	struct FSlateBrush BG_Brush_Masters; // 0x680(0xd0)
	struct FLinearColor PrimaryColor_Masters; // 0x750(0x10)
	enum class E2024VCTEvent PreviewEvent; // 0x760(0x01)
	char pad_761[0xf]; // 0x761(0x0f)
	struct FSlateBrush BG_Brush_GCC; // 0x770(0xd0)
	struct FLinearColor PrimaryColor_GCC; // 0x840(0x10)

	void StyleForGCC(); // Function WBP_EsportsPickemBracketTemplate.WBP_EsportsPickemBracketTemplate_C.StyleForGCC // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void StyleForChamps(); // Function WBP_EsportsPickemBracketTemplate.WBP_EsportsPickemBracketTemplate_C.StyleForChamps // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void StyleForMasters(); // Function WBP_EsportsPickemBracketTemplate.WBP_EsportsPickemBracketTemplate_C.StyleForMasters // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void StyleForPickemEvent(enum class E2024VCTEvent event); // Function WBP_EsportsPickemBracketTemplate.WBP_EsportsPickemBracketTemplate_C.StyleForPickemEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__Esports_Bracket_Overlay_CustomCloseButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(); // Function WBP_EsportsPickemBracketTemplate.WBP_EsportsPickemBracketTemplate_C.BndEvt__Esports_Bracket_Overlay_CustomCloseButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WBP_EsportsPickemBracketTemplate.WBP_EsportsPickemBracketTemplate_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__WBP_EsportsPickemBracketTemplate_CustomCloseButtonConverged_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(); // Function WBP_EsportsPickemBracketTemplate.WBP_EsportsPickemBracketTemplate_C.BndEvt__WBP_EsportsPickemBracketTemplate_CustomCloseButtonConverged_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function WBP_EsportsPickemBracketTemplate.WBP_EsportsPickemBracketTemplate_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_EsportsPickemBracketTemplate(int32_t EntryPoint); // Function WBP_EsportsPickemBracketTemplate.WBP_EsportsPickemBracketTemplate_C.ExecuteUbergraph_WBP_EsportsPickemBracketTemplate // (Final|UbergraphFunction) // @ game+0x1b42740
};

