// WidgetBlueprintGeneratedClass WBP_Panel_OfferPreview_ContractRewards.WBP_Panel_OfferPreview_ContractRewards_C
// Size: 0x420 (Inherited: 0x3e0)
struct UWBP_Panel_OfferPreview_ContractRewards_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UAresTextBlock* SummaryText; // 0x3e8(0x08)
	struct UAresTextBlock* TitleText; // 0x3f0(0x08)
	struct UWBP_List_Base_C* WBP_List_Base; // 0x3f8(0x08)
	struct UWBP_View_RewardPreview_C* WBP_View_RewardPreview; // 0x400(0x08)
	int32_t MaxRewardsDisplayed; // 0x408(0x04)
	char pad_40C[0x4]; // 0x40c(0x04)
	double WrapAdditionalRewardsTextAt; // 0x410(0x08)
	struct UContractPurchaseConfirmViewModel* ContractPurchaseConfirmViewModel; // 0x418(0x08)

	void UpdateTitleFromOffer(); // Function WBP_Panel_OfferPreview_ContractRewards.WBP_Panel_OfferPreview_ContractRewards_C.UpdateTitleFromOffer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleContractUpgrade(struct UOfferDTO* OfferDTO); // Function WBP_Panel_OfferPreview_ContractRewards.WBP_Panel_OfferPreview_ContractRewards_C.HandleContractUpgrade // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HideSummaryAndRewardsText(); // Function WBP_Panel_OfferPreview_ContractRewards.WBP_Panel_OfferPreview_ContractRewards_C.HideSummaryAndRewardsText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void DisplayAdditionalTiersText(); // Function WBP_Panel_OfferPreview_ContractRewards.WBP_Panel_OfferPreview_ContractRewards_C.DisplayAdditionalTiersText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void DisplaySummaryText(); // Function WBP_Panel_OfferPreview_ContractRewards.WBP_Panel_OfferPreview_ContractRewards_C.DisplaySummaryText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void DisplaySingleReward(struct URewardModel* Reward); // Function WBP_Panel_OfferPreview_ContractRewards.WBP_Panel_OfferPreview_ContractRewards_C.DisplaySingleReward // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void DisplayMultipleRewards(struct TArray<struct UEarnableItem*>& EarnableItems); // Function WBP_Panel_OfferPreview_ContractRewards.WBP_Panel_OfferPreview_ContractRewards_C.DisplayMultipleRewards // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitFromEarnableItems(struct TArray<struct UAlwaysEarnedItem*>& EarnableItems); // Function WBP_Panel_OfferPreview_ContractRewards.WBP_Panel_OfferPreview_ContractRewards_C.InitFromEarnableItems // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitFromOfferDTO(struct UOfferDTO* OfferDTO); // Function WBP_Panel_OfferPreview_ContractRewards.WBP_Panel_OfferPreview_ContractRewards_C.InitFromOfferDTO // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindEvents(bool Bind); // Function WBP_Panel_OfferPreview_ContractRewards.WBP_Panel_OfferPreview_ContractRewards_C.BindEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitViewModels(); // Function WBP_Panel_OfferPreview_ContractRewards.WBP_Panel_OfferPreview_ContractRewards_C.InitViewModels // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetOfferDTO(struct UOfferDTO* OfferDTO); // Function WBP_Panel_OfferPreview_ContractRewards.WBP_Panel_OfferPreview_ContractRewards_C.SetOfferDTO // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Destruct(); // Function WBP_Panel_OfferPreview_ContractRewards.WBP_Panel_OfferPreview_ContractRewards_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_OfferPreview_ContractRewards.WBP_Panel_OfferPreview_ContractRewards_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__WBP_Panel_OfferPreview_ContractRewards_WBP_List_Base_K2Node_ComponentBoundEvent_1_OnCurrentAndTotalPageChanged__DelegateSignature(int32_t CurrentPage, int32_t TotalPages); // Function WBP_Panel_OfferPreview_ContractRewards.WBP_Panel_OfferPreview_ContractRewards_C.BndEvt__WBP_Panel_OfferPreview_ContractRewards_WBP_List_Base_K2Node_ComponentBoundEvent_1_OnCurrentAndTotalPageChanged__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void K2_BindToViewModel(); // Function WBP_Panel_OfferPreview_ContractRewards.WBP_Panel_OfferPreview_ContractRewards_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Panel_OfferPreview_ContractRewards(int32_t EntryPoint); // Function WBP_Panel_OfferPreview_ContractRewards.WBP_Panel_OfferPreview_ContractRewards_C.ExecuteUbergraph_WBP_Panel_OfferPreview_ContractRewards // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

