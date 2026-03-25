// BlueprintGeneratedClass VM_PartyLeader.VM_PartyLeader_C
// Size: 0xb0 (Inherited: 0x98)
struct UVM_PartyLeader_C : UVM_PlatformPlayerObserver_Base_C {
	bool bIsPartyLeader; // 0x98(0x01)
	char pad_99[0x7]; // 0x99(0x07)
	struct FMulticastInlineDelegate OnIsPartyLeaderChanged; // 0xa0(0x10)

	void GetIsPartyLeader(bool& Return); // Function VM_PartyLeader.VM_PartyLeader_C.GetIsPartyLeader // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void HandlePartySizeChanged(int32_t NewPartySize); // Function VM_PartyLeader.VM_PartyLeader_C.HandlePartySizeChanged // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandlePlatformPlayerAttributeChanged(struct UPlatformPlayer* PlatformPlayer); // Function VM_PartyLeader.VM_PartyLeader_C.HandlePlatformPlayerAttributeChanged // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetIsPartyLeader(bool bNewIsPartyLeader); // Function VM_PartyLeader.VM_PartyLeader_C.SetIsPartyLeader // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void CheckForPartyLeaderUpdate(); // Function VM_PartyLeader.VM_PartyLeader_C.CheckForPartyLeaderUpdate // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void RefreshAllData(); // Function VM_PartyLeader.VM_PartyLeader_C.RefreshAllData // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UnbindFromPlayer(struct UPlatformPlayer* Player); // Function VM_PartyLeader.VM_PartyLeader_C.UnbindFromPlayer // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindToPlayer(struct UPlatformPlayer* Player); // Function VM_PartyLeader.VM_PartyLeader_C.BindToPlayer // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnIsPartyLeaderChanged__DelegateSignature(bool bIsPartyOwner); // Function VM_PartyLeader.VM_PartyLeader_C.OnIsPartyLeaderChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

