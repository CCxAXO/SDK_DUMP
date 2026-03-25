// WidgetBlueprintGeneratedClass WBP_Panel_TopNavigation_InGame_PC.WBP_Panel_TopNavigation_InGame_PC_C
// Size: 0x428 (Inherited: 0x408)
struct UWBP_Panel_TopNavigation_InGame_PC_C : UWBP_Panel_TopNavigation_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x408(0x08)
	struct UMainMenuNavBar_BackButton_PC_C* BackButton; // 0x410(0x08)
	struct UWBP_Button_NavShortcut_C* WBP_Button_OptionsShortcut; // 0x418(0x08)
	struct UWBP_TabList_Navigation_C* WBP_TabList_Navigation; // 0x420(0x08)

	void UpdateOptionsButtonVisibility(enum class EWidgetVisibilityOption InOption); // Function WBP_Panel_TopNavigation_InGame_PC.WBP_Panel_TopNavigation_InGame_PC_C.UpdateOptionsButtonVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_Panel_TopNavigation_InGame_PC_BackButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(); // Function WBP_Panel_TopNavigation_InGame_PC.WBP_Panel_TopNavigation_InGame_PC_C.BndEvt__WBP_Panel_TopNavigation_InGame_PC_BackButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_Panel_TopNavigation_InGame_PC_WBP_Button_OptionsShortcut_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_TopNavigation_InGame_PC.WBP_Panel_TopNavigation_InGame_PC_C.BndEvt__WBP_Panel_TopNavigation_InGame_PC_WBP_Button_OptionsShortcut_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Panel_TopNavigation_InGame_PC(int32_t EntryPoint); // Function WBP_Panel_TopNavigation_InGame_PC.WBP_Panel_TopNavigation_InGame_PC_C.ExecuteUbergraph_WBP_Panel_TopNavigation_InGame_PC // (Final|UbergraphFunction) // @ game+0x1af5410
};

