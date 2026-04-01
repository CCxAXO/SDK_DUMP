// WidgetBlueprintGeneratedClass ChatFilterSettingsWidget.ChatFilterSettingsWidget_C
// Size: 0x391 (Inherited: 0x320)
struct UChatFilterSettingsWidget_C : UBaseSettingsWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UWidgetAnimation* HightlightFalse; // 0x328(0x08)
	struct UWidgetAnimation* HighlightTrue; // 0x330(0x08)
	struct UButton* FalseButton; // 0x338(0x08)
	struct UTextBlock* FalseText; // 0x340(0x08)
	struct USettingsUniversalHoverBG_C* SettingsUniversalHoverBG; // 0x348(0x08)
	struct UButton* TrueButton; // 0x350(0x08)
	struct UTextBlock* TrueText; // 0x358(0x08)
	struct FText DisplayTooltip; // 0x360(0x18)
	enum class EAresVoidSettingName SettingName; // 0x378(0x01)
	bool Value; // 0x379(0x01)
	char pad_37A[0x6]; // 0x37a(0x06)
	struct FMulticastInlineDelegate valueUpdated; // 0x380(0x10)
	bool ValueToSave; // 0x390(0x01)

	bool ShouldDisplay(); // Function ChatFilterSettingsWidget.ChatFilterSettingsWidget_C.ShouldDisplay // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateFalse(bool Immediate); // Function ChatFilterSettingsWidget.ChatFilterSettingsWidget_C.UpdateFalse // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateTrue(bool Immediate); // Function ChatFilterSettingsWidget.ChatFilterSettingsWidget_C.UpdateTrue // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetColors(); // Function ChatFilterSettingsWidget.ChatFilterSettingsWidget_C.SetColors // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ApplyStaticUI(); // Function ChatFilterSettingsWidget.ChatFilterSettingsWidget_C.ApplyStaticUI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function ChatFilterSettingsWidget.ChatFilterSettingsWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnSynchronizeProperties(); // Function ChatFilterSettingsWidget.ChatFilterSettingsWidget_C.OnSynchronizeProperties // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__TrueButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function ChatFilterSettingsWidget.ChatFilterSettingsWidget_C.BndEvt__TrueButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__FalseButton_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature(); // Function ChatFilterSettingsWidget.ChatFilterSettingsWidget_C.BndEvt__FalseButton_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__FalseButton_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature(); // Function ChatFilterSettingsWidget.ChatFilterSettingsWidget_C.BndEvt__FalseButton_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__TrueButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function ChatFilterSettingsWidget.ChatFilterSettingsWidget_C.BndEvt__TrueButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__TrueButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function ChatFilterSettingsWidget.ChatFilterSettingsWidget_C.BndEvt__TrueButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__FalseButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function ChatFilterSettingsWidget.ChatFilterSettingsWidget_C.BndEvt__FalseButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function ChatFilterSettingsWidget.ChatFilterSettingsWidget_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1b42740
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function ChatFilterSettingsWidget.ChatFilterSettingsWidget_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1b42740
	void OnFilterChanged(bool NewValue); // Function ChatFilterSettingsWidget.ChatFilterSettingsWidget_C.OnFilterChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SaveSetting(); // Function ChatFilterSettingsWidget.ChatFilterSettingsWidget_C.SaveSetting // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetChatFilterSuccess(); // Function ChatFilterSettingsWidget.ChatFilterSettingsWidget_C.SetChatFilterSuccess // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetChatFilterError(); // Function ChatFilterSettingsWidget.ChatFilterSettingsWidget_C.SetChatFilterError // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_ChatFilterSettingsWidget(int32_t EntryPoint); // Function ChatFilterSettingsWidget.ChatFilterSettingsWidget_C.ExecuteUbergraph_ChatFilterSettingsWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
	void valueUpdated__DelegateSignature(bool Value); // Function ChatFilterSettingsWidget.ChatFilterSettingsWidget_C.valueUpdated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

