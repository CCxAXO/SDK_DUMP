// BlueprintGeneratedClass VM_InventoryList.VM_InventoryList_C
// Size: 0xc0 (Inherited: 0x90)
struct UVM_InventoryList_C : UAresViewModelBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x90(0x08)
	bool bIsListOwned; // 0x98(0x01)
	char pad_99[0x7]; // 0x99(0x07)
	struct TArray<struct UBaseInventoryModel*> Base Inventory Model List; // 0xa0(0x10)
	struct FMulticastInlineDelegate OnIsListOwnedChanged; // 0xb0(0x10)

	void InitFromRewardList(struct TArray<struct FDelegate>& NewRewardList); // Function VM_InventoryList.VM_InventoryList_C.InitFromRewardList // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Refresh(); // Function VM_InventoryList.VM_InventoryList_C.Refresh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Calculate AndUpdate Is List Owned(); // Function VM_InventoryList.VM_InventoryList_C.Calculate AndUpdate Is List Owned // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnInventoryItemIsOwnedChanged(); // Function VM_InventoryList.VM_InventoryList_C.OnInventoryItemIsOwnedChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitFromBaseInventoryModelList(struct TArray<struct UBaseInventoryModel*>& NewBaseInventoryModelList); // Function VM_InventoryList.VM_InventoryList_C.InitFromBaseInventoryModelList // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitFromBaseHandleList(struct TArray<struct UBaseHandle*>& BaseHandleList); // Function VM_InventoryList.VM_InventoryList_C.InitFromBaseHandleList // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetIsListOwned(bool IsListOwnedIn); // Function VM_InventoryList.VM_InventoryList_C.SetIsListOwned // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Reset(); // Function VM_InventoryList.VM_InventoryList_C.Reset // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_VM_InventoryList(int32_t EntryPoint); // Function VM_InventoryList.VM_InventoryList_C.ExecuteUbergraph_VM_InventoryList // (Final|UbergraphFunction) // @ game+0x1af5410
	void OnIsListOwnedChanged__DelegateSignature(bool IsListOwnedIn); // Function VM_InventoryList.VM_InventoryList_C.OnIsListOwnedChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

