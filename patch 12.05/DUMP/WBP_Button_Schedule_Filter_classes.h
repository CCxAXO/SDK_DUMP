// WidgetBlueprintGeneratedClass WBP_Button_Schedule_Filter.WBP_Button_Schedule_Filter_C
// Size: 0x1b18 (Inherited: 0x1af0)
struct UWBP_Button_Schedule_Filter_C : UAresCommonButtonToggle {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1af0(0x08)
	struct UWidgetAnimation* onUnhover; // 0x1af8(0x08)
	struct UWidgetAnimation* OnHover; // 0x1b00(0x08)
	struct UImage* Border; // 0x1b08(0x08)
	struct UImage* Image_104; // 0x1b10(0x08)

	void BP_OnClicked(); // Function WBP_Button_Schedule_Filter.WBP_Button_Schedule_Filter_C.BP_OnClicked // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function WBP_Button_Schedule_Filter.WBP_Button_Schedule_Filter_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1af5410
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function WBP_Button_Schedule_Filter.WBP_Button_Schedule_Filter_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1af5410
	void BP_OnHovered(); // Function WBP_Button_Schedule_Filter.WBP_Button_Schedule_Filter_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Button_Schedule_Filter(int32_t EntryPoint); // Function WBP_Button_Schedule_Filter.WBP_Button_Schedule_Filter_C.ExecuteUbergraph_WBP_Button_Schedule_Filter // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

