// BlueprintGeneratedClass VM_PlatformOffer.VM_PlatformOffer_C
// Size: 0x100 (Inherited: 0x90)
struct UVM_PlatformOffer_C : UAresViewModelBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x90(0x08)
	int32_t BaseQuantity; // 0x98(0x04)
	int32_t BonusQuantity; // 0x9c(0x04)
	struct FString CurrentCostString; // 0xa0(0x10)
	struct FMulticastInlineDelegate OnCostStringChanged; // 0xb0(0x10)
	struct FMulticastInlineDelegate OnQuantityChanged; // 0xc0(0x10)
	int32_t TotalQuantity; // 0xd0(0x04)
	char pad_D4[0x4]; // 0xd4(0x04)
	struct FText DescriptionText; // 0xd8(0x18)
	struct FMulticastInlineDelegate OnDescriptionTextChanged; // 0xf0(0x10)

	void SetQuantity(int32_t NewTotalQuantity, int32_t NewBonusQuantity); // Function VM_PlatformOffer.VM_PlatformOffer_C.SetQuantity // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Init from Platform Offer DTO(struct UPlatformOfferDTO* PlatformOfferDTO); // Function VM_PlatformOffer.VM_PlatformOffer_C.Init from Platform Offer DTO // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetCostString(struct FString NewCostString); // Function VM_PlatformOffer.VM_PlatformOffer_C.SetCostString // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetDescriptionText(struct FText InDescriptionText); // Function VM_PlatformOffer.VM_PlatformOffer_C.SetDescriptionText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void RefreshBroadcast(); // Function VM_PlatformOffer.VM_PlatformOffer_C.RefreshBroadcast // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Reset(); // Function VM_PlatformOffer.VM_PlatformOffer_C.Reset // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_VM_PlatformOffer(int32_t EntryPoint); // Function VM_PlatformOffer.VM_PlatformOffer_C.ExecuteUbergraph_VM_PlatformOffer // (Final|UbergraphFunction) // @ game+0x1b42740
	void OnDescriptionTextChanged__DelegateSignature(struct FText DescriptionText); // Function VM_PlatformOffer.VM_PlatformOffer_C.OnDescriptionTextChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnQuantityChanged__DelegateSignature(int32_t BaseQuantity, int32_t BonusQuantity); // Function VM_PlatformOffer.VM_PlatformOffer_C.OnQuantityChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnCostStringChanged__DelegateSignature(struct FString CurrentCostString); // Function VM_PlatformOffer.VM_PlatformOffer_C.OnCostStringChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

