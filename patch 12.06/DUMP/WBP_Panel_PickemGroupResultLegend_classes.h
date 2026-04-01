// WidgetBlueprintGeneratedClass WBP_Panel_PickemGroupResultLegend.WBP_Panel_PickemGroupResultLegend_C
// Size: 0x348 (Inherited: 0x318)
struct UWBP_Panel_PickemGroupResultLegend_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UAresMenuAnchor* AresMenuAnchor_146; // 0x320(0x08)
	struct UImage* Image_116; // 0x328(0x08)
	struct UWBP_Panel_PickemResultBadge_C* WBP_Panel_PickemResultBadge_Correct; // 0x330(0x08)
	struct UWBP_Panel_PickemResultBadge_C* WBP_Panel_PickemResultBadge_Incorrect; // 0x338(0x08)
	struct UWBP_Panel_PickemResultBadge_C* WBP_Panel_PickemResultBadge_Partial; // 0x340(0x08)

	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function WBP_Panel_PickemGroupResultLegend.WBP_Panel_PickemGroupResultLegend_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1b42740
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function WBP_Panel_PickemGroupResultLegend.WBP_Panel_PickemGroupResultLegend_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Panel_PickemGroupResultLegend(int32_t EntryPoint); // Function WBP_Panel_PickemGroupResultLegend.WBP_Panel_PickemGroupResultLegend_C.ExecuteUbergraph_WBP_Panel_PickemGroupResultLegend // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

