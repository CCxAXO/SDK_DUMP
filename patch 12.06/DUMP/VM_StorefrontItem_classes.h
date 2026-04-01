// BlueprintGeneratedClass VM_StorefrontItem.VM_StorefrontItem_C
// Size: 0x2c8 (Inherited: 0x90)
struct UVM_StorefrontItem_C : UAresViewModelBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x90(0x08)
	struct FText BundleName; // 0x98(0x18)
	int32_t BundlePrice; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
	struct UTexture2D* BundleBackgroundImagePurchase; // 0xb8(0x08)
	struct UTexture2D* BundleBackgroundImage; // 0xc0(0x08)
	struct UTexture2D* ConvergedBundleBackgroundImage; // 0xc8(0x08)
	struct UTexture2D* VerticalPromoImage; // 0xd0(0x08)
	struct FMulticastInlineDelegate OnBundleNameChanged; // 0xd8(0x10)
	struct FMulticastInlineDelegate OnBundlePriceChanged; // 0xe8(0x10)
	struct FMulticastInlineDelegate OnBundleBackgroundImageChanged; // 0xf8(0x10)
	struct FMulticastInlineDelegate OnConvergedBundleBackgroundImageChanged; // 0x108(0x10)
	struct FMulticastInlineDelegate OnVerticalPromoImageChanged; // 0x118(0x10)
	struct FDateTime BundleOfferExpiryDateTime; // 0x128(0x08)
	struct FMulticastInlineDelegate OnBundleOfferExpiryDateTimeChanged; // 0x130(0x10)
	struct FMulticastInlineDelegate OnBundleSubtitleChanged; // 0x140(0x10)
	struct FText BundleSubtitle; // 0x150(0x18)
	struct FMulticastInlineDelegate OnBundleDescriptionChanged; // 0x168(0x10)
	struct FText BundleDescription; // 0x178(0x18)
	struct FMulticastInlineDelegate OnBundleOfferSelected; // 0x190(0x10)
	struct UTexture* LogoIcon; // 0x1a0(0x08)
	struct FMulticastInlineDelegate OnLogoIconChanged; // 0x1a8(0x10)
	struct FWidgetTransform LogoIconTransform; // 0x1b8(0x38)
	struct FMulticastInlineDelegate OnLogoIconTransformChanged; // 0x1f0(0x10)
	struct FMulticastInlineDelegate OnBundleBackgroundImagePurchaseChanged; // 0x200(0x10)
	bool UseAdditionalContext; // 0x210(0x01)
	char pad_211[0x7]; // 0x211(0x07)
	struct FText BundleExtraDescription; // 0x218(0x18)
	struct FMulticastInlineDelegate OnBundleExtraDescriptionChanged; // 0x230(0x10)
	struct FMulticastInlineDelegate OnUseAdditionalContextChanged; // 0x240(0x10)
	struct FText PromoExtraDescription; // 0x250(0x18)
	struct FMulticastInlineDelegate OnPromoExtraDescriptionChanged; // 0x268(0x10)
	struct UStorefrontItemHandle* StorefrontItemHandle; // 0x278(0x08)
	struct FMulticastInlineDelegate OnStorefrontItemHandleChanged; // 0x280(0x10)
	struct UMaterialInterface* BundleBackgroundMaterial; // 0x290(0x08)
	struct UFeaturedTileEntryViewModel* FeaturedTileEntry; // 0x298(0x08)
	struct FMulticastInlineDelegate OnCtaOfferSelected; // 0x2a0(0x10)
	enum class EOfferDTOType OfferType; // 0x2b0(0x01)
	char pad_2B1[0x7]; // 0x2b1(0x07)
	struct FMulticastInlineDelegate OnOfferTypeChanged; // 0x2b8(0x10)

	void SetOfferType(enum class EOfferDTOType InOfferType); // Function VM_StorefrontItem.VM_StorefrontItem_C.SetOfferType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Init from Featured Tile Entry(struct UFeaturedTileEntryViewModel* InFeaturedTileEntry); // Function VM_StorefrontItem.VM_StorefrontItem_C.Init from Featured Tile Entry // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetStorefrontItemHandle(struct UStorefrontItemHandle* NewStorefrontItemHandle); // Function VM_StorefrontItem.VM_StorefrontItem_C.SetStorefrontItemHandle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetPromoExtraDescription(struct FText InPromoExtraDescription); // Function VM_StorefrontItem.VM_StorefrontItem_C.SetPromoExtraDescription // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetUseAdditionalContext(bool InUseAdditionalContext); // Function VM_StorefrontItem.VM_StorefrontItem_C.SetUseAdditionalContext // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetBundleExtraDescription(struct FText InBundleExtraDescription); // Function VM_StorefrontItem.VM_StorefrontItem_C.SetBundleExtraDescription // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitFromStorefrontItem(struct UStorefrontItemDataAsset* StorefrontItem); // Function VM_StorefrontItem.VM_StorefrontItem_C.InitFromStorefrontItem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetLogoIconTransform(struct FWidgetTransform InLogoIconTransform); // Function VM_StorefrontItem.VM_StorefrontItem_C.SetLogoIconTransform // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetLogoIcon(struct UTexture* LogoIcon); // Function VM_StorefrontItem.VM_StorefrontItem_C.SetLogoIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetSelectedBundleOffer(); // Function VM_StorefrontItem.VM_StorefrontItem_C.SetSelectedBundleOffer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitFromBundleObject(struct UBundleViewModel*& InBundleObject); // Function VM_StorefrontItem.VM_StorefrontItem_C.InitFromBundleObject // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetBundleDescription(struct FText InBundleDescription); // Function VM_StorefrontItem.VM_StorefrontItem_C.SetBundleDescription // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetBundleSubtitle(struct FText InBundleSubtitle); // Function VM_StorefrontItem.VM_StorefrontItem_C.SetBundleSubtitle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetBundleImagePurchase(struct UTexture2D* In Bundle Image Purchase); // Function VM_StorefrontItem.VM_StorefrontItem_C.SetBundleImagePurchase // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void CalculateBundlePrice(); // Function VM_StorefrontItem.VM_StorefrontItem_C.CalculateBundlePrice // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Refresh(); // Function VM_StorefrontItem.VM_StorefrontItem_C.Refresh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnStorefrontItemLoaded(struct UStorefrontItemHandle* StorefrontItemHandle); // Function VM_StorefrontItem.VM_StorefrontItem_C.OnStorefrontItemLoaded // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetVerticalPromoImage(struct UTexture2D* InVerticalPromoImage); // Function VM_StorefrontItem.VM_StorefrontItem_C.SetVerticalPromoImage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetConvergedBundleImage(struct UTexture2D* InBundleImage, struct UMaterialInterface* BundleBackgroundMaterial); // Function VM_StorefrontItem.VM_StorefrontItem_C.SetConvergedBundleImage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetBundleImage(struct UTexture2D* InBundleImage, struct UMaterialInterface* BundleBackgroundMaterial); // Function VM_StorefrontItem.VM_StorefrontItem_C.SetBundleImage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetBundlePrice(int32_t InBundlePrice); // Function VM_StorefrontItem.VM_StorefrontItem_C.SetBundlePrice // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetBundleName(struct FText InBundleName); // Function VM_StorefrontItem.VM_StorefrontItem_C.SetBundleName // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetBundleOfferExpiryDateTime(struct FDateTime InBundleOfferExpiryDateTime); // Function VM_StorefrontItem.VM_StorefrontItem_C.SetBundleOfferExpiryDateTime // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnViewModelCreated(); // Function VM_StorefrontItem.VM_StorefrontItem_C.OnViewModelCreated // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void RefreshBroadcast(); // Function VM_StorefrontItem.VM_StorefrontItem_C.RefreshBroadcast // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Reset(); // Function VM_StorefrontItem.VM_StorefrontItem_C.Reset // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_VM_StorefrontItem(int32_t EntryPoint); // Function VM_StorefrontItem.VM_StorefrontItem_C.ExecuteUbergraph_VM_StorefrontItem // (Final|UbergraphFunction) // @ game+0x1b42740
	void OnOfferTypeChanged__DelegateSignature(enum class EOfferDTOType OfferType); // Function VM_StorefrontItem.VM_StorefrontItem_C.OnOfferTypeChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnCtaOfferSelected__DelegateSignature(struct UCtaViewModel* SelectedCtaOffer); // Function VM_StorefrontItem.VM_StorefrontItem_C.OnCtaOfferSelected__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnConvergedBundleBackgroundImageChanged__DelegateSignature(struct UTexture2D* InBundleImage, struct UMaterialInterface* BundleBackgroundMaterial); // Function VM_StorefrontItem.VM_StorefrontItem_C.OnConvergedBundleBackgroundImageChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnStorefrontItemHandleChanged__DelegateSignature(struct UStorefrontItemHandle* NewStorefrontItemHandle); // Function VM_StorefrontItem.VM_StorefrontItem_C.OnStorefrontItemHandleChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnPromoExtraDescriptionChanged__DelegateSignature(struct FText PromoExtraDescription); // Function VM_StorefrontItem.VM_StorefrontItem_C.OnPromoExtraDescriptionChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnUseAdditionalContextChanged__DelegateSignature(bool UseAdditionalContext); // Function VM_StorefrontItem.VM_StorefrontItem_C.OnUseAdditionalContextChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnBundleExtraDescriptionChanged__DelegateSignature(struct FText BundleExtraDescription); // Function VM_StorefrontItem.VM_StorefrontItem_C.OnBundleExtraDescriptionChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnVerticalPromoImageChanged__DelegateSignature(struct UTexture2D* InVerticalPromoImage); // Function VM_StorefrontItem.VM_StorefrontItem_C.OnVerticalPromoImageChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnBundleBackgroundImagePurchaseChanged__DelegateSignature(struct UTexture2D* BundleBackgroundImagePurchase); // Function VM_StorefrontItem.VM_StorefrontItem_C.OnBundleBackgroundImagePurchaseChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnLogoIconTransformChanged__DelegateSignature(struct FWidgetTransform InLogoIconTransform); // Function VM_StorefrontItem.VM_StorefrontItem_C.OnLogoIconTransformChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnLogoIconChanged__DelegateSignature(struct UTexture* LogoIcon); // Function VM_StorefrontItem.VM_StorefrontItem_C.OnLogoIconChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnBundleOfferSelected__DelegateSignature(struct UBundleViewModel* SelectedBundleOffer); // Function VM_StorefrontItem.VM_StorefrontItem_C.OnBundleOfferSelected__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnBundleDescriptionChanged__DelegateSignature(struct FText BundleDescription); // Function VM_StorefrontItem.VM_StorefrontItem_C.OnBundleDescriptionChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnBundleSubtitleChanged__DelegateSignature(struct FText BundleSubtitle); // Function VM_StorefrontItem.VM_StorefrontItem_C.OnBundleSubtitleChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnBundleOfferExpiryDateTimeChanged__DelegateSignature(struct FDateTime BundleOfferExpiryDateTime); // Function VM_StorefrontItem.VM_StorefrontItem_C.OnBundleOfferExpiryDateTimeChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnBundleBackgroundImageChanged__DelegateSignature(struct UTexture2D* BundleBackgroundImage, struct UMaterialInterface* BundleBackgroundMaterial); // Function VM_StorefrontItem.VM_StorefrontItem_C.OnBundleBackgroundImageChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnBundlePriceChanged__DelegateSignature(int32_t BundlePrice); // Function VM_StorefrontItem.VM_StorefrontItem_C.OnBundlePriceChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnBundleNameChanged__DelegateSignature(struct FText BundleName); // Function VM_StorefrontItem.VM_StorefrontItem_C.OnBundleNameChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

