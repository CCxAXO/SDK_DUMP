// WidgetBlueprintGeneratedClass PartyCodeEditableTextBoxCopyPaste.PartyCodeEditableTextBoxCopyPaste_C
// Size: 0x3e0 (Inherited: 0x318)
struct UPartyCodeEditableTextBoxCopyPaste_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UBorderRoundedCorners_C* ButtonBorder; // 0x320(0x08)
	struct UWBP_Button_TertiaryButton_C* CopyPasteButton; // 0x328(0x08)
	struct UEditableTextBox* EditableTextBox; // 0x330(0x08)
	struct UBorderRoundedCorners_C* FieldBorder; // 0x338(0x08)
	struct FMulticastInlineDelegate OnTextChanged; // 0x340(0x10)
	struct FMulticastInlineDelegate OnTextCommited; // 0x350(0x10)
	struct FText HintText; // 0x360(0x18)
	struct FText CopyText; // 0x378(0x18)
	struct UTexture2D* CopyButtonImage; // 0x390(0x08)
	bool PasteField; // 0x398(0x01)
	char pad_399[0x7]; // 0x399(0x07)
	struct FText PasteText; // 0x3a0(0x18)
	struct UTexture2D* PasteButtonImage; // 0x3b8(0x08)
	struct UTexture2D* CopySuccessButtonImage; // 0x3c0(0x08)
	struct FText EmptyButtonText; // 0x3c8(0x18)

	void Handle Text Change(struct FText& InText); // Function PartyCodeEditableTextBoxCopyPaste.PartyCodeEditableTextBoxCopyPaste_C.Handle Text Change // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Set Hint Text(struct FText HintText); // Function PartyCodeEditableTextBoxCopyPaste.PartyCodeEditableTextBoxCopyPaste_C.Set Hint Text // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ResetCopyButton(); // Function PartyCodeEditableTextBoxCopyPaste.PartyCodeEditableTextBoxCopyPaste_C.ResetCopyButton // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ShowCopySuccessButton(); // Function PartyCodeEditableTextBoxCopyPaste.PartyCodeEditableTextBoxCopyPaste_C.ShowCopySuccessButton // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ClearText(); // Function PartyCodeEditableTextBoxCopyPaste.PartyCodeEditableTextBoxCopyPaste_C.ClearText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetText(struct FText InText); // Function PartyCodeEditableTextBoxCopyPaste.PartyCodeEditableTextBoxCopyPaste_C.SetText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	struct FText GetText(); // Function PartyCodeEditableTextBoxCopyPaste.PartyCodeEditableTextBoxCopyPaste_C.GetText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function PartyCodeEditableTextBoxCopyPaste.PartyCodeEditableTextBoxCopyPaste_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__EditableTextBoxCopyPaste_CopyPasteButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function PartyCodeEditableTextBoxCopyPaste.PartyCodeEditableTextBoxCopyPaste_C.BndEvt__EditableTextBoxCopyPaste_CopyPasteButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__PartyCodeEditableTextBoxCopyPaste_EditableTextBox_K2Node_ComponentBoundEvent_4_OnEditableTextBoxChangedEvent__DelegateSignature(struct FText& Text); // Function PartyCodeEditableTextBoxCopyPaste.PartyCodeEditableTextBoxCopyPaste_C.BndEvt__PartyCodeEditableTextBoxCopyPaste_EditableTextBox_K2Node_ComponentBoundEvent_4_OnEditableTextBoxChangedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_PartyCodeEditableTextBoxCopyPaste(int32_t EntryPoint); // Function PartyCodeEditableTextBoxCopyPaste.PartyCodeEditableTextBoxCopyPaste_C.ExecuteUbergraph_PartyCodeEditableTextBoxCopyPaste // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
	void OnTextCommited__DelegateSignature(struct FText Text, enum class ETextCommit CommitMethod); // Function PartyCodeEditableTextBoxCopyPaste.PartyCodeEditableTextBoxCopyPaste_C.OnTextCommited__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnTextChanged__DelegateSignature(struct FText Text); // Function PartyCodeEditableTextBoxCopyPaste.PartyCodeEditableTextBoxCopyPaste_C.OnTextChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

