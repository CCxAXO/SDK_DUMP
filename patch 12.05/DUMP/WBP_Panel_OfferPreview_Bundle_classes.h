// WidgetBlueprintGeneratedClass WBP_Panel_OfferPreview_Bundle.WBP_Panel_OfferPreview_Bundle_C
// Size: 0x3f8 (Inherited: 0x3e0)
struct UWBP_Panel_OfferPreview_Bundle_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UImage* BundleSplashImage; // 0x3e8(0x08)
	struct UVM_StorefrontItem_C* VM_StorefrontItem; // 0x3f0(0x08)

	void OnBundleBackgroundImageChanged(struct UTexture2D* BundleBackgroundImage); // Function WBP_Panel_OfferPreview_Bundle.WBP_Panel_OfferPreview_Bundle_C.OnBundleBackgroundImageChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitViewModels(); // Function WBP_Panel_OfferPreview_Bundle.WBP_Panel_OfferPreview_Bundle_C.InitViewModels // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindEvents(bool Bind); // Function WBP_Panel_OfferPreview_Bundle.WBP_Panel_OfferPreview_Bundle_C.BindEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitFromOfferDTO(struct UOfferDTO* OfferDTO); // Function WBP_Panel_OfferPreview_Bundle.WBP_Panel_OfferPreview_Bundle_C.InitFromOfferDTO // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_OfferPreview_Bundle.WBP_Panel_OfferPreview_Bundle_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void SetOfferDTO(struct UOfferDTO* OfferDTO); // Function WBP_Panel_OfferPreview_Bundle.WBP_Panel_OfferPreview_Bundle_C.SetOfferDTO // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Destruct(); // Function WBP_Panel_OfferPreview_Bundle.WBP_Panel_OfferPreview_Bundle_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void K2_BindToViewModel(); // Function WBP_Panel_OfferPreview_Bundle.WBP_Panel_OfferPreview_Bundle_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Panel_OfferPreview_Bundle(int32_t EntryPoint); // Function WBP_Panel_OfferPreview_Bundle.WBP_Panel_OfferPreview_Bundle_C.ExecuteUbergraph_WBP_Panel_OfferPreview_Bundle // (Final|UbergraphFunction) // @ game+0x1af5410
};

