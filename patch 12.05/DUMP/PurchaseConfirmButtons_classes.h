// WidgetBlueprintGeneratedClass PurchaseConfirmButtons.PurchaseConfirmButtons_C
// Size: 0x35a (Inherited: 0x318)
struct UPurchaseConfirmButtons_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UCurrencyAmountWidget_C* FinalPriceOnButton; // 0x320(0x08)
	struct UOverlay* PurchaseCurrencyBox; // 0x328(0x08)
	struct USharedButtonMaster_C* PurchaseCurrencyButton; // 0x330(0x08)
	struct USharedButtonMaster_C* UnlockButtonShared; // 0x338(0x08)
	struct FMulticastInlineDelegate OnUnlockClicked; // 0x340(0x10)
	struct UPurchaseModalViewModel* ViewModel; // 0x350(0x08)
	bool UnlockDisabled; // 0x358(0x01)
	bool IsVPPurchase; // 0x359(0x01)

	void CanAffordPurchase(int32_t& RemainingWalletBalance, bool& CanAffordPurchase); // Function PurchaseConfirmButtons.PurchaseConfirmButtons_C.CanAffordPurchase // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void OnWalletUpdated(); // Function PurchaseConfirmButtons.PurchaseConfirmButtons_C.OnWalletUpdated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnConfigUpdate(struct FName& ConfigName); // Function PurchaseConfirmButtons.PurchaseConfirmButtons_C.OnConfigUpdate // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetIsVPPurchase(); // Function PurchaseConfirmButtons.PurchaseConfirmButtons_C.SetIsVPPurchase // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ShowCurrencyPurchase(); // Function PurchaseConfirmButtons.PurchaseConfirmButtons_C.ShowCurrencyPurchase // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateCurrencyPurchaseVisibility(); // Function PurchaseConfirmButtons.PurchaseConfirmButtons_C.UpdateCurrencyPurchaseVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateUnlockButtonStatus(); // Function PurchaseConfirmButtons.PurchaseConfirmButtons_C.UpdateUnlockButtonStatus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetUnlockDisabled(bool IsDisabled); // Function PurchaseConfirmButtons.PurchaseConfirmButtons_C.SetUnlockDisabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Initialize(struct UPurchaseModalViewModel* PurchaseModalViewModel); // Function PurchaseConfirmButtons.PurchaseConfirmButtons_C.Initialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__UnlockButtonShared_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(); // Function PurchaseConfirmButtons.PurchaseConfirmButtons_C.BndEvt__UnlockButtonShared_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__PurchaseCurrencyButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(); // Function PurchaseConfirmButtons.PurchaseConfirmButtons_C.BndEvt__PurchaseCurrencyButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_PurchaseConfirmButtons(int32_t EntryPoint); // Function PurchaseConfirmButtons.PurchaseConfirmButtons_C.ExecuteUbergraph_PurchaseConfirmButtons // (Final|UbergraphFunction) // @ game+0x1af5410
	void OnUnlockClicked__DelegateSignature(); // Function PurchaseConfirmButtons.PurchaseConfirmButtons_C.OnUnlockClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

