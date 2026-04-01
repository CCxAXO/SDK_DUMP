// WidgetBlueprintGeneratedClass ButtonSettingsWidget.ButtonSettingsWidget_C
// Size: 0x390 (Inherited: 0x320)
struct UButtonSettingsWidget_C : UBaseSettingsWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UWidgetAnimation* Anim_Hover; // 0x328(0x08)
	struct UButton* Button; // 0x330(0x08)
	struct UTextBlock* ButtonTextBlock; // 0x338(0x08)
	struct UTextBlock* DisplayNameText; // 0x340(0x08)
	struct USettingsUniversalHoverBG_C* SettingsUniversalHoverBG; // 0x348(0x08)
	struct FMulticastInlineDelegate OnButtonClicked; // 0x350(0x10)
	struct FText LabelText; // 0x360(0x18)
	struct FText ButtonText; // 0x378(0x18)

	void PreConstruct(bool IsDesignTime); // Function ButtonSettingsWidget.ButtonSettingsWidget_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function ButtonSettingsWidget.ButtonSettingsWidget_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1b42740
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function ButtonSettingsWidget.ButtonSettingsWidget_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__BlockedPlayerListSettingWidget_ModalButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function ButtonSettingsWidget.ButtonSettingsWidget_C.BndEvt__BlockedPlayerListSettingWidget_ModalButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__ButtonSettingsWidget_ModalButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // Function ButtonSettingsWidget.ButtonSettingsWidget_C.BndEvt__ButtonSettingsWidget_ModalButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__ButtonSettingsWidget_ModalButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature(); // Function ButtonSettingsWidget.ButtonSettingsWidget_C.BndEvt__ButtonSettingsWidget_ModalButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_ButtonSettingsWidget(int32_t EntryPoint); // Function ButtonSettingsWidget.ButtonSettingsWidget_C.ExecuteUbergraph_ButtonSettingsWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
	void OnButtonClicked__DelegateSignature(struct UButtonSettingsWidget_C* Widget); // Function ButtonSettingsWidget.ButtonSettingsWidget_C.OnButtonClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

