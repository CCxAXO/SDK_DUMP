// WidgetBlueprintGeneratedClass WBP_Panel_ListEntry_PartyMessage.WBP_Panel_ListEntry_PartyMessage_C
// Size: 0x7c1 (Inherited: 0x3e8)
struct UWBP_Panel_ListEntry_PartyMessage_C : UWBP_Panel_ListEntry_Social_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e8(0x08)
	struct UPartyMessageViewModel* PartyMessageViewModel; // 0x3f0(0x08)
	struct UWBP_Button_Social_Primary_C* Button_Accept; // 0x3f8(0x08)
	struct UWBP_Button_Social_Secondary_C* Button_Decline; // 0x400(0x08)
	struct UWBP_Button_Social_List_Icon_C* Button_List; // 0x408(0x08)
	struct UWBP_Button_Social_List_Icon_C* Button_List_W; // 0x410(0x08)
	struct UOverlay* Overlay_Root; // 0x418(0x08)
	struct USizeBox* SizeBox_TextArea; // 0x420(0x08)
	struct UAresCommonText* Text_MessageType; // 0x428(0x08)
	struct UAresCommonText* Text_ResponseStatus; // 0x430(0x08)
	struct UWBP_Panel_PlayerCardImage_C* WBP_Panel_PlayerCardImage; // 0x438(0x08)
	struct UWBP_Panel_PlayerName_C* WBP_Panel_PlayerName; // 0x440(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_ListButton; // 0x448(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_Text; // 0x450(0x08)
	struct UPartyMessageListItem* PartyMessageListItem; // 0x458(0x08)
	struct FText InviteTitleText; // 0x460(0x18)
	struct FText InviteAcceptButtonText; // 0x478(0x18)
	struct FText InviteAcceptCIAText; // 0x490(0x18)
	struct FText InviteAcceptingText; // 0x4a8(0x18)
	struct FText RequestTitleText; // 0x4c0(0x18)
	struct FText RequestAcceptButtonText; // 0x4d8(0x18)
	struct FText RequestAcceptCIAText; // 0x4f0(0x18)
	struct FText RequestAcceptingText; // 0x508(0x18)
	struct FText DecliningText; // 0x520(0x18)
	char pad_538[0x8]; // 0x538(0x08)
	struct FSlateBrush InviteIcon; // 0x540(0xd0)
	struct FSlateBrush RequestIcon; // 0x610(0xd0)
	enum class EAresSocialPartyMessageResponse PendingResponse; // 0x6e0(0x01)
	char pad_6E1[0x7]; // 0x6e1(0x07)
	struct UAkAudioEvent* AcceptSuccessSound; // 0x6e8(0x08)
	struct FSlateBrush PlatformRequestIcon; // 0x6f0(0xd0)
	enum class EPartyMessageType PreviewPartyMessageType; // 0x7c0(0x01)

	void HandleDeclineError(enum class EPartyErrorEnum PartyErrorEnum, struct FString Description); // Function WBP_Panel_ListEntry_PartyMessage.WBP_Panel_ListEntry_PartyMessage_C.HandleDeclineError // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleAcceptError(enum class EPartyErrorEnum PartyErrorEnum, struct FString Description); // Function WBP_Panel_ListEntry_PartyMessage.WBP_Panel_ListEntry_PartyMessage_C.HandleAcceptError // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleDeclineSuccess(); // Function WBP_Panel_ListEntry_PartyMessage.WBP_Panel_ListEntry_PartyMessage_C.HandleDeclineSuccess // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleAcceptSuccess(); // Function WBP_Panel_ListEntry_PartyMessage.WBP_Panel_ListEntry_PartyMessage_C.HandleAcceptSuccess // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void DeclinePartyMessage(); // Function WBP_Panel_ListEntry_PartyMessage.WBP_Panel_ListEntry_PartyMessage_C.DeclinePartyMessage // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void AcceptPartyMessage(); // Function WBP_Panel_ListEntry_PartyMessage.WBP_Panel_ListEntry_PartyMessage_C.AcceptPartyMessage // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindToCIAs(); // Function WBP_Panel_ListEntry_PartyMessage.WBP_Panel_ListEntry_PartyMessage_C.BindToCIAs // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateAcceptButtonText(enum class EPartyMessageType InPartyMessageType); // Function WBP_Panel_ListEntry_PartyMessage.WBP_Panel_ListEntry_PartyMessage_C.UpdateAcceptButtonText // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdatePartyMessageTypeAppearance(enum class EPartyMessageType InPartyMessageType); // Function WBP_Panel_ListEntry_PartyMessage.WBP_Panel_ListEntry_PartyMessage_C.UpdatePartyMessageTypeAppearance // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	struct UWidget* BP_GetDesiredFocusTarget(); // Function WBP_Panel_ListEntry_PartyMessage.WBP_Panel_ListEntry_PartyMessage_C.BP_GetDesiredFocusTarget // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1af5410
	void UpdateResponseAppearance(); // Function WBP_Panel_ListEntry_PartyMessage.WBP_Panel_ListEntry_PartyMessage_C.UpdateResponseAppearance // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateInteractionAppearance(); // Function WBP_Panel_ListEntry_PartyMessage.WBP_Panel_ListEntry_PartyMessage_C.UpdateInteractionAppearance // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetPendingResponse(enum class EAresSocialPartyMessageResponse InPendingResponse); // Function WBP_Panel_ListEntry_PartyMessage.WBP_Panel_ListEntry_PartyMessage_C.SetPendingResponse // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitializeListEntry(struct UObject* InListItemObject); // Function WBP_Panel_ListEntry_PartyMessage.WBP_Panel_ListEntry_PartyMessage_C.InitializeListEntry // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleInputMethodChanged(enum class ECommonInputType NewInputType); // Function WBP_Panel_ListEntry_PartyMessage.WBP_Panel_ListEntry_PartyMessage_C.HandleInputMethodChanged // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindOrUnbindCommonInput(bool bDoBind); // Function WBP_Panel_ListEntry_PartyMessage.WBP_Panel_ListEntry_PartyMessage_C.BindOrUnbindCommonInput // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnInitialized(); // Function WBP_Panel_ListEntry_PartyMessage.WBP_Panel_ListEntry_PartyMessage_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_ListEntry_PartyMessage.WBP_Panel_ListEntry_PartyMessage_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void K2_BindToViewModel(); // Function WBP_Panel_ListEntry_PartyMessage.WBP_Panel_ListEntry_PartyMessage_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Destruct(); // Function WBP_Panel_ListEntry_PartyMessage.WBP_Panel_ListEntry_PartyMessage_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnPartyMessageTypeChanged(enum class EPartyMessageType InPartyMessageType); // Function WBP_Panel_ListEntry_PartyMessage.WBP_Panel_ListEntry_PartyMessage_C.OnPartyMessageTypeChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnSenderPlayerSubjectChanged(struct FString InPlayerSubject); // Function WBP_Panel_ListEntry_PartyMessage.WBP_Panel_ListEntry_PartyMessage_C.OnSenderPlayerSubjectChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnAcceptCIAPressed(struct FName ActionName); // Function WBP_Panel_ListEntry_PartyMessage.WBP_Panel_ListEntry_PartyMessage_C.OnAcceptCIAPressed // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnDeclineCIAPressed(struct FName ActionName); // Function WBP_Panel_ListEntry_PartyMessage.WBP_Panel_ListEntry_PartyMessage_C.OnDeclineCIAPressed // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_Panel_ListEntry_FriendRequest_Button_Accept_K2Node_ComponentBoundEvent_7_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_ListEntry_PartyMessage.WBP_Panel_ListEntry_PartyMessage_C.BndEvt__WBP_Panel_ListEntry_FriendRequest_Button_Accept_K2Node_ComponentBoundEvent_7_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_Panel_ListEntry_FriendRequest_Button_Decline_K2Node_ComponentBoundEvent_10_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_ListEntry_PartyMessage.WBP_Panel_ListEntry_PartyMessage_C.BndEvt__WBP_Panel_ListEntry_FriendRequest_Button_Decline_K2Node_ComponentBoundEvent_10_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_Panel_ListEntry_FriendRequest_Button_List_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_ListEntry_PartyMessage.WBP_Panel_ListEntry_PartyMessage_C.BndEvt__WBP_Panel_ListEntry_FriendRequest_Button_List_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_Panel_ListEntry_FriendRequest_Button_List_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_ListEntry_PartyMessage.WBP_Panel_ListEntry_PartyMessage_C.BndEvt__WBP_Panel_ListEntry_FriendRequest_Button_List_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_Panel_ListEntry_FriendRequest_Button_List_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_ListEntry_PartyMessage.WBP_Panel_ListEntry_PartyMessage_C.BndEvt__WBP_Panel_ListEntry_FriendRequest_Button_List_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_Panel_ListEntry_FriendRequest_Button_List_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_ListEntry_PartyMessage.WBP_Panel_ListEntry_PartyMessage_C.BndEvt__WBP_Panel_ListEntry_FriendRequest_Button_List_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function WBP_Panel_ListEntry_PartyMessage.WBP_Panel_ListEntry_PartyMessage_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1af5410
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function WBP_Panel_ListEntry_PartyMessage.WBP_Panel_ListEntry_PartyMessage_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_Panel_ListEntry_PartyMessage_Button_List_W_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_ListEntry_PartyMessage.WBP_Panel_ListEntry_PartyMessage_C.BndEvt__WBP_Panel_ListEntry_PartyMessage_Button_List_W_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_Panel_ListEntry_PartyMessage_Button_List_W_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_ListEntry_PartyMessage.WBP_Panel_ListEntry_PartyMessage_C.BndEvt__WBP_Panel_ListEntry_PartyMessage_Button_List_W_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_Panel_ListEntry_PartyMessage_Button_List_W_K2Node_ComponentBoundEvent_6_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_ListEntry_PartyMessage.WBP_Panel_ListEntry_PartyMessage_C.BndEvt__WBP_Panel_ListEntry_PartyMessage_Button_List_W_K2Node_ComponentBoundEvent_6_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_Panel_ListEntry_PartyMessage_Button_List_W_K2Node_ComponentBoundEvent_8_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_ListEntry_PartyMessage.WBP_Panel_ListEntry_PartyMessage_C.BndEvt__WBP_Panel_ListEntry_PartyMessage_Button_List_W_K2Node_ComponentBoundEvent_8_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Panel_ListEntry_PartyMessage(int32_t EntryPoint); // Function WBP_Panel_ListEntry_PartyMessage.WBP_Panel_ListEntry_PartyMessage_C.ExecuteUbergraph_WBP_Panel_ListEntry_PartyMessage // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

