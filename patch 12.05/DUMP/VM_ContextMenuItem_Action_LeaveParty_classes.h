// BlueprintGeneratedClass VM_ContextMenuItem_Action_LeaveParty.VM_ContextMenuItem_Action_LeaveParty_C
// Size: 0x1d8 (Inherited: 0x1d0)
struct UVM_ContextMenuItem_Action_LeaveParty_C : UAresContextMenuItemActionViewModel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1d0(0x08)

	void DoPerformAction(); // Function VM_ContextMenuItem_Action_LeaveParty.VM_ContextMenuItem_Action_LeaveParty_C.DoPerformAction // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void HandleLeaveCompleted(); // Function VM_ContextMenuItem_Action_LeaveParty.VM_ContextMenuItem_Action_LeaveParty_C.HandleLeaveCompleted // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindToEvents(struct UPlatformPlayer* Player); // Function VM_ContextMenuItem_Action_LeaveParty.VM_ContextMenuItem_Action_LeaveParty_C.BindToEvents // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void UnbindFromEvents(struct UPlatformPlayer* Player); // Function VM_ContextMenuItem_Action_LeaveParty.VM_ContextMenuItem_Action_LeaveParty_C.UnbindFromEvents // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void RefreshState(); // Function VM_ContextMenuItem_Action_LeaveParty.VM_ContextMenuItem_Action_LeaveParty_C.RefreshState // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleEvent_String(struct FString NewValue); // Function VM_ContextMenuItem_Action_LeaveParty.VM_ContextMenuItem_Action_LeaveParty_C.HandleEvent_String // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleEvent_Int(int32_t NewValue); // Function VM_ContextMenuItem_Action_LeaveParty.VM_ContextMenuItem_Action_LeaveParty_C.HandleEvent_Int // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Handle Matchmaking Found Status Changed(bool NewValue); // Function VM_ContextMenuItem_Action_LeaveParty.VM_ContextMenuItem_Action_LeaveParty_C.Handle Matchmaking Found Status Changed // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_VM_ContextMenuItem_Action_LeaveParty(int32_t EntryPoint); // Function VM_ContextMenuItem_Action_LeaveParty.VM_ContextMenuItem_Action_LeaveParty_C.ExecuteUbergraph_VM_ContextMenuItem_Action_LeaveParty // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

