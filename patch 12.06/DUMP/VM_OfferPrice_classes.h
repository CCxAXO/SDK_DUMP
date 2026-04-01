// BlueprintGeneratedClass VM_OfferPrice.VM_OfferPrice_C
// Size: 0xf0 (Inherited: 0x90)
struct UVM_OfferPrice_C : UAresViewModelBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x90(0x08)
	struct UOfferDTO* OfferDTO; // 0x98(0x08)
	struct FMulticastInlineDelegate OnPriceChanged; // 0xa0(0x10)
	struct FMulticastInlineDelegate OnCurrencyIconChanged; // 0xb0(0x10)
	struct FGuid CurrencyID; // 0xc0(0x10)
	int32_t Price; // 0xd0(0x04)
	char pad_D4[0x4]; // 0xd4(0x04)
	struct FMulticastInlineDelegate OnCurrencyIDChanged; // 0xd8(0x10)
	struct UCurrencyHandle* CurrencyHandle; // 0xe8(0x08)

	void InitFromCostDTO(struct UCostDTO* CostDTO); // Function VM_OfferPrice.VM_OfferPrice_C.InitFromCostDTO // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetCurrencyID(struct FGuid NewCurrencyID); // Function VM_OfferPrice.VM_OfferPrice_C.SetCurrencyID // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetPrice(int32_t NewPrice); // Function VM_OfferPrice.VM_OfferPrice_C.SetPrice // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void On Currency Handle Loaded(struct UCurrencyHandle* NewCurrencyHandle); // Function VM_OfferPrice.VM_OfferPrice_C.On Currency Handle Loaded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitFromOfferDTO(struct UOfferDTO* OfferDTO); // Function VM_OfferPrice.VM_OfferPrice_C.InitFromOfferDTO // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Reset(); // Function VM_OfferPrice.VM_OfferPrice_C.Reset // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void RefreshBroadcast(); // Function VM_OfferPrice.VM_OfferPrice_C.RefreshBroadcast // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_VM_OfferPrice(int32_t EntryPoint); // Function VM_OfferPrice.VM_OfferPrice_C.ExecuteUbergraph_VM_OfferPrice // (Final|UbergraphFunction) // @ game+0x1b42740
	void OnCurrencyIDChanged__DelegateSignature(struct FGuid CurrencyID); // Function VM_OfferPrice.VM_OfferPrice_C.OnCurrencyIDChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnCurrencyIconChanged__DelegateSignature(struct UTexture* Icon); // Function VM_OfferPrice.VM_OfferPrice_C.OnCurrencyIconChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnPriceChanged__DelegateSignature(int32_t Price); // Function VM_OfferPrice.VM_OfferPrice_C.OnPriceChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

