// WidgetBlueprintGeneratedClass CrosshairCodeEntryModal.CrosshairCodeEntryModal_C
// Size: 0x3c8 (Inherited: 0x320)
struct UCrosshairCodeEntryModal_C : UDesignableUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UWidgetAnimation* Intro; // 0x328(0x08)
	struct UWidgetSwitcher* ButtonSwitcher; // 0x330(0x08)
	struct USharedButtonMaster_C* CancelButton; // 0x338(0x08)
	struct USpacer* CancelButtonSpacer; // 0x340(0x08)
	struct USharedButtonMaster_C* Confirmation; // 0x348(0x08)
	struct UTextBlock* ErrorMessage; // 0x350(0x08)
	struct UImage* Image_1; // 0x358(0x08)
	struct UImage* Image_2; // 0x360(0x08)
	struct UImage* Image_3; // 0x368(0x08)
	struct UImage* Image_4; // 0x370(0x08)
	struct UImage* Image_5; // 0x378(0x08)
	struct USharedButtonMaster_C* ImportButton; // 0x380(0x08)
	struct USharedBackButton_C* SharedBackButton; // 0x388(0x08)
	struct USizeBox* SizeBoxCancel_2; // 0x390(0x08)
	struct USizeBox* SizeBoxConfirmation; // 0x398(0x08)
	struct USizeBox* SizeBoxImport; // 0x3a0(0x08)
	struct UCanvasPanel* SuccessOverlay; // 0x3a8(0x08)
	struct UMultiLineEditableText* TextEntry; // 0x3b0(0x08)
	struct FMulticastInlineDelegate ModalComplete; // 0x3b8(0x10)

	struct FAresMainMenuNavBarData GetNavBarData(); // Function CrosshairCodeEntryModal.CrosshairCodeEntryModal_C.GetNavBarData // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1b42740
	bool HandleBackRequest(); // Function CrosshairCodeEntryModal.CrosshairCodeEntryModal_C.HandleBackRequest // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void CreateImportedProfileName(struct FString& OutName); // Function CrosshairCodeEntryModal.CrosshairCodeEntryModal_C.CreateImportedProfileName // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function CrosshairCodeEntryModal.CrosshairCodeEntryModal_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Destruct(); // Function CrosshairCodeEntryModal.CrosshairCodeEntryModal_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__Confirmation_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature(); // Function CrosshairCodeEntryModal.CrosshairCodeEntryModal_C.BndEvt__Confirmation_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__CancelButton_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature(); // Function CrosshairCodeEntryModal.CrosshairCodeEntryModal_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__ImportButton_K2Node_ComponentBoundEvent_6_Clicked__DelegateSignature(); // Function CrosshairCodeEntryModal.CrosshairCodeEntryModal_C.BndEvt__ImportButton_K2Node_ComponentBoundEvent_6_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__SharedBackButton_K2Node_ComponentBoundEvent_0_OnBackRequested__DelegateSignature(); // Function CrosshairCodeEntryModal.CrosshairCodeEntryModal_C.BndEvt__SharedBackButton_K2Node_ComponentBoundEvent_0_OnBackRequested__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__TextEntry_K2Node_ComponentBoundEvent_1_OnMultiLineEditableTextCommittedEvent__DelegateSignature(struct FText& Text, enum class ETextCommit CommitMethod); // Function CrosshairCodeEntryModal.CrosshairCodeEntryModal_C.BndEvt__TextEntry_K2Node_ComponentBoundEvent_1_OnMultiLineEditableTextCommittedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__TextEntry_K2Node_ComponentBoundEvent_2_OnMultiLineEditableTextChangedEvent__DelegateSignature(struct FText& Text); // Function CrosshairCodeEntryModal.CrosshairCodeEntryModal_C.BndEvt__TextEntry_K2Node_ComponentBoundEvent_2_OnMultiLineEditableTextChangedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_CrosshairCodeEntryModal(int32_t EntryPoint); // Function CrosshairCodeEntryModal.CrosshairCodeEntryModal_C.ExecuteUbergraph_CrosshairCodeEntryModal // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
	void ModalComplete__DelegateSignature(); // Function CrosshairCodeEntryModal.CrosshairCodeEntryModal_C.ModalComplete__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

