// WidgetBlueprintGeneratedClass WBP_Panel_OfferPrice.WBP_Panel_OfferPrice_C
// Size: 0x430 (Inherited: 0x3e0)
struct UWBP_Panel_OfferPrice_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UImage* ButtonIcon; // 0x3e8(0x08)
	struct UCommonTextBlock* ButtonText; // 0x3f0(0x08)
	struct UCurrencyViewModel_C* VM_Currency; // 0x3f8(0x08)
	struct UVM_OfferPrice_C* OfferPriceViewModel; // 0x400(0x08)
	int32_t Price; // 0x408(0x04)
	struct FGuid CurrencyID; // 0x40c(0x10)
	int32_t Balance; // 0x41c(0x04)
	struct UAresCommonTextStyle* NormalStyle; // 0x420(0x08)
	struct UAresCommonTextStyle* InsufficientBalanceStyle; // 0x428(0x08)

	void UpdatePriceColor(); // Function WBP_Panel_OfferPrice.WBP_Panel_OfferPrice_C.UpdatePriceColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleOnWalletCurrencyAmountChanged(int32_t Amount); // Function WBP_Panel_OfferPrice.WBP_Panel_OfferPrice_C.HandleOnWalletCurrencyAmountChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitFromCostDTO(struct UCostDTO* CostDTO); // Function WBP_Panel_OfferPrice.WBP_Panel_OfferPrice_C.InitFromCostDTO // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitFromOfferDTO(struct UOfferDTO* OfferDTO); // Function WBP_Panel_OfferPrice.WBP_Panel_OfferPrice_C.InitFromOfferDTO // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdatePriceText(); // Function WBP_Panel_OfferPrice.WBP_Panel_OfferPrice_C.UpdatePriceText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetAgentTokenText(); // Function WBP_Panel_OfferPrice.WBP_Panel_OfferPrice_C.SetAgentTokenText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleOnCurrencyIconChanged(struct UTexture* New Icon); // Function WBP_Panel_OfferPrice.WBP_Panel_OfferPrice_C.HandleOnCurrencyIconChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleOnCurrencyIDChanged(struct FGuid New CurrencyID); // Function WBP_Panel_OfferPrice.WBP_Panel_OfferPrice_C.HandleOnCurrencyIDChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleOnPriceChanged(int32_t New Price); // Function WBP_Panel_OfferPrice.WBP_Panel_OfferPrice_C.HandleOnPriceChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindEvents(bool Bind); // Function WBP_Panel_OfferPrice.WBP_Panel_OfferPrice_C.BindEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitViewModels(); // Function WBP_Panel_OfferPrice.WBP_Panel_OfferPrice_C.InitViewModels // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void K2_BindToViewModel(); // Function WBP_Panel_OfferPrice.WBP_Panel_OfferPrice_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Destruct(); // Function WBP_Panel_OfferPrice.WBP_Panel_OfferPrice_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Panel_OfferPrice(int32_t EntryPoint); // Function WBP_Panel_OfferPrice.WBP_Panel_OfferPrice_C.ExecuteUbergraph_WBP_Panel_OfferPrice // (Final|UbergraphFunction) // @ game+0x1b42740
};

