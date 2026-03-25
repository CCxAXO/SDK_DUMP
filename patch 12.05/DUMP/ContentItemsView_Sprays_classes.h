// WidgetBlueprintGeneratedClass ContentItemsView_Sprays.ContentItemsView_Sprays_C
// Size: 0x388 (Inherited: 0x318)
struct UContentItemsView_Sprays_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UContentFilterButton_C* ContentFilterButton; // 0x320(0x08)
	struct UContentItemsSearchBar_C* ContentItemsSearchBar; // 0x328(0x08)
	struct UContentItemsView_C* ContentItemsView; // 0x330(0x08)
	struct ULoadingThrobberSmall_C* LoadingThrobberSmall; // 0x338(0x08)
	struct UEquippableDataAsset* CarbineDataAsset; // 0x340(0x08)
	struct UEquippableDataAsset* BasePistolDataAsset; // 0x348(0x08)
	struct USprayHandle* SelectedSpray; // 0x350(0x08)
	struct FMulticastInlineDelegate OnSpraySelected; // 0x358(0x10)
	struct UCollectionOwnershipContentFilterProvider_C* OwnershipFilterProvider; // 0x368(0x08)
	struct UFavoritesFilterProvider_C* FavoritesFilterProvider; // 0x370(0x08)
	struct FMulticastInlineDelegate OnSprayHandlesLoaded; // 0x378(0x10)

	void FavoritesFilterProviderCheck(struct UContentFilterViewModel* FiltersViewModel); // Function ContentItemsView_Sprays.ContentItemsView_Sprays_C.FavoritesFilterProviderCheck // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OwnershipFilterProviderCheck(struct UContentFilterViewModel* FiltersViewModel); // Function ContentItemsView_Sprays.ContentItemsView_Sprays_C.OwnershipFilterProviderCheck // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleApplyContentFilters(struct UContentFilterViewModel* FilterViewModel); // Function ContentItemsView_Sprays.ContentItemsView_Sprays_C.HandleApplyContentFilters // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnSpraysLoaded(struct FSprayHandles& SprayHandles); // Function ContentItemsView_Sprays.ContentItemsView_Sprays_C.OnSpraysLoaded // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function ContentItemsView_Sprays.ContentItemsView_Sprays_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnSkinsLoaded(struct FEquippableSkinHandles& EquippableSkinHandles); // Function ContentItemsView_Sprays.ContentItemsView_Sprays_C.OnSkinsLoaded // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnEquippableLoaded(struct UEquippableHandle* EquippableHandle); // Function ContentItemsView_Sprays.ContentItemsView_Sprays_C.OnEquippableLoaded // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__ContentItemsViewSandbox_ContentItemsView_K2Node_ComponentBoundEvent_0_OnObjectSelected__DelegateSignature(struct UContentItemObject_C* ContentItemObject); // Function ContentItemsView_Sprays.ContentItemsView_Sprays_C.BndEvt__ContentItemsViewSandbox_ContentItemsView_K2Node_ComponentBoundEvent_0_OnObjectSelected__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__ContentItemsView_Sprays_ContentFilterButton_K2Node_ComponentBoundEvent_1_FiltersApplied__DelegateSignature(struct UContentFilterViewModel* FiltersViewModel); // Function ContentItemsView_Sprays.ContentItemsView_Sprays_C.BndEvt__ContentItemsView_Sprays_ContentFilterButton_K2Node_ComponentBoundEvent_1_FiltersApplied__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void FiltersCheck(struct UContentFilterViewModel* FiltersViewModel); // Function ContentItemsView_Sprays.ContentItemsView_Sprays_C.FiltersCheck // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_ContentItemsView_Sprays(int32_t EntryPoint); // Function ContentItemsView_Sprays.ContentItemsView_Sprays_C.ExecuteUbergraph_ContentItemsView_Sprays // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
	void OnSprayHandlesLoaded__DelegateSignature(); // Function ContentItemsView_Sprays.ContentItemsView_Sprays_C.OnSprayHandlesLoaded__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnSpraySelected__DelegateSignature(); // Function ContentItemsView_Sprays.ContentItemsView_Sprays_C.OnSpraySelected__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

