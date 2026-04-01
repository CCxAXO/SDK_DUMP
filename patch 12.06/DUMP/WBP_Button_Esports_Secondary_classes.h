// WidgetBlueprintGeneratedClass WBP_Button_Esports_Secondary.WBP_Button_Esports_Secondary_C
// Size: 0x1b0a (Inherited: 0x1ae0)
struct UWBP_Button_Esports_Secondary_C : UAresCommonButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1ae0(0x08)
	struct UWidgetAnimation* Anim_Hover; // 0x1ae8(0x08)
	struct UBorder* Border_CornerSquares; // 0x1af0(0x08)
	struct UImage* Image_Outline; // 0x1af8(0x08)
	struct UScaleBox* ScaleBox_Icon; // 0x1b00(0x08)
	bool bShowCornerSquares; // 0x1b08(0x01)
	bool bIconOnly; // 0x1b09(0x01)

	void Style Button From Content(); // Function WBP_Button_Esports_Secondary.WBP_Button_Esports_Secondary_C.Style Button From Content // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BP_OnTransitionHovered(); // Function WBP_Button_Esports_Secondary.WBP_Button_Esports_Secondary_C.BP_OnTransitionHovered // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void BP_OnTransitionUnHovered(); // Function WBP_Button_Esports_Secondary.WBP_Button_Esports_Secondary_C.BP_OnTransitionUnHovered // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WBP_Button_Esports_Secondary.WBP_Button_Esports_Secondary_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void BP_OnTransitionPressed(); // Function WBP_Button_Esports_Secondary.WBP_Button_Esports_Secondary_C.BP_OnTransitionPressed // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void BP_OnTransitionReleased(); // Function WBP_Button_Esports_Secondary.WBP_Button_Esports_Secondary_C.BP_OnTransitionReleased // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function WBP_Button_Esports_Secondary.WBP_Button_Esports_Secondary_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Button_Esports_Secondary(int32_t EntryPoint); // Function WBP_Button_Esports_Secondary.WBP_Button_Esports_Secondary_C.ExecuteUbergraph_WBP_Button_Esports_Secondary // (Final|UbergraphFunction) // @ game+0x1b42740
};

