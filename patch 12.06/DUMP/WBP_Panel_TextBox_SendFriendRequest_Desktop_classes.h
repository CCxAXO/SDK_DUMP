// WidgetBlueprintGeneratedClass WBP_Panel_TextBox_SendFriendRequest_Desktop.WBP_Panel_TextBox_SendFriendRequest_Desktop_C
// Size: 0x461 (Inherited: 0x3e0)
struct UWBP_Panel_TextBox_SendFriendRequest_Desktop_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct USocialParentalPermissionsViewModel* SocialParentalPermissionsViewModel; // 0x3e8(0x08)
	struct USocialExperienceOpenStateViewModel* SocialExperienceOpenStateViewModel; // 0x3f0(0x08)
	struct UWidgetAnimation* Anim_Error; // 0x3f8(0x08)
	struct UWidgetAnimation* Anim_Success; // 0x400(0x08)
	struct UWidgetAnimation* Anim_ChangeView; // 0x408(0x08)
	struct UWBP_Button_Social_Secondary_C* Button_Reveal; // 0x410(0x08)
	struct UWBP_Button_Social_Secondary_C* Button_Send; // 0x418(0x08)
	struct UHorizontalBox* HorizontalBox_TextBox; // 0x420(0x08)
	struct USizeBox* SizeBox_Root; // 0x428(0x08)
	struct UWBP_EditableTextBox_C* WBP_EditableTextBox; // 0x430(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_Root; // 0x438(0x08)
	struct UAresAddFriendViewModel* AddFriendViewModel; // 0x440(0x08)
	struct UAkAudioEvent* RevealAudio; // 0x448(0x08)
	bool bSendIsInProgress; // 0x450(0x01)
	char pad_451[0x7]; // 0x451(0x07)
	struct UPushSystemMessageViewModel* PushSystemMessageViewModel; // 0x458(0x08)
	bool bCommitCooldownIsActive; // 0x460(0x01)

	void OnHasAddFriendParentalPermissionChanged(bool bHasPermission); // Function WBP_Panel_TextBox_SendFriendRequest_Desktop.WBP_Panel_TextBox_SendFriendRequest_Desktop_C.OnHasAddFriendParentalPermissionChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SendFriendRequest(); // Function WBP_Panel_TextBox_SendFriendRequest_Desktop.WBP_Panel_TextBox_SendFriendRequest_Desktop_C.SendFriendRequest // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleFriendRequestError(enum class EAresFriendRequestResponseErrors InError); // Function WBP_Panel_TextBox_SendFriendRequest_Desktop.WBP_Panel_TextBox_SendFriendRequest_Desktop_C.HandleFriendRequestError // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleFriendRequestSuccess(struct FString InFullName); // Function WBP_Panel_TextBox_SendFriendRequest_Desktop.WBP_Panel_TextBox_SendFriendRequest_Desktop_C.HandleFriendRequestSuccess // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindOrUnbindViewModel(bool bDoBind); // Function WBP_Panel_TextBox_SendFriendRequest_Desktop.WBP_Panel_TextBox_SendFriendRequest_Desktop_C.BindOrUnbindViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateButtonEnabledState(); // Function WBP_Panel_TextBox_SendFriendRequest_Desktop.WBP_Panel_TextBox_SendFriendRequest_Desktop_C.UpdateButtonEnabledState // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetAppearance(int32_t VisibleIndex, enum class EAresSocialTransitionType TransitionType); // Function WBP_Panel_TextBox_SendFriendRequest_Desktop.WBP_Panel_TextBox_SendFriendRequest_Desktop_C.SetAppearance // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ResetAppearance(); // Function WBP_Panel_TextBox_SendFriendRequest_Desktop.WBP_Panel_TextBox_SendFriendRequest_Desktop_C.ResetAppearance // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnOpenInterpolationChanged(double InOpenInterpolation); // Function WBP_Panel_TextBox_SendFriendRequest_Desktop.WBP_Panel_TextBox_SendFriendRequest_Desktop_C.OnOpenInterpolationChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnInitialized(); // Function WBP_Panel_TextBox_SendFriendRequest_Desktop.WBP_Panel_TextBox_SendFriendRequest_Desktop_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void K2_BindToViewModel(); // Function WBP_Panel_TextBox_SendFriendRequest_Desktop.WBP_Panel_TextBox_SendFriendRequest_Desktop_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Destruct(); // Function WBP_Panel_TextBox_SendFriendRequest_Desktop.WBP_Panel_TextBox_SendFriendRequest_Desktop_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__WBP_Panel_AddFriend_ManualSearch_Desktop_Button_Reveal_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_TextBox_SendFriendRequest_Desktop.WBP_Panel_TextBox_SendFriendRequest_Desktop_C.BndEvt__WBP_Panel_AddFriend_ManualSearch_Desktop_Button_Reveal_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__WBP_Panel_AddFriend_ManualSearch_Desktop_Button_Send_K2Node_ComponentBoundEvent_11_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_TextBox_SendFriendRequest_Desktop.WBP_Panel_TextBox_SendFriendRequest_Desktop_C.BndEvt__WBP_Panel_AddFriend_ManualSearch_Desktop_Button_Send_K2Node_ComponentBoundEvent_11_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__WBP_Panel_AddFriend_ManualSearch_Desktop_WBP_EditableTextBox_K2Node_ComponentBoundEvent_2_OnTextChanged__DelegateSignature(struct FText Text); // Function WBP_Panel_TextBox_SendFriendRequest_Desktop.WBP_Panel_TextBox_SendFriendRequest_Desktop_C.BndEvt__WBP_Panel_AddFriend_ManualSearch_Desktop_WBP_EditableTextBox_K2Node_ComponentBoundEvent_2_OnTextChanged__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__WBP_Panel_AddFriend_ManualSearch_Desktop_WBP_EditableTextBox_K2Node_ComponentBoundEvent_3_OnTextCleared__DelegateSignature(); // Function WBP_Panel_TextBox_SendFriendRequest_Desktop.WBP_Panel_TextBox_SendFriendRequest_Desktop_C.BndEvt__WBP_Panel_AddFriend_ManualSearch_Desktop_WBP_EditableTextBox_K2Node_ComponentBoundEvent_3_OnTextCleared__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__WBP_Panel_AddFriend_ManualSearch_Desktop_WBP_EditableTextBox_K2Node_ComponentBoundEvent_4_OnTextCommitted__DelegateSignature(struct FText Text, enum class ETextCommit CommitMethod); // Function WBP_Panel_TextBox_SendFriendRequest_Desktop.WBP_Panel_TextBox_SendFriendRequest_Desktop_C.BndEvt__WBP_Panel_AddFriend_ManualSearch_Desktop_WBP_EditableTextBox_K2Node_ComponentBoundEvent_4_OnTextCommitted__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void OnSocialExperienceIsOpenChanged(bool bInSocialExperienceIsOpen); // Function WBP_Panel_TextBox_SendFriendRequest_Desktop.WBP_Panel_TextBox_SendFriendRequest_Desktop_C.OnSocialExperienceIsOpenChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Panel_TextBox_SendFriendRequest_Desktop(int32_t EntryPoint); // Function WBP_Panel_TextBox_SendFriendRequest_Desktop.WBP_Panel_TextBox_SendFriendRequest_Desktop_C.ExecuteUbergraph_WBP_Panel_TextBox_SendFriendRequest_Desktop // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

