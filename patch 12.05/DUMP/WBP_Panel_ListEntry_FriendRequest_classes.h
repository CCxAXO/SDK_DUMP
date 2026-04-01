// WidgetBlueprintGeneratedClass WBP_Panel_ListEntry_FriendRequest.WBP_Panel_ListEntry_FriendRequest_C
// Size: 0x4d0 (Inherited: 0x3e8)
struct UWBP_Panel_ListEntry_FriendRequest_C : UWBP_Panel_ListEntry_Social_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e8(0x08)
	struct UBlockUnblockViewModel* BlockUnblockViewModel; // 0x3f0(0x08)
	struct UFriendRequestPlayerNameViewModel* FriendRequestPlayerNameViewModel; // 0x3f8(0x08)
	struct UFriendRequestViewModel* FriendRequestViewModel; // 0x400(0x08)
	struct UVM_PlayerDisplayableIdentity_C* VM_DisplayableIdentity_LinkedName; // 0x408(0x08)
	struct UWBP_Button_Social_Primary_C* Button_Accept; // 0x410(0x08)
	struct UWBP_Button_Social_Secondary_C* Button_Block; // 0x418(0x08)
	struct UWBP_Button_Social_Secondary_C* Button_Decline; // 0x420(0x08)
	struct UWBP_Button_Social_List_Icon_C* Button_List; // 0x428(0x08)
	struct UHorizontalBox* HorizontalBox_LinkedName; // 0x430(0x08)
	struct UWBP_IdentitySourceIcon_C* IdentitySourceIcon_LinkedName; // 0x438(0x08)
	struct UWBP_Panel_PlayerName_C* PlayerName_Linked; // 0x440(0x08)
	struct UWBP_Panel_PlayerName_C* PlayerName_Riot; // 0x448(0x08)
	struct USizeBox* SizeBox_Details; // 0x450(0x08)
	struct UAresCommonText* Text_ResponseStatus; // 0x458(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_Details; // 0x460(0x08)
	struct USocialPlayerListItem* PlayerListItem; // 0x468(0x08)
	struct FText AcceptText; // 0x470(0x18)
	struct FText AcceptingText; // 0x488(0x18)
	struct FText DeclineText; // 0x4a0(0x18)
	struct FText DecliningText; // 0x4b8(0x18)

	void UpdateRiotPlayerName(); // Function WBP_Panel_ListEntry_FriendRequest.WBP_Panel_ListEntry_FriendRequest_C.UpdateRiotPlayerName // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	struct UWidget* BP_GetDesiredFocusTarget(); // Function WBP_Panel_ListEntry_FriendRequest.WBP_Panel_ListEntry_FriendRequest_C.BP_GetDesiredFocusTarget // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1af5410
	void UpdateResponseAppearance(enum class EAresFriendRequestResponse PendingResponse); // Function WBP_Panel_ListEntry_FriendRequest.WBP_Panel_ListEntry_FriendRequest_C.UpdateResponseAppearance // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateInteractionAppearance(); // Function WBP_Panel_ListEntry_FriendRequest.WBP_Panel_ListEntry_FriendRequest_C.UpdateInteractionAppearance // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitializeListEntry(struct UObject* InListItemObject); // Function WBP_Panel_ListEntry_FriendRequest.WBP_Panel_ListEntry_FriendRequest_C.InitializeListEntry // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleInputMethodChanged(enum class ECommonInputType NewInputType); // Function WBP_Panel_ListEntry_FriendRequest.WBP_Panel_ListEntry_FriendRequest_C.HandleInputMethodChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindOrUnbindCommonInput(bool bDoBind); // Function WBP_Panel_ListEntry_FriendRequest.WBP_Panel_ListEntry_FriendRequest_C.BindOrUnbindCommonInput // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void K2_BindToViewModel(); // Function WBP_Panel_ListEntry_FriendRequest.WBP_Panel_ListEntry_FriendRequest_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Destruct(); // Function WBP_Panel_ListEntry_FriendRequest.WBP_Panel_ListEntry_FriendRequest_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function WBP_Panel_ListEntry_FriendRequest.WBP_Panel_ListEntry_FriendRequest_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1af5410
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function WBP_Panel_ListEntry_FriendRequest.WBP_Panel_ListEntry_FriendRequest_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1af5410
	void OnLinkedIdentitySourceChanged(enum class EAresIdentitySource InIdentitySource); // Function WBP_Panel_ListEntry_FriendRequest.WBP_Panel_ListEntry_FriendRequest_C.OnLinkedIdentitySourceChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnPendingFriendRequestResponseChanged(enum class EAresFriendRequestResponse InResponse); // Function WBP_Panel_ListEntry_FriendRequest.WBP_Panel_ListEntry_FriendRequest_C.OnPendingFriendRequestResponseChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnRiotPlayerNameStringChanged(struct FString String); // Function WBP_Panel_ListEntry_FriendRequest.WBP_Panel_ListEntry_FriendRequest_C.OnRiotPlayerNameStringChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_Panel_ListEntry_FriendRequest_Button_List_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_ListEntry_FriendRequest.WBP_Panel_ListEntry_FriendRequest_C.BndEvt__WBP_Panel_ListEntry_FriendRequest_Button_List_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_Panel_ListEntry_FriendRequest_Button_List_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_ListEntry_FriendRequest.WBP_Panel_ListEntry_FriendRequest_C.BndEvt__WBP_Panel_ListEntry_FriendRequest_Button_List_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_Panel_ListEntry_FriendRequest_Button_Accept_K2Node_ComponentBoundEvent_7_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_ListEntry_FriendRequest.WBP_Panel_ListEntry_FriendRequest_C.BndEvt__WBP_Panel_ListEntry_FriendRequest_Button_Accept_K2Node_ComponentBoundEvent_7_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void OnAcceptSuccess(struct FString PlayerSubject); // Function WBP_Panel_ListEntry_FriendRequest.WBP_Panel_ListEntry_FriendRequest_C.OnAcceptSuccess // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnAcceptError(struct FString PlayerSubject, enum class EAresFriendRequestResponseErrors& Error); // Function WBP_Panel_ListEntry_FriendRequest.WBP_Panel_ListEntry_FriendRequest_C.OnAcceptError // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_Panel_ListEntry_FriendRequest_Button_List_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_ListEntry_FriendRequest.WBP_Panel_ListEntry_FriendRequest_C.BndEvt__WBP_Panel_ListEntry_FriendRequest_Button_List_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_Panel_ListEntry_FriendRequest_Button_List_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_ListEntry_FriendRequest.WBP_Panel_ListEntry_FriendRequest_C.BndEvt__WBP_Panel_ListEntry_FriendRequest_Button_List_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_Panel_ListEntry_FriendRequest_Button_List_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_ListEntry_FriendRequest.WBP_Panel_ListEntry_FriendRequest_C.BndEvt__WBP_Panel_ListEntry_FriendRequest_Button_List_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_Panel_ListEntry_FriendRequest_Button_Decline_K2Node_ComponentBoundEvent_10_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_ListEntry_FriendRequest.WBP_Panel_ListEntry_FriendRequest_C.BndEvt__WBP_Panel_ListEntry_FriendRequest_Button_Decline_K2Node_ComponentBoundEvent_10_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_Panel_ListEntry_FriendRequest_Button_Block_K2Node_ComponentBoundEvent_9_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_ListEntry_FriendRequest.WBP_Panel_ListEntry_FriendRequest_C.BndEvt__WBP_Panel_ListEntry_FriendRequest_Button_Block_K2Node_ComponentBoundEvent_9_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void OnDeclineSuccess(struct FString PlayerSubject); // Function WBP_Panel_ListEntry_FriendRequest.WBP_Panel_ListEntry_FriendRequest_C.OnDeclineSuccess // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnDeclineError(struct FString PlayerSubject, enum class EAresFriendRequestDeclineErrors& Error); // Function WBP_Panel_ListEntry_FriendRequest.WBP_Panel_ListEntry_FriendRequest_C.OnDeclineError // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnPendingBlockUnblockResponseChanged(enum class EAresBlockUnblockResponse InResponse); // Function WBP_Panel_ListEntry_FriendRequest.WBP_Panel_ListEntry_FriendRequest_C.OnPendingBlockUnblockResponseChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnLinkedIdentitySourceIsValidChanged(bool bInIsValid); // Function WBP_Panel_ListEntry_FriendRequest.WBP_Panel_ListEntry_FriendRequest_C.OnLinkedIdentitySourceIsValidChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Panel_ListEntry_FriendRequest(int32_t EntryPoint); // Function WBP_Panel_ListEntry_FriendRequest.WBP_Panel_ListEntry_FriendRequest_C.ExecuteUbergraph_WBP_Panel_ListEntry_FriendRequest // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

