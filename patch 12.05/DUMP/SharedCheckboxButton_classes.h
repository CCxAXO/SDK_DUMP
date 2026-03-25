// WidgetBlueprintGeneratedClass SharedCheckboxButton.SharedCheckboxButton_C
// Size: 0x3f0 (Inherited: 0x320)
struct USharedCheckboxButton_C : UDesignableUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UWidgetAnimation* Default; // 0x328(0x08)
	struct UWidgetAnimation* Disabled; // 0x330(0x08)
	struct UWidgetAnimation* OnClick; // 0x338(0x08)
	struct UWidgetAnimation* hover; // 0x340(0x08)
	struct UButton* Button; // 0x348(0x08)
	struct UOverlay* ButtonContainer; // 0x350(0x08)
	struct UImage* CheckboxBG; // 0x358(0x08)
	struct UImage* CheckboxMG; // 0x360(0x08)
	struct UImage* IconButton; // 0x368(0x08)
	struct FMulticastInlineDelegate OnClicked; // 0x370(0x10)
	struct FMulticastInlineDelegate OnHovered; // 0x380(0x10)
	struct FMulticastInlineDelegate OnUnhovered; // 0x390(0x10)
	struct FMulticastInlineDelegate OnPressed; // 0x3a0(0x10)
	bool Enabled; // 0x3b0(0x01)
	enum class EUMGSequencePlayMode NewVar_1; // 0x3b1(0x01)
	bool DarkHoverEnable; // 0x3b2(0x01)
	bool ShadowEnable; // 0x3b3(0x01)
	char pad_3B4[0x4]; // 0x3b4(0x04)
	struct FMulticastInlineDelegate OnDisabled; // 0x3b8(0x10)
	struct FMulticastInlineDelegate OnReleased; // 0x3c8(0x10)
	struct UTexture2D* Icon; // 0x3d8(0x08)
	struct FLinearColor IconColor; // 0x3e0(0x10)

	void StopAllAnimationsBlueprint(); // Function SharedCheckboxButton.SharedCheckboxButton_C.StopAllAnimationsBlueprint // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetIsEnabledOverride(bool InIsEnabled); // Function SharedCheckboxButton.SharedCheckboxButton_C.SetIsEnabledOverride // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetImage(); // Function SharedCheckboxButton.SharedCheckboxButton_C.SetImage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetButtonEnabled(bool IsEnabled); // Function SharedCheckboxButton.SharedCheckboxButton_C.SetButtonEnabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetButtonVisibility(enum class ESlateVisibility Visibility); // Function SharedCheckboxButton.SharedCheckboxButton_C.SetButtonVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__RematchButton_K2Node_ComponentBoundEvent_203_OnButtonHoverEvent__DelegateSignature(); // Function SharedCheckboxButton.SharedCheckboxButton_C.BndEvt__RematchButton_K2Node_ComponentBoundEvent_203_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__RematchButton_K2Node_ComponentBoundEvent_257_OnButtonHoverEvent__DelegateSignature(); // Function SharedCheckboxButton.SharedCheckboxButton_C.BndEvt__RematchButton_K2Node_ComponentBoundEvent_257_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function SharedCheckboxButton.SharedCheckboxButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__RematchButton_K2Node_ComponentBoundEvent_476_OnButtonClickedEvent__DelegateSignature(); // Function SharedCheckboxButton.SharedCheckboxButton_C.BndEvt__RematchButton_K2Node_ComponentBoundEvent_476_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__RematchButton_K2Node_ComponentBoundEvent_18_OnButtonPressedEvent__DelegateSignature(); // Function SharedCheckboxButton.SharedCheckboxButton_C.BndEvt__RematchButton_K2Node_ComponentBoundEvent_18_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void OnSynchronizeProperties(); // Function SharedCheckboxButton.SharedCheckboxButton_C.OnSynchronizeProperties // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__Button_K2Node_ComponentBoundEvent_8_OnButtonReleasedEvent__DelegateSignature(); // Function SharedCheckboxButton.SharedCheckboxButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_8_OnButtonReleasedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_SharedCheckboxButton(int32_t EntryPoint); // Function SharedCheckboxButton.SharedCheckboxButton_C.ExecuteUbergraph_SharedCheckboxButton // (Final|UbergraphFunction) // @ game+0x1af5410
	void OnReleased__DelegateSignature(struct USharedCheckboxButton_C* CheckboxButton); // Function SharedCheckboxButton.SharedCheckboxButton_C.OnReleased__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnDisabled__DelegateSignature(struct USharedCheckboxButton_C* CheckboxButton); // Function SharedCheckboxButton.SharedCheckboxButton_C.OnDisabled__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnPressed__DelegateSignature(struct USharedCheckboxButton_C* CheckboxButton); // Function SharedCheckboxButton.SharedCheckboxButton_C.OnPressed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnUnHovered__DelegateSignature(struct USharedCheckboxButton_C* CheckboxButton); // Function SharedCheckboxButton.SharedCheckboxButton_C.OnUnHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnHovered__DelegateSignature(struct USharedCheckboxButton_C* CheckboxButton); // Function SharedCheckboxButton.SharedCheckboxButton_C.OnHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnClicked__DelegateSignature(struct USharedCheckboxButton_C* CheckboxButton); // Function SharedCheckboxButton.SharedCheckboxButton_C.OnClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

