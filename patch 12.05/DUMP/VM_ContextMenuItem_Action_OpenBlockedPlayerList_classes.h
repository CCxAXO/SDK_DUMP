// BlueprintGeneratedClass VM_ContextMenuItem_Action_OpenBlockedPlayerList.VM_ContextMenuItem_Action_OpenBlockedPlayerList_C
// Size: 0x1d8 (Inherited: 0x1d0)
struct UVM_ContextMenuItem_Action_OpenBlockedPlayerList_C : UAresContextMenuItemActionViewModel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1d0(0x08)

	void RefreshState(); // Function VM_ContextMenuItem_Action_OpenBlockedPlayerList.VM_ContextMenuItem_Action_OpenBlockedPlayerList_C.RefreshState // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindToEvents(struct UPlatformPlayer* Player); // Function VM_ContextMenuItem_Action_OpenBlockedPlayerList.VM_ContextMenuItem_Action_OpenBlockedPlayerList_C.BindToEvents // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void UnbindFromEvents(struct UPlatformPlayer* Player); // Function VM_ContextMenuItem_Action_OpenBlockedPlayerList.VM_ContextMenuItem_Action_OpenBlockedPlayerList_C.UnbindFromEvents // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void HandleEvent_GameFlowState(enum class EGameFlowStateType NewState); // Function VM_ContextMenuItem_Action_OpenBlockedPlayerList.VM_ContextMenuItem_Action_OpenBlockedPlayerList_C.HandleEvent_GameFlowState // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void DoPerformAction(); // Function VM_ContextMenuItem_Action_OpenBlockedPlayerList.VM_ContextMenuItem_Action_OpenBlockedPlayerList_C.DoPerformAction // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_VM_ContextMenuItem_Action_OpenBlockedPlayerList(int32_t EntryPoint); // Function VM_ContextMenuItem_Action_OpenBlockedPlayerList.VM_ContextMenuItem_Action_OpenBlockedPlayerList_C.ExecuteUbergraph_VM_ContextMenuItem_Action_OpenBlockedPlayerList // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

