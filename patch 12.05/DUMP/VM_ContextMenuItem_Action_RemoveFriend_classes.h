// BlueprintGeneratedClass VM_ContextMenuItem_Action_RemoveFriend.VM_ContextMenuItem_Action_RemoveFriend_C
// Size: 0x1d8 (Inherited: 0x1d0)
struct UVM_ContextMenuItem_Action_RemoveFriend_C : UAresContextMenuItemActionViewModel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1d0(0x08)

	struct FString GetFormattedObservedPlayerName(); // Function VM_ContextMenuItem_Action_RemoveFriend.VM_ContextMenuItem_Action_RemoveFriend_C.GetFormattedObservedPlayerName // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void DoPerformAction(); // Function VM_ContextMenuItem_Action_RemoveFriend.VM_ContextMenuItem_Action_RemoveFriend_C.DoPerformAction // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void BindToEvents(struct UPlatformPlayer* Player); // Function VM_ContextMenuItem_Action_RemoveFriend.VM_ContextMenuItem_Action_RemoveFriend_C.BindToEvents // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void RefreshState(); // Function VM_ContextMenuItem_Action_RemoveFriend.VM_ContextMenuItem_Action_RemoveFriend_C.RefreshState // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UnbindFromEvents(struct UPlatformPlayer* Player); // Function VM_ContextMenuItem_Action_RemoveFriend.VM_ContextMenuItem_Action_RemoveFriend_C.UnbindFromEvents // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void HandlePlatformPlayerPropertyChanged(struct UPlatformPlayer* PlatformPlayer); // Function VM_ContextMenuItem_Action_RemoveFriend.VM_ContextMenuItem_Action_RemoveFriend_C.HandlePlatformPlayerPropertyChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_VM_ContextMenuItem_Action_RemoveFriend(int32_t EntryPoint); // Function VM_ContextMenuItem_Action_RemoveFriend.VM_ContextMenuItem_Action_RemoveFriend_C.ExecuteUbergraph_VM_ContextMenuItem_Action_RemoveFriend // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

