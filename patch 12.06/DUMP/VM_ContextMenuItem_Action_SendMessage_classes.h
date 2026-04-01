// BlueprintGeneratedClass VM_ContextMenuItem_Action_SendMessage.VM_ContextMenuItem_Action_SendMessage_C
// Size: 0x1d8 (Inherited: 0x1d0)
struct UVM_ContextMenuItem_Action_SendMessage_C : UAresContextMenuItemActionViewModel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1d0(0x08)

	void DoPerformAction(); // Function VM_ContextMenuItem_Action_SendMessage.VM_ContextMenuItem_Action_SendMessage_C.DoPerformAction // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void BindToEvents(struct UPlatformPlayer* Player); // Function VM_ContextMenuItem_Action_SendMessage.VM_ContextMenuItem_Action_SendMessage_C.BindToEvents // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void UnbindFromEvents(struct UPlatformPlayer* Player); // Function VM_ContextMenuItem_Action_SendMessage.VM_ContextMenuItem_Action_SendMessage_C.UnbindFromEvents // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void RefreshState(); // Function VM_ContextMenuItem_Action_SendMessage.VM_ContextMenuItem_Action_SendMessage_C.RefreshState // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleIsFriendChanged(bool NewValue); // Function VM_ContextMenuItem_Action_SendMessage.VM_ContextMenuItem_Action_SendMessage_C.HandleIsFriendChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandlePlatformPlayerPropertyChanged(struct UPlatformPlayer* PlatformPlayer); // Function VM_ContextMenuItem_Action_SendMessage.VM_ContextMenuItem_Action_SendMessage_C.HandlePlatformPlayerPropertyChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleTextChatPermissionChange(enum class EAresTextChatPermission TextChatPermission, struct FString Reason); // Function VM_ContextMenuItem_Action_SendMessage.VM_ContextMenuItem_Action_SendMessage_C.HandleTextChatPermissionChange // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_VM_ContextMenuItem_Action_SendMessage(int32_t EntryPoint); // Function VM_ContextMenuItem_Action_SendMessage.VM_ContextMenuItem_Action_SendMessage_C.ExecuteUbergraph_VM_ContextMenuItem_Action_SendMessage // (Final|UbergraphFunction) // @ game+0x1b42740
};

