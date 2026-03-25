// BlueprintGeneratedClass VM_ContextMenuItem_Action_EditFriendNote_Base.VM_ContextMenuItem_Action_EditFriendNote_Base_C
// Size: 0x1d8 (Inherited: 0x1d0)
struct UVM_ContextMenuItem_Action_EditFriendNote_Base_C : UAresContextMenuItemActionViewModel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1d0(0x08)

	void GetIsVisibleCondition(bool& bReturnValue); // Function VM_ContextMenuItem_Action_EditFriendNote_Base.VM_ContextMenuItem_Action_EditFriendNote_Base_C.GetIsVisibleCondition // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void DoPerformAction(); // Function VM_ContextMenuItem_Action_EditFriendNote_Base.VM_ContextMenuItem_Action_EditFriendNote_Base_C.DoPerformAction // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void BindToEvents(struct UPlatformPlayer* Player); // Function VM_ContextMenuItem_Action_EditFriendNote_Base.VM_ContextMenuItem_Action_EditFriendNote_Base_C.BindToEvents // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void UnbindFromEvents(struct UPlatformPlayer* Player); // Function VM_ContextMenuItem_Action_EditFriendNote_Base.VM_ContextMenuItem_Action_EditFriendNote_Base_C.UnbindFromEvents // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void RefreshState(); // Function VM_ContextMenuItem_Action_EditFriendNote_Base.VM_ContextMenuItem_Action_EditFriendNote_Base_C.RefreshState // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandlePlatformPlayerPropertyChanged(struct UPlatformPlayer* PlatformPlayer); // Function VM_ContextMenuItem_Action_EditFriendNote_Base.VM_ContextMenuItem_Action_EditFriendNote_Base_C.HandlePlatformPlayerPropertyChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleFriendNoteRestrictionChanged(bool NewValue); // Function VM_ContextMenuItem_Action_EditFriendNote_Base.VM_ContextMenuItem_Action_EditFriendNote_Base_C.HandleFriendNoteRestrictionChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_VM_ContextMenuItem_Action_EditFriendNote_Base(int32_t EntryPoint); // Function VM_ContextMenuItem_Action_EditFriendNote_Base.VM_ContextMenuItem_Action_EditFriendNote_Base_C.ExecuteUbergraph_VM_ContextMenuItem_Action_EditFriendNote_Base // (Final|UbergraphFunction) // @ game+0x1af5410
};

