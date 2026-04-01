// WidgetBlueprintGeneratedClass BonusShop_Offers.BonusShop_Offers_C
// Size: 0x358 (Inherited: 0x318)
struct UBonusShop_Offers_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UHorizontalBox* OffersBox; // 0x320(0x08)
	double OfferLeftPadding; // 0x328(0x08)
	struct FMulticastInlineDelegate OnIndividualBonusShopItemClicked; // 0x330(0x10)
	struct FMulticastInlineDelegate OnIndividualBonusShopItemRevealed; // 0x340(0x10)
	double IntroAnimationDelayOffset; // 0x350(0x08)

	void FillInThanksOffers(); // Function BonusShop_Offers.BonusShop_Offers_C.FillInThanksOffers // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void DisplayOffers(struct TArray<struct UBonusStoreOfferViewModel*>& Offers); // Function BonusShop_Offers.BonusShop_Offers_C.DisplayOffers // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetRewardFromBonusOffer(struct UBonusStoreOfferViewModel* BonusOffer, struct URewardModel*& Reward); // Function BonusShop_Offers.BonusShop_Offers_C.GetRewardFromBonusOffer // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void IndividualBonusShopItemRevealed(struct UBonusStoreOfferViewModel* BonusShopOffer); // Function BonusShop_Offers.BonusShop_Offers_C.IndividualBonusShopItemRevealed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void IndividualBonusShopItemClicked(struct UBonusStoreOfferViewModel* BonusOffer); // Function BonusShop_Offers.BonusShop_Offers_C.IndividualBonusShopItemClicked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void AddStyledOffer(bool IsFirstOffer, struct UBonusShop_Offer_C* BonusOffer); // Function BonusShop_Offers.BonusShop_Offers_C.AddStyledOffer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void DisplayOffersWithDelay(struct TArray<struct UBonusStoreOfferViewModel*>& Offers); // Function BonusShop_Offers.BonusShop_Offers_C.DisplayOffersWithDelay // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function BonusShop_Offers.BonusShop_Offers_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_BonusShop_Offers(int32_t EntryPoint); // Function BonusShop_Offers.BonusShop_Offers_C.ExecuteUbergraph_BonusShop_Offers // (Final|UbergraphFunction) // @ game+0x1af5410
	void OnIndividualBonusShopItemRevealed__DelegateSignature(struct UBonusStoreOfferViewModel* BonusStoreOffer); // Function BonusShop_Offers.BonusShop_Offers_C.OnIndividualBonusShopItemRevealed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnIndividualBonusShopItemClicked__DelegateSignature(struct UBonusStoreOfferViewModel* BonusOffer); // Function BonusShop_Offers.BonusShop_Offers_C.OnIndividualBonusShopItemClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

