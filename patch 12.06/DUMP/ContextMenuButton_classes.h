// WidgetBlueprintGeneratedClass ContextMenuButton.ContextMenuButton_C
// Size: 0x3e8 (Inherited: 0x358)
struct UContextMenuButton_C : UAresContextMenuActionBaseWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x358(0x08)
	struct UButton* Button; // 0x360(0x08)
	struct UHorizontalBox* ButtonHorizontalBox; // 0x368(0x08)
	struct UImage* ButtonIcon; // 0x370(0x08)
	struct UTextBlock* ButtonText; // 0x378(0x08)
	struct USizeBox* SizeBox_ButtonIcon; // 0x380(0x08)
	struct FMulticastInlineDelegate OnActionTaken; // 0x388(0x10)
	struct FMulticastInlineDelegate OnHover; // 0x398(0x10)
	struct FMulticastInlineDelegate OnUnhover; // 0x3a8(0x10)
	struct FMulticastInlineDelegate OnPressed; // 0x3b8(0x10)
	struct FMulticastInlineDelegate OnReleased; // 0x3c8(0x10)
	double DisabledStateOpacity; // 0x3d8(0x08)
	double EnabledStateOpacity; // 0x3e0(0x08)

	void UpdateContentAppearance(); // Function ContextMenuButton.ContextMenuButton_C.UpdateContentAppearance // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	struct FEventReply OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function ContextMenuButton.ContextMenuButton_C.OnKeyDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function ContextMenuButton.ContextMenuButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void OnInit(struct FText& Text, struct UTexture2D* IconTexture, bool Enabled); // Function ContextMenuButton.ContextMenuButton_C.OnInit // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__Button_K2Node_ComponentBoundEvent_36_OnButtonPressedEvent__DelegateSignature(); // Function ContextMenuButton.ContextMenuButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_36_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__Button_K2Node_ComponentBoundEvent_47_OnButtonReleasedEvent__DelegateSignature(); // Function ContextMenuButton.ContextMenuButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_47_OnButtonReleasedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__Button_K2Node_ComponentBoundEvent_56_OnButtonHoverEvent__DelegateSignature(); // Function ContextMenuButton.ContextMenuButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_56_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__Button_K2Node_ComponentBoundEvent_63_OnButtonHoverEvent__DelegateSignature(); // Function ContextMenuButton.ContextMenuButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_63_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void OnAddedToFocusPath(struct FFocusEvent InFocusEvent); // Function ContextMenuButton.ContextMenuButton_C.OnAddedToFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnRemovedFromFocusPath(struct FFocusEvent InFocusEvent); // Function ContextMenuButton.ContextMenuButton_C.OnRemovedFromFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void HandleActionEnabledStateChanged(bool bEnabled); // Function ContextMenuButton.ContextMenuButton_C.HandleActionEnabledStateChanged // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_ContextMenuButton(int32_t EntryPoint); // Function ContextMenuButton.ContextMenuButton_C.ExecuteUbergraph_ContextMenuButton // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
	void OnReleased__DelegateSignature(); // Function ContextMenuButton.ContextMenuButton_C.OnReleased__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnPressed__DelegateSignature(); // Function ContextMenuButton.ContextMenuButton_C.OnPressed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnUnhover__DelegateSignature(); // Function ContextMenuButton.ContextMenuButton_C.OnUnhover__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnHover__DelegateSignature(); // Function ContextMenuButton.ContextMenuButton_C.OnHover__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnActionTaken__DelegateSignature(); // Function ContextMenuButton.ContextMenuButton_C.OnActionTaken__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

