// WidgetBlueprintGeneratedClass HighlightedRewards.HighlightedRewards_C
// Size: 0x368 (Inherited: 0x318)
struct UHighlightedRewards_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UTextBlock* PremiumContractXP; // 0x320(0x08)
	struct UUniformGridPanel* RewardsGrid; // 0x328(0x08)
	int32_t RewardSlotIndex; // 0x330(0x04)
	char pad_334[0x4]; // 0x334(0x04)
	struct UEntitlementRewardModel* RewardModel; // 0x338(0x08)
	struct UWalletRewardModel* CurrencyModel; // 0x340(0x08)
	struct URewardModel* ArrayElementAsRewardModel; // 0x348(0x08)
	int32_t GridRow; // 0x350(0x04)
	int32_t GridColumn; // 0x354(0x04)
	struct FGuid ContractDefinitionID; // 0x358(0x10)

	void GetHighlightedRewardsFromContractID(struct TArray<struct URewardModel*>& Rewards); // Function HighlightedRewards.HighlightedRewards_C.GetHighlightedRewardsFromContractID // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetContractDefinitionID(struct FGuid ID); // Function HighlightedRewards.HighlightedRewards_C.SetContractDefinitionID // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void AddToRewardsGrid(struct UWidget* content, int32_t Index); // Function HighlightedRewards.HighlightedRewards_C.AddToRewardsGrid // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function HighlightedRewards.HighlightedRewards_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function HighlightedRewards.HighlightedRewards_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_HighlightedRewards(int32_t EntryPoint); // Function HighlightedRewards.HighlightedRewards_C.ExecuteUbergraph_HighlightedRewards // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

