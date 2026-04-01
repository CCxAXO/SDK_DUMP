// BlueprintGeneratedClass VM_AresPointPurchase.VM_AresPointPurchase_C
// Size: 0xf0 (Inherited: 0x90)
struct UVM_AresPointPurchase_C : UAresViewModelBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x90(0x08)
	bool bIsStoreEmpty; // 0x98(0x01)
	char pad_99[0x7]; // 0x99(0x07)
	struct FMulticastInlineDelegate OnIsStoreEmptyChanged; // 0xa0(0x10)
	struct FString RefundPolicyBaseURL; // 0xb0(0x10)
	struct FString JapanRefundPolicyURL; // 0xc0(0x10)
	struct FString TermsAndConditionsBaseURL; // 0xd0(0x10)
	struct FString JapanTermsAndConditionsURL; // 0xe0(0x10)

	void OpenAllTermsAndConditionsScreen(); // Function VM_AresPointPurchase.VM_AresPointPurchase_C.OpenAllTermsAndConditionsScreen // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetTermsAndConditionsURLByRegion(struct FString& TermsAndRefundBaseURL); // Function VM_AresPointPurchase.VM_AresPointPurchase_C.GetTermsAndConditionsURLByRegion // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetRefundURLByRegion(struct FString& TermsAndRefundBaseURLwParam); // Function VM_AresPointPurchase.VM_AresPointPurchase_C.GetRefundURLByRegion // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetUrl(bool IsRefundPolicy, struct FString& URL); // Function VM_AresPointPurchase.VM_AresPointPurchase_C.GetUrl // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void IsPlatformOffersEmpty(bool& IsPlatformOffersEmpty); // Function VM_AresPointPurchase.VM_AresPointPurchase_C.IsPlatformOffersEmpty // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void OpenTermsOrRefundPolicyPopup(bool IsRefundPolicy); // Function VM_AresPointPurchase.VM_AresPointPurchase_C.OpenTermsOrRefundPolicyPopup // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetIsStoreEmpty(bool inIsStoreEmpty); // Function VM_AresPointPurchase.VM_AresPointPurchase_C.SetIsStoreEmpty // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Init(); // Function VM_AresPointPurchase.VM_AresPointPurchase_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnAresPointPurchaseScreenActivated(); // Function VM_AresPointPurchase.VM_AresPointPurchase_C.OnAresPointPurchaseScreenActivated // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HideNativePlatformOfferUiOverlay(); // Function VM_AresPointPurchase.VM_AresPointPurchase_C.HideNativePlatformOfferUiOverlay // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ShowNativePlatformOfferUiOverlay(); // Function VM_AresPointPurchase.VM_AresPointPurchase_C.ShowNativePlatformOfferUiOverlay // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleOfferObjectSelected(struct UObject* OfferDTO); // Function VM_AresPointPurchase.VM_AresPointPurchase_C.HandleOfferObjectSelected // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void RefreshBroadcast(); // Function VM_AresPointPurchase.VM_AresPointPurchase_C.RefreshBroadcast // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_VM_AresPointPurchase(int32_t EntryPoint); // Function VM_AresPointPurchase.VM_AresPointPurchase_C.ExecuteUbergraph_VM_AresPointPurchase // (Final|UbergraphFunction) // @ game+0x1af5410
	void OnIsStoreEmptyChanged__DelegateSignature(bool bIsStoreEmpty); // Function VM_AresPointPurchase.VM_AresPointPurchase_C.OnIsStoreEmptyChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

