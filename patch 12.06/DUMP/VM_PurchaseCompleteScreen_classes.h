// BlueprintGeneratedClass VM_PurchaseCompleteScreen.VM_PurchaseCompleteScreen_C
// Size: 0xd0 (Inherited: 0x90)
struct UVM_PurchaseCompleteScreen_C : UAresViewModelBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x90(0x08)
	struct UOfferDTO* OfferDTO; // 0x98(0x08)
	struct URewardModelList* RewardList; // 0xa0(0x08)
	struct FMulticastInlineDelegate OnOfferOrRewardListChanged; // 0xa8(0x10)
	struct FName NavArgOfferObject; // 0xb8(0x0c)
	struct FName NavArgRewardList; // 0xc4(0x0c)

	void InitFromRewardList(struct URewardModelList* RewardList); // Function VM_PurchaseCompleteScreen.VM_PurchaseCompleteScreen_C.InitFromRewardList // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Init from OfferDTO(struct UOfferDTO* OfferDTO); // Function VM_PurchaseCompleteScreen.VM_PurchaseCompleteScreen_C.Init from OfferDTO // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitFromNavArgs(struct TMap<struct FName, struct FWildcard> NavParam_OfferObject); // Function VM_PurchaseCompleteScreen.VM_PurchaseCompleteScreen_C.InitFromNavArgs // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HideNativePlatformIconOverlay(); // Function VM_PurchaseCompleteScreen.VM_PurchaseCompleteScreen_C.HideNativePlatformIconOverlay // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Init(); // Function VM_PurchaseCompleteScreen.VM_PurchaseCompleteScreen_C.Init // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Reset(); // Function VM_PurchaseCompleteScreen.VM_PurchaseCompleteScreen_C.Reset // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_VM_PurchaseCompleteScreen(int32_t EntryPoint); // Function VM_PurchaseCompleteScreen.VM_PurchaseCompleteScreen_C.ExecuteUbergraph_VM_PurchaseCompleteScreen // (Final|UbergraphFunction) // @ game+0x1b42740
	void OnOfferOrRewardListChanged__DelegateSignature(struct UOfferDTO* InOfferDTO, struct URewardModelList* InRewardList); // Function VM_PurchaseCompleteScreen.VM_PurchaseCompleteScreen_C.OnOfferOrRewardListChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

