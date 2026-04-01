// BlueprintGeneratedClass VM_StoreBundleList.VM_StoreBundleList_C
// Size: 0x150 (Inherited: 0x128)
struct UVM_StoreBundleList_C : UAresListViewModel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x128(0x08)
	struct TArray<struct UBundleViewModel*> FeaturedBundles; // 0x130(0x10)
	struct FMulticastInlineDelegate OnFeaturedBundlesChangedEvent; // 0x140(0x10)

	void SetFeaturedBundles(struct TArray<struct UBundleViewModel*>& InFeaturedBundles); // Function VM_StoreBundleList.VM_StoreBundleList_C.SetFeaturedBundles // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HaveFeaturedBundlesChanged(struct TArray<struct UBundleViewModel*>& InNewFeaturedBundles, bool& FeaturedBundlesChanged); // Function VM_StoreBundleList.VM_StoreBundleList_C.HaveFeaturedBundlesChanged // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void OnFeaturedBundlesChanged(struct TArray<struct UBundleViewModel*>& InFeaturedBundles); // Function VM_StoreBundleList.VM_StoreBundleList_C.OnFeaturedBundlesChanged // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindModelEvents(); // Function VM_StoreBundleList.VM_StoreBundleList_C.BindModelEvents // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnViewModelCreated(); // Function VM_StoreBundleList.VM_StoreBundleList_C.OnViewModelCreated // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void RefreshBroadcast(); // Function VM_StoreBundleList.VM_StoreBundleList_C.RefreshBroadcast // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Reset(); // Function VM_StoreBundleList.VM_StoreBundleList_C.Reset // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_VM_StoreBundleList(int32_t EntryPoint); // Function VM_StoreBundleList.VM_StoreBundleList_C.ExecuteUbergraph_VM_StoreBundleList // (Final|UbergraphFunction) // @ game+0x1af5410
	void OnFeaturedBundlesChangedEvent__DelegateSignature(struct TArray<struct UBundleViewModel*>& FeaturedBundles); // Function VM_StoreBundleList.VM_StoreBundleList_C.OnFeaturedBundlesChangedEvent__DelegateSignature // (Public|Delegate|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

