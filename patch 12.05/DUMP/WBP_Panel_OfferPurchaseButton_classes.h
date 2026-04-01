// WidgetBlueprintGeneratedClass WBP_Panel_OfferPurchaseButton.WBP_Panel_OfferPurchaseButton_C
// Size: 0x41a (Inherited: 0x3e0)
struct UWBP_Panel_OfferPurchaseButton_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UWBP_Button_Price_C* ItemPurchaseButton; // 0x3e8(0x08)
	struct UVM_StoreOffer_C* VM_StoreOffer; // 0x3f0(0x08)
	struct UOfferDTO* IndividualOfferDTO; // 0x3f8(0x08)
	struct UVM_InventoryList_C* VM_InventoryList; // 0x400(0x08)
	struct FMulticastInlineDelegate OnOfferButtonClicked; // 0x408(0x10)
	bool DisplayButtonText; // 0x418(0x01)
	bool DisplayDiscountText; // 0x419(0x01)

	void UpdateButtonTextVisibility(bool DisplayButtonText); // Function WBP_Panel_OfferPurchaseButton.WBP_Panel_OfferPurchaseButton_C.UpdateButtonTextVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateDiscountTextVisibility(bool DisplayDiscountText); // Function WBP_Panel_OfferPurchaseButton.WBP_Panel_OfferPurchaseButton_C.UpdateDiscountTextVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleIsItemListOwned(bool IsListOwnedIn); // Function WBP_Panel_OfferPurchaseButton.WBP_Panel_OfferPurchaseButton_C.HandleIsItemListOwned // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleShouldShowDiscountInformationChanged(bool ShouldShowDiscountInformation); // Function WBP_Panel_OfferPurchaseButton.WBP_Panel_OfferPurchaseButton_C.HandleShouldShowDiscountInformationChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateDiscountPercentVisibility(bool DisplayDiscountPercent); // Function WBP_Panel_OfferPurchaseButton.WBP_Panel_OfferPurchaseButton_C.UpdateDiscountPercentVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleCostListChanged(struct TArray<struct FOfferCostWithDiscountInfo>& CostList); // Function WBP_Panel_OfferPurchaseButton.WBP_Panel_OfferPurchaseButton_C.HandleCostListChanged // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateVisibility(); // Function WBP_Panel_OfferPurchaseButton.WBP_Panel_OfferPurchaseButton_C.UpdateVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandIsValidDataChanged(bool NewValue); // Function WBP_Panel_OfferPurchaseButton.WBP_Panel_OfferPurchaseButton_C.HandIsValidDataChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Update Focusable(bool IsFocusable); // Function WBP_Panel_OfferPurchaseButton.WBP_Panel_OfferPurchaseButton_C.Update Focusable // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitFromOfferDTO(struct UOfferDTO* OfferDTO); // Function WBP_Panel_OfferPurchaseButton.WBP_Panel_OfferPurchaseButton_C.InitFromOfferDTO // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleButtonClicked(struct UCommonButtonBase* Button); // Function WBP_Panel_OfferPurchaseButton.WBP_Panel_OfferPurchaseButton_C.HandleButtonClicked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandeIsBundleChanged(bool IsBundle); // Function WBP_Panel_OfferPurchaseButton.WBP_Panel_OfferPurchaseButton_C.HandeIsBundleChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleRewardListChanged(struct TArray<struct FStoreOfferReward>& NewRewardsList); // Function WBP_Panel_OfferPurchaseButton.WBP_Panel_OfferPurchaseButton_C.HandleRewardListChanged // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	struct UWidget* BP_GetDesiredFocusTarget(); // Function WBP_Panel_OfferPurchaseButton.WBP_Panel_OfferPurchaseButton_C.BP_GetDesiredFocusTarget // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1af5410
	void InitViewModels(); // Function WBP_Panel_OfferPurchaseButton.WBP_Panel_OfferPurchaseButton_C.InitViewModels // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindEvents(bool BindEvents); // Function WBP_Panel_OfferPurchaseButton.WBP_Panel_OfferPurchaseButton_C.BindEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void K2_BindToViewModel(); // Function WBP_Panel_OfferPurchaseButton.WBP_Panel_OfferPurchaseButton_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Destruct(); // Function WBP_Panel_OfferPurchaseButton.WBP_Panel_OfferPurchaseButton_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_OfferPurchaseButton.WBP_Panel_OfferPurchaseButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_Panel_OfferPurchaseButton_ItemPurchaseButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_OfferPurchaseButton.WBP_Panel_OfferPurchaseButton_C.BndEvt__WBP_Panel_OfferPurchaseButton_ItemPurchaseButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_Panel_OfferPurchaseButton_ItemPurchaseButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_OfferPurchaseButton.WBP_Panel_OfferPurchaseButton_C.BndEvt__WBP_Panel_OfferPurchaseButton_ItemPurchaseButton_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Panel_OfferPurchaseButton(int32_t EntryPoint); // Function WBP_Panel_OfferPurchaseButton.WBP_Panel_OfferPurchaseButton_C.ExecuteUbergraph_WBP_Panel_OfferPurchaseButton // (Final|UbergraphFunction) // @ game+0x1af5410
	void OnOfferButtonClicked__DelegateSignature(struct UOfferDTO* OfferDTO); // Function WBP_Panel_OfferPurchaseButton.WBP_Panel_OfferPurchaseButton_C.OnOfferButtonClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

