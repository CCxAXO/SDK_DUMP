// WidgetBlueprintGeneratedClass WBP_Screen_UpgradeCurrencyPurchase.WBP_Screen_UpgradeCurrencyPurchase_C
// Size: 0x5a8 (Inherited: 0x520)
struct UWBP_Screen_UpgradeCurrencyPurchase_C : UAresScreenBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x520(0x08)
	struct UImage* Background; // 0x528(0x08)
	struct UImage* Divider; // 0x530(0x08)
	struct UWBP_CurrencyWallet_C* WBP_CurrencyWallet; // 0x538(0x08)
	struct UWBP_Panel_StoreOffers_C* WBP_Panel_StoreOffers; // 0x540(0x08)
	struct UVM_Order_C* VM_Order; // 0x548(0x08)
	struct UVM_UpgradeCurrencyPurchase_C* VM_UpgradeCurrencyPurchase; // 0x550(0x08)
	struct FAresConditionalInputAction RefundPolicyAction; // 0x558(0x28)
	struct FAresConditionalInputAction TermsAndConditionsAction; // 0x580(0x28)

	struct FAresMainMenuNavBarData GetNavBarData(); // Function WBP_Screen_UpgradeCurrencyPurchase.WBP_Screen_UpgradeCurrencyPurchase_C.GetNavBarData // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1b42740
	bool HandleBackRequest(); // Function WBP_Screen_UpgradeCurrencyPurchase.WBP_Screen_UpgradeCurrencyPurchase_C.HandleBackRequest // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleRefundPolicyPressed(struct FName ActionName); // Function WBP_Screen_UpgradeCurrencyPurchase.WBP_Screen_UpgradeCurrencyPurchase_C.HandleRefundPolicyPressed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleTermsAndConditionsPressed(struct FName ActionName); // Function WBP_Screen_UpgradeCurrencyPurchase.WBP_Screen_UpgradeCurrencyPurchase_C.HandleTermsAndConditionsPressed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetupCIACallbacks(); // Function WBP_Screen_UpgradeCurrencyPurchase.WBP_Screen_UpgradeCurrencyPurchase_C.SetupCIACallbacks // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleOfferObjectSelected(struct UObject* SelectedOfferObject, enum class Enum_OffersType OfferType); // Function WBP_Screen_UpgradeCurrencyPurchase.WBP_Screen_UpgradeCurrencyPurchase_C.HandleOfferObjectSelected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	struct UWidget* BP_GetDesiredFocusTarget(); // Function WBP_Screen_UpgradeCurrencyPurchase.WBP_Screen_UpgradeCurrencyPurchase_C.BP_GetDesiredFocusTarget // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1b42740
	void InitViewModels(); // Function WBP_Screen_UpgradeCurrencyPurchase.WBP_Screen_UpgradeCurrencyPurchase_C.InitViewModels // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindEvents(bool Bind); // Function WBP_Screen_UpgradeCurrencyPurchase.WBP_Screen_UpgradeCurrencyPurchase_C.BindEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function WBP_Screen_UpgradeCurrencyPurchase.WBP_Screen_UpgradeCurrencyPurchase_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void K2_BindToViewModel(); // Function WBP_Screen_UpgradeCurrencyPurchase.WBP_Screen_UpgradeCurrencyPurchase_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Destruct(); // Function WBP_Screen_UpgradeCurrencyPurchase.WBP_Screen_UpgradeCurrencyPurchase_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Screen_UpgradeCurrencyPurchase(int32_t EntryPoint); // Function WBP_Screen_UpgradeCurrencyPurchase.WBP_Screen_UpgradeCurrencyPurchase_C.ExecuteUbergraph_WBP_Screen_UpgradeCurrencyPurchase // (Final|UbergraphFunction) // @ game+0x1b42740
};

