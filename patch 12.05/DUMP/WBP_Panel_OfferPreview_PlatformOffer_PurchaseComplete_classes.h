// WidgetBlueprintGeneratedClass WBP_Panel_OfferPreview_PlatformOffer_PurchaseComplete.WBP_Panel_OfferPreview_PlatformOffer_PurchaseComplete_C
// Size: 0x438 (Inherited: 0x3e0)
struct UWBP_Panel_OfferPreview_PlatformOffer_PurchaseComplete_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UTextBlock* BonusVPBreakdown; // 0x3e8(0x08)
	struct UHorizontalBox* BonusVPBreakdownBox; // 0x3f0(0x08)
	struct UTextBlock* FormattedPrice; // 0x3f8(0x08)
	struct UTextBlock* NewBalanceText; // 0x400(0x08)
	struct UTextBlock* PurchasedAmountText; // 0x408(0x08)
	struct UTextBlock* TotalVPAmount; // 0x410(0x08)
	struct UImage* VerticalDivider; // 0x418(0x08)
	struct UAresCommonText* WalletUpdateMessage; // 0x420(0x08)
	struct UWBP_Decoration_Arrow_C* WBP_Decoration_Arrow; // 0x428(0x08)
	struct UWBP_Decoration_Arrow_C* WBP_Decoration_Arrow_2; // 0x430(0x08)

	void SetTotalVPAmount(int32_t TotalAmount); // Function WBP_Panel_OfferPreview_PlatformOffer_PurchaseComplete.WBP_Panel_OfferPreview_PlatformOffer_PurchaseComplete_C.SetTotalVPAmount // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetBonusVP(int32_t TotalQuantity, int32_t BonusQuantity); // Function WBP_Panel_OfferPreview_PlatformOffer_PurchaseComplete.WBP_Panel_OfferPreview_PlatformOffer_PurchaseComplete_C.SetBonusVP // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetRemainingBalanceInfo(); // Function WBP_Panel_OfferPreview_PlatformOffer_PurchaseComplete.WBP_Panel_OfferPreview_PlatformOffer_PurchaseComplete_C.SetRemainingBalanceInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetFormattedPrice(struct FString InFormattedPrice); // Function WBP_Panel_OfferPreview_PlatformOffer_PurchaseComplete.WBP_Panel_OfferPreview_PlatformOffer_PurchaseComplete_C.SetFormattedPrice // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitFromOfferDTO(struct UOfferDTO* OfferDTO); // Function WBP_Panel_OfferPreview_PlatformOffer_PurchaseComplete.WBP_Panel_OfferPreview_PlatformOffer_PurchaseComplete_C.InitFromOfferDTO // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetOfferDTO(struct UOfferDTO* OfferDTO); // Function WBP_Panel_OfferPreview_PlatformOffer_PurchaseComplete.WBP_Panel_OfferPreview_PlatformOffer_PurchaseComplete_C.SetOfferDTO // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Panel_OfferPreview_PlatformOffer_PurchaseComplete(int32_t EntryPoint); // Function WBP_Panel_OfferPreview_PlatformOffer_PurchaseComplete.WBP_Panel_OfferPreview_PlatformOffer_PurchaseComplete_C.ExecuteUbergraph_WBP_Panel_OfferPreview_PlatformOffer_PurchaseComplete // (Final|UbergraphFunction) // @ game+0x1af5410
};

