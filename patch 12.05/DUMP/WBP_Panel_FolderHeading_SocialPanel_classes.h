// WidgetBlueprintGeneratedClass WBP_Panel_FolderHeading_SocialPanel.WBP_Panel_FolderHeading_SocialPanel_C
// Size: 0x430 (Inherited: 0x420)
struct UWBP_Panel_FolderHeading_SocialPanel_C : UWBP_Panel_FolderHeading_Social_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x420(0x08)
	struct UWBP_Button_Social_FolderHeading_C* WBP_Button_Social_FolderHeading; // 0x428(0x08)

	void OnLatestExpansionTransitionChanged(struct FSocialFolderExpansionTransition LatestExpansionTransition); // Function WBP_Panel_FolderHeading_SocialPanel.WBP_Panel_FolderHeading_SocialPanel_C.OnLatestExpansionTransitionChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnTotalElementCountChanged(int32_t TotalElementCount); // Function WBP_Panel_FolderHeading_SocialPanel.WBP_Panel_FolderHeading_SocialPanel_C.OnTotalElementCountChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnVisibleElementCountChanged(int32_t VisibleElementCount); // Function WBP_Panel_FolderHeading_SocialPanel.WBP_Panel_FolderHeading_SocialPanel_C.OnVisibleElementCountChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnTitleChanged(struct FText InTitle); // Function WBP_Panel_FolderHeading_SocialPanel.WBP_Panel_FolderHeading_SocialPanel_C.OnTitleChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnIconChanged(struct UTexture* InIcon); // Function WBP_Panel_FolderHeading_SocialPanel.WBP_Panel_FolderHeading_SocialPanel_C.OnIconChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnSocialExperienceIsOpenedChanged(bool bIsOpen); // Function WBP_Panel_FolderHeading_SocialPanel.WBP_Panel_FolderHeading_SocialPanel_C.OnSocialExperienceIsOpenedChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_Panel_FolderHeading_Social_Button_WBP_Button_Social_FolderHeading_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_FolderHeading_SocialPanel.WBP_Panel_FolderHeading_SocialPanel_C.BndEvt__WBP_Panel_FolderHeading_Social_Button_WBP_Button_Social_FolderHeading_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Panel_FolderHeading_SocialPanel(int32_t EntryPoint); // Function WBP_Panel_FolderHeading_SocialPanel.WBP_Panel_FolderHeading_SocialPanel_C.ExecuteUbergraph_WBP_Panel_FolderHeading_SocialPanel // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

