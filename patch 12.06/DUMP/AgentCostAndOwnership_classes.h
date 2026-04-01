// WidgetBlueprintGeneratedClass AgentCostAndOwnership.AgentCostAndOwnership_C
// Size: 0x388 (Inherited: 0x318)
struct UAgentCostAndOwnership_C : UUserWidget {
	struct UHorizontalBox* Cost; // 0x318(0x08)
	struct UWidgetSwitcher* CostOrOwned; // 0x320(0x08)
	struct UCurrencyAmountWidget_C* DoughAmount; // 0x328(0x08)
	struct UHorizontalBox* DoughBox; // 0x330(0x08)
	struct UAresTextBlock* OwnedText; // 0x338(0x08)
	struct UCurrencyAmountWidget_C* TokenAmount; // 0x340(0x08)
	struct UHorizontalBox* TokenBox; // 0x348(0x08)
	struct UCurrencyAmountWidget_C* VPAmount; // 0x350(0x08)
	struct UHorizontalBox* VPBox; // 0x358(0x08)
	struct UBodegaOfferModel* Bodega Offer; // 0x360(0x08)
	struct UBaseInventoryModel* InventoryModel; // 0x368(0x08)
	struct TArray<struct FGuid> CurrencyPriorityList; // 0x370(0x10)
	int32_t MaxCurrenciesDisplayed; // 0x380(0x04)
	int32_t CurrenciesDisplayed; // 0x384(0x04)

	void Add Currency to Widget(struct FGuid CurrencyID, int32_t Amount); // Function AgentCostAndOwnership.AgentCostAndOwnership_C.Add Currency to Widget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Update UI(); // Function AgentCostAndOwnership.AgentCostAndOwnership_C.Update UI // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PopulateCurrencyCost(struct UStoreOffer* StoreOffer); // Function AgentCostAndOwnership.AgentCostAndOwnership_C.PopulateCurrencyCost // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetCurrencies(); // Function AgentCostAndOwnership.AgentCostAndOwnership_C.SetCurrencies // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetBodegaOffer(struct UBodegaOfferModel* BodegaOffer); // Function AgentCostAndOwnership.AgentCostAndOwnership_C.SetBodegaOffer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetIsUnlocked(bool Owned); // Function AgentCostAndOwnership.AgentCostAndOwnership_C.SetIsUnlocked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

