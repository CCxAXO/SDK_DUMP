// WidgetBlueprintGeneratedClass FeaturedShopTab_Base.FeaturedShopTab_Base_C
// Size: 0x320 (Inherited: 0x318)
struct UFeaturedShopTab_Base_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)

	void PopulateStorefront(bool ShouldUseCachedStoreViewModel); // Function FeaturedShopTab_Base.FeaturedShopTab_Base_C.PopulateStorefront // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void TryToDisplayBundleDetails(struct UBundleViewModel* Bundle); // Function FeaturedShopTab_Base.FeaturedShopTab_Base_C.TryToDisplayBundleDetails // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateFeaturedBundles(struct TArray<struct UBundleViewModel*>& NewBundles); // Function FeaturedShopTab_Base.FeaturedShopTab_Base_C.UpdateFeaturedBundles // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateBundleOffersExpiration(struct FDateTime& NewExpirationTime); // Function FeaturedShopTab_Base.FeaturedShopTab_Base_C.UpdateBundleOffersExpiration // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void DisplayStoreError(struct FText ErrorText); // Function FeaturedShopTab_Base.FeaturedShopTab_Base_C.DisplayStoreError // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdatePlayerOffers(struct TArray<struct UStoreOffer*>& NewOfferSkins); // Function FeaturedShopTab_Base.FeaturedShopTab_Base_C.UpdatePlayerOffers // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateRotatingOffersExpiration(struct FDateTime& NewExpirationTime); // Function FeaturedShopTab_Base.FeaturedShopTab_Base_C.UpdateRotatingOffersExpiration // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindBundleOffersEvents(); // Function FeaturedShopTab_Base.FeaturedShopTab_Base_C.BindBundleOffersEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindRotatingOffersEvents(); // Function FeaturedShopTab_Base.FeaturedShopTab_Base_C.BindRotatingOffersEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Display Load Error(struct FAmbassadorError& AmbassadorError); // Function FeaturedShopTab_Base.FeaturedShopTab_Base_C.Display Load Error // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnInitialized(); // Function FeaturedShopTab_Base.FeaturedShopTab_Base_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_FeaturedShopTab_Base(int32_t EntryPoint); // Function FeaturedShopTab_Base.FeaturedShopTab_Base_C.ExecuteUbergraph_FeaturedShopTab_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

