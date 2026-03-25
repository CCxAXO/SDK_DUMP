// BlueprintGeneratedClass VM_PromoTile_StorefrontItem.VM_PromoTile_StorefrontItem_C
// Size: 0x178 (Inherited: 0x138)
struct UVM_PromoTile_StorefrontItem_C : UVM_Interface_PromoTile_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x138(0x08)
	struct TArray<None> FeaturedBundleViewModels; // 0x140(0x10)
	struct UVM_StorefrontItem_C* VM_StorefrontItem; // 0x150(0x08)
	struct UBundleViewModel* SelectedFeaturedBundleViewModel; // 0x158(0x08)
	struct FString StoreEntryPoint; // 0x160(0x10)
	struct UVM_StoreBundleList_C* VM_StoreBundleList; // 0x170(0x08)

	void Prepare for Promotion(); // Function VM_PromoTile_StorefrontItem.VM_PromoTile_StorefrontItem_C.Prepare for Promotion // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Is Candidate for Promotion(bool& IsCandidateForPromotion); // Function VM_PromoTile_StorefrontItem.VM_PromoTile_StorefrontItem_C.Is Candidate for Promotion // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateHasValidData(); // Function VM_PromoTile_StorefrontItem.VM_PromoTile_StorefrontItem_C.UpdateHasValidData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnVerticalPromoImageChanged(struct UTexture2D* InVerticalPromoImage); // Function VM_PromoTile_StorefrontItem.VM_PromoTile_StorefrontItem_C.OnVerticalPromoImageChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnPromoExtraDescriptionChanged(struct FText PromoExtraDescription); // Function VM_PromoTile_StorefrontItem.VM_PromoTile_StorefrontItem_C.OnPromoExtraDescriptionChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnBundleSubtitleChanged(struct FText BundleSubtitle); // Function VM_PromoTile_StorefrontItem.VM_PromoTile_StorefrontItem_C.OnBundleSubtitleChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PickBundle(struct UBundleViewModel*& SelectedBundleViewModel); // Function VM_PromoTile_StorefrontItem.VM_PromoTile_StorefrontItem_C.PickBundle // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void IsBundleAllowedForCountry(struct UBundleViewModel* Bundle, struct FString Country, bool& BundleIsAllowedForCountry); // Function VM_PromoTile_StorefrontItem.VM_PromoTile_StorefrontItem_C.IsBundleAllowedForCountry // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void FilterBundles(struct TArray<struct UBundleViewModel*>& BundleViewModels, struct TArray<struct UBundleViewModel*>& FilteredBundles); // Function VM_PromoTile_StorefrontItem.VM_PromoTile_StorefrontItem_C.FilterBundles // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetFeaturedBundleIndexWildcards(struct FWildcard& BundleInstanceIdentifierWildcard, struct FWildcard& BundleIndexStringWildcard); // Function VM_PromoTile_StorefrontItem.VM_PromoTile_StorefrontItem_C.GetFeaturedBundleIndexWildcards // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void OnFeaturedBundlesChanged(struct TArray<struct UBundleViewModel*>& FeaturedBundles); // Function VM_PromoTile_StorefrontItem.VM_PromoTile_StorefrontItem_C.OnFeaturedBundlesChanged // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindEvents(bool Bind); // Function VM_PromoTile_StorefrontItem.VM_PromoTile_StorefrontItem_C.BindEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitViewModels(); // Function VM_PromoTile_StorefrontItem.VM_PromoTile_StorefrontItem_C.InitViewModels // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Init(); // Function VM_PromoTile_StorefrontItem.VM_PromoTile_StorefrontItem_C.Init // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleClick(); // Function VM_PromoTile_StorefrontItem.VM_PromoTile_StorefrontItem_C.HandleClick // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Destruct(); // Function VM_PromoTile_StorefrontItem.VM_PromoTile_StorefrontItem_C.Destruct // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnViewModelCreated(); // Function VM_PromoTile_StorefrontItem.VM_PromoTile_StorefrontItem_C.OnViewModelCreated // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void RefreshBroadcast(); // Function VM_PromoTile_StorefrontItem.VM_PromoTile_StorefrontItem_C.RefreshBroadcast // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_VM_PromoTile_StorefrontItem(int32_t EntryPoint); // Function VM_PromoTile_StorefrontItem.VM_PromoTile_StorefrontItem_C.ExecuteUbergraph_VM_PromoTile_StorefrontItem // (Final|UbergraphFunction) // @ game+0x1af5410
};

