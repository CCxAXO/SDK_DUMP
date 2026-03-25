// WidgetBlueprintGeneratedClass PartyCodeModal.PartyCodeModal_C
// Size: 0x3c8 (Inherited: 0x318)
struct UPartyCodeModal_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetSwitcher* CodeButtonWidgetSwitcher; // 0x320(0x08)
	struct UWBP_MenuButtonSecondary_C* CodeJoinButton; // 0x328(0x08)
	struct UPartyCodeEditableTextBoxCopyPaste_C* CopyCodeField; // 0x330(0x08)
	struct UCustomCloseButtonTransparent_C* CustomCloseButtonTransparent; // 0x338(0x08)
	struct UWBP_MenuButtonSecondary_Negative_C* DisableCodeButton; // 0x340(0x08)
	struct UWBP_MenuButtonSecondary_C* GenerateCodeButton; // 0x348(0x08)
	struct UImage* Image_1; // 0x350(0x08)
	struct UImage* Image_2; // 0x358(0x08)
	struct UImage* Image_3; // 0x360(0x08)
	struct UImage* Image_4; // 0x368(0x08)
	struct UImage* Image_5; // 0x370(0x08)
	struct UImage* Image_406; // 0x378(0x08)
	struct UPartyCodeEditableTextBoxCopyPaste_C* PasteCodeField; // 0x380(0x08)
	struct UAresCommonText* Text_GenerateError; // 0x388(0x08)
	struct UUniversalHorizontalDivider04_C* UniversalHorizontalDivider04; // 0x390(0x08)
	struct UMainMenuViewController* MainMenuController; // 0x398(0x08)
	struct FMulticastInlineDelegate OnAccepted; // 0x3a0(0x10)
	struct FString PastedInviteCode; // 0x3b0(0x10)
	struct UGenericTextTooltip_C* CreateDeleteButtonTooltip; // 0x3c0(0x08)

	void InitializeButtonTooltip(); // Function PartyCodeModal.PartyCodeModal_C.InitializeButtonTooltip // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetActiveButton(); // Function PartyCodeModal.PartyCodeModal_C.SetActiveButton // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetPartyInviteCodeText(); // Function PartyCodeModal.PartyCodeModal_C.SetPartyInviteCodeText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void CloseModal(); // Function PartyCodeModal.PartyCodeModal_C.CloseModal // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function PartyCodeModal.PartyCodeModal_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__PartyCodeModal_CustomCloseButtonTransparent_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(); // Function PartyCodeModal.PartyCodeModal_C.BndEvt__PartyCodeModal_CustomCloseButtonTransparent_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__PartyCodeModal_GenerateCodeButton_K2Node_ComponentBoundEvent_1_OnUniversalButtonVoidEvent__DelegateSignature(); // Function PartyCodeModal.PartyCodeModal_C.BndEvt__PartyCodeModal_GenerateCodeButton_K2Node_ComponentBoundEvent_1_OnUniversalButtonVoidEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__PartyCodeModal_CodeJoinButton_K2Node_ComponentBoundEvent_2_OnUniversalButtonVoidEvent__DelegateSignature(); // Function PartyCodeModal.PartyCodeModal_C.BndEvt__PartyCodeModal_CodeJoinButton_K2Node_ComponentBoundEvent_2_OnUniversalButtonVoidEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__PartyCodeModal_DisableCodeButton_K2Node_ComponentBoundEvent_4_OnUniversalButtonVoidEvent__DelegateSignature(); // Function PartyCodeModal.PartyCodeModal_C.BndEvt__PartyCodeModal_DisableCodeButton_K2Node_ComponentBoundEvent_4_OnUniversalButtonVoidEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__PartyCodeModal_PasteCodeField_K2Node_ComponentBoundEvent_5_OnTextChanged__DelegateSignature(struct FText Text); // Function PartyCodeModal.PartyCodeModal_C.BndEvt__PartyCodeModal_PasteCodeField_K2Node_ComponentBoundEvent_5_OnTextChanged__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void CreateInviteCodeSuccess(); // Function PartyCodeModal.PartyCodeModal_C.CreateInviteCodeSuccess // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void CreateInviteCodeFailure(enum class EPartyErrorEnum PartyErrorEnum); // Function PartyCodeModal.PartyCodeModal_C.CreateInviteCodeFailure // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnInviteCodeChanged(); // Function PartyCodeModal.PartyCodeModal_C.OnInviteCodeChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnDeleteCodeSuccess(); // Function PartyCodeModal.PartyCodeModal_C.OnDeleteCodeSuccess // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnDeleteCodeError(enum class EPartyErrorEnum PartyErrorEnum); // Function PartyCodeModal.PartyCodeModal_C.OnDeleteCodeError // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnJoinCodeSuccess(); // Function PartyCodeModal.PartyCodeModal_C.OnJoinCodeSuccess // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnJoinCodeError(enum class EPartyErrorEnum PartyErrorEnum); // Function PartyCodeModal.PartyCodeModal_C.OnJoinCodeError // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnIsOwnerChanged(bool NewValue); // Function PartyCodeModal.PartyCodeModal_C.OnIsOwnerChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnOwnerTransferred(struct UPartyPlayerModel* Player); // Function PartyCodeModal.PartyCodeModal_C.OnOwnerTransferred // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void TemporarilyDisableButton(); // Function PartyCodeModal.PartyCodeModal_C.TemporarilyDisableButton // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_PartyCodeModal(int32_t EntryPoint); // Function PartyCodeModal.PartyCodeModal_C.ExecuteUbergraph_PartyCodeModal // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
	void OnAccepted__DelegateSignature(); // Function PartyCodeModal.PartyCodeModal_C.OnAccepted__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

