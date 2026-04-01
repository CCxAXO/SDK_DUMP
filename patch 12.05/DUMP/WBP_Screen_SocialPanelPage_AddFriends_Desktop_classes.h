// WidgetBlueprintGeneratedClass WBP_Screen_SocialPanelPage_AddFriends_Desktop.WBP_Screen_SocialPanelPage_AddFriends_Desktop_C
// Size: 0x598 (Inherited: 0x538)
struct UWBP_Screen_SocialPanelPage_AddFriends_Desktop_C : UWBP_Screen_SocialPage_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x538(0x08)
	struct USocialParentalPermissionsViewModel* SocialParentalPermissionsViewModel; // 0x540(0x08)
	struct USocialExperienceOpenStateViewModel* SocialExperienceOpenStateViewModel; // 0x548(0x08)
	struct UWBP_Template_InfoBox_Social_C* InfoBox_AutoRejectOn; // 0x550(0x08)
	struct UWBP_Template_InfoBox_Social_C* InfoBox_NoFriendPermission; // 0x558(0x08)
	struct UWBP_Template_InfoBox_Social_C* InfoBox_NoFriendRequests; // 0x560(0x08)
	struct UWBP_Panel_Folder_FriendRequest_C* WBP_Panel_Folder_FriendRequest; // 0x568(0x08)
	struct UWBP_Panel_PlatformLinkPrompt_W_C* WBP_Panel_PlatformLinkPrompt_W; // 0x570(0x08)
	struct UWBP_Panel_TextBox_SendFriendRequest_Desktop_C* WBP_Panel_TextBox_SendFriendRequest_Desktop; // 0x578(0x08)
	struct UWBP_Template_SocialPage_SocialPanel_C* WBP_Template_SocialPage_SocialPanel; // 0x580(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_FriendRequests; // 0x588(0x08)
	struct USettingsBoolViewModel* AutoRejectSettingViewModel; // 0x590(0x08)

	void GetCurrentFriendRequestSectionIndex(int32_t& Return Value); // Function WBP_Screen_SocialPanelPage_AddFriends_Desktop.WBP_Screen_SocialPanelPage_AddFriends_Desktop_C.GetCurrentFriendRequestSectionIndex // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void UpdateFriendRequestSection(); // Function WBP_Screen_SocialPanelPage_AddFriends_Desktop.WBP_Screen_SocialPanelPage_AddFriends_Desktop_C.UpdateFriendRequestSection // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindOrUnbindViewModels(bool bDoBind); // Function WBP_Screen_SocialPanelPage_AddFriends_Desktop.WBP_Screen_SocialPanelPage_AddFriends_Desktop_C.BindOrUnbindViewModels // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnInitialized(); // Function WBP_Screen_SocialPanelPage_AddFriends_Desktop.WBP_Screen_SocialPanelPage_AddFriends_Desktop_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void K2_BindToViewModel(); // Function WBP_Screen_SocialPanelPage_AddFriends_Desktop.WBP_Screen_SocialPanelPage_AddFriends_Desktop_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Destruct(); // Function WBP_Screen_SocialPanelPage_AddFriends_Desktop.WBP_Screen_SocialPanelPage_AddFriends_Desktop_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnPageOpened(enum class EAresSocialTabSelectionDirection Direction, enum class EAresSocialTransitionType TransitionType); // Function WBP_Screen_SocialPanelPage_AddFriends_Desktop.WBP_Screen_SocialPanelPage_AddFriends_Desktop_C.OnPageOpened // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void OnSocialExperienceIsOpenChanged(bool bIsOpen); // Function WBP_Screen_SocialPanelPage_AddFriends_Desktop.WBP_Screen_SocialPanelPage_AddFriends_Desktop_C.OnSocialExperienceIsOpenChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnSocialExperienceOpenInterpolationChanged(double OpenInterpolation); // Function WBP_Screen_SocialPanelPage_AddFriends_Desktop.WBP_Screen_SocialPanelPage_AddFriends_Desktop_C.OnSocialExperienceOpenInterpolationChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnAutoRejectSettingChanged(bool bNewValue); // Function WBP_Screen_SocialPanelPage_AddFriends_Desktop.WBP_Screen_SocialPanelPage_AddFriends_Desktop_C.OnAutoRejectSettingChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_Screen_SocialPanelPage_AddFriends_Desktop_WBP_Panel_Folder_FriendRequest_K2Node_ComponentBoundEvent_0_OnVisibilityChangedEvent__DelegateSignature(enum class ESlateVisibility InVisibility); // Function WBP_Screen_SocialPanelPage_AddFriends_Desktop.WBP_Screen_SocialPanelPage_AddFriends_Desktop_C.BndEvt__WBP_Screen_SocialPanelPage_AddFriends_Desktop_WBP_Panel_Folder_FriendRequest_K2Node_ComponentBoundEvent_0_OnVisibilityChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void OnHasAddFriendPermissionChanged(bool bHasPermission); // Function WBP_Screen_SocialPanelPage_AddFriends_Desktop.WBP_Screen_SocialPanelPage_AddFriends_Desktop_C.OnHasAddFriendPermissionChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Screen_SocialPanelPage_AddFriends_Desktop(int32_t EntryPoint); // Function WBP_Screen_SocialPanelPage_AddFriends_Desktop.WBP_Screen_SocialPanelPage_AddFriends_Desktop_C.ExecuteUbergraph_WBP_Screen_SocialPanelPage_AddFriends_Desktop // (Final|UbergraphFunction) // @ game+0x1af5410
};

