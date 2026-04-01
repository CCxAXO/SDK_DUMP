// BlueprintGeneratedClass VM_ContractOffer.VM_ContractOffer_C
// Size: 0x128 (Inherited: 0x90)
struct UVM_ContractOffer_C : UAresViewModelBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x90(0x08)
	bool OwnedBattlePass; // 0x98(0x01)
	char pad_99[0x3]; // 0x99(0x03)
	int32_t HighlightedLevel; // 0x9c(0x04)
	int32_t CurrentLevel; // 0xa0(0x04)
	enum class ChapterBuyButton_Offer_Status OfferStatus; // 0xa4(0x01)
	char pad_A5[0x3]; // 0xa5(0x03)
	struct FText OfferText; // 0xa8(0x18)
	struct FMulticastInlineDelegate OnOfferStatusChanged; // 0xc0(0x10)
	struct FMulticastInlineDelegate OnOfferTextChanged; // 0xd0(0x10)
	bool BattlePassCompleted; // 0xe0(0x01)
	char pad_E1[0x7]; // 0xe1(0x07)
	struct UOfferDTO* OfferDTO; // 0xe8(0x08)
	struct UContractViewModel* ActiveContract; // 0xf0(0x08)
	struct FMulticastInlineDelegate OnCostChanged; // 0xf8(0x10)
	struct UCostDTO* OfferCost; // 0x108(0x08)
	struct UCurrencyDataAsset* OfferCurrency; // 0x110(0x08)
	struct FMulticastInlineDelegate OnOfferCurrencyChanged; // 0x118(0x10)

	void HandleLevelsChanged(bool IsBattlepassOwned, int32_t FromLevel, int32_t ToLevel); // Function VM_ContractOffer.VM_ContractOffer_C.HandleLevelsChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleIsCompletedChanged(bool IsBattlepassCompleted); // Function VM_ContractOffer.VM_ContractOffer_C.HandleIsCompletedChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleCurrentLevelChanged(int32_t NewCurrentLevel); // Function VM_ContractOffer.VM_ContractOffer_C.HandleCurrentLevelChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetCost(struct UOfferDTO* NewOffer); // Function VM_ContractOffer.VM_ContractOffer_C.SetCost // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetOfferCurrency(struct UCurrencyDataAsset* In Cost Currency); // Function VM_ContractOffer.VM_ContractOffer_C.SetOfferCurrency // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GenerateLevelPurchaseOfferDTO(); // Function VM_ContractOffer.VM_ContractOffer_C.GenerateLevelPurchaseOfferDTO // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GenerateUpgradeOfferDTO(); // Function VM_ContractOffer.VM_ContractOffer_C.GenerateUpgradeOfferDTO // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	bool IsActiveAgentContract(); // Function VM_ContractOffer.VM_ContractOffer_C.IsActiveAgentContract // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void HandlePurchaseConfirm(); // Function VM_ContractOffer.VM_ContractOffer_C.HandlePurchaseConfirm // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleActiveContract(struct UContractViewModel* ActiveContract); // Function VM_ContractOffer.VM_ContractOffer_C.HandleActiveContract // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void IsLevelEpilogue(int32_t HighlightedLevel, bool& isEpilogue); // Function VM_ContractOffer.VM_ContractOffer_C.IsLevelEpilogue // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void CalculateOfferTierText(int32_t HighlightedLevel, int32_t CurrentLevel, struct FText& TierPurchaseText); // Function VM_ContractOffer.VM_ContractOffer_C.CalculateOfferTierText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void SetOfferText(struct FText NewOfferText); // Function VM_ContractOffer.VM_ContractOffer_C.SetOfferText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetOfferStatus(enum class ChapterBuyButton_Offer_Status NewOfferStatus); // Function VM_ContractOffer.VM_ContractOffer_C.SetOfferStatus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateButtonStatus(); // Function VM_ContractOffer.VM_ContractOffer_C.UpdateButtonStatus // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleHighlightedLevel(struct UContractLevelViewModel* NewHighlightedLevel); // Function VM_ContractOffer.VM_ContractOffer_C.HandleHighlightedLevel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleOwnedBattlePass(bool IsOwnedBattlePass); // Function VM_ContractOffer.VM_ContractOffer_C.HandleOwnedBattlePass // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void RefreshBroadcast(); // Function VM_ContractOffer.VM_ContractOffer_C.RefreshBroadcast // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Reset(); // Function VM_ContractOffer.VM_ContractOffer_C.Reset // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_VM_ContractOffer(int32_t EntryPoint); // Function VM_ContractOffer.VM_ContractOffer_C.ExecuteUbergraph_VM_ContractOffer // (Final|UbergraphFunction) // @ game+0x1af5410
	void OnOfferCurrencyChanged__DelegateSignature(struct UCurrencyDataAsset* Offer Currency); // Function VM_ContractOffer.VM_ContractOffer_C.OnOfferCurrencyChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnCostChanged__DelegateSignature(struct UCostDTO* NewCost); // Function VM_ContractOffer.VM_ContractOffer_C.OnCostChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnOfferTextChanged__DelegateSignature(struct FText NewOfferText); // Function VM_ContractOffer.VM_ContractOffer_C.OnOfferTextChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnOfferStatusChanged__DelegateSignature(enum class ChapterBuyButton_Offer_Status NewOfferStatus); // Function VM_ContractOffer.VM_ContractOffer_C.OnOfferStatusChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

