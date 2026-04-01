// WidgetBlueprintGeneratedClass BonusShop_Base.BonusShop_Base_C
// Size: 0x348 (Inherited: 0x318)
struct UBonusShop_Base_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UStoreViewControllerV2* StoreViewController; // 0x320(0x08)
	struct UStoreViewModelV2* StoreViewModel; // 0x328(0x08)
	struct UBonusShop_Header_C* HeaderPanel_Base; // 0x330(0x08)
	struct USharedBackButton_C* BackButton_Base; // 0x338(0x08)
	struct UBonusShop_Offers_C* OffersPanel_Base; // 0x340(0x08)

	void DisplayItemDetails(struct FText DiscountPercentText, struct UStoreOffer* Offer, int32_t DiscountedPrice, struct UBonusStoreOfferViewModel* BonusOffer); // Function BonusShop_Base.BonusShop_Base_C.DisplayItemDetails // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ShowOffersAvailablePanel(); // Function BonusShop_Base.BonusShop_Base_C.ShowOffersAvailablePanel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ShowShopNotAvailablePanel(); // Function BonusShop_Base.BonusShop_Base_C.ShowShopNotAvailablePanel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ShowPlayerOwnsEverythingPanel(); // Function BonusShop_Base.BonusShop_Base_C.ShowPlayerOwnsEverythingPanel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InspectBonusItem(struct UBonusStoreOfferViewModel* BonusOffer); // Function BonusShop_Base.BonusShop_Base_C.InspectBonusItem // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetDiscountedPrice(struct UBonusStoreOfferViewModel* BonusOffer, int32_t& DiscountedPrice); // Function BonusShop_Base.BonusShop_Base_C.GetDiscountedPrice // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetBonusShopState(); // Function BonusShop_Base.BonusShop_Base_C.SetBonusShopState // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitShop(); // Function BonusShop_Base.BonusShop_Base_C.InitShop // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void DisplayBonusTimer(struct FDateTime& Expiration Time); // Function BonusShop_Base.BonusShop_Base_C.DisplayBonusTimer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void DisplayBonusOffers(struct TArray<struct UBonusStoreOfferViewModel*>& Offers); // Function BonusShop_Base.BonusShop_Base_C.DisplayBonusOffers // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void TimerExpired(); // Function BonusShop_Base.BonusShop_Base_C.TimerExpired // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function BonusShop_Base.BonusShop_Base_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Back(); // Function BonusShop_Base.BonusShop_Base_C.Back // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_BonusShop_Base(int32_t EntryPoint); // Function BonusShop_Base.BonusShop_Base_C.ExecuteUbergraph_BonusShop_Base // (Final|UbergraphFunction) // @ game+0x1b42740
};

