// BlueprintGeneratedClass VM_PromoTile_StorefrontItem.VM_PromoTile_StorefrontItem_C
// Size: 0x178 (Inherited: 0x138)
struct UVM_PromoTile_StorefrontItem_C : UVM_Interface_PromoTile_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x138(0x08)
	struct TArray<None> FeaturedTileEntries; // 0x140(0x10)
	struct UVM_StorefrontItem_C* VM_StorefrontItem; // 0x150(0x08)
	struct UFeaturedTileEntryViewModel* SelectedFeaturedTileEntry; // 0x158(0x08)
	struct FString StoreEntryPoint; // 0x160(0x10)
	struct UStoreFeaturedTileEntryListViewModel* VM_FeaturedTileEntryList; // 0x170(0x08)

	void GetCtaURL(struct UCtaViewModel* CTA, bool& Success, struct FString& URL); // Function VM_PromoTile_StorefrontItem.VM_PromoTile_StorefrontItem_C.GetCtaURL // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Prepare for Promotion(); // Function VM_PromoTile_StorefrontItem.VM_PromoTile_StorefrontItem_C.Prepare for Promotion // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Is Candidate for Promotion(bool& IsCandidateForPromotion); // Function VM_PromoTile_StorefrontItem.VM_PromoTile_StorefrontItem_C.Is Candidate for Promotion // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateHasValidData(); // Function VM_PromoTile_StorefrontItem.VM_PromoTile_StorefrontItem_C.UpdateHasValidData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnVerticalPromoImageChanged(struct UTexture2D* InVerticalPromoImage); // Function VM_PromoTile_StorefrontItem.VM_PromoTile_StorefrontItem_C.OnVerticalPromoImageChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnPromoExtraDescriptionChanged(struct FText PromoExtraDescription); // Function VM_PromoTile_StorefrontItem.VM_PromoTile_StorefrontItem_C.OnPromoExtraDescriptionChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnSubtitleChanged(struct FText Subtitle); // Function VM_PromoTile_StorefrontItem.VM_PromoTile_StorefrontItem_C.OnSubtitleChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PickFeaturedTile(struct UFeaturedTileEntryViewModel*& SelectedFeaturedTileEntry); // Function VM_PromoTile_StorefrontItem.VM_PromoTile_StorefrontItem_C.PickFeaturedTile // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void IsBundleAllowedForCountry(struct UFeaturedTileEntryViewModel* FeaturedTileEntry, struct FString Country, bool& BundleIsAllowedForCountry); // Function VM_PromoTile_StorefrontItem.VM_PromoTile_StorefrontItem_C.IsBundleAllowedForCountry // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void Filter Featured Tile Entries(struct TArray<struct UFeaturedTileEntryViewModel*>& FeaturedTileEntries, struct TArray<struct UFeaturedTileEntryViewModel*>& FilteredEntries); // Function VM_PromoTile_StorefrontItem.VM_PromoTile_StorefrontItem_C.Filter Featured Tile Entries // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetFeaturedTileEntryIndexWildcards(struct FWildcard& BundleInstanceIdentifierWildcard, struct FWildcard& BundleIndexStringWildcard); // Function VM_PromoTile_StorefrontItem.VM_PromoTile_StorefrontItem_C.GetFeaturedTileEntryIndexWildcards // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void OnFeaturedBundlesChanged(struct TArray<struct UFeaturedTileEntryViewModel*>& FeaturedTileEntries); // Function VM_PromoTile_StorefrontItem.VM_PromoTile_StorefrontItem_C.OnFeaturedBundlesChanged // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindEvents(bool Bind); // Function VM_PromoTile_StorefrontItem.VM_PromoTile_StorefrontItem_C.BindEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitViewModels(); // Function VM_PromoTile_StorefrontItem.VM_PromoTile_StorefrontItem_C.InitViewModels // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Init(); // Function VM_PromoTile_StorefrontItem.VM_PromoTile_StorefrontItem_C.Init // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleClick(); // Function VM_PromoTile_StorefrontItem.VM_PromoTile_StorefrontItem_C.HandleClick // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Destruct(); // Function VM_PromoTile_StorefrontItem.VM_PromoTile_StorefrontItem_C.Destruct // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnViewModelCreated(); // Function VM_PromoTile_StorefrontItem.VM_PromoTile_StorefrontItem_C.OnViewModelCreated // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void RefreshBroadcast(); // Function VM_PromoTile_StorefrontItem.VM_PromoTile_StorefrontItem_C.RefreshBroadcast // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_VM_PromoTile_StorefrontItem(int32_t EntryPoint); // Function VM_PromoTile_StorefrontItem.VM_PromoTile_StorefrontItem_C.ExecuteUbergraph_VM_PromoTile_StorefrontItem // (Final|UbergraphFunction) // @ game+0x1b42740
};

