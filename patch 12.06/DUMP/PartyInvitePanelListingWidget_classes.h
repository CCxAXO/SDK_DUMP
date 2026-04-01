// WidgetBlueprintGeneratedClass PartyInvitePanelListingWidget.PartyInvitePanelListingWidget_C
// Size: 0x37a (Inherited: 0x318)
struct UPartyInvitePanelListingWidget_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetAnimation* Outro; // 0x320(0x08)
	struct UWidgetAnimation* Intro; // 0x328(0x08)
	struct UWBP_Button_Social_BlockedPlayer_Desktop_C* Button; // 0x330(0x08)
	struct UImage* Image_Icon; // 0x338(0x08)
	struct UAresCommonText* Text_InviteSent; // 0x340(0x08)
	struct UAresCommonText* Text_SendInvite; // 0x348(0x08)
	struct UWBP_Panel_PlayerName_C* WBP_Panel_PlayerName; // 0x350(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_InviteState; // 0x358(0x08)
	struct UPlatformPlayer* Player; // 0x360(0x08)
	struct FMulticastInlineDelegate InviteRequested; // 0x368(0x10)
	bool IsNewAddition; // 0x378(0x01)
	bool Invited; // 0x379(0x01)

	void UpdateInteractionAppearance(); // Function PartyInvitePanelListingWidget.PartyInvitePanelListingWidget_C.UpdateInteractionAppearance // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetInvited(bool NewValue); // Function PartyInvitePanelListingWidget.PartyInvitePanelListingWidget_C.SetInvited // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void StartRemoval(); // Function PartyInvitePanelListingWidget.PartyInvitePanelListingWidget_C.StartRemoval // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnAnimationFinished_Event_1(); // Function PartyInvitePanelListingWidget.PartyInvitePanelListingWidget_C.OnAnimationFinished_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Initialize(); // Function PartyInvitePanelListingWidget.PartyInvitePanelListingWidget_C.Initialize // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnIsInvitedChanged(bool NewValue); // Function PartyInvitePanelListingWidget.PartyInvitePanelListingWidget_C.OnIsInvitedChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__PartyInvitePanelListingWidget_Button_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function PartyInvitePanelListingWidget.PartyInvitePanelListingWidget_C.BndEvt__PartyInvitePanelListingWidget_Button_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__PartyInvitePanelListingWidget_Button_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function PartyInvitePanelListingWidget.PartyInvitePanelListingWidget_C.BndEvt__PartyInvitePanelListingWidget_Button_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__PartyInvitePanelListingWidget_Button_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function PartyInvitePanelListingWidget.PartyInvitePanelListingWidget_C.BndEvt__PartyInvitePanelListingWidget_Button_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__PartyInvitePanelListingWidget_Button_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function PartyInvitePanelListingWidget.PartyInvitePanelListingWidget_C.BndEvt__PartyInvitePanelListingWidget_Button_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__PartyInvitePanelListingWidget_Button_K2Node_ComponentBoundEvent_6_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function PartyInvitePanelListingWidget.PartyInvitePanelListingWidget_C.BndEvt__PartyInvitePanelListingWidget_Button_K2Node_ComponentBoundEvent_6_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_PartyInvitePanelListingWidget(int32_t EntryPoint); // Function PartyInvitePanelListingWidget.PartyInvitePanelListingWidget_C.ExecuteUbergraph_PartyInvitePanelListingWidget // (Final|UbergraphFunction) // @ game+0x1b42740
	void InviteRequested__DelegateSignature(struct UPlatformPlayer* PlayerToInvite); // Function PartyInvitePanelListingWidget.PartyInvitePanelListingWidget_C.InviteRequested__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

