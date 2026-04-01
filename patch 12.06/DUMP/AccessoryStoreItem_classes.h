// WidgetBlueprintGeneratedClass AccessoryStoreItem.AccessoryStoreItem_C
// Size: 0x338 (Inherited: 0x318)
struct UAccessoryStoreItem_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UOverlay* StoreItemContainer; // 0x320(0x08)
	struct UAccessoryStoreOfferViewModel* AccessoryOffer; // 0x328(0x08)
	struct UIndividualStoreItemV2_C* StoreItem; // 0x330(0x08)

	void Get Contract Data Asset(struct UContractDataAssetV2*& ContractDataAssetV2); // Function AccessoryStoreItem.AccessoryStoreItem_C.Get Contract Data Asset // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	struct UIndividualStoreItemV2_C* Create Store Item(); // Function AccessoryStoreItem.AccessoryStoreItem_C.Create Store Item // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function AccessoryStoreItem.AccessoryStoreItem_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void HandleContractV2(struct UContractV2Handle* ContractV2Handle); // Function AccessoryStoreItem.AccessoryStoreItem_C.HandleContractV2 // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function AccessoryStoreItem.AccessoryStoreItem_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_AccessoryStoreItem(int32_t EntryPoint); // Function AccessoryStoreItem.AccessoryStoreItem_C.ExecuteUbergraph_AccessoryStoreItem // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

