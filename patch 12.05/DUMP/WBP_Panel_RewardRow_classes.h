// WidgetBlueprintGeneratedClass WBP_Panel_RewardRow.WBP_Panel_RewardRow_C
// Size: 0x428 (Inherited: 0x3e0)
struct UWBP_Panel_RewardRow_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UImage* CurrencyIcon; // 0x3e8(0x08)
	struct UAresCommonRichText* Price; // 0x3f0(0x08)
	struct UAresCommonRichText* StrikethroughPrice; // 0x3f8(0x08)
	struct UAresCommonRichText* Title; // 0x400(0x08)
	struct UVM_Reward_C* VM Reward; // 0x408(0x08)
	struct UVM_StoreOffer_C* VM Store Offer; // 0x410(0x08)
	struct UVM_InventoryItem_C* VM Inventory Item; // 0x418(0x08)
	struct UOfferDTO* OfferDTO; // 0x420(0x08)

	struct FString GetListItemTelemetryTarget(); // Function WBP_Panel_RewardRow.WBP_Panel_RewardRow_C.GetListItemTelemetryTarget // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnOfferDTOChanged(struct UOfferDTO* OfferDTO); // Function WBP_Panel_RewardRow.WBP_Panel_RewardRow_C.OnOfferDTOChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindEvents(bool bBind); // Function WBP_Panel_RewardRow.WBP_Panel_RewardRow_C.BindEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitViewModels(); // Function WBP_Panel_RewardRow.WBP_Panel_RewardRow_C.InitViewModels // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleTitleChanged(struct FText DisplayName); // Function WBP_Panel_RewardRow.WBP_Panel_RewardRow_C.HandleTitleChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleCostChanged(struct TArray<struct FOfferCostWithDiscountInfo>& CostList); // Function WBP_Panel_RewardRow.WBP_Panel_RewardRow_C.HandleCostChanged // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BP_OnEntryReleased(); // Function WBP_Panel_RewardRow.WBP_Panel_RewardRow_C.BP_OnEntryReleased // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function WBP_Panel_RewardRow.WBP_Panel_RewardRow_C.BP_OnItemExpansionChanged // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void BP_OnItemSelectionChanged(bool bIsSelected); // Function WBP_Panel_RewardRow.WBP_Panel_RewardRow_C.BP_OnItemSelectionChanged // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_RewardRow.WBP_Panel_RewardRow_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void K2_BindToViewModel(); // Function WBP_Panel_RewardRow.WBP_Panel_RewardRow_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Destruct(); // Function WBP_Panel_RewardRow.WBP_Panel_RewardRow_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnListItemObjectSet(struct UObject* ListItemObject); // Function WBP_Panel_RewardRow.WBP_Panel_RewardRow_C.OnListItemObjectSet // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Panel_RewardRow(int32_t EntryPoint); // Function WBP_Panel_RewardRow.WBP_Panel_RewardRow_C.ExecuteUbergraph_WBP_Panel_RewardRow // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

