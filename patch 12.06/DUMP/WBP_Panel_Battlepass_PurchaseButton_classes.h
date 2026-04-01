// WidgetBlueprintGeneratedClass WBP_Panel_Battlepass_PurchaseButton.WBP_Panel_Battlepass_PurchaseButton_C
// Size: 0x420 (Inherited: 0x3e0)
struct UWBP_Panel_Battlepass_PurchaseButton_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UWBP_Button_Price_C* WBP_Panel_battle_pass_upgrade_purchase_button; // 0x3e8(0x08)
	struct FMulticastInlineDelegate OnButtonClicked; // 0x3f0(0x10)
	struct FMulticastInlineDelegate OnButtonHovered; // 0x400(0x10)
	struct FMulticastInlineDelegate OnButtonUnhovered; // 0x410(0x10)

	void Update Focusable(bool IsFocusable); // Function WBP_Panel_Battlepass_PurchaseButton.WBP_Panel_Battlepass_PurchaseButton_C.Update Focusable // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetOwnedButton(struct FText OwnedText, bool ShouldShowCheckmark); // Function WBP_Panel_Battlepass_PurchaseButton.WBP_Panel_Battlepass_PurchaseButton_C.SetOwnedButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetPurchasableButton(); // Function WBP_Panel_Battlepass_PurchaseButton.WBP_Panel_Battlepass_PurchaseButton_C.SetPurchasableButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleCostChanged(struct UCostDTO* NewCost); // Function WBP_Panel_Battlepass_PurchaseButton.WBP_Panel_Battlepass_PurchaseButton_C.HandleCostChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleOfferTextChanged(struct FText NewOfferText); // Function WBP_Panel_Battlepass_PurchaseButton.WBP_Panel_Battlepass_PurchaseButton_C.HandleOfferTextChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleOfferStatusChanged(enum class ChapterBuyButton_Offer_Status NewOfferStatus); // Function WBP_Panel_Battlepass_PurchaseButton.WBP_Panel_Battlepass_PurchaseButton_C.HandleOfferStatusChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandlePurchaseButtonClicked(struct UCommonButtonBase* Button); // Function WBP_Panel_Battlepass_PurchaseButton.WBP_Panel_Battlepass_PurchaseButton_C.HandlePurchaseButtonClicked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__WBP_Panel_Battlepass_PurchaseButton_WBP_Panel_battle_pass_upgrade_purchase_button_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_Battlepass_PurchaseButton.WBP_Panel_Battlepass_PurchaseButton_C.BndEvt__WBP_Panel_Battlepass_PurchaseButton_WBP_Panel_battle_pass_upgrade_purchase_button_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__WBP_Panel_Battlepass_PurchaseButton_WBP_Panel_battle_pass_upgrade_purchase_button_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_Battlepass_PurchaseButton.WBP_Panel_Battlepass_PurchaseButton_C.BndEvt__WBP_Panel_Battlepass_PurchaseButton_WBP_Panel_battle_pass_upgrade_purchase_button_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_Battlepass_PurchaseButton.WBP_Panel_Battlepass_PurchaseButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__WBP_Panel_Battlepass_PurchaseButton_WBP_Panel_battle_pass_upgrade_purchase_button_K2Node_ComponentBoundEvent_2_OnVisibilityChangedEvent__DelegateSignature(enum class ESlateVisibility InVisibility); // Function WBP_Panel_Battlepass_PurchaseButton.WBP_Panel_Battlepass_PurchaseButton_C.BndEvt__WBP_Panel_Battlepass_PurchaseButton_WBP_Panel_battle_pass_upgrade_purchase_button_K2Node_ComponentBoundEvent_2_OnVisibilityChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void Destruct(); // Function WBP_Panel_Battlepass_PurchaseButton.WBP_Panel_Battlepass_PurchaseButton_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function WBP_Panel_Battlepass_PurchaseButton.WBP_Panel_Battlepass_PurchaseButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__WBP_Panel_Battlepass_PurchaseButton_WBP_Panel_battle_pass_upgrade_purchase_button_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(struct UCommonButtonBase* Button); // Function WBP_Panel_Battlepass_PurchaseButton.WBP_Panel_Battlepass_PurchaseButton_C.BndEvt__WBP_Panel_Battlepass_PurchaseButton_WBP_Panel_battle_pass_upgrade_purchase_button_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Panel_Battlepass_PurchaseButton(int32_t EntryPoint); // Function WBP_Panel_Battlepass_PurchaseButton.WBP_Panel_Battlepass_PurchaseButton_C.ExecuteUbergraph_WBP_Panel_Battlepass_PurchaseButton // (Final|UbergraphFunction) // @ game+0x1b42740
	void OnButtonUnhovered__DelegateSignature(); // Function WBP_Panel_Battlepass_PurchaseButton.WBP_Panel_Battlepass_PurchaseButton_C.OnButtonUnhovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnButtonHovered__DelegateSignature(); // Function WBP_Panel_Battlepass_PurchaseButton.WBP_Panel_Battlepass_PurchaseButton_C.OnButtonHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnButtonClicked__DelegateSignature(); // Function WBP_Panel_Battlepass_PurchaseButton.WBP_Panel_Battlepass_PurchaseButton_C.OnButtonClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

