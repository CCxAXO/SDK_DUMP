// BlueprintGeneratedClass VM_GiftOfferButton.VM_GiftOfferButton_C
// Size: 0xd0 (Inherited: 0x90)
struct UVM_GiftOfferButton_C : UAresViewModelBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x90(0x08)
	struct UOfferDTO* Primary Offer DTO; // 0x98(0x08)
	struct UOfferDTO* Selected Sub Offer DTO; // 0xa0(0x08)
	struct FName NavParamName_OfferList; // 0xa8(0x0c)
	char pad_B4[0x4]; // 0xb4(0x04)
	struct FString NavUrl_GiftingScreen; // 0xb8(0x10)
	struct UOfferDTOList* OfferDTOList; // 0xc8(0x08)

	void UpdateOfferDTOs(); // Function VM_GiftOfferButton.VM_GiftOfferButton_C.UpdateOfferDTOs // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void NavigateToGiftingScreen(); // Function VM_GiftOfferButton.VM_GiftOfferButton_C.NavigateToGiftingScreen // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetSelectedSubOfferDTO(struct UOfferDTO* SelectedSubOfferDTO); // Function VM_GiftOfferButton.VM_GiftOfferButton_C.SetSelectedSubOfferDTO // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetPrimaryOfferDTO(struct UBundleViewModel* BundleOfferDTO); // Function VM_GiftOfferButton.VM_GiftOfferButton_C.SetPrimaryOfferDTO // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnViewModelCreated(); // Function VM_GiftOfferButton.VM_GiftOfferButton_C.OnViewModelCreated // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_VM_GiftOfferButton(int32_t EntryPoint); // Function VM_GiftOfferButton.VM_GiftOfferButton_C.ExecuteUbergraph_VM_GiftOfferButton // (Final|UbergraphFunction) // @ game+0x1b42740
};

