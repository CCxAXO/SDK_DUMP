// WidgetBlueprintGeneratedClass WBP_Panel_OfferPreview_Bundle_Disclaimer.WBP_Panel_OfferPreview_Bundle_Disclaimer_C
// Size: 0x3f8 (Inherited: 0x3e0)
struct UWBP_Panel_OfferPreview_Bundle_Disclaimer_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UAresCommonText* ExtraDescriptionText; // 0x3e8(0x08)
	struct UVM_StorefrontItem_C* VM_StorefrontItem; // 0x3f0(0x08)

	void OnUseAdditionalContextChanged(bool UseAdditionalContext); // Function WBP_Panel_OfferPreview_Bundle_Disclaimer.WBP_Panel_OfferPreview_Bundle_Disclaimer_C.OnUseAdditionalContextChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitializeStorefrontItem(); // Function WBP_Panel_OfferPreview_Bundle_Disclaimer.WBP_Panel_OfferPreview_Bundle_Disclaimer_C.InitializeStorefrontItem // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnBundleExtraDescriptionChanged(struct FText BundleExtraDescription); // Function WBP_Panel_OfferPreview_Bundle_Disclaimer.WBP_Panel_OfferPreview_Bundle_Disclaimer_C.OnBundleExtraDescriptionChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindEvents(bool Bind); // Function WBP_Panel_OfferPreview_Bundle_Disclaimer.WBP_Panel_OfferPreview_Bundle_Disclaimer_C.BindEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitViewModels(); // Function WBP_Panel_OfferPreview_Bundle_Disclaimer.WBP_Panel_OfferPreview_Bundle_Disclaimer_C.InitViewModels // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_OfferPreview_Bundle_Disclaimer.WBP_Panel_OfferPreview_Bundle_Disclaimer_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void K2_BindToViewModel(); // Function WBP_Panel_OfferPreview_Bundle_Disclaimer.WBP_Panel_OfferPreview_Bundle_Disclaimer_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Panel_OfferPreview_Bundle_Disclaimer(int32_t EntryPoint); // Function WBP_Panel_OfferPreview_Bundle_Disclaimer.WBP_Panel_OfferPreview_Bundle_Disclaimer_C.ExecuteUbergraph_WBP_Panel_OfferPreview_Bundle_Disclaimer // (Final|UbergraphFunction) // @ game+0x1b42740
};

