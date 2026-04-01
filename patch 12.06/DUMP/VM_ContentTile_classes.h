// BlueprintGeneratedClass VM_ContentTile.VM_ContentTile_C
// Size: 0x108 (Inherited: 0x90)
struct UVM_ContentTile_C : UAresViewModelBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x90(0x08)
	struct UBaseHandle* Content Handle; // 0x98(0x08)
	struct FMulticastInlineDelegate OnContentUnlockedChanged; // 0xa0(0x10)
	struct FMulticastInlineDelegate OnOwnedOnlyByLoyaltyChanged; // 0xb0(0x10)
	bool bIsContentUnlocked; // 0xc0(0x01)
	bool bIsOwnedOnlyByLoyalty; // 0xc1(0x01)
	char pad_C2[0x6]; // 0xc2(0x06)
	struct FMulticastInlineDelegate OnViewModelUpdated2; // 0xc8(0x10)
	struct FMulticastInlineDelegate OnUnlockedOnlyBySubscriptionChanged; // 0xd8(0x10)
	bool bIsUnlockedOnlyBySubscription; // 0xe8(0x01)
	char pad_E9[0x7]; // 0xe9(0x07)
	struct FMulticastInlineDelegate OnHighestOwnedSubscriptionChanged; // 0xf0(0x10)
	struct USubscriptionDataAsset* HighestOwnedSubscription; // 0x100(0x08)

	void RefreshSubscriptionState(); // Function VM_ContentTile.VM_ContentTile_C.RefreshSubscriptionState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetIsUnlockedOnlyBySubscription(bool bIsUnlockedOnlyBySubscription); // Function VM_ContentTile.VM_ContentTile_C.SetIsUnlockedOnlyBySubscription // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void IsUnlockedOnlyBySubscription(bool& bIsUnlockedOnlyBySubscription); // Function VM_ContentTile.VM_ContentTile_C.IsUnlockedOnlyBySubscription // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void Refresh(); // Function VM_ContentTile.VM_ContentTile_C.Refresh // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void IsOwnedOnlyByLoyalty(bool& bIsOwnedOnlyByLoyalty); // Function VM_ContentTile.VM_ContentTile_C.IsOwnedOnlyByLoyalty // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void SetIsOwnedOnlyByLoyalty(bool bIsOwnedOnlyByLoyalty); // Function VM_ContentTile.VM_ContentTile_C.SetIsOwnedOnlyByLoyalty // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void IsContentUnlocked(bool& bIsContentUnlocked); // Function VM_ContentTile.VM_ContentTile_C.IsContentUnlocked // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void SetIsContentUnlocked(bool bIsContentUnlocked); // Function VM_ContentTile.VM_ContentTile_C.SetIsContentUnlocked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetContentHandle(struct UBaseHandle* Content Handle); // Function VM_ContentTile.VM_ContentTile_C.SetContentHandle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleUnlockedChanged(); // Function VM_ContentTile.VM_ContentTile_C.HandleUnlockedChanged // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Handle Owned Only by Loyalty Changed(); // Function VM_ContentTile.VM_ContentTile_C.Handle Owned Only by Loyalty Changed // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindContentHandleEvents(bool bBind); // Function VM_ContentTile.VM_ContentTile_C.BindContentHandleEvents // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnViewModelCreated(); // Function VM_ContentTile.VM_ContentTile_C.OnViewModelCreated // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void RefreshBroadcast(); // Function VM_ContentTile.VM_ContentTile_C.RefreshBroadcast // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_VM_ContentTile(int32_t EntryPoint); // Function VM_ContentTile.VM_ContentTile_C.ExecuteUbergraph_VM_ContentTile // (Final|UbergraphFunction) // @ game+0x1b42740
	void OnHighestOwnedSubscriptionChanged__DelegateSignature(struct USubscriptionDataAsset* SubscriptionDataAsset); // Function VM_ContentTile.VM_ContentTile_C.OnHighestOwnedSubscriptionChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnUnlockedOnlyBySubscriptionChanged__DelegateSignature(bool bIsUnlockedOnlyBySubscription); // Function VM_ContentTile.VM_ContentTile_C.OnUnlockedOnlyBySubscriptionChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnViewModelUpdated2__DelegateSignature(); // Function VM_ContentTile.VM_ContentTile_C.OnViewModelUpdated2__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnOwnedOnlyByLoyaltyChanged__DelegateSignature(bool IsOnlyOwnedByLoyalty); // Function VM_ContentTile.VM_ContentTile_C.OnOwnedOnlyByLoyaltyChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnContentUnlockedChanged__DelegateSignature(bool Unlocked); // Function VM_ContentTile.VM_ContentTile_C.OnContentUnlockedChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

