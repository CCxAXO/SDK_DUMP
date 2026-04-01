// WidgetBlueprintGeneratedClass UpgradeCurrencyBundle_Base.UpgradeCurrencyBundle_Base_C
// Size: 0x338 (Inherited: 0x318)
struct UUpgradeCurrencyBundle_Base_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UStorefrontItemUIData* StorefrontItemUIData; // 0x320(0x08)
	struct UUpgradeCurrencyOffer* UpgradeCurrencyOffer; // 0x328(0x08)
	struct UPurchaseModal* PurchaseModal; // 0x330(0x08)

	struct FString GetListItemTelemetryTarget(); // Function UpgradeCurrencyBundle_Base.UpgradeCurrencyBundle_Base_C.GetListItemTelemetryTarget // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetOfferDisplay(struct UTexture* CurrencyImage, struct FText DiscountPercentAmount, struct FText RPAmount, struct FText OfferDescription, struct UCurrencyDataAsset* CostCurrency, int32_t CostAmount); // Function UpgradeCurrencyBundle_Base.UpgradeCurrencyBundle_Base_C.SetOfferDisplay // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnStorefrontItemLoaded(struct UStorefrontItemHandle* StorefrontItem); // Function UpgradeCurrencyBundle_Base.UpgradeCurrencyBundle_Base_C.OnStorefrontItemLoaded // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Refresh(); // Function UpgradeCurrencyBundle_Base.UpgradeCurrencyBundle_Base_C.Refresh // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Init(struct UUpgradeCurrencyOffer* UpgradeCurrencyOffer); // Function UpgradeCurrencyBundle_Base.UpgradeCurrencyBundle_Base_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BP_OnEntryReleased(); // Function UpgradeCurrencyBundle_Base.UpgradeCurrencyBundle_Base_C.BP_OnEntryReleased // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function UpgradeCurrencyBundle_Base.UpgradeCurrencyBundle_Base_C.BP_OnItemExpansionChanged // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void BP_OnItemSelectionChanged(bool bIsSelected); // Function UpgradeCurrencyBundle_Base.UpgradeCurrencyBundle_Base_C.BP_OnItemSelectionChanged // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function UpgradeCurrencyBundle_Base.UpgradeCurrencyBundle_Base_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnListItemObjectSet(struct UObject* ListItemObject); // Function UpgradeCurrencyBundle_Base.UpgradeCurrencyBundle_Base_C.OnListItemObjectSet // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_UpgradeCurrencyBundle_Base(int32_t EntryPoint); // Function UpgradeCurrencyBundle_Base.UpgradeCurrencyBundle_Base_C.ExecuteUbergraph_UpgradeCurrencyBundle_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

