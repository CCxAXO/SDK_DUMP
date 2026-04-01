// WidgetBlueprintGeneratedClass PromoWidget.PromoWidget_C
// Size: 0x3a8 (Inherited: 0x318)
struct UPromoWidget_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetAnimation* UnHoverAnim; // 0x320(0x08)
	struct UWidgetAnimation* HoverAnim; // 0x328(0x08)
	struct UTextBlock* AdditionalPromoText; // 0x330(0x08)
	struct USizeBox* AdditionalPromoTextBox; // 0x338(0x08)
	struct UImage* Border; // 0x340(0x08)
	struct UImage* BundleImage; // 0x348(0x08)
	struct UImage* Focus; // 0x350(0x08)
	struct UTextBlock* Label; // 0x358(0x08)
	struct UImage* LoadingImg; // 0x360(0x08)
	struct UOverlay* OverlayLoaded; // 0x368(0x08)
	struct UOverlay* OverlayLoading; // 0x370(0x08)
	struct UTelemetryButton* PopupButton; // 0x378(0x08)
	struct UTextBlock* Sublabel; // 0x380(0x08)
	struct UWidgetSwitcher* Switcher; // 0x388(0x08)
	struct UAkAudioEvent* SoundClick; // 0x390(0x08)
	struct UAkAudioEvent* SoundHover; // 0x398(0x08)
	struct UBundleViewModel* FeaturedBundle; // 0x3a0(0x08)

	void GetBundlePromoCandidates(struct TArray<struct UBundleViewModel*>& Bundle View Models, struct TArray<struct UBundleViewModel*>& Output Bundle View Models); // Function PromoWidget.PromoWidget_C.GetBundlePromoCandidates // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void IsBundleAllowedForCountry(struct UBundleViewModel* Bundle View Model, struct FString Home Base Country, bool& Is Allowed); // Function PromoWidget.PromoWidget_C.IsBundleAllowedForCountry // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void SetFeaturedBundle(struct UBundleViewModel* Bundle); // Function PromoWidget.PromoWidget_C.SetFeaturedBundle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PickFeaturedBundleToShow(struct TArray<struct UBundleViewModel*>& FeaturedBundles, struct UBundleViewModel*& SelectedBundle); // Function PromoWidget.PromoWidget_C.PickFeaturedBundleToShow // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BndEvt__PopupButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(); // Function PromoWidget.PromoWidget_C.BndEvt__PopupButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__PopupButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature(); // Function PromoWidget.PromoWidget_C.BndEvt__PopupButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void BndEvt__PopupButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature(); // Function PromoWidget.PromoWidget_C.BndEvt__PopupButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function PromoWidget.PromoWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void StorefrontItemLoaded(struct UStorefrontItemHandle* StorefrontItemHandle); // Function PromoWidget.PromoWidget_C.StorefrontItemLoaded // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function PromoWidget.PromoWidget_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnFeaturedBundles(struct TArray<struct UBundleViewModel*>& FeaturedBundles); // Function PromoWidget.PromoWidget_C.OnFeaturedBundles // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_PromoWidget(int32_t EntryPoint); // Function PromoWidget.PromoWidget_C.ExecuteUbergraph_PromoWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

