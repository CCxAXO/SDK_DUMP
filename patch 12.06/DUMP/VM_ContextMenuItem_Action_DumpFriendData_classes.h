// BlueprintGeneratedClass VM_ContextMenuItem_Action_DumpFriendData.VM_ContextMenuItem_Action_DumpFriendData_C
// Size: 0x1d8 (Inherited: 0x1d0)
struct UVM_ContextMenuItem_Action_DumpFriendData_C : UAresContextMenuItemActionViewModel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1d0(0x08)

	void DoPerformAction(); // Function VM_ContextMenuItem_Action_DumpFriendData.VM_ContextMenuItem_Action_DumpFriendData_C.DoPerformAction // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void BindToEvents(struct UPlatformPlayer* Player); // Function VM_ContextMenuItem_Action_DumpFriendData.VM_ContextMenuItem_Action_DumpFriendData_C.BindToEvents // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void UnbindFromEvents(struct UPlatformPlayer* Player); // Function VM_ContextMenuItem_Action_DumpFriendData.VM_ContextMenuItem_Action_DumpFriendData_C.UnbindFromEvents // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void RefreshState(); // Function VM_ContextMenuItem_Action_DumpFriendData.VM_ContextMenuItem_Action_DumpFriendData_C.RefreshState // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnIsFriendChanged(bool NewValue); // Function VM_ContextMenuItem_Action_DumpFriendData.VM_ContextMenuItem_Action_DumpFriendData_C.OnIsFriendChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_VM_ContextMenuItem_Action_DumpFriendData(int32_t EntryPoint); // Function VM_ContextMenuItem_Action_DumpFriendData.VM_ContextMenuItem_Action_DumpFriendData_C.ExecuteUbergraph_VM_ContextMenuItem_Action_DumpFriendData // (Final|UbergraphFunction) // @ game+0x1b42740
};

