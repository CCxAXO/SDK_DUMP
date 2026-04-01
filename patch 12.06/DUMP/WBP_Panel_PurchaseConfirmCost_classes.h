// WidgetBlueprintGeneratedClass WBP_Panel_PurchaseConfirmCost.WBP_Panel_PurchaseConfirmCost_C
// Size: 0x420 (Inherited: 0x3e0)
struct UWBP_Panel_PurchaseConfirmCost_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UAresCommonText* BaseCost; // 0x3e8(0x08)
	struct UImage* CurrencyIcon; // 0x3f0(0x08)
	struct UHorizontalBox* HB_RightLine; // 0x3f8(0x08)
	struct UHorizontalBox* HorizontalBox_15; // 0x400(0x08)
	struct UAresCommonRichText* StrikethroughCost; // 0x408(0x08)
	struct UVM_StoreOffer_C* OfferViewModel; // 0x410(0x08)
	struct UVM_PlatformOffer_C* PlatformOfferViewModel; // 0x418(0x08)

	void CREATEDELEGATE_PROXYFUNCTION_1(struct FRemainingBalanceInfo& RemainingBalance); // Function WBP_Panel_PurchaseConfirmCost.WBP_Panel_PurchaseConfirmCost_C.CREATEDELEGATE_PROXYFUNCTION_1 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleDiscountInformationChanged(bool ShouldShowDiscountInformation); // Function WBP_Panel_PurchaseConfirmCost.WBP_Panel_PurchaseConfirmCost_C.HandleDiscountInformationChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitFromOfferDTO(struct UOfferDTO* OfferDTO); // Function WBP_Panel_PurchaseConfirmCost.WBP_Panel_PurchaseConfirmCost_C.InitFromOfferDTO // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleCostStringChanged(struct FString CurrentCostString); // Function WBP_Panel_PurchaseConfirmCost.WBP_Panel_PurchaseConfirmCost_C.HandleCostStringChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleRemainingBalanceChanged(struct FRemainingBalanceInfo NewRemainingBalance); // Function WBP_Panel_PurchaseConfirmCost.WBP_Panel_PurchaseConfirmCost_C.HandleRemainingBalanceChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleCostListChanged(struct TArray<struct FOfferCostWithDiscountInfo>& NewCostList); // Function WBP_Panel_PurchaseConfirmCost.WBP_Panel_PurchaseConfirmCost_C.HandleCostListChanged // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindEvents(bool Bind); // Function WBP_Panel_PurchaseConfirmCost.WBP_Panel_PurchaseConfirmCost_C.BindEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitViewModels(); // Function WBP_Panel_PurchaseConfirmCost.WBP_Panel_PurchaseConfirmCost_C.InitViewModels // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_PurchaseConfirmCost.WBP_Panel_PurchaseConfirmCost_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void K2_BindToViewModel(); // Function WBP_Panel_PurchaseConfirmCost.WBP_Panel_PurchaseConfirmCost_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Destruct(); // Function WBP_Panel_PurchaseConfirmCost.WBP_Panel_PurchaseConfirmCost_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Panel_PurchaseConfirmCost(int32_t EntryPoint); // Function WBP_Panel_PurchaseConfirmCost.WBP_Panel_PurchaseConfirmCost_C.ExecuteUbergraph_WBP_Panel_PurchaseConfirmCost // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

