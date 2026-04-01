// WidgetBlueprintGeneratedClass WBP_Panel_OfferPreview_PlatformOffer_PurchaseConfirm_Disclaimer.WBP_Panel_OfferPreview_PlatformOffer_PurchaseConfirm_Disclaimer_C
// Size: 0x408 (Inherited: 0x3e0)
struct UWBP_Panel_OfferPreview_PlatformOffer_PurchaseConfirm_Disclaimer_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UAresCommonScrollBox* DescriptionScrollBox; // 0x3e8(0x08)
	struct UAresCommonText* DescriptionText; // 0x3f0(0x08)
	struct UVM_PlatformOffer_C* VM_PlatformOffer; // 0x3f8(0x08)
	double ScrollSpeed; // 0x400(0x08)

	void InitFromOfferDTO(struct UOfferDTO* Offer DTO); // Function WBP_Panel_OfferPreview_PlatformOffer_PurchaseConfirm_Disclaimer.WBP_Panel_OfferPreview_PlatformOffer_PurchaseConfirm_Disclaimer_C.InitFromOfferDTO // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnDescriptionTextChanged(struct FText DescriptionText); // Function WBP_Panel_OfferPreview_PlatformOffer_PurchaseConfirm_Disclaimer.WBP_Panel_OfferPreview_PlatformOffer_PurchaseConfirm_Disclaimer_C.OnDescriptionTextChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindEvents(bool Bind); // Function WBP_Panel_OfferPreview_PlatformOffer_PurchaseConfirm_Disclaimer.WBP_Panel_OfferPreview_PlatformOffer_PurchaseConfirm_Disclaimer_C.BindEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitViewModels(); // Function WBP_Panel_OfferPreview_PlatformOffer_PurchaseConfirm_Disclaimer.WBP_Panel_OfferPreview_PlatformOffer_PurchaseConfirm_Disclaimer_C.InitViewModels // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_OfferPreview_PlatformOffer_PurchaseConfirm_Disclaimer.WBP_Panel_OfferPreview_PlatformOffer_PurchaseConfirm_Disclaimer_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void K2_BindToViewModel(); // Function WBP_Panel_OfferPreview_PlatformOffer_PurchaseConfirm_Disclaimer.WBP_Panel_OfferPreview_PlatformOffer_PurchaseConfirm_Disclaimer_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Destruct(); // Function WBP_Panel_OfferPreview_PlatformOffer_PurchaseConfirm_Disclaimer.WBP_Panel_OfferPreview_PlatformOffer_PurchaseConfirm_Disclaimer_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void SetOfferDTO(struct UOfferDTO* OfferDTO); // Function WBP_Panel_OfferPreview_PlatformOffer_PurchaseConfirm_Disclaimer.WBP_Panel_OfferPreview_PlatformOffer_PurchaseConfirm_Disclaimer_C.SetOfferDTO // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Panel_OfferPreview_PlatformOffer_PurchaseConfirm_Disclaimer(int32_t EntryPoint); // Function WBP_Panel_OfferPreview_PlatformOffer_PurchaseConfirm_Disclaimer.WBP_Panel_OfferPreview_PlatformOffer_PurchaseConfirm_Disclaimer_C.ExecuteUbergraph_WBP_Panel_OfferPreview_PlatformOffer_PurchaseConfirm_Disclaimer // (Final|UbergraphFunction) // @ game+0x1af5410
};

