// WidgetBlueprintGeneratedClass FeaturedBundleDetails_Base.FeaturedBundleDetails_Base_C
// Size: 0x380 (Inherited: 0x318)
struct UFeaturedBundleDetails_Base_C : UUserWidget {
	struct UBundleViewModel* BundleToShow; // 0x318(0x08)
	struct TMap<struct UAresBasePrimaryDataAsset*, struct UStoreOffer*> BaseDataAssetToOfferMap; // 0x320(0x50)
	struct TArray<struct UBaseHandle*> BundleItemHandles; // 0x370(0x10)

	void Set Giftable Type(enum class EGiftingType IsGiftable); // Function FeaturedBundleDetails_Base.FeaturedBundleDetails_Base_C.Set Giftable Type // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SelectListItem(struct UBaseHandle* BaseHandle); // Function FeaturedBundleDetails_Base.FeaturedBundleDetails_Base_C.SelectListItem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void DisplayBundlePurchase(); // Function FeaturedBundleDetails_Base.FeaturedBundleDetails_Base_C.DisplayBundlePurchase // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void DisplayBundlePrices(int32_t CurrentBundleCost, int32_t CurrentBundleDiscount); // Function FeaturedBundleDetails_Base.FeaturedBundleDetails_Base_C.DisplayBundlePrices // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetWholesale(bool IndividualPurchaseDisabled); // Function FeaturedBundleDetails_Base.FeaturedBundleDetails_Base_C.SetWholesale // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void AreAllBundleItemsOwned(bool& AreAllItemsOwned); // Function FeaturedBundleDetails_Base.FeaturedBundleDetails_Base_C.AreAllBundleItemsOwned // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetHandleSortValue(struct UObject* HandleObject, int32_t& Value); // Function FeaturedBundleDetails_Base.FeaturedBundleDetails_Base_C.GetHandleSortValue // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void AddTotemHandle(struct UTotemHandle* TotemHandle); // Function FeaturedBundleDetails_Base.FeaturedBundleDetails_Base_C.AddTotemHandle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void AddPlayerTitleHandle(struct UPlayerTitleHandle* Handle); // Function FeaturedBundleDetails_Base.FeaturedBundleDetails_Base_C.AddPlayerTitleHandle // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BundleItemSorter(struct UObject* A, struct UObject* B, bool& ABeforeB); // Function FeaturedBundleDetails_Base.FeaturedBundleDetails_Base_C.BundleItemSorter // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void AddSprayHandle(struct USprayHandle* Handle); // Function FeaturedBundleDetails_Base.FeaturedBundleDetails_Base_C.AddSprayHandle // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void AddCharacterHandle(struct UCharacterHandle* Handle); // Function FeaturedBundleDetails_Base.FeaturedBundleDetails_Base_C.AddCharacterHandle // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void AddPlayerCardHandle(struct UPlayerCardHandle* Handle); // Function FeaturedBundleDetails_Base.FeaturedBundleDetails_Base_C.AddPlayerCardHandle // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void AddEquipCharmLevelHandle(struct UEquippableCharmLevelHandle* Handle); // Function FeaturedBundleDetails_Base.FeaturedBundleDetails_Base_C.AddEquipCharmLevelHandle // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void AddEquipSkinLevelHandle(struct UEquippableSkinLevelHandle* Handle); // Function FeaturedBundleDetails_Base.FeaturedBundleDetails_Base_C.AddEquipSkinLevelHandle // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void AddEquipSkinHandle(struct UEquippableSkinHandle* Handle); // Function FeaturedBundleDetails_Base.FeaturedBundleDetails_Base_C.AddEquipSkinHandle // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void AddToHandleMapping(struct UBaseHandle* Handle); // Function FeaturedBundleDetails_Base.FeaturedBundleDetails_Base_C.AddToHandleMapping // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void AddItemToListDisplayWidget(struct UBaseHandle* BaseHandle, int32_t Quantity); // Function FeaturedBundleDetails_Base.FeaturedBundleDetails_Base_C.AddItemToListDisplayWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GenerateStoreHandlesFromBundle(); // Function FeaturedBundleDetails_Base.FeaturedBundleDetails_Base_C.GenerateStoreHandlesFromBundle // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleItemOwnershipChanged(); // Function FeaturedBundleDetails_Base.FeaturedBundleDetails_Base_C.HandleItemOwnershipChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void CalculateAndDisplayBundlePrices(); // Function FeaturedBundleDetails_Base.FeaturedBundleDetails_Base_C.CalculateAndDisplayBundlePrices // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetBundle(struct UBundleViewModel* NewBundle); // Function FeaturedBundleDetails_Base.FeaturedBundleDetails_Base_C.SetBundle // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdatePurchaseButtonBasedOnOwnership(bool AllItemsOwned); // Function FeaturedBundleDetails_Base.FeaturedBundleDetails_Base_C.UpdatePurchaseButtonBasedOnOwnership // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void DisplayItemPurchase(); // Function FeaturedBundleDetails_Base.FeaturedBundleDetails_Base_C.DisplayItemPurchase // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

