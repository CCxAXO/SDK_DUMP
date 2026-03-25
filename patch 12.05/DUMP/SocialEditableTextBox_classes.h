// WidgetBlueprintGeneratedClass SocialEditableTextBox.SocialEditableTextBox_C
// Size: 0x379 (Inherited: 0x318)
struct USocialEditableTextBox_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UButton* Button_ClearFilter; // 0x320(0x08)
	struct UOverlay* ClearTextBoxButtonOverlay; // 0x328(0x08)
	struct UEditableTextBox* EditableTextBox; // 0x330(0x08)
	struct UImage* Img_TextBoxOutline; // 0x338(0x08)
	struct FMulticastInlineDelegate OnTextChanged; // 0x340(0x10)
	struct FMulticastInlineDelegate OnTextCommited; // 0x350(0x10)
	struct FText HintText; // 0x360(0x18)
	bool HasClearButton; // 0x378(0x01)

	void ClearText(); // Function SocialEditableTextBox.SocialEditableTextBox_C.ClearText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetText(struct FText InText); // Function SocialEditableTextBox.SocialEditableTextBox_C.SetText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	struct FText GetText(); // Function SocialEditableTextBox.SocialEditableTextBox_C.GetText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void BndEvt__SocialEditableTextBox_Filter_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature(struct FText& Text); // Function SocialEditableTextBox.SocialEditableTextBox_C.BndEvt__SocialEditableTextBox_Filter_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__SocialEditableTextBox_Filter_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature(struct FText& Text, enum class ETextCommit CommitMethod); // Function SocialEditableTextBox.SocialEditableTextBox_C.BndEvt__SocialEditableTextBox_Filter_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__SocialEditableTextBox_Button_ClearFilter_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function SocialEditableTextBox.SocialEditableTextBox_C.BndEvt__SocialEditableTextBox_Button_ClearFilter_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function SocialEditableTextBox.SocialEditableTextBox_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_SocialEditableTextBox(int32_t EntryPoint); // Function SocialEditableTextBox.SocialEditableTextBox_C.ExecuteUbergraph_SocialEditableTextBox // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
	void OnTextCommited__DelegateSignature(struct FText Text, enum class ETextCommit CommitMethod); // Function SocialEditableTextBox.SocialEditableTextBox_C.OnTextCommited__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnTextChanged__DelegateSignature(struct FText Text); // Function SocialEditableTextBox.SocialEditableTextBox_C.OnTextChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

