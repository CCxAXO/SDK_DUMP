// WidgetBlueprintGeneratedClass BaseBoolOptionWidget.BaseBoolOptionWidget_C
// Size: 0x42a (Inherited: 0x320)
struct UBaseBoolOptionWidget_C : UBaseSettingsWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UWidgetAnimation* HightlightFalse; // 0x328(0x08)
	struct UWidgetAnimation* HighlightTrue; // 0x330(0x08)
	struct UImage* Background; // 0x338(0x08)
	struct UTextBlock* DisplayNameText; // 0x340(0x08)
	struct UButton* FalseButton; // 0x348(0x08)
	struct UOverlay* FalseOverlay; // 0x350(0x08)
	struct UImage* FalseSelected; // 0x358(0x08)
	struct UTextBlock* FalseText; // 0x360(0x08)
	struct UImage* Image_1; // 0x368(0x08)
	struct UImage* Image_2; // 0x370(0x08)
	struct UImage* InputBlocker; // 0x378(0x08)
	struct USpacer* OptionsSpacer; // 0x380(0x08)
	struct USettingsUniversalHoverBG_C* SettingsUniversalHoverBG; // 0x388(0x08)
	struct UButton* TrueButton; // 0x390(0x08)
	struct UOverlay* TrueOverlay; // 0x398(0x08)
	struct UImage* TrueSelected; // 0x3a0(0x08)
	struct UTextBlock* TrueText; // 0x3a8(0x08)
	struct FText DisplayText; // 0x3b0(0x18)
	struct FText DisplayTooltip; // 0x3c8(0x18)
	bool Value; // 0x3e0(0x01)
	char pad_3E1[0x7]; // 0x3e1(0x07)
	struct FText TrueDisplayText; // 0x3e8(0x18)
	struct FText FalseDisplayText; // 0x400(0x18)
	struct FMulticastInlineDelegate valueUpdated; // 0x418(0x10)
	bool InvertValue; // 0x428(0x01)
	bool Enabled; // 0x429(0x01)

	void SetEnabled(bool Enabled); // Function BaseBoolOptionWidget.BaseBoolOptionWidget_C.SetEnabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SelectOffValue(); // Function BaseBoolOptionWidget.BaseBoolOptionWidget_C.SelectOffValue // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetValue(bool Value, bool IgnoreInvert, bool& OutValue); // Function BaseBoolOptionWidget.BaseBoolOptionWidget_C.SetValue // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetValue(bool IgnoreInvert, bool& Value); // Function BaseBoolOptionWidget.BaseBoolOptionWidget_C.GetValue // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void UpdateFalse(bool Immediate); // Function BaseBoolOptionWidget.BaseBoolOptionWidget_C.UpdateFalse // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateTrue(bool Immediate); // Function BaseBoolOptionWidget.BaseBoolOptionWidget_C.UpdateTrue // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateSetting(bool NewValue); // Function BaseBoolOptionWidget.BaseBoolOptionWidget_C.UpdateSetting // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetColors(); // Function BaseBoolOptionWidget.BaseBoolOptionWidget_C.SetColors // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ApplyStaticUI(); // Function BaseBoolOptionWidget.BaseBoolOptionWidget_C.ApplyStaticUI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function BaseBoolOptionWidget.BaseBoolOptionWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnSynchronizeProperties(); // Function BaseBoolOptionWidget.BaseBoolOptionWidget_C.OnSynchronizeProperties // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__TrueButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function BaseBoolOptionWidget.BaseBoolOptionWidget_C.BndEvt__TrueButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__FalseButton_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature(); // Function BaseBoolOptionWidget.BaseBoolOptionWidget_C.BndEvt__FalseButton_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__FalseButton_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature(); // Function BaseBoolOptionWidget.BaseBoolOptionWidget_C.BndEvt__FalseButton_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__TrueButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function BaseBoolOptionWidget.BaseBoolOptionWidget_C.BndEvt__TrueButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__TrueButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function BaseBoolOptionWidget.BaseBoolOptionWidget_C.BndEvt__TrueButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__FalseButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function BaseBoolOptionWidget.BaseBoolOptionWidget_C.BndEvt__FalseButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function BaseBoolOptionWidget.BaseBoolOptionWidget_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1af5410
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function BaseBoolOptionWidget.BaseBoolOptionWidget_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_BaseBoolOptionWidget(int32_t EntryPoint); // Function BaseBoolOptionWidget.BaseBoolOptionWidget_C.ExecuteUbergraph_BaseBoolOptionWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
	void valueUpdated__DelegateSignature(bool Value); // Function BaseBoolOptionWidget.BaseBoolOptionWidget_C.valueUpdated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

