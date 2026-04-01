// WidgetBlueprintGeneratedClass WBP_Button_Back.WBP_Button_Back_C
// Size: 0x1b10 (Inherited: 0x1ae0)
struct UWBP_Button_Back_C : UAresCommonButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1ae0(0x08)
	struct UWidgetAnimation* HoverAnim; // 0x1ae8(0x08)
	struct UImage* Icon; // 0x1af0(0x08)
	struct UAkAudioEvent* AUD_Hovered; // 0x1af8(0x08)
	struct UAkAudioEvent* AUD_Unhovered; // 0x1b00(0x08)
	struct UAkAudioEvent* AUD_Click; // 0x1b08(0x08)

	void BP_OnClicked(); // Function WBP_Button_Back.WBP_Button_Back_C.BP_OnClicked // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void BP_OnTransitionHovered(); // Function WBP_Button_Back.WBP_Button_Back_C.BP_OnTransitionHovered // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void BP_OnTransitionUnHovered(); // Function WBP_Button_Back.WBP_Button_Back_C.BP_OnTransitionUnHovered // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Button_Back(int32_t EntryPoint); // Function WBP_Button_Back.WBP_Button_Back_C.ExecuteUbergraph_WBP_Button_Back // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

