// WidgetBlueprintGeneratedClass SharedDropdownMenuButton.SharedDropdownMenuButton_C
// Size: 0x3e0 (Inherited: 0x358)
struct USharedDropdownMenuButton_C : UAresContextMenuActionBaseWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x358(0x08)
	struct UTextBlock* ButtonText; // 0x360(0x08)
	struct UButton* OptionButton; // 0x368(0x08)
	struct FText OptionText; // 0x370(0x18)
	struct FMulticastInlineDelegate OnHover; // 0x388(0x10)
	struct FMulticastInlineDelegate onUnhover; // 0x398(0x10)
	struct FMulticastInlineDelegate OnPressed; // 0x3a8(0x10)
	struct FMulticastInlineDelegate OnReleased; // 0x3b8(0x10)
	bool IsEnabled; // 0x3c8(0x01)
	char pad_3C9[0x7]; // 0x3c9(0x07)
	struct FMulticastInlineDelegate OnActionTriggered_1; // 0x3d0(0x10)

	void BndEvt__OptionButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function SharedDropdownMenuButton.SharedDropdownMenuButton_C.BndEvt__OptionButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__OptionButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature(); // Function SharedDropdownMenuButton.SharedDropdownMenuButton_C.BndEvt__OptionButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__OptionButton_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature(); // Function SharedDropdownMenuButton.SharedDropdownMenuButton_C.BndEvt__OptionButton_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__OptionButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature(); // Function SharedDropdownMenuButton.SharedDropdownMenuButton_C.BndEvt__OptionButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__OptionButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature(); // Function SharedDropdownMenuButton.SharedDropdownMenuButton_C.BndEvt__OptionButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function SharedDropdownMenuButton.SharedDropdownMenuButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnInit(struct FText& Text, struct UTexture2D* IconTexture, bool Enabled); // Function SharedDropdownMenuButton.SharedDropdownMenuButton_C.OnInit // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function SharedDropdownMenuButton.SharedDropdownMenuButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_SharedDropdownMenuButton(int32_t EntryPoint); // Function SharedDropdownMenuButton.SharedDropdownMenuButton_C.ExecuteUbergraph_SharedDropdownMenuButton // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
	void OnActionTriggered_0__DelegateSignature(); // Function SharedDropdownMenuButton.SharedDropdownMenuButton_C.OnActionTriggered_0__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnReleased__DelegateSignature(); // Function SharedDropdownMenuButton.SharedDropdownMenuButton_C.OnReleased__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnPressed__DelegateSignature(); // Function SharedDropdownMenuButton.SharedDropdownMenuButton_C.OnPressed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnUnhover__DelegateSignature(); // Function SharedDropdownMenuButton.SharedDropdownMenuButton_C.OnUnhover__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnHover__DelegateSignature(); // Function SharedDropdownMenuButton.SharedDropdownMenuButton_C.OnHover__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

