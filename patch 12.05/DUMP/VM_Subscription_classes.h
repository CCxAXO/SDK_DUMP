// BlueprintGeneratedClass VM_Subscription.VM_Subscription_C
// Size: 0x100 (Inherited: 0x90)
struct UVM_Subscription_C : UAresViewModelBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x90(0x08)
	struct FSubscriptionHandles SubscriptionHandles; // 0x98(0x50)
	bool SubscriptionHandlesLoaded; // 0xe8(0x01)
	char pad_E9[0x7]; // 0xe9(0x07)
	struct FMulticastInlineDelegate OnSubscriptionsLoaded; // 0xf0(0x10)

	void Get Highlight Color By Subscription(struct USubscriptionDataAsset* SubscriptionDataAsset, struct FLinearColor& SubscriptionHighlightColor); // Function VM_Subscription.VM_Subscription_C.Get Highlight Color By Subscription // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Get Display Name By Subscription(struct USubscriptionDataAsset* SubscriptionDataAsset, struct FText& SubscriptionName); // Function VM_Subscription.VM_Subscription_C.Get Display Name By Subscription // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Get Icon By Subscription(struct USubscriptionDataAsset* SubscriptionDataAsset, struct UTexture*& SubscriptionIcon); // Function VM_Subscription.VM_Subscription_C.Get Icon By Subscription // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnSubscriptionHandlesLoaded(struct FSubscriptionHandles& SubscriptionHandles); // Function VM_Subscription.VM_Subscription_C.OnSubscriptionHandlesLoaded // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void RefreshBroadcast(); // Function VM_Subscription.VM_Subscription_C.RefreshBroadcast // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnViewModelCreated(); // Function VM_Subscription.VM_Subscription_C.OnViewModelCreated // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_VM_Subscription(int32_t EntryPoint); // Function VM_Subscription.VM_Subscription_C.ExecuteUbergraph_VM_Subscription // (Final|UbergraphFunction) // @ game+0x1af5410
	void OnSubscriptionsLoaded__DelegateSignature(); // Function VM_Subscription.VM_Subscription_C.OnSubscriptionsLoaded__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

