// WidgetBlueprintGeneratedClass WBP_Panel_ListEntry_SocialPanelPlayer.WBP_Panel_ListEntry_SocialPanelPlayer_C
// Size: 0x508 (Inherited: 0x3e8)
struct UWBP_Panel_ListEntry_SocialPanelPlayer_C : UWBP_Panel_ListEntry_Social_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e8(0x08)
	struct UAresSocialPlayerListUpdateLockViewModel* FriendNotePlayerListUpdateLockVM; // 0x3f0(0x08)
	struct UAresSocialPlayerListUpdateLockViewModel* ContextMenuPlayerListUpdateLockVM; // 0x3f8(0x08)
	struct UEditFriendNoteViewModel* EditFriendNoteViewModel; // 0x400(0x08)
	struct USocialExperienceOpenStateViewModel* SocialExperienceOpenStateViewModel; // 0x408(0x08)
	struct USocialPanelPlayerNameIdentitySourceViewModel* SocialPanelPlayerNameIdentitySourceViewModel; // 0x410(0x08)
	struct UPlayerPartyIdViewModel* PlayerPartyIdViewModel; // 0x418(0x08)
	struct UVM_PlayerPrimaryIdentitySource_C* VM_PlayerPrimaryIdentitySource; // 0x420(0x08)
	struct UVM_IsLocalPlayer_C* VM_IsLocalPlayer; // 0x428(0x08)
	struct UWBP_Button_Social_Icon_C* Button_EditFriendNote; // 0x430(0x08)
	struct UFlyoutAnchor* FlyoutAnchor_Hovercard; // 0x438(0x08)
	struct UAresMenuAnchor* MenuAnchor_EditFriendNote; // 0x440(0x08)
	struct USizeBox* SizeBox_EditFriendNote_ButtonArea; // 0x448(0x08)
	struct USizeBox* SizeBox_VoiceIndicator; // 0x450(0x08)
	struct USpacer* Spacer_IdentitySourceIcon; // 0x458(0x08)
	struct USpacer* Spacer_PartyLeader; // 0x460(0x08)
	struct USpacer* Spacer_PartyStatus; // 0x468(0x08)
	struct UWBP_Button_Social_List_Empty_C* WBP_Button_Social_List_Empty; // 0x470(0x08)
	struct UWBP_ContextMenuAnchor_SocialPlayer_C* WBP_ContextMenuAnchor_SocialPlayer; // 0x478(0x08)
	struct UWBP_IdentitySourceIcon_C* WBP_IdentitySourceIcon; // 0x480(0x08)
	struct UWBP_Panel_PartyColoredImage_C* WBP_Panel_PartyColoredImage; // 0x488(0x08)
	struct UWBP_Panel_PartyLeader_C* WBP_Panel_PartyLeader; // 0x490(0x08)
	struct UWBP_Panel_PartyStatus_C* WBP_Panel_PartyStatus; // 0x498(0x08)
	struct UWBP_Panel_PlayerCardImage_C* WBP_Panel_PlayerCardImage; // 0x4a0(0x08)
	struct UWBP_Panel_PlayerName_C* WBP_Panel_PlayerName; // 0x4a8(0x08)
	struct UWBP_Panel_PresenceStatusDot_C* WBP_Panel_PresenceStatusDot; // 0x4b0(0x08)
	struct UWBP_Panel_PresenceStatusText_C* WBP_Panel_PresenceStatusText; // 0x4b8(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_SecondaryDetail; // 0x4c0(0x08)
	struct FLinearColor LocalPlayerColor; // 0x4c8(0x10)
	struct FLinearColor NonLocalPlayerColor; // 0x4d8(0x10)
	struct FLinearColor HoveredContentColor; // 0x4e8(0x10)
	struct UWBP_Panel_VoiceIndicator_SpeakerIcon_C* VoiceIndicatorWidget; // 0x4f8(0x08)
	struct USocialPanelPlayerListItem* PlayerListItem; // 0x500(0x08)

	void RemoveAllUpdateLocks(); // Function WBP_Panel_ListEntry_SocialPanelPlayer.WBP_Panel_ListEntry_SocialPanelPlayer_C.RemoveAllUpdateLocks // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	struct UUserWidget* OnGetUserMenuContent_EditFriendNote(); // Function WBP_Panel_ListEntry_SocialPanelPlayer.WBP_Panel_ListEntry_SocialPanelPlayer_C.OnGetUserMenuContent_EditFriendNote // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OpenEditFriendNote(); // Function WBP_Panel_ListEntry_SocialPanelPlayer.WBP_Panel_ListEntry_SocialPanelPlayer_C.OpenEditFriendNote // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitializeListEntry(struct UObject* InListItemObject); // Function WBP_Panel_ListEntry_SocialPanelPlayer.WBP_Panel_ListEntry_SocialPanelPlayer_C.InitializeListEntry // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	struct UWidget* BP_GetDesiredFocusTarget(); // Function WBP_Panel_ListEntry_SocialPanelPlayer.WBP_Panel_ListEntry_SocialPanelPlayer_C.BP_GetDesiredFocusTarget // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1b42740
	void UpdateInteractionAppearance(); // Function WBP_Panel_ListEntry_SocialPanelPlayer.WBP_Panel_ListEntry_SocialPanelPlayer_C.UpdateInteractionAppearance // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_ListEntry_SocialPanelPlayer.WBP_Panel_ListEntry_SocialPanelPlayer_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Destruct(); // Function WBP_Panel_ListEntry_SocialPanelPlayer.WBP_Panel_ListEntry_SocialPanelPlayer_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function WBP_Panel_ListEntry_SocialPanelPlayer.WBP_Panel_ListEntry_SocialPanelPlayer_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1b42740
	void OnPartyIDChanged(struct FString PartyId); // Function WBP_Panel_ListEntry_SocialPanelPlayer.WBP_Panel_ListEntry_SocialPanelPlayer_C.OnPartyIDChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnPrimaryIdentitySourceChanged(enum class EAresIdentitySource PrimaryIdentitySource); // Function WBP_Panel_ListEntry_SocialPanelPlayer.WBP_Panel_ListEntry_SocialPanelPlayer_C.OnPrimaryIdentitySourceChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnPlayerNameIdentitySourceChanged(enum class EAresIdentitySource PlayerNameIdentitySource); // Function WBP_Panel_ListEntry_SocialPanelPlayer.WBP_Panel_ListEntry_SocialPanelPlayer_C.OnPlayerNameIdentitySourceChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnIsLocalPlayerChanged(bool bIsLocalPlayer); // Function WBP_Panel_ListEntry_SocialPanelPlayer.WBP_Panel_ListEntry_SocialPanelPlayer_C.OnIsLocalPlayerChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnSocialExperienceLatestTransitionChanged(struct FSocialExperienceTransition InLatestTransition); // Function WBP_Panel_ListEntry_SocialPanelPlayer.WBP_Panel_ListEntry_SocialPanelPlayer_C.OnSocialExperienceLatestTransitionChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnCanEditFriendNoteChanged(bool bCanEditFriendNote); // Function WBP_Panel_ListEntry_SocialPanelPlayer.WBP_Panel_ListEntry_SocialPanelPlayer_C.OnCanEditFriendNoteChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnEditFriendNoteRequested(bool bEditFriendNoteRequested); // Function WBP_Panel_ListEntry_SocialPanelPlayer.WBP_Panel_ListEntry_SocialPanelPlayer_C.OnEditFriendNoteRequested // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnEditFriendNoteCloseRequested(); // Function WBP_Panel_ListEntry_SocialPanelPlayer.WBP_Panel_ListEntry_SocialPanelPlayer_C.OnEditFriendNoteCloseRequested // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__WBP_Panel_ListEntry_SocialPanelPlayer_MenuAnchor_EditFriendNote_K2Node_ComponentBoundEvent_10_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen); // Function WBP_Panel_ListEntry_SocialPanelPlayer.WBP_Panel_ListEntry_SocialPanelPlayer_C.BndEvt__WBP_Panel_ListEntry_SocialPanelPlayer_MenuAnchor_EditFriendNote_K2Node_ComponentBoundEvent_10_OnMenuOpenChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__WBP_Panel_ListEntry_SocialPanelPlayer_Button_EditFriendNote_K2Node_ComponentBoundEvent_9_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_ListEntry_SocialPanelPlayer.WBP_Panel_ListEntry_SocialPanelPlayer_C.BndEvt__WBP_Panel_ListEntry_SocialPanelPlayer_Button_EditFriendNote_K2Node_ComponentBoundEvent_9_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__WBP_Panel_SocialPlayerListEntry_WBP_Button_Social_Empty_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_ListEntry_SocialPanelPlayer.WBP_Panel_ListEntry_SocialPanelPlayer_C.BndEvt__WBP_Panel_SocialPlayerListEntry_WBP_Button_Social_Empty_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__WBP_Panel_SocialPlayerListEntry_WBP_Button_Social_Empty_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_ListEntry_SocialPanelPlayer.WBP_Panel_ListEntry_SocialPanelPlayer_C.BndEvt__WBP_Panel_SocialPlayerListEntry_WBP_Button_Social_Empty_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__WBP_Panel_SocialPlayerListEntry_WBP_Button_Social_Empty_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_ListEntry_SocialPanelPlayer.WBP_Panel_ListEntry_SocialPanelPlayer_C.BndEvt__WBP_Panel_SocialPlayerListEntry_WBP_Button_Social_Empty_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__WBP_Panel_SocialPlayerListEntry_WBP_Button_Social_Empty_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_ListEntry_SocialPanelPlayer.WBP_Panel_ListEntry_SocialPanelPlayer_C.BndEvt__WBP_Panel_SocialPlayerListEntry_WBP_Button_Social_Empty_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__WBP_Panel_SocialPlayerListEntry_WBP_Button_Social_Empty_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_ListEntry_SocialPanelPlayer.WBP_Panel_ListEntry_SocialPanelPlayer_C.BndEvt__WBP_Panel_SocialPlayerListEntry_WBP_Button_Social_Empty_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__WBP_Panel_SocialPlayerListEntry_FlyoutAnchor_Hovercard_K2Node_ComponentBoundEvent_5_FlyoutWidgetGenericEventDynamic__DelegateSignature(struct UFlyoutWidget* Flyout); // Function WBP_Panel_ListEntry_SocialPanelPlayer.WBP_Panel_ListEntry_SocialPanelPlayer_C.BndEvt__WBP_Panel_SocialPlayerListEntry_FlyoutAnchor_Hovercard_K2Node_ComponentBoundEvent_5_FlyoutWidgetGenericEventDynamic__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__WBP_Panel_SocialPlayerListEntry_WBP_Panel_PartyStatus_K2Node_ComponentBoundEvent_6_OnVisibilityChangedEvent__DelegateSignature(enum class ESlateVisibility InVisibility); // Function WBP_Panel_ListEntry_SocialPanelPlayer.WBP_Panel_ListEntry_SocialPanelPlayer_C.BndEvt__WBP_Panel_SocialPlayerListEntry_WBP_Panel_PartyStatus_K2Node_ComponentBoundEvent_6_OnVisibilityChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__WBP_Panel_SocialPlayerListEntry_WBP_Panel_PartyLeader_K2Node_ComponentBoundEvent_7_OnVisibilityChangedEvent__DelegateSignature(enum class ESlateVisibility InVisibility); // Function WBP_Panel_ListEntry_SocialPanelPlayer.WBP_Panel_ListEntry_SocialPanelPlayer_C.BndEvt__WBP_Panel_SocialPlayerListEntry_WBP_Panel_PartyLeader_K2Node_ComponentBoundEvent_7_OnVisibilityChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__WBP_Panel_SocialPlayerListEntry_WBP_IdentitySourceIcon_K2Node_ComponentBoundEvent_8_OnVisibilityChangedEvent__DelegateSignature(enum class ESlateVisibility InVisibility); // Function WBP_Panel_ListEntry_SocialPanelPlayer.WBP_Panel_ListEntry_SocialPanelPlayer_C.BndEvt__WBP_Panel_SocialPlayerListEntry_WBP_IdentitySourceIcon_K2Node_ComponentBoundEvent_8_OnVisibilityChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void OnVoiceIndicatorVisibilityChanged(enum class ESlateVisibility InVisibility); // Function WBP_Panel_ListEntry_SocialPanelPlayer.WBP_Panel_ListEntry_SocialPanelPlayer_C.OnVoiceIndicatorVisibilityChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__WBP_Panel_ListEntry_SocialPanelPlayer_WBP_ContextMenuAnchor_SocialPlayer_K2Node_ComponentBoundEvent_11_OnContextMenuOpenChanged__DelegateSignature(bool bIsOpen); // Function WBP_Panel_ListEntry_SocialPanelPlayer.WBP_Panel_ListEntry_SocialPanelPlayer_C.BndEvt__WBP_Panel_ListEntry_SocialPanelPlayer_WBP_ContextMenuAnchor_SocialPlayer_K2Node_ComponentBoundEvent_11_OnContextMenuOpenChanged__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void OnInitialized(); // Function WBP_Panel_ListEntry_SocialPanelPlayer.WBP_Panel_ListEntry_SocialPanelPlayer_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Panel_ListEntry_SocialPanelPlayer(int32_t EntryPoint); // Function WBP_Panel_ListEntry_SocialPanelPlayer.WBP_Panel_ListEntry_SocialPanelPlayer_C.ExecuteUbergraph_WBP_Panel_ListEntry_SocialPanelPlayer // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

