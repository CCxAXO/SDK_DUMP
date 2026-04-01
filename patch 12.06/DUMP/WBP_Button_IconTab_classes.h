// WidgetBlueprintGeneratedClass WBP_Button_IconTab.WBP_Button_IconTab_C
// Size: 0x1af8 (Inherited: 0x1ae0)
struct UWBP_Button_IconTab_C : UAresCommonButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1ae0(0x08)
	struct UWidgetAnimation* AnimUnhover; // 0x1ae8(0x08)
	struct UWidgetAnimation* AnimHover; // 0x1af0(0x08)

	void SetIconPadding(int32_t Padding); // Function WBP_Button_IconTab.WBP_Button_IconTab_C.SetIconPadding // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BP_OnHovered(); // Function WBP_Button_IconTab.WBP_Button_IconTab_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void BP_OnUnhovered(); // Function WBP_Button_IconTab.WBP_Button_IconTab_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void BP_OnPressed(); // Function WBP_Button_IconTab.WBP_Button_IconTab_C.BP_OnPressed // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void BP_OnReleased(); // Function WBP_Button_IconTab.WBP_Button_IconTab_C.BP_OnReleased // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Button_IconTab(int32_t EntryPoint); // Function WBP_Button_IconTab.WBP_Button_IconTab_C.ExecuteUbergraph_WBP_Button_IconTab // (Final|UbergraphFunction) // @ game+0x1b42740
};

