// BlueprintGeneratedClass VM_PurchaseConfirmButton.VM_PurchaseConfirmButton_C
// Size: 0x138 (Inherited: 0x90)
struct UVM_PurchaseConfirmButton_C : UAresViewModelBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x90(0x08)
	struct FMulticastInlineDelegate OnPurchaseConfirmButtonTextChanged; // 0x98(0x10)
	struct FText PurchaseConfirmButtonText; // 0xa8(0x18)
	struct FMulticastInlineDelegate OnSubmitOrderRequested; // 0xc0(0x10)
	struct FRemainingBalanceInfo RemainingBalance; // 0xd0(0x40)
	bool ButtonDisabled; // 0x110(0x01)
	char pad_111[0x7]; // 0x111(0x07)
	struct FMulticastInlineDelegate OnButtonDisabledChanged; // 0x118(0x10)
	struct FString NewUrlPath; // 0x128(0x10)

	void SetButtonDisabled(bool newDisabledState); // Function VM_PurchaseConfirmButton.VM_PurchaseConfirmButton_C.SetButtonDisabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleClick(); // Function VM_PurchaseConfirmButton.VM_PurchaseConfirmButton_C.HandleClick // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Init From Remaining Balance(struct FRemainingBalanceInfo& RemainingBalance); // Function VM_PurchaseConfirmButton.VM_PurchaseConfirmButton_C.Init From Remaining Balance // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Set Purchase Confirm Button Text(struct FText NewPurchaseConfirmText); // Function VM_PurchaseConfirmButton.VM_PurchaseConfirmButton_C.Set Purchase Confirm Button Text // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void RefreshBroadcast(); // Function VM_PurchaseConfirmButton.VM_PurchaseConfirmButton_C.RefreshBroadcast // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Reset(); // Function VM_PurchaseConfirmButton.VM_PurchaseConfirmButton_C.Reset // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_VM_PurchaseConfirmButton(int32_t EntryPoint); // Function VM_PurchaseConfirmButton.VM_PurchaseConfirmButton_C.ExecuteUbergraph_VM_PurchaseConfirmButton // (Final|UbergraphFunction) // @ game+0x1b42740
	void OnButtonDisabledChanged__DelegateSignature(bool disabledOverride); // Function VM_PurchaseConfirmButton.VM_PurchaseConfirmButton_C.OnButtonDisabledChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnSubmitOrderRequested__DelegateSignature(); // Function VM_PurchaseConfirmButton.VM_PurchaseConfirmButton_C.OnSubmitOrderRequested__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnPurchaseConfirmButtonTextChanged__DelegateSignature(struct FText PurchaseConfirmText); // Function VM_PurchaseConfirmButton.VM_PurchaseConfirmButton_C.OnPurchaseConfirmButtonTextChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

