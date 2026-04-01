// WidgetBlueprintGeneratedClass RosterInvitePanelListingWidget.RosterInvitePanelListingWidget_C
// Size: 0x3c8 (Inherited: 0x318)
struct URosterInvitePanelListingWidget_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetAnimation* Intro; // 0x320(0x08)
	struct UWidgetAnimation* Outro; // 0x328(0x08)
	struct UButton* CancelInviteButton; // 0x330(0x08)
	struct UImage* hoverGradiant; // 0x338(0x08)
	struct UImage* IMG_BG; // 0x340(0x08)
	struct UTextBlock* InGameScore; // 0x348(0x08)
	struct USizeBox* InGameScoreBox; // 0x350(0x08)
	struct UButton* InviteButton; // 0x358(0x08)
	struct UWidgetSwitcher* InviteButtonSwitcher; // 0x360(0x08)
	struct UImage* OnlineStatusBar; // 0x368(0x08)
	struct UImage* OnlineStatusBar_Bg; // 0x370(0x08)
	struct UOverlay* Overlay_2; // 0x378(0x08)
	struct UPlayerCardWithPresenceStatus_C* PlayerCardWithPresenceStatus; // 0x380(0x08)
	struct UTextBlock* PresenceText; // 0x388(0x08)
	struct UWBP_Panel_PlayerName_C* WBP_Panel_PlayerName; // 0x390(0x08)
	struct UPlatformPlayer* Player; // 0x398(0x08)
	struct UWidgetAnimation* hover; // 0x3a0(0x08)
	bool Invited; // 0x3a8(0x01)
	char pad_3A9[0x7]; // 0x3a9(0x07)
	struct FMulticastInlineDelegate OnInviteComplete; // 0x3b0(0x10)
	struct UVM_PlayerPresence_C* PlayerPresenceViewModel; // 0x3c0(0x08)

	void ToggleWidget(bool ToggledByButton); // Function RosterInvitePanelListingWidget.RosterInvitePanelListingWidget_C.ToggleWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateInviteButton(bool TriggeredByButton); // Function RosterInvitePanelListingWidget.RosterInvitePanelListingWidget_C.UpdateInviteButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateStatusText(bool TriggeredByButton); // Function RosterInvitePanelListingWidget.RosterInvitePanelListingWidget_C.UpdateStatusText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__InviteButton_K2Node_ComponentBoundEvent_65_OnButtonClickedEvent__DelegateSignature(); // Function RosterInvitePanelListingWidget.RosterInvitePanelListingWidget_C.BndEvt__InviteButton_K2Node_ComponentBoundEvent_65_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void OnOutroAnimationFinished(); // Function RosterInvitePanelListingWidget.RosterInvitePanelListingWidget_C.OnOutroAnimationFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Initialize(); // Function RosterInvitePanelListingWidget.RosterInvitePanelListingWidget_C.Initialize // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__InviteButton_K2Node_ComponentBoundEvent_112_OnButtonHoverEvent__DelegateSignature(); // Function RosterInvitePanelListingWidget.RosterInvitePanelListingWidget_C.BndEvt__InviteButton_K2Node_ComponentBoundEvent_112_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__InviteButton_K2Node_ComponentBoundEvent_123_OnButtonHoverEvent__DelegateSignature(); // Function RosterInvitePanelListingWidget.RosterInvitePanelListingWidget_C.BndEvt__InviteButton_K2Node_ComponentBoundEvent_123_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__CancelInviteButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function RosterInvitePanelListingWidget.RosterInvitePanelListingWidget_C.BndEvt__CancelInviteButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void OnSuccess(struct FRoster& Roster); // Function RosterInvitePanelListingWidget.RosterInvitePanelListingWidget_C.OnSuccess // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnRosterInviteError(enum class ERosterInviteErrorType& ErrorType); // Function RosterInvitePanelListingWidget.RosterInvitePanelListingWidget_C.OnRosterInviteError // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnPresenceStateChanged(); // Function RosterInvitePanelListingWidget.RosterInvitePanelListingWidget_C.OnPresenceStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_RosterInvitePanelListingWidget(int32_t EntryPoint); // Function RosterInvitePanelListingWidget.RosterInvitePanelListingWidget_C.ExecuteUbergraph_RosterInvitePanelListingWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
	void OnInviteComplete__DelegateSignature(bool InviteFailed, struct FText ErrorText); // Function RosterInvitePanelListingWidget.RosterInvitePanelListingWidget_C.OnInviteComplete__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

