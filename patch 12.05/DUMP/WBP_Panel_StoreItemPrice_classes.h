// WidgetBlueprintGeneratedClass WBP_Panel_StoreItemPrice.WBP_Panel_StoreItemPrice_C
// Size: 0x453 (Inherited: 0x3e0)
struct UWBP_Panel_StoreItemPrice_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UAresCommonText* CostText; // 0x3e8(0x08)
	struct UHorizontalBox* CostTextHorizontalBox; // 0x3f0(0x08)
	struct UImage* CurrencyIcon; // 0x3f8(0x08)
	struct UAresCommonText* DiscountPercent; // 0x400(0x08)
	struct UImage* IMG_CheckMark; // 0x408(0x08)
	struct UHorizontalBox* MainContainer; // 0x410(0x08)
	struct UTextBlock* OwnedTextBlock; // 0x418(0x08)
	struct UAresCommonText* StrikethroughCost; // 0x420(0x08)
	struct UVerticalBox* VerticalSubContainer; // 0x428(0x08)
	struct UWidgetSwitcher* WidgetSwitcher; // 0x430(0x08)
	bool bUseHorizontalOrientation; // 0x438(0x01)
	char pad_439[0x7]; // 0x439(0x07)
	struct UCommonTextStyle* FinalCostTextStyle; // 0x440(0x08)
	struct UCommonTextStyle* StrikethroughCostTextStyle; // 0x448(0x08)
	bool bShowCheckmarkIfOwned; // 0x450(0x01)
	bool bShowDiscountText; // 0x451(0x01)
	bool bDisplayDiscountPercent; // 0x452(0x01)

	void UpdateDiscountTextVisibility(bool ShowDiscountText); // Function WBP_Panel_StoreItemPrice.WBP_Panel_StoreItemPrice_C.UpdateDiscountTextVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetShowDiscountInformation(bool ShouldShowDiscountInformation); // Function WBP_Panel_StoreItemPrice.WBP_Panel_StoreItemPrice_C.SetShowDiscountInformation // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleDisplayDiscountPercentChanged(bool InDisplayDiscountPercent); // Function WBP_Panel_StoreItemPrice.WBP_Panel_StoreItemPrice_C.HandleDisplayDiscountPercentChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleDiscountPercentChanged(int32_t InDiscountPercentInt); // Function WBP_Panel_StoreItemPrice.WBP_Panel_StoreItemPrice_C.HandleDiscountPercentChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleOwnedTextChanged(struct FText NewOwnedText); // Function WBP_Panel_StoreItemPrice.WBP_Panel_StoreItemPrice_C.HandleOwnedTextChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleShowCheckmarkIfOwnedChanged(bool ShouldShowCheckmark); // Function WBP_Panel_StoreItemPrice.WBP_Panel_StoreItemPrice_C.HandleShowCheckmarkIfOwnedChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleCostStringChanged(struct FString CurrentCostString); // Function WBP_Panel_StoreItemPrice.WBP_Panel_StoreItemPrice_C.HandleCostStringChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleCostWithDiscountChanged(struct FOfferCostWithDiscountInfo NewCostList); // Function WBP_Panel_StoreItemPrice.WBP_Panel_StoreItemPrice_C.HandleCostWithDiscountChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetOrientation(); // Function WBP_Panel_StoreItemPrice.WBP_Panel_StoreItemPrice_C.SetOrientation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetCurrencyIconColor(struct FLinearColor TintColor); // Function WBP_Panel_StoreItemPrice.WBP_Panel_StoreItemPrice_C.SetCurrencyIconColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void AssignFinalCostStyle(struct UCommonTextStyle* InStyle); // Function WBP_Panel_StoreItemPrice.WBP_Panel_StoreItemPrice_C.AssignFinalCostStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void AssignStrikethroughCostStyle(struct UCommonTextStyle* InStyle); // Function WBP_Panel_StoreItemPrice.WBP_Panel_StoreItemPrice_C.AssignStrikethroughCostStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void AssignStyles(); // Function WBP_Panel_StoreItemPrice.WBP_Panel_StoreItemPrice_C.AssignStyles // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleCurrencyIconChanged(struct UTexture* CurrencyIcon); // Function WBP_Panel_StoreItemPrice.WBP_Panel_StoreItemPrice_C.HandleCurrencyIconChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleCostChanged(int32_t Cost); // Function WBP_Panel_StoreItemPrice.WBP_Panel_StoreItemPrice_C.HandleCostChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleStrikethroughCostChanged(int32_t StrikethroughCost); // Function WBP_Panel_StoreItemPrice.WBP_Panel_StoreItemPrice_C.HandleStrikethroughCostChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleIsItemOwnedChanged(bool bIsItemOwned); // Function WBP_Panel_StoreItemPrice.WBP_Panel_StoreItemPrice_C.HandleIsItemOwnedChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_StoreItemPrice.WBP_Panel_StoreItemPrice_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Panel_StoreItemPrice(int32_t EntryPoint); // Function WBP_Panel_StoreItemPrice.WBP_Panel_StoreItemPrice_C.ExecuteUbergraph_WBP_Panel_StoreItemPrice // (Final|UbergraphFunction) // @ game+0x1af5410
};

