// WidgetBlueprintGeneratedClass FeaturedShopTab.FeaturedShopTab_C
// Size: 0x3f1 (Inherited: 0x320)
struct UFeaturedShopTab_C : UFeaturedShopTab_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UWidgetAnimation* LoadInAnimation; // 0x328(0x08)
	struct UImage* Dot02; // 0x330(0x08)
	struct UImage* DotCorner; // 0x338(0x08)
	struct UImage* DotCorner_2; // 0x340(0x08)
	struct UImage* DotCorner_3; // 0x348(0x08)
	struct UImage* DotCorner_4; // 0x350(0x08)
	struct UCanvasPanel* ErrorPanel; // 0x358(0x08)
	struct UTextBlock* ErrorText; // 0x360(0x08)
	struct UImage* Image; // 0x368(0x08)
	struct UImage* Image_2; // 0x370(0x08)
	struct UImage* Image_3; // 0x378(0x08)
	struct UImage* Image_5; // 0x380(0x08)
	struct UImage* Image_6; // 0x388(0x08)
	struct UImage* Image_7; // 0x390(0x08)
	struct UImage* LineLeft; // 0x398(0x08)
	struct UImage* LineRight; // 0x3a0(0x08)
	struct UCanvasPanel* LoadingPanel; // 0x3a8(0x08)
	struct UMenuOrnament_C* MenuOrnament; // 0x3b0(0x08)
	struct UBundlesDisplayPanel_C* MultiBundlePanel; // 0x3b8(0x08)
	struct UHorizontalBox* PlayerOffersBox; // 0x3c0(0x08)
	struct UVerticalBox* RotatingOffersPanel; // 0x3c8(0x08)
	struct UStoreCountdownTimer_C* RotatingOffersTimer; // 0x3d0(0x08)
	struct UCanvasPanel* StorefrontPanel; // 0x3d8(0x08)
	struct UWidgetSwitcher* StoreScreenStateSwitcher; // 0x3e0(0x08)
	struct UImage* TimerBackground; // 0x3e8(0x08)
	bool InitialLoadComplete; // 0x3f0(0x01)

	void SequenceEvent__ENTRYPOINTFeaturedShopTab(); // Function FeaturedShopTab.FeaturedShopTab_C.SequenceEvent__ENTRYPOINTFeaturedShopTab // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateFeaturedBundles(struct TArray<struct UBundleViewModel*>& NewBundles); // Function FeaturedShopTab.FeaturedShopTab_C.UpdateFeaturedBundles // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateBundleOffersExpiration(struct FDateTime& NewExpirationTime); // Function FeaturedShopTab.FeaturedShopTab_C.UpdateBundleOffersExpiration // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void TryToDisplayBundleDetails(struct UBundleViewModel* Bundle); // Function FeaturedShopTab.FeaturedShopTab_C.TryToDisplayBundleDetails // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateRotatingOffersExpiration(struct FDateTime& NewExpirationTime); // Function FeaturedShopTab.FeaturedShopTab_C.UpdateRotatingOffersExpiration // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PopulateStorefront(bool ShouldUseCachedStoreViewModel); // Function FeaturedShopTab.FeaturedShopTab_C.PopulateStorefront // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void DisplayStoreError(struct FText ErrorText); // Function FeaturedShopTab.FeaturedShopTab_C.DisplayStoreError // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdatePlayerOffers(struct TArray<struct UStoreOffer*>& NewOfferSkins); // Function FeaturedShopTab.FeaturedShopTab_C.UpdatePlayerOffers // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void AudioEvent(); // Function FeaturedShopTab.FeaturedShopTab_C.AudioEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void MakeDesignTimeOffers(); // Function FeaturedShopTab.FeaturedShopTab_C.MakeDesignTimeOffers // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void AddLimitedOffersToBox(struct TArray<struct UUserWidget*>& OfferWidgets); // Function FeaturedShopTab.FeaturedShopTab_C.AddLimitedOffersToBox // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ShowItemDetails(struct UStoreOffer* Offer); // Function FeaturedShopTab.FeaturedShopTab_C.ShowItemDetails // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function FeaturedShopTab.FeaturedShopTab_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void DisplayBundleDetails_2(struct UBundleViewModel* BundleToDisplay); // Function FeaturedShopTab.FeaturedShopTab_C.DisplayBundleDetails_2 // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_FeaturedShopTab(int32_t EntryPoint); // Function FeaturedShopTab.FeaturedShopTab_C.ExecuteUbergraph_FeaturedShopTab // (Final|UbergraphFunction) // @ game+0x1af5410
};

