// WidgetBlueprintGeneratedClass WBP_Panel_ContentItemsView_Expressions.WBP_Panel_ContentItemsView_Expressions_C
// Size: 0x3a0 (Inherited: 0x318)
struct UWBP_Panel_ContentItemsView_Expressions_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UContentFilterButton_C* ContentFilterButton; // 0x320(0x08)
	struct UContentItemsSearchBar_C* ContentItemsSearchBar; // 0x328(0x08)
	struct UContentItemsView_C* ContentItemsView; // 0x330(0x08)
	struct ULoadingThrobberSmall_C* LoadingThrobberSmall; // 0x338(0x08)
	struct UEquippableDataAsset* CarbineDataAsset; // 0x340(0x08)
	struct UEquippableDataAsset* BasePistolDataAsset; // 0x348(0x08)
	struct FMulticastInlineDelegate OnSpraySelected; // 0x350(0x10)
	struct UCollectionOwnershipContentFilterProvider_C* OwnershipFilterProvider; // 0x360(0x08)
	struct UFavoritesFilterProvider_C* FavoritesFilterProvider; // 0x368(0x08)
	struct FMulticastInlineDelegate OnExpressionHandlesLoaded; // 0x370(0x10)
	struct UAresBasePrimaryDataAsset* BaseContentType; // 0x380(0x08)
	struct UExpressionHandle* SelectedExpression; // 0x388(0x08)
	struct FMulticastInlineDelegate OnExpressionSelected; // 0x390(0x10)

	void OnTotemsLoaded(struct FTotemHandles& TotemHandles); // Function WBP_Panel_ContentItemsView_Expressions.WBP_Panel_ContentItemsView_Expressions_C.OnTotemsLoaded // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void LoadExpressions(); // Function WBP_Panel_ContentItemsView_Expressions.WBP_Panel_ContentItemsView_Expressions_C.LoadExpressions // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnExpressionsLoaded(struct FExpressionHandles& ExpressionHandles); // Function WBP_Panel_ContentItemsView_Expressions.WBP_Panel_ContentItemsView_Expressions_C.OnExpressionsLoaded // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void FavoritesFilterProviderCheck(struct UContentFilterViewModel* FiltersViewModel); // Function WBP_Panel_ContentItemsView_Expressions.WBP_Panel_ContentItemsView_Expressions_C.FavoritesFilterProviderCheck // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OwnershipFilterProviderCheck(struct UContentFilterViewModel* FiltersViewModel); // Function WBP_Panel_ContentItemsView_Expressions.WBP_Panel_ContentItemsView_Expressions_C.OwnershipFilterProviderCheck // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleApplyContentFilters(struct UContentFilterViewModel* FilterViewModel); // Function WBP_Panel_ContentItemsView_Expressions.WBP_Panel_ContentItemsView_Expressions_C.HandleApplyContentFilters // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnSpraysLoaded(struct FSprayHandles& SprayHandles); // Function WBP_Panel_ContentItemsView_Expressions.WBP_Panel_ContentItemsView_Expressions_C.OnSpraysLoaded // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function WBP_Panel_ContentItemsView_Expressions.WBP_Panel_ContentItemsView_Expressions_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnSkinsLoaded(struct FEquippableSkinHandles& EquippableSkinHandles); // Function WBP_Panel_ContentItemsView_Expressions.WBP_Panel_ContentItemsView_Expressions_C.OnSkinsLoaded // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnEquippableLoaded(struct UEquippableHandle* EquippableHandle); // Function WBP_Panel_ContentItemsView_Expressions.WBP_Panel_ContentItemsView_Expressions_C.OnEquippableLoaded // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__ContentItemsViewSandbox_ContentItemsView_K2Node_ComponentBoundEvent_0_OnObjectSelected__DelegateSignature(struct UContentItemObject_C* ContentItemObject); // Function WBP_Panel_ContentItemsView_Expressions.WBP_Panel_ContentItemsView_Expressions_C.BndEvt__ContentItemsViewSandbox_ContentItemsView_K2Node_ComponentBoundEvent_0_OnObjectSelected__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__ContentItemsView_Sprays_ContentFilterButton_K2Node_ComponentBoundEvent_1_FiltersApplied__DelegateSignature(struct UContentFilterViewModel* FiltersViewModel); // Function WBP_Panel_ContentItemsView_Expressions.WBP_Panel_ContentItemsView_Expressions_C.BndEvt__ContentItemsView_Sprays_ContentFilterButton_K2Node_ComponentBoundEvent_1_FiltersApplied__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void FiltersCheck(struct UContentFilterViewModel* FiltersViewModel); // Function WBP_Panel_ContentItemsView_Expressions.WBP_Panel_ContentItemsView_Expressions_C.FiltersCheck // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Panel_ContentItemsView_Expressions(int32_t EntryPoint); // Function WBP_Panel_ContentItemsView_Expressions.WBP_Panel_ContentItemsView_Expressions_C.ExecuteUbergraph_WBP_Panel_ContentItemsView_Expressions // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
	void OnExpressionSelected__DelegateSignature(); // Function WBP_Panel_ContentItemsView_Expressions.WBP_Panel_ContentItemsView_Expressions_C.OnExpressionSelected__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnExpressionHandlesLoaded__DelegateSignature(); // Function WBP_Panel_ContentItemsView_Expressions.WBP_Panel_ContentItemsView_Expressions_C.OnExpressionHandlesLoaded__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnSpraySelected__DelegateSignature(); // Function WBP_Panel_ContentItemsView_Expressions.WBP_Panel_ContentItemsView_Expressions_C.OnSpraySelected__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

