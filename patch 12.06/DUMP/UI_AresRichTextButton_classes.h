// WidgetBlueprintGeneratedClass UI_AresRichTextButton.UI_AresRichTextButton_C
// Size: 0x1b31 (Inherited: 0x1ae0)
struct UUI_AresRichTextButton_C : UAresCommonButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1ae0(0x08)
	struct UCommonRichTextBlock* ButtonDisplayText; // 0x1ae8(0x08)
	struct FText DisplayText; // 0x1af0(0x18)
	struct FMulticastInlineDelegate OnStyleChange; // 0x1b08(0x10)
	struct FText KBMDisplayText; // 0x1b18(0x18)
	bool DisplayInputActionOnButton; // 0x1b30(0x01)

	void RefreshDisplayedText(); // Function UI_AresRichTextButton.UI_AresRichTextButton_C.RefreshDisplayedText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	bool ShouldUseKeyboardText(); // Function UI_AresRichTextButton.UI_AresRichTextButton_C.ShouldUseKeyboardText // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void GetInputDecorator(struct UBP_AresTextBlockInputDecorator_C*& AsBP Ares Text Block Input Decorator); // Function UI_AresRichTextButton.UI_AresRichTextButton_C.GetInputDecorator // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void SetInputActionWidgetDisplay(bool IsVisible); // Function UI_AresRichTextButton.UI_AresRichTextButton_C.SetInputActionWidgetDisplay // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateTextDecoratorData(); // Function UI_AresRichTextButton.UI_AresRichTextButton_C.UpdateTextDecoratorData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetTextStyle(); // Function UI_AresRichTextButton.UI_AresRichTextButton_C.SetTextStyle // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function UI_AresRichTextButton.UI_AresRichTextButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnCurrentTextStyleChanged(); // Function UI_AresRichTextButton.UI_AresRichTextButton_C.OnCurrentTextStyleChanged // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__UI_AresRichButton_InputActionWidget_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature(bool bUsingGamepad); // Function UI_AresRichTextButton.UI_AresRichTextButton_C.BndEvt__UI_AresRichButton_InputActionWidget_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void OnActionProgress(float HeldPercent); // Function UI_AresRichTextButton.UI_AresRichTextButton_C.OnActionProgress // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void BP_OnLongClicked(); // Function UI_AresRichTextButton.UI_AresRichTextButton_C.BP_OnLongClicked // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_UI_AresRichTextButton(int32_t EntryPoint); // Function UI_AresRichTextButton.UI_AresRichTextButton_C.ExecuteUbergraph_UI_AresRichTextButton // (Final|UbergraphFunction) // @ game+0x1b42740
	void OnStyleChange__DelegateSignature(); // Function UI_AresRichTextButton.UI_AresRichTextButton_C.OnStyleChange__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

