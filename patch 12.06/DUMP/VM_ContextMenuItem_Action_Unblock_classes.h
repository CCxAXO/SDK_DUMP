// BlueprintGeneratedClass VM_ContextMenuItem_Action_Unblock.VM_ContextMenuItem_Action_Unblock_C
// Size: 0x1d8 (Inherited: 0x1d0)
struct UVM_ContextMenuItem_Action_Unblock_C : UAresContextMenuItemActionViewModel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1d0(0x08)

	void IsActionEnabled(bool& bIsUnblockEnabled); // Function VM_ContextMenuItem_Action_Unblock.VM_ContextMenuItem_Action_Unblock_C.IsActionEnabled // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void DoPerformAction(); // Function VM_ContextMenuItem_Action_Unblock.VM_ContextMenuItem_Action_Unblock_C.DoPerformAction // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void RefreshState(); // Function VM_ContextMenuItem_Action_Unblock.VM_ContextMenuItem_Action_Unblock_C.RefreshState // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindToEvents(struct UPlatformPlayer* Player); // Function VM_ContextMenuItem_Action_Unblock.VM_ContextMenuItem_Action_Unblock_C.BindToEvents // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void UnbindFromEvents(struct UPlatformPlayer* Player); // Function VM_ContextMenuItem_Action_Unblock.VM_ContextMenuItem_Action_Unblock_C.UnbindFromEvents // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void HandleEvent_Bool(bool NewValue); // Function VM_ContextMenuItem_Action_Unblock.VM_ContextMenuItem_Action_Unblock_C.HandleEvent_Bool // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleEvent_GameFlowState(enum class EGameFlowStateType NewState); // Function VM_ContextMenuItem_Action_Unblock.VM_ContextMenuItem_Action_Unblock_C.HandleEvent_GameFlowState // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_VM_ContextMenuItem_Action_Unblock(int32_t EntryPoint); // Function VM_ContextMenuItem_Action_Unblock.VM_ContextMenuItem_Action_Unblock_C.ExecuteUbergraph_VM_ContextMenuItem_Action_Unblock // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

