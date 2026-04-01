// BlueprintGeneratedClass VM_LocalPartyIsInRankedQueue.VM_LocalPartyIsInRankedQueue_C
// Size: 0xb8 (Inherited: 0x90)
struct UVM_LocalPartyIsInRankedQueue_C : UAresViewModelBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x90(0x08)
	struct UPartyModel* PartyModel; // 0x98(0x08)
	bool bIsInRankedQueue; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
	struct FMulticastInlineDelegate OnIsInRankedQueueChanged; // 0xa8(0x10)

	void GetIsInRankedQueue(bool& bIsInRankedQueue); // Function VM_LocalPartyIsInRankedQueue.VM_LocalPartyIsInRankedQueue_C.GetIsInRankedQueue // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void SetIsInRankedQueue(bool bNewValue); // Function VM_LocalPartyIsInRankedQueue.VM_LocalPartyIsInRankedQueue_C.SetIsInRankedQueue // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateIsInRankedQueue(); // Function VM_LocalPartyIsInRankedQueue.VM_LocalPartyIsInRankedQueue_C.UpdateIsInRankedQueue // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleQueueIDChanged(struct FString NewValue); // Function VM_LocalPartyIsInRankedQueue.VM_LocalPartyIsInRankedQueue_C.HandleQueueIDChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnViewModelCreated(); // Function VM_LocalPartyIsInRankedQueue.VM_LocalPartyIsInRankedQueue_C.OnViewModelCreated // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void RefreshBroadcast(); // Function VM_LocalPartyIsInRankedQueue.VM_LocalPartyIsInRankedQueue_C.RefreshBroadcast // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_VM_LocalPartyIsInRankedQueue(int32_t EntryPoint); // Function VM_LocalPartyIsInRankedQueue.VM_LocalPartyIsInRankedQueue_C.ExecuteUbergraph_VM_LocalPartyIsInRankedQueue // (Final|UbergraphFunction) // @ game+0x1b42740
	void OnIsInRankedQueueChanged__DelegateSignature(bool bIsInRankedQueue); // Function VM_LocalPartyIsInRankedQueue.VM_LocalPartyIsInRankedQueue_C.OnIsInRankedQueueChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

