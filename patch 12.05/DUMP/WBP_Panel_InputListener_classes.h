// WidgetBlueprintGeneratedClass WBP_Panel_InputListener.WBP_Panel_InputListener_C
// Size: 0x1b88 (Inherited: 0x1ae0)
struct UWBP_Panel_InputListener_C : UAresClickablePanel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1ae0(0x08)
	struct UAresInputSwitcher* AresInputSwitcher; // 0x1ae8(0x08)
	struct UWBP_Button_Icon_Primary_C* ClearBindingButton; // 0x1af0(0x08)
	struct UTextBlock* EmptyText; // 0x1af8(0x08)
	struct UGamepadInputChordWidget_C* GamepadInputChordWidget; // 0x1b00(0x08)
	struct UImage* InputListenerBg; // 0x1b08(0x08)
	struct UInputKeySelector* PCKeySelector; // 0x1b10(0x08)
	struct UTextBlock* RebindingText; // 0x1b18(0x08)
	struct UWBP_Button_Icon_Primary_C* ResetBindingButton; // 0x1b20(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_1; // 0x1b28(0x08)
	struct FMulticastInlineDelegate OnKeyDownReceived; // 0x1b30(0x10)
	bool hasFocus; // 0x1b40(0x01)
	char pad_1B41[0x3]; // 0x1b41(0x03)
	int32_t BindIndex; // 0x1b44(0x04)
	struct FMulticastInlineDelegate OnKeySelectionSuccessful; // 0x1b48(0x10)
	struct FMulticastInlineDelegate OnClearBindingButtonClicked; // 0x1b58(0x10)
	struct FMulticastInlineDelegate OnResetBindingButtonClicked; // 0x1b68(0x10)
	struct FMulticastInlineDelegate OnIsKeySelectingChangedEvent; // 0x1b78(0x10)

	struct FEventReply OnPreviewKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function WBP_Panel_InputListener.WBP_Panel_InputListener_C.OnPreviewKeyDown // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void On Is Key Selecting Changed(); // Function WBP_Panel_InputListener.WBP_Panel_InputListener_C.On Is Key Selecting Changed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnPCKeySelectionSuccessful(struct FInputChord SelectedKey); // Function WBP_Panel_InputListener.WBP_Panel_InputListener_C.OnPCKeySelectionSuccessful // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Set Focus Style(bool hasFocus); // Function WBP_Panel_InputListener.WBP_Panel_InputListener_C.Set Focus Style // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	struct FEventReply OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function WBP_Panel_InputListener.WBP_Panel_InputListener_C.OnKeyDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function WBP_Panel_InputListener.WBP_Panel_InputListener_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function WBP_Panel_InputListener.WBP_Panel_InputListener_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1af5410
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function WBP_Panel_InputListener.WBP_Panel_InputListener_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_Panel_InputListener_ClearBindingButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_InputListener.WBP_Panel_InputListener_C.BndEvt__WBP_Panel_InputListener_ClearBindingButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_Panel_InputListener_ResetBindingButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_InputListener.WBP_Panel_InputListener_C.BndEvt__WBP_Panel_InputListener_ResetBindingButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void Destruct(); // Function WBP_Panel_InputListener.WBP_Panel_InputListener_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Panel_InputListener(int32_t EntryPoint); // Function WBP_Panel_InputListener.WBP_Panel_InputListener_C.ExecuteUbergraph_WBP_Panel_InputListener // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
	void OnIsKeySelectingChangedEvent__DelegateSignature(bool bIsSelecting); // Function WBP_Panel_InputListener.WBP_Panel_InputListener_C.OnIsKeySelectingChangedEvent__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnResetBindingButtonClicked__DelegateSignature(int32_t BindIndex); // Function WBP_Panel_InputListener.WBP_Panel_InputListener_C.OnResetBindingButtonClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnClearBindingButtonClicked__DelegateSignature(int32_t BindIndex); // Function WBP_Panel_InputListener.WBP_Panel_InputListener_C.OnClearBindingButtonClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnKeySelectionSuccessful__DelegateSignature(struct FKey InKey, int32_t InBindingIndex); // Function WBP_Panel_InputListener.WBP_Panel_InputListener_C.OnKeySelectionSuccessful__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnKeyDownReceived__DelegateSignature(struct FKey InKey, int32_t InBindingIndex); // Function WBP_Panel_InputListener.WBP_Panel_InputListener_C.OnKeyDownReceived__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

