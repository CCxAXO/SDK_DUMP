// WidgetBlueprintGeneratedClass SharedButtonText1.SharedButtonText1_C
// Size: 0x410 (Inherited: 0x320)
struct USharedButtonText1_C : UDesignableUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UImage* AccentTriangle; // 0x328(0x08)
	struct UButton* Button; // 0x330(0x08)
	struct UImage* ButtonBGOrnament01; // 0x338(0x08)
	struct UTextBlock* DisabledLabel; // 0x340(0x08)
	struct UOverlay* DisabledState; // 0x348(0x08)
	struct UWidgetSwitcher* EnabledButtonSwitcher; // 0x350(0x08)
	struct UTextBlock* EnabledLabel; // 0x358(0x08)
	struct UOverlay* EnabledState; // 0x360(0x08)
	struct UImage* hover; // 0x368(0x08)
	struct UImage* Image_2; // 0x370(0x08)
	struct UImage* Image_3; // 0x378(0x08)
	struct UImage* Image_4; // 0x380(0x08)
	struct UImage* NormalBackground; // 0x388(0x08)
	struct UImage* onclickbacking; // 0x390(0x08)
	struct FText ButtonText; // 0x398(0x18)
	struct FMulticastInlineDelegate OnClicked; // 0x3b0(0x10)
	struct FMulticastInlineDelegate OnHovered; // 0x3c0(0x10)
	struct FMulticastInlineDelegate OnUnhovered; // 0x3d0(0x10)
	struct FMulticastInlineDelegate OnPressed; // 0x3e0(0x10)
	bool Enabled; // 0x3f0(0x01)
	char pad_3F1[0x7]; // 0x3f1(0x07)
	struct UAkAudioEvent* AUD_Hover; // 0x3f8(0x08)
	struct UAkAudioEvent* AUD_UnHover; // 0x400(0x08)
	struct UAkAudioEvent* AUD_ButtonClicked; // 0x408(0x08)

	void UpdateButtonText(struct FText ButtonText); // Function SharedButtonText1.SharedButtonText1_C.UpdateButtonText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetIsEnabledOverride(bool InIsEnabled); // Function SharedButtonText1.SharedButtonText1_C.SetIsEnabledOverride // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__RematchButton_K2Node_ComponentBoundEvent_203_OnButtonHoverEvent__DelegateSignature(); // Function SharedButtonText1.SharedButtonText1_C.BndEvt__RematchButton_K2Node_ComponentBoundEvent_203_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__RematchButton_K2Node_ComponentBoundEvent_257_OnButtonHoverEvent__DelegateSignature(); // Function SharedButtonText1.SharedButtonText1_C.BndEvt__RematchButton_K2Node_ComponentBoundEvent_257_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function SharedButtonText1.SharedButtonText1_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__RematchButton_K2Node_ComponentBoundEvent_476_OnButtonClickedEvent__DelegateSignature(); // Function SharedButtonText1.SharedButtonText1_C.BndEvt__RematchButton_K2Node_ComponentBoundEvent_476_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__RematchButton_K2Node_ComponentBoundEvent_18_OnButtonPressedEvent__DelegateSignature(); // Function SharedButtonText1.SharedButtonText1_C.BndEvt__RematchButton_K2Node_ComponentBoundEvent_18_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void OnSynchronizeProperties(); // Function SharedButtonText1.SharedButtonText1_C.OnSynchronizeProperties // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_SharedButtonText1(int32_t EntryPoint); // Function SharedButtonText1.SharedButtonText1_C.ExecuteUbergraph_SharedButtonText1 // (Final|UbergraphFunction) // @ game+0x1af5410
	void OnPressed__DelegateSignature(struct USharedButtonText1_C* NewParam); // Function SharedButtonText1.SharedButtonText1_C.OnPressed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnUnHovered__DelegateSignature(struct USharedButtonText1_C* TextButton); // Function SharedButtonText1.SharedButtonText1_C.OnUnHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnHovered__DelegateSignature(struct USharedButtonText1_C* TextButton); // Function SharedButtonText1.SharedButtonText1_C.OnHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnClicked__DelegateSignature(struct USharedButtonText1_C* TextButton); // Function SharedButtonText1.SharedButtonText1_C.OnClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

