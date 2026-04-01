// BlueprintGeneratedClass VM_LocalPartyQueueEligibility.VM_LocalPartyQueueEligibility_C
// Size: 0xbc (Inherited: 0x90)
struct UVM_LocalPartyQueueEligibility_C : UAresViewModelBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x90(0x08)
	struct UPartyModel* PartyModel; // 0x98(0x08)
	bool bIsQueueEligible; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
	struct FMulticastInlineDelegate OnIsQueueEligibleChanged; // 0xa8(0x10)
	int32_t InvalidRankedPartyMemberCount; // 0xb8(0x04)

	void GetIsQueueEligible(bool& bIsQueueEligible); // Function VM_LocalPartyQueueEligibility.VM_LocalPartyQueueEligibility_C.GetIsQueueEligible // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void SetIsQueueEligible(bool bNewValue); // Function VM_LocalPartyQueueEligibility.VM_LocalPartyQueueEligibility_C.SetIsQueueEligible // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateIsQueueEligible(); // Function VM_LocalPartyQueueEligibility.VM_LocalPartyQueueEligibility_C.UpdateIsQueueEligible // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleQueueIDChanged(struct FString NewValue); // Function VM_LocalPartyQueueEligibility.VM_LocalPartyQueueEligibility_C.HandleQueueIDChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandlePartyMemberChanged(struct UPartyPlayerModel* Player); // Function VM_LocalPartyQueueEligibility.VM_LocalPartyQueueEligibility_C.HandlePartyMemberChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnViewModelCreated(); // Function VM_LocalPartyQueueEligibility.VM_LocalPartyQueueEligibility_C.OnViewModelCreated // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void RefreshBroadcast(); // Function VM_LocalPartyQueueEligibility.VM_LocalPartyQueueEligibility_C.RefreshBroadcast // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_VM_LocalPartyQueueEligibility(int32_t EntryPoint); // Function VM_LocalPartyQueueEligibility.VM_LocalPartyQueueEligibility_C.ExecuteUbergraph_VM_LocalPartyQueueEligibility // (Final|UbergraphFunction) // @ game+0x1b42740
	void OnIsQueueEligibleChanged__DelegateSignature(bool bIsQueueEligible); // Function VM_LocalPartyQueueEligibility.VM_LocalPartyQueueEligibility_C.OnIsQueueEligibleChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

