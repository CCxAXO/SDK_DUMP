// WidgetBlueprintGeneratedClass RestrictionsWarningConfirmationModal.RestrictionsWarningConfirmationModal_C
// Size: 0x580 (Inherited: 0x4d0)
struct URestrictionsWarningConfirmationModal_C : UGenericModalNotification_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4d0(0x08)
	struct URichTextBlock* AndMessage; // 0x4d8(0x08)
	struct USpacer* CancelButtonSpacer; // 0x4e0(0x08)
	struct UImage* Image_1; // 0x4e8(0x08)
	struct UImage* Image_2; // 0x4f0(0x08)
	struct UImage* Image_3; // 0x4f8(0x08)
	struct UImage* Image_4; // 0x500(0x08)
	struct UImage* Image_5; // 0x508(0x08)
	struct USharedButtonMaster_C* LeftButton; // 0x510(0x08)
	struct UHorizontalBox* LinksSection; // 0x518(0x08)
	struct URichTextBlock* Message; // 0x520(0x08)
	struct USharedButtonMaster_C* MiddleButton; // 0x528(0x08)
	struct USpacer* MiddleButtonSpacer; // 0x530(0x08)
	struct URichTextBlock* MoreInfoMessage; // 0x538(0x08)
	struct USharedHyperlinkButon_C* PenaltiesFAQLink; // 0x540(0x08)
	struct USharedButtonMaster_C* RightButton; // 0x548(0x08)
	struct USharedBackButton_C* SharedBackButton; // 0x550(0x08)
	struct USizeBox* SizeBoxCancel_2; // 0x558(0x08)
	struct USizeBox* SizeBoxConfirmation; // 0x560(0x08)
	struct USizeBox* SizeBoxMiddleButton; // 0x568(0x08)
	struct UTextBlock* Title; // 0x570(0x08)
	struct USharedHyperlinkButon_C* ToSLink; // 0x578(0x08)

	void SetLinks(struct UExternalLinksNotification*& ExternalLinkData); // Function RestrictionsWarningConfirmationModal.RestrictionsWarningConfirmationModal_C.SetLinks // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	struct FEventReply OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function RestrictionsWarningConfirmationModal.RestrictionsWarningConfirmationModal_C.OnKeyDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	struct FEventReply OnKeyUp(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function RestrictionsWarningConfirmationModal.RestrictionsWarningConfirmationModal_C.OnKeyUp // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	bool HandleBackRequest(); // Function RestrictionsWarningConfirmationModal.RestrictionsWarningConfirmationModal_C.HandleBackRequest // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Get Colors from Notification Type(enum class EAresNotificationType NotificationType, struct UModalNotificationColors_C*& Colors); // Function RestrictionsWarningConfirmationModal.RestrictionsWarningConfirmationModal_C.Get Colors from Notification Type // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function RestrictionsWarningConfirmationModal.RestrictionsWarningConfirmationModal_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Destruct(); // Function RestrictionsWarningConfirmationModal.RestrictionsWarningConfirmationModal_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function RestrictionsWarningConfirmationModal.RestrictionsWarningConfirmationModal_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__ConfirmationModal_LeftButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(); // Function RestrictionsWarningConfirmationModal.RestrictionsWarningConfirmationModal_C.BndEvt__ConfirmationModal_LeftButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__ConfirmationModal_SharedBackButton_K2Node_ComponentBoundEvent_3_OnBackRequested__DelegateSignature(); // Function RestrictionsWarningConfirmationModal.RestrictionsWarningConfirmationModal_C.BndEvt__ConfirmationModal_SharedBackButton_K2Node_ComponentBoundEvent_3_OnBackRequested__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void UpdateButtonHighlight(); // Function RestrictionsWarningConfirmationModal.RestrictionsWarningConfirmationModal_C.UpdateButtonHighlight // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ModalButtonPressed(); // Function RestrictionsWarningConfirmationModal.RestrictionsWarningConfirmationModal_C.ModalButtonPressed // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetNotificationConfig(struct UGenericNotification* ModalNotification); // Function RestrictionsWarningConfirmationModal.RestrictionsWarningConfirmationModal_C.SetNotificationConfig // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__ConfirmationModal_MiddleButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(); // Function RestrictionsWarningConfirmationModal.RestrictionsWarningConfirmationModal_C.BndEvt__ConfirmationModal_MiddleButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__ConfirmationModal_RightButton_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(); // Function RestrictionsWarningConfirmationModal.RestrictionsWarningConfirmationModal_C.BndEvt__ConfirmationModal_RightButton_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_RestrictionsWarningConfirmationModal(int32_t EntryPoint); // Function RestrictionsWarningConfirmationModal.RestrictionsWarningConfirmationModal_C.ExecuteUbergraph_RestrictionsWarningConfirmationModal // (Final|UbergraphFunction) // @ game+0x1af5410
};

