// WidgetBlueprintGeneratedClass WBP_Panel_ContractPurchaseRewardItem.WBP_Panel_ContractPurchaseRewardItem_C
// Size: 0x408 (Inherited: 0x3e0)
struct UWBP_Panel_ContractPurchaseRewardItem_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UAresTextBlock* AdditionalRewardsText; // 0x3e8(0x08)
	struct UAresTextBlock* NumRewardsText; // 0x3f0(0x08)
	struct UWBP_View_ContentItemDisplay_C* WBP_View_ContentItemDisplay; // 0x3f8(0x08)
	struct UTexture* BlankTexture; // 0x400(0x08)

	struct FString GetListItemTelemetryTarget(); // Function WBP_Panel_ContractPurchaseRewardItem.WBP_Panel_ContractPurchaseRewardItem_C.GetListItemTelemetryTarget // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ShowAdditionalItems(int32_t NumberToDisplay); // Function WBP_Panel_ContractPurchaseRewardItem.WBP_Panel_ContractPurchaseRewardItem_C.ShowAdditionalItems // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BP_OnEntryReleased(); // Function WBP_Panel_ContractPurchaseRewardItem.WBP_Panel_ContractPurchaseRewardItem_C.BP_OnEntryReleased // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function WBP_Panel_ContractPurchaseRewardItem.WBP_Panel_ContractPurchaseRewardItem_C.BP_OnItemExpansionChanged // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void BP_OnItemSelectionChanged(bool bIsSelected); // Function WBP_Panel_ContractPurchaseRewardItem.WBP_Panel_ContractPurchaseRewardItem_C.BP_OnItemSelectionChanged // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_ContractPurchaseRewardItem.WBP_Panel_ContractPurchaseRewardItem_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function WBP_Panel_ContractPurchaseRewardItem.WBP_Panel_ContractPurchaseRewardItem_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnListItemObjectSet(struct UObject* ListItemObject); // Function WBP_Panel_ContractPurchaseRewardItem.WBP_Panel_ContractPurchaseRewardItem_C.OnListItemObjectSet // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Panel_ContractPurchaseRewardItem(int32_t EntryPoint); // Function WBP_Panel_ContractPurchaseRewardItem.WBP_Panel_ContractPurchaseRewardItem_C.ExecuteUbergraph_WBP_Panel_ContractPurchaseRewardItem // (Final|UbergraphFunction) // @ game+0x1af5410
};

