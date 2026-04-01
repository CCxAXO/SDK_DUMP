// BlueprintGeneratedClass VM_ContextMenuItem_Action_EditFriendNote_Embedded.VM_ContextMenuItem_Action_EditFriendNote_Embedded_C
// Size: 0x1e0 (Inherited: 0x1d8)
struct UVM_ContextMenuItem_Action_EditFriendNote_Embedded_C : UVM_ContextMenuItem_Action_EditFriendNote_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1d8(0x08)

	void GetIsVisibleCondition(bool& bReturnValue); // Function VM_ContextMenuItem_Action_EditFriendNote_Embedded.VM_ContextMenuItem_Action_EditFriendNote_Embedded_C.GetIsVisibleCondition // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void BindToEvents(struct UPlatformPlayer* Player); // Function VM_ContextMenuItem_Action_EditFriendNote_Embedded.VM_ContextMenuItem_Action_EditFriendNote_Embedded_C.BindToEvents // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void UnbindFromEvents(struct UPlatformPlayer* Player); // Function VM_ContextMenuItem_Action_EditFriendNote_Embedded.VM_ContextMenuItem_Action_EditFriendNote_Embedded_C.UnbindFromEvents // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void HandleGameFlowStateChanged(enum class EGameFlowStateType NewState); // Function VM_ContextMenuItem_Action_EditFriendNote_Embedded.VM_ContextMenuItem_Action_EditFriendNote_Embedded_C.HandleGameFlowStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_VM_ContextMenuItem_Action_EditFriendNote_Embedded(int32_t EntryPoint); // Function VM_ContextMenuItem_Action_EditFriendNote_Embedded.VM_ContextMenuItem_Action_EditFriendNote_Embedded_C.ExecuteUbergraph_VM_ContextMenuItem_Action_EditFriendNote_Embedded // (Final|UbergraphFunction) // @ game+0x1b42740
};

