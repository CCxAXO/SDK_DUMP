// WidgetBlueprintGeneratedClass ContentItemsView_WithFilterAndSort.ContentItemsView_WithFilterAndSort_C
// Size: 0x370 (Inherited: 0x318)
struct UContentItemsView_WithFilterAndSort_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UContentFilterButton_C* ContentFilterButton; // 0x320(0x08)
	struct UContentItemsSearchBar_C* ContentItemsSearchBar; // 0x328(0x08)
	struct UContentItemsView_C* ContentItemsView; // 0x330(0x08)
	struct ULoadingThrobberSmall_C* LoadingThrobberSmall; // 0x338(0x08)
	struct UCollectionOwnershipContentFilterProvider_C* OwnershipFilterProvider; // 0x340(0x08)
	struct UFavoritesFilterProvider_C* FavoritesFilterProvider; // 0x348(0x08)
	struct FMulticastInlineDelegate UpdateTabWidgetVis; // 0x350(0x10)
	struct FMulticastInlineDelegate HandleCarouselFilterUpdate; // 0x360(0x10)

	void SelectAndShowFirstContentItem(bool& HasMatchingContent); // Function ContentItemsView_WithFilterAndSort.ContentItemsView_WithFilterAndSort_C.SelectAndShowFirstContentItem // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void FavoritesFilterProviderCheck(struct UContentFilterViewModel* FiltersViewModel); // Function ContentItemsView_WithFilterAndSort.ContentItemsView_WithFilterAndSort_C.FavoritesFilterProviderCheck // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OwnershipFilterProviderCheck(struct UContentFilterViewModel* FiltersViewModel); // Function ContentItemsView_WithFilterAndSort.ContentItemsView_WithFilterAndSort_C.OwnershipFilterProviderCheck // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleApplyContentFilters(struct UContentFilterViewModel* FilterViewModel); // Function ContentItemsView_WithFilterAndSort.ContentItemsView_WithFilterAndSort_C.HandleApplyContentFilters // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function ContentItemsView_WithFilterAndSort.ContentItemsView_WithFilterAndSort_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__ContentItemsView_Sprays_ContentFilterButton_K2Node_ComponentBoundEvent_1_FiltersApplied__DelegateSignature(struct UContentFilterViewModel* FiltersViewModel); // Function ContentItemsView_WithFilterAndSort.ContentItemsView_WithFilterAndSort_C.BndEvt__ContentItemsView_Sprays_ContentFilterButton_K2Node_ComponentBoundEvent_1_FiltersApplied__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void FiltersCheck(struct UContentFilterViewModel* FiltersViewModel); // Function ContentItemsView_WithFilterAndSort.ContentItemsView_WithFilterAndSort_C.FiltersCheck // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__ContentItemsView_WithFilterAndSort_ContentItemsSearchBar_K2Node_ComponentBoundEvent_0_TextSearchCompleted__DelegateSignature(); // Function ContentItemsView_WithFilterAndSort.ContentItemsView_WithFilterAndSort_C.BndEvt__ContentItemsView_WithFilterAndSort_ContentItemsSearchBar_K2Node_ComponentBoundEvent_0_TextSearchCompleted__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_ContentItemsView_WithFilterAndSort(int32_t EntryPoint); // Function ContentItemsView_WithFilterAndSort.ContentItemsView_WithFilterAndSort_C.ExecuteUbergraph_ContentItemsView_WithFilterAndSort // (Final|UbergraphFunction) // @ game+0x1af5410
	void HandleCarouselFilterUpdate__DelegateSignature(); // Function ContentItemsView_WithFilterAndSort.ContentItemsView_WithFilterAndSort_C.HandleCarouselFilterUpdate__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateTabWidgetVis__DelegateSignature(bool HasMatchingContent); // Function ContentItemsView_WithFilterAndSort.ContentItemsView_WithFilterAndSort_C.UpdateTabWidgetVis__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

