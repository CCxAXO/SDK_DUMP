// WidgetBlueprintGeneratedClass WBP_Button_TabList_Primary.WBP_Button_TabList_Primary_C
// Size: 0x1b2b (Inherited: 0x1ae0)
struct UWBP_Button_TabList_Primary_C : UAresCommonButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1ae0(0x08)
	struct UWidgetAnimation* AnimActive_Mkb; // 0x1ae8(0x08)
	struct UWidgetAnimation* AnimUnHovered_Mkb; // 0x1af0(0x08)
	struct UWidgetAnimation* AnimHovered_Mkb; // 0x1af8(0x08)
	struct UImage* glowNew; // 0x1b00(0x08)
	struct UImage* TabUnderline; // 0x1b08(0x08)
	struct UImage* TabUnderline_white; // 0x1b10(0x08)
	struct UImage* UI_DarkGradient; // 0x1b18(0x08)
	struct UMaterialInstanceDynamic* GlowMaterial_Inst; // 0x1b20(0x08)
	bool Selected_Cached; // 0x1b28(0x01)
	bool Hovered_Cached; // 0x1b29(0x01)
	enum class EAresInputType InputType_Cached; // 0x1b2a(0x01)

	void UpdateInputChanged(enum class EAresInputType New Input); // Function WBP_Button_TabList_Primary.WBP_Button_TabList_Primary_C.UpdateInputChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateHoveredAnim(bool IsHovered); // Function WBP_Button_TabList_Primary.WBP_Button_TabList_Primary_C.UpdateHoveredAnim // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateSelectedAnim(bool IsSelected); // Function WBP_Button_TabList_Primary.WBP_Button_TabList_Primary_C.UpdateSelectedAnim // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BP_OnTransitionHovered(); // Function WBP_Button_TabList_Primary.WBP_Button_TabList_Primary_C.BP_OnTransitionHovered // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void BP_OnSelected(); // Function WBP_Button_TabList_Primary.WBP_Button_TabList_Primary_C.BP_OnSelected // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void BP_OnDeselected(); // Function WBP_Button_TabList_Primary.WBP_Button_TabList_Primary_C.BP_OnDeselected // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void BP_OnTransitionUnHovered(); // Function WBP_Button_TabList_Primary.WBP_Button_TabList_Primary_C.BP_OnTransitionUnHovered // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void BP_OnAresInputTypeChanged(enum class EAresInputType NewInputType); // Function WBP_Button_TabList_Primary.WBP_Button_TabList_Primary_C.BP_OnAresInputTypeChanged // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Button_TabList_Primary(int32_t EntryPoint); // Function WBP_Button_TabList_Primary.WBP_Button_TabList_Primary_C.ExecuteUbergraph_WBP_Button_TabList_Primary // (Final|UbergraphFunction) // @ game+0x1b42740
};

