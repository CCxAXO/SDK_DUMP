// WidgetBlueprintGeneratedClass UpgradeCurrencyPurchase.UpgradeCurrencyPurchase_C
// Size: 0x360 (Inherited: 0x320)
struct UUpgradeCurrencyPurchase_C : UUpgradeCurrencyPurchase_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UImage* Background; // 0x328(0x08)
	struct UImage* CenterPiece; // 0x330(0x08)
	struct UTextBlock* Description; // 0x338(0x08)
	struct UImage* Divider; // 0x340(0x08)
	struct UImage* DotL; // 0x348(0x08)
	struct UImage* DotR; // 0x350(0x08)
	struct UHorizontalBox* OfferBox; // 0x358(0x08)

	void SetInfoText(struct FText InfoText); // Function UpgradeCurrencyPurchase.UpgradeCurrencyPurchase_C.SetInfoText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetBundleOffers(struct TArray<struct UUpgradeCurrencyOffer*>& Offers); // Function UpgradeCurrencyPurchase.UpgradeCurrencyPurchase_C.SetBundleOffers // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function UpgradeCurrencyPurchase.UpgradeCurrencyPurchase_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_UpgradeCurrencyPurchase(int32_t EntryPoint); // Function UpgradeCurrencyPurchase.UpgradeCurrencyPurchase_C.ExecuteUbergraph_UpgradeCurrencyPurchase // (Final|UbergraphFunction) // @ game+0x1b42740
};

