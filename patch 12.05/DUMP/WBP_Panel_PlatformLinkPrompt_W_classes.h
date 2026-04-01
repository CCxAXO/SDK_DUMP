// WidgetBlueprintGeneratedClass WBP_Panel_PlatformLinkPrompt_W.WBP_Panel_PlatformLinkPrompt_W_C
// Size: 0x419 (Inherited: 0x3e0)
struct UWBP_Panel_PlatformLinkPrompt_W_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct USocialExperienceOpenStateViewModel* SocialExperienceOpenStateViewModel; // 0x3e8(0x08)
	struct USocialParentalPermissionsViewModel* SocialParentalPermissionsViewModel; // 0x3f0(0x08)
	struct UWPlatformLinkViewModel* WPlatformLinkViewModel; // 0x3f8(0x08)
	struct UWBP_Button_Social_Secondary_W_C* Button_Connect; // 0x400(0x08)
	struct UWBP_Button_Social_Ghost_C* Button_Dismiss; // 0x408(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_Content; // 0x410(0x08)
	bool bShowDismissMessage; // 0x418(0x01)

	void UpdateAppearance(); // Function WBP_Panel_PlatformLinkPrompt_W.WBP_Panel_PlatformLinkPrompt_W_C.UpdateAppearance // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnLinkStateChanged(bool bNewValue); // Function WBP_Panel_PlatformLinkPrompt_W.WBP_Panel_PlatformLinkPrompt_W_C.OnLinkStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnAddFriendPermissionChanged(bool HasPermission); // Function WBP_Panel_PlatformLinkPrompt_W.WBP_Panel_PlatformLinkPrompt_W_C.OnAddFriendPermissionChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnSocialExperienceIsOpenChanged(bool bIsOpen); // Function WBP_Panel_PlatformLinkPrompt_W.WBP_Panel_PlatformLinkPrompt_W_C.OnSocialExperienceIsOpenChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_Panel_PlatformLinkPrompt_W_Button_Connect_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_PlatformLinkPrompt_W.WBP_Panel_PlatformLinkPrompt_W_C.BndEvt__WBP_Panel_PlatformLinkPrompt_W_Button_Connect_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_Panel_PlatformLinkPrompt_W_Button_Dismiss_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_PlatformLinkPrompt_W.WBP_Panel_PlatformLinkPrompt_W_C.BndEvt__WBP_Panel_PlatformLinkPrompt_W_Button_Dismiss_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Panel_PlatformLinkPrompt_W(int32_t EntryPoint); // Function WBP_Panel_PlatformLinkPrompt_W.WBP_Panel_PlatformLinkPrompt_W_C.ExecuteUbergraph_WBP_Panel_PlatformLinkPrompt_W // (Final|UbergraphFunction) // @ game+0x1af5410
};

