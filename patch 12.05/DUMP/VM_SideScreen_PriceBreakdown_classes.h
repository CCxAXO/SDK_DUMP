// BlueprintGeneratedClass VM_SideScreen_PriceBreakdown.VM_SideScreen_PriceBreakdown_C
// Size: 0xb4 (Inherited: 0x90)
struct UVM_SideScreen_PriceBreakdown_C : UAresViewModelBase {
	struct UOfferDTO* OfferDTO; // 0x90(0x08)
	struct FMulticastInlineDelegate OnOfferDTOChanged; // 0x98(0x10)
	struct FName NavArgOfferObject; // 0xa8(0x0c)

	void InitFromNavArgs(struct TMap<struct FName, struct FWildcard> NavArgs); // Function VM_SideScreen_PriceBreakdown.VM_SideScreen_PriceBreakdown_C.InitFromNavArgs // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetOfferDTO(struct UOfferDTO* InOfferDTO); // Function VM_SideScreen_PriceBreakdown.VM_SideScreen_PriceBreakdown_C.SetOfferDTO // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitFromNavigationParam(); // Function VM_SideScreen_PriceBreakdown.VM_SideScreen_PriceBreakdown_C.InitFromNavigationParam // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnOfferDTOChanged__DelegateSignature(struct UOfferDTO* OfferDTO); // Function VM_SideScreen_PriceBreakdown.VM_SideScreen_PriceBreakdown_C.OnOfferDTOChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

