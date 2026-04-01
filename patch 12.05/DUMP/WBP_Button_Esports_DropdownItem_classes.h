// WidgetBlueprintGeneratedClass WBP_Button_Esports_DropdownItem.WBP_Button_Esports_DropdownItem_C
// Size: 0x1b00 (Inherited: 0x1ae0)
struct UWBP_Button_Esports_DropdownItem_C : UAresCommonButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1ae0(0x08)
	struct UWidgetAnimation* Anim_Hover; // 0x1ae8(0x08)
	struct FMulticastInlineDelegate OnButtonReleased; // 0x1af0(0x10)

	void BP_OnTransitionHovered(); // Function WBP_Button_Esports_DropdownItem.WBP_Button_Esports_DropdownItem_C.BP_OnTransitionHovered // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void BP_OnTransitionUnHovered(); // Function WBP_Button_Esports_DropdownItem.WBP_Button_Esports_DropdownItem_C.BP_OnTransitionUnHovered // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void BP_OnReleased(); // Function WBP_Button_Esports_DropdownItem.WBP_Button_Esports_DropdownItem_C.BP_OnReleased // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Button_Esports_DropdownItem(int32_t EntryPoint); // Function WBP_Button_Esports_DropdownItem.WBP_Button_Esports_DropdownItem_C.ExecuteUbergraph_WBP_Button_Esports_DropdownItem // (Final|UbergraphFunction) // @ game+0x1af5410
	void OnButtonReleased__DelegateSignature(); // Function WBP_Button_Esports_DropdownItem.WBP_Button_Esports_DropdownItem_C.OnButtonReleased__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

