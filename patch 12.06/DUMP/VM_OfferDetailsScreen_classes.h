// BlueprintGeneratedClass VM_OfferDetailsScreen.VM_OfferDetailsScreen_C
// Size: 0xfc (Inherited: 0x90)
struct UVM_OfferDetailsScreen_C : UAresViewModelBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x90(0x08)
	struct FMulticastInlineDelegate OnOfferOrRewardListChanged; // 0x98(0x10)
	struct UOfferDTO* OfferDTO; // 0xa8(0x08)
	struct URewardModelList* RewardList; // 0xb0(0x08)
	struct FMulticastInlineDelegate OnHideLockIconChanged; // 0xb8(0x10)
	struct FString HideLockIcon; // 0xc8(0x10)
	struct FName NavParameterName_OfferDTO; // 0xd8(0x0c)
	struct FName NavParameterName_RewardList; // 0xe4(0x0c)
	struct FName NavParameterName_HideLockIcon; // 0xf0(0x0c)

	void Init(struct UOfferDTO* OfferDTO, struct URewardModelList* RewardlList, struct FString HideLockIcon); // Function VM_OfferDetailsScreen.VM_OfferDetailsScreen_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitFromNavArgs(struct TMap<struct FName, struct FWildcard> NavParameters); // Function VM_OfferDetailsScreen.VM_OfferDetailsScreen_C.InitFromNavArgs // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitFromNavigationSystem(); // Function VM_OfferDetailsScreen.VM_OfferDetailsScreen_C.InitFromNavigationSystem // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Reset(); // Function VM_OfferDetailsScreen.VM_OfferDetailsScreen_C.Reset // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_VM_OfferDetailsScreen(int32_t EntryPoint); // Function VM_OfferDetailsScreen.VM_OfferDetailsScreen_C.ExecuteUbergraph_VM_OfferDetailsScreen // (Final|UbergraphFunction) // @ game+0x1b42740
	void OnHideLockIconChanged__DelegateSignature(bool InOverrideLockIcon); // Function VM_OfferDetailsScreen.VM_OfferDetailsScreen_C.OnHideLockIconChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnOfferOrRewardListChanged__DelegateSignature(struct UOfferDTO* InOfferDTO, struct URewardModelList* InRewardList); // Function VM_OfferDetailsScreen.VM_OfferDetailsScreen_C.OnOfferOrRewardListChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

