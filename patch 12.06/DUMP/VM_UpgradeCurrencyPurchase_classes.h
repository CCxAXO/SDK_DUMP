// BlueprintGeneratedClass VM_UpgradeCurrencyPurchase.VM_UpgradeCurrencyPurchase_C
// Size: 0xd0 (Inherited: 0x90)
struct UVM_UpgradeCurrencyPurchase_C : UAresViewModelBase {
	struct FString RefundPolicyBaseURL; // 0x90(0x10)
	struct FString JapanRefundPolicyConditionsURL; // 0xa0(0x10)
	struct FString TermsAndConditionsBaseURL; // 0xb0(0x10)
	struct FString JapanTermsAndConditionsURL; // 0xc0(0x10)

	void GetRefundPolicyURLByRegion(struct FString& TermsAndRefundBaseURLwParam); // Function VM_UpgradeCurrencyPurchase.VM_UpgradeCurrencyPurchase_C.GetRefundPolicyURLByRegion // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetTermsAndConditionsURLByRegion(struct FString& TermsAndRefundBaseURL); // Function VM_UpgradeCurrencyPurchase.VM_UpgradeCurrencyPurchase_C.GetTermsAndConditionsURLByRegion // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetUrl(bool IsRefundPolicy, struct FString& URL); // Function VM_UpgradeCurrencyPurchase.VM_UpgradeCurrencyPurchase_C.GetUrl // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OpenTermsOrRefundPolicyPopup(bool IsRefundPolicy); // Function VM_UpgradeCurrencyPurchase.VM_UpgradeCurrencyPurchase_C.OpenTermsOrRefundPolicyPopup // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleOfferObjectSelected(struct UObject* SelectedOfferObject, enum class Enum_OffersType OffersType); // Function VM_UpgradeCurrencyPurchase.VM_UpgradeCurrencyPurchase_C.HandleOfferObjectSelected // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

