// WidgetBlueprintGeneratedClass WBP_Button_Setting_Mute.WBP_Button_Setting_Mute_C
// Size: 0x1b02 (Inherited: 0x1ae0)
struct UWBP_Button_Setting_Mute_C : UAresCommonButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1ae0(0x08)
	struct UWidgetAnimation* Highlight; // 0x1ae8(0x08)
	struct UImage* Background; // 0x1af0(0x08)
	struct UImage* Icon; // 0x1af8(0x08)
	bool bIsMuted; // 0x1b00(0x01)
	bool bIsHighlighted; // 0x1b01(0x01)

	void PlayHighlightAnimation(bool HighlightOn); // Function WBP_Button_Setting_Mute.WBP_Button_Setting_Mute_C.PlayHighlightAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetIsMuted(bool InIsMuted); // Function WBP_Button_Setting_Mute.WBP_Button_Setting_Mute_C.SetIsMuted // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function WBP_Button_Setting_Mute.WBP_Button_Setting_Mute_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1af5410
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function WBP_Button_Setting_Mute.WBP_Button_Setting_Mute_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Button_Setting_Mute(int32_t EntryPoint); // Function WBP_Button_Setting_Mute.WBP_Button_Setting_Mute_C.ExecuteUbergraph_WBP_Button_Setting_Mute // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

