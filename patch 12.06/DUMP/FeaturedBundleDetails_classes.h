// WidgetBlueprintGeneratedClass FeaturedBundleDetails.FeaturedBundleDetails_C
// Size: 0x3fc (Inherited: 0x380)
struct UFeaturedBundleDetails_C : UFeaturedBundleDetails_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x380(0x08)
	struct UVerticalBox* BundleButton; // 0x388(0x08)
	struct UTextBlock* BundleDiscountText; // 0x390(0x08)
	struct UWidgetSwitcher* BundlePurchaseButtonSwitcher; // 0x398(0x08)
	struct UGenericCarousel_C* GenericCarousel; // 0x3a0(0x08)
	struct UOverlay* GiftButtonOverlay; // 0x3a8(0x08)
	struct UItemDetailsPaneV2_C* ItemDetailsPaneV2; // 0x3b0(0x08)
	struct UImage* OwnedIcon; // 0x3b8(0x08)
	struct UOverlay* OwnedLabel; // 0x3c0(0x08)
	struct UPurchaseButtonV2_C* PurchaseButtonV2; // 0x3c8(0x08)
	struct UHorizontalBox* storeCarousel; // 0x3d0(0x08)
	struct UUniversalHorizontalDivider_C* UniversalHorizontalDivider; // 0x3d8(0x08)
	struct UWBP_Panel_GiftOfferButton_C* WBP_Panel_GiftOfferButton; // 0x3e0(0x08)
	struct UStoreOffer* SelectedOffer; // 0x3e8(0x08)
	struct FName NavParamName_OfferList; // 0x3f0(0x0c)

	void SetGiftableSelectedOffer(); // Function FeaturedBundleDetails.FeaturedBundleDetails_C.SetGiftableSelectedOffer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Set Giftable Type(enum class EGiftingType IsGiftable); // Function FeaturedBundleDetails.FeaturedBundleDetails_C.Set Giftable Type // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SelectListItem(struct UBaseHandle* BaseHandle); // Function FeaturedBundleDetails.FeaturedBundleDetails_C.SelectListItem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetSelectedItemDetails(struct UStoreOffer* Offer); // Function FeaturedBundleDetails.FeaturedBundleDetails_C.SetSelectedItemDetails // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void DisplayBundlePurchase(); // Function FeaturedBundleDetails.FeaturedBundleDetails_C.DisplayBundlePurchase // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdatePurchaseButtonBasedOnOwnership(bool AllItemsOwned); // Function FeaturedBundleDetails.FeaturedBundleDetails_C.UpdatePurchaseButtonBasedOnOwnership // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void AddItemToListDisplayWidget(struct UBaseHandle* BaseHandle, int32_t Quantity); // Function FeaturedBundleDetails.FeaturedBundleDetails_C.AddItemToListDisplayWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetWholesale(bool IndividualPurchaseDisabled); // Function FeaturedBundleDetails.FeaturedBundleDetails_C.SetWholesale // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void DisplayBundlePrices(int32_t CurrentBundleCost, int32_t CurrentBundleDiscount); // Function FeaturedBundleDetails.FeaturedBundleDetails_C.DisplayBundlePrices // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void DisplayItemPurchase(); // Function FeaturedBundleDetails.FeaturedBundleDetails_C.DisplayItemPurchase // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function FeaturedBundleDetails.FeaturedBundleDetails_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__PurchaseButtonV2_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(); // Function FeaturedBundleDetails.FeaturedBundleDetails_C.BndEvt__PurchaseButtonV2_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void BndEvt__GenericCarousel_K2Node_ComponentBoundEvent_0_OnObjectSelected__DelegateSignature(struct UObject* Object); // Function FeaturedBundleDetails.FeaturedBundleDetails_C.BndEvt__GenericCarousel_K2Node_ComponentBoundEvent_0_OnObjectSelected__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function FeaturedBundleDetails.FeaturedBundleDetails_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function FeaturedBundleDetails.FeaturedBundleDetails_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnHidingUI(); // Function FeaturedBundleDetails.FeaturedBundleDetails_C.OnHidingUI // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnUnhidingUI(); // Function FeaturedBundleDetails.FeaturedBundleDetails_C.OnUnhidingUI // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnGiftingScreenClosed(); // Function FeaturedBundleDetails.FeaturedBundleDetails_C.OnGiftingScreenClosed // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BndEvt__FeaturedBundleDetails_WBP_Panel_GiftOfferButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature(struct UOfferDTOList* GiftOfferDTOList); // Function FeaturedBundleDetails.FeaturedBundleDetails_C.BndEvt__FeaturedBundleDetails_WBP_Panel_GiftOfferButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_FeaturedBundleDetails(int32_t EntryPoint); // Function FeaturedBundleDetails.FeaturedBundleDetails_C.ExecuteUbergraph_FeaturedBundleDetails // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

