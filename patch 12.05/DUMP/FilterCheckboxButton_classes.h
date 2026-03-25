// WidgetBlueprintGeneratedClass FilterCheckboxButton.FilterCheckboxButton_C
// Size: 0x3f8 (Inherited: 0x320)
struct UFilterCheckboxButton_C : UDesignableUserWidget {
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
	struct UOverlay* Overlay_1; // 0x370(0x08)
	struct FMulticastInlineDelegate OnClicked; // 0x378(0x10)
	struct FMulticastInlineDelegate OnHovered; // 0x388(0x10)
	struct FMulticastInlineDelegate OnUnhovered; // 0x398(0x10)
	struct FMulticastInlineDelegate OnPressed; // 0x3a8(0x10)
	bool Enabled; // 0x3b8(0x01)
	enum class EUMGSequencePlayMode NewVar_1; // 0x3b9(0x01)
	bool DarkHoverEnable; // 0x3ba(0x01)
	bool ShadowEnable; // 0x3bb(0x01)
	char pad_3BC[0x4]; // 0x3bc(0x04)
	struct FMulticastInlineDelegate OnDisabled; // 0x3c0(0x10)
	struct FMulticastInlineDelegate OnReleased; // 0x3d0(0x10)
	struct UTexture2D* Icon; // 0x3e0(0x08)
	struct FLinearColor IconColor; // 0x3e8(0x10)

	void PlayHoverAnimation(bool IsForward); // Function FilterCheckboxButton.FilterCheckboxButton_C.PlayHoverAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PlayOnclickAnimation(bool IsForward); // Function FilterCheckboxButton.FilterCheckboxButton_C.PlayOnclickAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void StopAllAnimationsBlueprint(); // Function FilterCheckboxButton.FilterCheckboxButton_C.StopAllAnimationsBlueprint // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetIsEnabledOverride(bool InIsEnabled); // Function FilterCheckboxButton.FilterCheckboxButton_C.SetIsEnabledOverride // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetImage(); // Function FilterCheckboxButton.FilterCheckboxButton_C.SetImage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetButtonEnabled(bool IsEnabled); // Function FilterCheckboxButton.FilterCheckboxButton_C.SetButtonEnabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetButtonVisibility(enum class ESlateVisibility Visibility); // Function FilterCheckboxButton.FilterCheckboxButton_C.SetButtonVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__RematchButton_K2Node_ComponentBoundEvent_203_OnButtonHoverEvent__DelegateSignature(); // Function FilterCheckboxButton.FilterCheckboxButton_C.BndEvt__RematchButton_K2Node_ComponentBoundEvent_203_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__RematchButton_K2Node_ComponentBoundEvent_257_OnButtonHoverEvent__DelegateSignature(); // Function FilterCheckboxButton.FilterCheckboxButton_C.BndEvt__RematchButton_K2Node_ComponentBoundEvent_257_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function FilterCheckboxButton.FilterCheckboxButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__RematchButton_K2Node_ComponentBoundEvent_476_OnButtonClickedEvent__DelegateSignature(); // Function FilterCheckboxButton.FilterCheckboxButton_C.BndEvt__RematchButton_K2Node_ComponentBoundEvent_476_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__RematchButton_K2Node_ComponentBoundEvent_18_OnButtonPressedEvent__DelegateSignature(); // Function FilterCheckboxButton.FilterCheckboxButton_C.BndEvt__RematchButton_K2Node_ComponentBoundEvent_18_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void OnSynchronizeProperties(); // Function FilterCheckboxButton.FilterCheckboxButton_C.OnSynchronizeProperties // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__Button_K2Node_ComponentBoundEvent_8_OnButtonReleasedEvent__DelegateSignature(); // Function FilterCheckboxButton.FilterCheckboxButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_8_OnButtonReleasedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_FilterCheckboxButton(int32_t EntryPoint); // Function FilterCheckboxButton.FilterCheckboxButton_C.ExecuteUbergraph_FilterCheckboxButton // (Final|UbergraphFunction) // @ game+0x1af5410
	void OnReleased__DelegateSignature(); // Function FilterCheckboxButton.FilterCheckboxButton_C.OnReleased__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnDisabled__DelegateSignature(); // Function FilterCheckboxButton.FilterCheckboxButton_C.OnDisabled__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnPressed__DelegateSignature(); // Function FilterCheckboxButton.FilterCheckboxButton_C.OnPressed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnUnHovered__DelegateSignature(); // Function FilterCheckboxButton.FilterCheckboxButton_C.OnUnHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnHovered__DelegateSignature(); // Function FilterCheckboxButton.FilterCheckboxButton_C.OnHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnClicked__DelegateSignature(); // Function FilterCheckboxButton.FilterCheckboxButton_C.OnClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

