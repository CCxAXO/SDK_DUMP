// WidgetBlueprintGeneratedClass UpgradeCurrencyBundle.UpgradeCurrencyBundle_C
// Size: 0x378 (Inherited: 0x338)
struct UUpgradeCurrencyBundle_C : UUpgradeCurrencyBundle_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x338(0x08)
	struct UWidgetAnimation* hover; // 0x340(0x08)
	struct UCurrencyAmountWidget_C* CurrencyAmountWidget; // 0x348(0x08)
	struct UImage* CurrencyImage; // 0x350(0x08)
	struct UTextBlock* Description; // 0x358(0x08)
	struct UTextBlock* DiscountText; // 0x360(0x08)
	struct UButton* PurchaseButton; // 0x368(0x08)
	struct UTextBlock* RPAmount; // 0x370(0x08)

	void SetOfferDisplay(struct UTexture* CurrencyImage, struct FText DiscountPercentAmount, struct FText RPAmount, struct FText OfferDescription, struct UCurrencyDataAsset* CostCurrency, int32_t CostAmount); // Function UpgradeCurrencyBundle.UpgradeCurrencyBundle_C.SetOfferDisplay // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UpgradeCurrencyBundle.UpgradeCurrencyBundle_C.BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function UpgradeCurrencyBundle.UpgradeCurrencyBundle_C.BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function UpgradeCurrencyBundle.UpgradeCurrencyBundle_C.BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_UpgradeCurrencyBundle(int32_t EntryPoint); // Function UpgradeCurrencyBundle.UpgradeCurrencyBundle_C.ExecuteUbergraph_UpgradeCurrencyBundle // (Final|UbergraphFunction) // @ game+0x1af5410
};

