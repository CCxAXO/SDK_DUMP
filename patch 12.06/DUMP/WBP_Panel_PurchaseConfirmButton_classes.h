// WidgetBlueprintGeneratedClass WBP_Panel_PurchaseConfirmButton.WBP_Panel_PurchaseConfirmButton_C
// Size: 0x1b68 (Inherited: 0x1ae0)
struct UWBP_Panel_PurchaseConfirmButton_C : UAresClickablePanel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1ae0(0x08)
	struct UWBP_Button_Primary_C* WBP_Button_Primary; // 0x1ae8(0x08)
	struct UVM_StoreOffer_C* VM_StoreOffer; // 0x1af0(0x08)
	struct UVM_InventoryList_C* VM_InventoryList; // 0x1af8(0x08)
	struct UVM_Reward_C* VM_Reward; // 0x1b00(0x08)
	struct UVM_PurchaseConfirmButton_C* VM_PurchaseConfirmButton; // 0x1b08(0x08)
	struct FText OwnedDisplayText; // 0x1b10(0x18)
	bool IsOwned; // 0x1b28(0x01)
	char pad_1B29[0x7]; // 0x1b29(0x07)
	struct FText PurchaseConfirmButtonText; // 0x1b30(0x18)
	bool isButtonDisabled; // 0x1b48(0x01)
	char pad_1B49[0x7]; // 0x1b49(0x07)
	struct UStoreTelemetryViewModel* VM_StoreTelemetry; // 0x1b50(0x08)
	struct FMulticastInlineDelegate OnRequestSubmitOrder; // 0x1b58(0x10)

	void SendPurchaseConfirmTelemetryEvent(); // Function WBP_Panel_PurchaseConfirmButton.WBP_Panel_PurchaseConfirmButton_C.SendPurchaseConfirmTelemetryEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetDesiredFocusTarget(struct UWidget*& Widget); // Function WBP_Panel_PurchaseConfirmButton.WBP_Panel_PurchaseConfirmButton_C.GetDesiredFocusTarget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void OnButtonDisabledChange(bool enabledOverride); // Function WBP_Panel_PurchaseConfirmButton.WBP_Panel_PurchaseConfirmButton_C.OnButtonDisabledChange // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateButtonEnabled(); // Function WBP_Panel_PurchaseConfirmButton.WBP_Panel_PurchaseConfirmButton_C.UpdateButtonEnabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetShouldBeEnabled(bool& IsEnabled); // Function WBP_Panel_PurchaseConfirmButton.WBP_Panel_PurchaseConfirmButton_C.GetShouldBeEnabled // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void SetPurchaseConfirmButtonText(struct FText PurchaseConfirmButtonText); // Function WBP_Panel_PurchaseConfirmButton.WBP_Panel_PurchaseConfirmButton_C.SetPurchaseConfirmButtonText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindEvents(bool Bind); // Function WBP_Panel_PurchaseConfirmButton.WBP_Panel_PurchaseConfirmButton_C.BindEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitFromOfferDTO(struct UOfferDTO* New Offer DTO); // Function WBP_Panel_PurchaseConfirmButton.WBP_Panel_PurchaseConfirmButton_C.InitFromOfferDTO // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnPurchaseConfirmButtonTextChanged(struct FText PurchaseConfirmText); // Function WBP_Panel_PurchaseConfirmButton.WBP_Panel_PurchaseConfirmButton_C.OnPurchaseConfirmButtonTextChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnSubmitOrderRequested(); // Function WBP_Panel_PurchaseConfirmButton.WBP_Panel_PurchaseConfirmButton_C.OnSubmitOrderRequested // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnIsOwnedChanged(bool IsOwned); // Function WBP_Panel_PurchaseConfirmButton.WBP_Panel_PurchaseConfirmButton_C.OnIsOwnedChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitViewModels(); // Function WBP_Panel_PurchaseConfirmButton.WBP_Panel_PurchaseConfirmButton_C.InitViewModels // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_PurchaseConfirmButton.WBP_Panel_PurchaseConfirmButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void K2_BindToViewModel(); // Function WBP_Panel_PurchaseConfirmButton.WBP_Panel_PurchaseConfirmButton_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__WBP_Panel_PurchaseConfirmButton_WBP_Button_Primary_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_PurchaseConfirmButton.WBP_Panel_PurchaseConfirmButton_C.BndEvt__WBP_Panel_PurchaseConfirmButton_WBP_Button_Primary_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void Destruct(); // Function WBP_Panel_PurchaseConfirmButton.WBP_Panel_PurchaseConfirmButton_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Panel_PurchaseConfirmButton(int32_t EntryPoint); // Function WBP_Panel_PurchaseConfirmButton.WBP_Panel_PurchaseConfirmButton_C.ExecuteUbergraph_WBP_Panel_PurchaseConfirmButton // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
	void OnRequestSubmitOrder__DelegateSignature(struct UOfferDTO* InOfferDTO); // Function WBP_Panel_PurchaseConfirmButton.WBP_Panel_PurchaseConfirmButton_C.OnRequestSubmitOrder__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

