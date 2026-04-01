// WidgetBlueprintGeneratedClass WBP_Screen_AresPointPurchase.WBP_Screen_AresPointPurchase_C
// Size: 0x5b1 (Inherited: 0x520)
struct UWBP_Screen_AresPointPurchase_C : UAresScreenBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x520(0x08)
	struct UOverlay* AresPointsPurchaseOverlay; // 0x528(0x08)
	struct UAresCommonText* DisclaimerText; // 0x530(0x08)
	struct UOverlay* EmptyStoreOverlay; // 0x538(0x08)
	struct UWBP_Panel_StoreOffers_C* WBP_Panel_StoreOffers; // 0x540(0x08)
	struct UWidgetSwitcher* WidgetSwitcher_1; // 0x548(0x08)
	struct UVM_AresPointPurchase_C* VM_AresPointPurchase; // 0x550(0x08)
	struct FAresConditionalInputAction RefundPolicyAction; // 0x558(0x28)
	struct FAresConditionalInputAction TermsAndConditionsAction; // 0x580(0x28)
	struct URegionSpecificQRLViewModel* RegionSpecificQRLVM; // 0x5a8(0x08)
	bool ShowRegionSpecificLinks; // 0x5b0(0x01)

	void Handle Show External Links Changed(bool bShowExternalLinks); // Function WBP_Screen_AresPointPurchase.WBP_Screen_AresPointPurchase_C.Handle Show External Links Changed // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleRefundPressed(struct FName ActionName); // Function WBP_Screen_AresPointPurchase.WBP_Screen_AresPointPurchase_C.HandleRefundPressed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleTermsAndConditionsPressed(struct FName ActionName); // Function WBP_Screen_AresPointPurchase.WBP_Screen_AresPointPurchase_C.HandleTermsAndConditionsPressed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetupCIACallbacks(); // Function WBP_Screen_AresPointPurchase.WBP_Screen_AresPointPurchase_C.SetupCIACallbacks // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleIsStoreEmptyChanged(bool bIsStoreEmpty); // Function WBP_Screen_AresPointPurchase.WBP_Screen_AresPointPurchase_C.HandleIsStoreEmptyChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	struct UWidget* BP_GetDesiredFocusTarget(); // Function WBP_Screen_AresPointPurchase.WBP_Screen_AresPointPurchase_C.BP_GetDesiredFocusTarget // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1af5410
	void Handle Offer Object Selected(struct UObject* SelectedOfferObject, enum class Enum_OffersType OfferType); // Function WBP_Screen_AresPointPurchase.WBP_Screen_AresPointPurchase_C.Handle Offer Object Selected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindEvents(bool Bind); // Function WBP_Screen_AresPointPurchase.WBP_Screen_AresPointPurchase_C.BindEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitViewModel(); // Function WBP_Screen_AresPointPurchase.WBP_Screen_AresPointPurchase_C.InitViewModel // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function WBP_Screen_AresPointPurchase.WBP_Screen_AresPointPurchase_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function WBP_Screen_AresPointPurchase.WBP_Screen_AresPointPurchase_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void K2_BindToViewModel(); // Function WBP_Screen_AresPointPurchase.WBP_Screen_AresPointPurchase_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Destruct(); // Function WBP_Screen_AresPointPurchase.WBP_Screen_AresPointPurchase_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void BP_OnActivated(); // Function WBP_Screen_AresPointPurchase.WBP_Screen_AresPointPurchase_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void BP_OnDeactivated(); // Function WBP_Screen_AresPointPurchase.WBP_Screen_AresPointPurchase_C.BP_OnDeactivated // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Screen_AresPointPurchase(int32_t EntryPoint); // Function WBP_Screen_AresPointPurchase.WBP_Screen_AresPointPurchase_C.ExecuteUbergraph_WBP_Screen_AresPointPurchase // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

