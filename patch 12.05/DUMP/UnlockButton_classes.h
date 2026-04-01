// WidgetBlueprintGeneratedClass UnlockButton.UnlockButton_C
// Size: 0x398 (Inherited: 0x318)
struct UUnlockButton_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UCurrencyAmountWidget_C* CurrencyAmount; // 0x320(0x08)
	struct USharedButtonMaster_C* SharedButtonMaster; // 0x328(0x08)
	int32_t FromLevel; // 0x330(0x04)
	int32_t ToLevel; // 0x334(0x04)
	struct UCurrencyDataAsset* PurchaseCurrency; // 0x338(0x08)
	int32_t PurchasePrice; // 0x340(0x04)
	struct FGuid ContractDefinitionID; // 0x344(0x10)
	char pad_354[0x4]; // 0x354(0x04)
	struct UPurchaseModal* PurchaseModal; // 0x358(0x08)
	enum class EPurchaseSource PurchaseSource; // 0x360(0x01)
	char pad_361[0x7]; // 0x361(0x07)
	struct FMulticastInlineDelegate OnRewardsSummaryClosed; // 0x368(0x10)
	struct FMulticastInlineDelegate OnClicked; // 0x378(0x10)
	int32_t DoughAmountClaimed; // 0x388(0x04)
	bool ActiveContractsViewModel; // 0x38c(0x01)
	char pad_38D[0x3]; // 0x38d(0x03)
	struct UVM_ContractOffer_C* VM_ContractOffer; // 0x390(0x08)

	void SetAvailableSoon(); // Function UnlockButton.UnlockButton_C.SetAvailableSoon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetClaimable(); // Function UnlockButton.UnlockButton_C.SetClaimable // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetRecruitable(); // Function UnlockButton.UnlockButton_C.SetRecruitable // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetNotPurchasable(); // Function UnlockButton.UnlockButton_C.SetNotPurchasable // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetUnlocked(); // Function UnlockButton.UnlockButton_C.SetUnlocked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void DisplayLevels(struct FGuid ContractDefinitionID, int32_t FromLevelNumber, int32_t ToLevelNumber, struct UCurrencyDataAsset* PurchaseCurrency, int32_t PurchasePrice, int32_t DoughAmountClaimed, int32_t& FundsNeeded); // Function UnlockButton.UnlockButton_C.DisplayLevels // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__SharedButtonMaster_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(); // Function UnlockButton.UnlockButton_C.BndEvt__SharedButtonMaster_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void RewardsSummaryClosed(); // Function UnlockButton.UnlockButton_C.RewardsSummaryClosed // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnInitialized(); // Function UnlockButton.UnlockButton_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function UnlockButton.UnlockButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_UnlockButton(int32_t EntryPoint); // Function UnlockButton.UnlockButton_C.ExecuteUbergraph_UnlockButton // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
	void OnClicked__DelegateSignature(); // Function UnlockButton.UnlockButton_C.OnClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnRewardsSummaryClosed__DelegateSignature(); // Function UnlockButton.UnlockButton_C.OnRewardsSummaryClosed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

