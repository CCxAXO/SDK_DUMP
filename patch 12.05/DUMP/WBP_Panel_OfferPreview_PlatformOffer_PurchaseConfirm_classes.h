// WidgetBlueprintGeneratedClass WBP_Panel_OfferPreview_PlatformOffer_PurchaseConfirm.WBP_Panel_OfferPreview_PlatformOffer_PurchaseConfirm_C
// Size: 0x410 (Inherited: 0x3e0)
struct UWBP_Panel_OfferPreview_PlatformOffer_PurchaseConfirm_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UTextBlock* BonusVPDescription; // 0x3e8(0x08)
	struct UImage* VPCurrencyIconNeedVisDUpdate; // 0x3f0(0x08)
	struct UWBP_Decoration_Arrow_C* WBP_Decoration_Arrow; // 0x3f8(0x08)
	struct UWBP_Decoration_Arrow_C* WBP_Decoration_Arrow_2; // 0x400(0x08)
	struct UVM_PlatformOffer_C* PlatformOfferViewModel; // 0x408(0x08)

	void OnDescriptionTextChanged(struct FText DescriptionText); // Function WBP_Panel_OfferPreview_PlatformOffer_PurchaseConfirm.WBP_Panel_OfferPreview_PlatformOffer_PurchaseConfirm_C.OnDescriptionTextChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void On Platform Offer Quantity Changed(int32_t BaseQuantity, int32_t BonusQuantity); // Function WBP_Panel_OfferPreview_PlatformOffer_PurchaseConfirm.WBP_Panel_OfferPreview_PlatformOffer_PurchaseConfirm_C.On Platform Offer Quantity Changed // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitViewModels(); // Function WBP_Panel_OfferPreview_PlatformOffer_PurchaseConfirm.WBP_Panel_OfferPreview_PlatformOffer_PurchaseConfirm_C.InitViewModels // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindEvents(bool Bind); // Function WBP_Panel_OfferPreview_PlatformOffer_PurchaseConfirm.WBP_Panel_OfferPreview_PlatformOffer_PurchaseConfirm_C.BindEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitFromOfferDTO(struct UOfferDTO* OfferDTO); // Function WBP_Panel_OfferPreview_PlatformOffer_PurchaseConfirm.WBP_Panel_OfferPreview_PlatformOffer_PurchaseConfirm_C.InitFromOfferDTO // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_OfferPreview_PlatformOffer_PurchaseConfirm.WBP_Panel_OfferPreview_PlatformOffer_PurchaseConfirm_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Destruct(); // Function WBP_Panel_OfferPreview_PlatformOffer_PurchaseConfirm.WBP_Panel_OfferPreview_PlatformOffer_PurchaseConfirm_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void K2_BindToViewModel(); // Function WBP_Panel_OfferPreview_PlatformOffer_PurchaseConfirm.WBP_Panel_OfferPreview_PlatformOffer_PurchaseConfirm_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void SetOfferDTO(struct UOfferDTO* OfferDTO); // Function WBP_Panel_OfferPreview_PlatformOffer_PurchaseConfirm.WBP_Panel_OfferPreview_PlatformOffer_PurchaseConfirm_C.SetOfferDTO // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Panel_OfferPreview_PlatformOffer_PurchaseConfirm(int32_t EntryPoint); // Function WBP_Panel_OfferPreview_PlatformOffer_PurchaseConfirm.WBP_Panel_OfferPreview_PlatformOffer_PurchaseConfirm_C.ExecuteUbergraph_WBP_Panel_OfferPreview_PlatformOffer_PurchaseConfirm // (Final|UbergraphFunction) // @ game+0x1af5410
};

