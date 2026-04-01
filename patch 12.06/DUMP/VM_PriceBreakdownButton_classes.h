// BlueprintGeneratedClass VM_PriceBreakdownButton.VM_PriceBreakdownButton_C
// Size: 0xa8 (Inherited: 0x90)
struct UVM_PriceBreakdownButton_C : UAresViewModelBase {
	struct UOfferDTO* OfferDTO; // 0x90(0x08)
	struct FMulticastInlineDelegate OnOfferDTOChanged; // 0x98(0x10)

	void SetOfferDTO(struct UOfferDTO* InOfferDTO); // Function VM_PriceBreakdownButton.VM_PriceBreakdownButton_C.SetOfferDTO // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleClick(); // Function VM_PriceBreakdownButton.VM_PriceBreakdownButton_C.HandleClick // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnOfferDTOChanged__DelegateSignature(struct UOfferDTO* OfferDTO); // Function VM_PriceBreakdownButton.VM_PriceBreakdownButton_C.OnOfferDTOChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

