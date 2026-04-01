// BlueprintGeneratedClass VM_GiftingCenterScreen.VM_GiftingCenterScreen_C
// Size: 0x128 (Inherited: 0x90)
struct UVM_GiftingCenterScreen_C : UAresViewModelBase {
	struct TArray<struct UOfferDTO*> OffersList; // 0x90(0x10)
	struct FName NavParamName_OfferObject; // 0xa0(0x0c)
	struct FName NavParamName_OfferList; // 0xac(0x0c)
	struct TMap<struct FName, struct FWildcard> NavArgs; // 0xb8(0x50)
	struct FString NavSelectGiftRecipient; // 0x108(0x10)
	struct FString NavPurchaseConfirm; // 0x118(0x10)

	void InitFromOffersList(struct TArray<struct UOfferDTO*>& OffersList); // Function VM_GiftingCenterScreen.VM_GiftingCenterScreen_C.InitFromOffersList // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleNextClicked(); // Function VM_GiftingCenterScreen.VM_GiftingCenterScreen_C.HandleNextClicked // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleGiftRecipientClicked(); // Function VM_GiftingCenterScreen.VM_GiftingCenterScreen_C.HandleGiftRecipientClicked // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetOffersList(struct TArray<struct UOfferDTO*>& InOffersList); // Function VM_GiftingCenterScreen.VM_GiftingCenterScreen_C.SetOffersList // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitFromNavigationSystem(); // Function VM_GiftingCenterScreen.VM_GiftingCenterScreen_C.InitFromNavigationSystem // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitFromNavArgs(struct TMap<struct FName, struct FWildcard> NavArgs); // Function VM_GiftingCenterScreen.VM_GiftingCenterScreen_C.InitFromNavArgs // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

