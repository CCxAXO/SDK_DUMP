// WidgetBlueprintGeneratedClass VerificationSettingWidget.VerificationSettingWidget_C
// Size: 0x423 (Inherited: 0x320)
struct UVerificationSettingWidget_C : UBaseSettingsWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UWidgetAnimation* HightlightFalse; // 0x328(0x08)
	struct UWidgetAnimation* HighlightTrue; // 0x330(0x08)
	struct UImage* Background; // 0x338(0x08)
	struct UOverlay* ButtonOverlay; // 0x340(0x08)
	struct UTextBlock* DisplayNameText; // 0x348(0x08)
	struct UImage* Highlight; // 0x350(0x08)
	struct UImage* Image_1; // 0x358(0x08)
	struct UImage* InputBlocker; // 0x360(0x08)
	struct UButton* ModalButton; // 0x368(0x08)
	struct UTextBlock* ModalButtonText; // 0x370(0x08)
	struct USpacer* OptionsSpacer; // 0x378(0x08)
	struct USettingsUniversalHoverBG_C* SettingsUniversalHoverBG; // 0x380(0x08)
	struct UOverlay* StatusOverlay; // 0x388(0x08)
	struct UTextBlock* StatusText; // 0x390(0x08)
	struct UImage* UnverifiedIcon; // 0x398(0x08)
	struct UImage* VerifiedIcon; // 0x3a0(0x08)
	struct FText DisplayText; // 0x3a8(0x18)
	struct FText DisplayTooltip; // 0x3c0(0x18)
	bool Value; // 0x3d8(0x01)
	char pad_3D9[0x7]; // 0x3d9(0x07)
	struct FText TrueDisplayText; // 0x3e0(0x18)
	struct FText FalseDisplayText; // 0x3f8(0x18)
	struct FMulticastInlineDelegate valueUpdated; // 0x410(0x10)
	bool InvertValue; // 0x420(0x01)
	bool Enabled; // 0x421(0x01)
	bool IsVerified; // 0x422(0x01)

	void SetEnabled(bool Enabled); // Function VerificationSettingWidget.VerificationSettingWidget_C.SetEnabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Update Hover Highlight(bool Immediate); // Function VerificationSettingWidget.VerificationSettingWidget_C.Update Hover Highlight // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function VerificationSettingWidget.VerificationSettingWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__FalseButton_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature(); // Function VerificationSettingWidget.VerificationSettingWidget_C.BndEvt__FalseButton_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__FalseButton_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature(); // Function VerificationSettingWidget.VerificationSettingWidget_C.BndEvt__FalseButton_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__FalseButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function VerificationSettingWidget.VerificationSettingWidget_C.BndEvt__FalseButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function VerificationSettingWidget.VerificationSettingWidget_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1b42740
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function VerificationSettingWidget.VerificationSettingWidget_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1b42740
	void OnStatusChanged(bool IsVerified); // Function VerificationSettingWidget.VerificationSettingWidget_C.OnStatusChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_VerificationSettingWidget(int32_t EntryPoint); // Function VerificationSettingWidget.VerificationSettingWidget_C.ExecuteUbergraph_VerificationSettingWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
	void valueUpdated__DelegateSignature(bool Value); // Function VerificationSettingWidget.VerificationSettingWidget_C.valueUpdated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

