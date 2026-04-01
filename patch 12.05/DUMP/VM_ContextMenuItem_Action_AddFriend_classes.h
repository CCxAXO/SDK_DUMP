// BlueprintGeneratedClass VM_ContextMenuItem_Action_AddFriend.VM_ContextMenuItem_Action_AddFriend_C
// Size: 0x1d8 (Inherited: 0x1d0)
struct UVM_ContextMenuItem_Action_AddFriend_C : UAresContextMenuItemActionViewModel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1d0(0x08)

	void DoPerformAction(); // Function VM_ContextMenuItem_Action_AddFriend.VM_ContextMenuItem_Action_AddFriend_C.DoPerformAction // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void BindToEvents(struct UPlatformPlayer* Player); // Function VM_ContextMenuItem_Action_AddFriend.VM_ContextMenuItem_Action_AddFriend_C.BindToEvents // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void UnbindFromEvents(struct UPlatformPlayer* Player); // Function VM_ContextMenuItem_Action_AddFriend.VM_ContextMenuItem_Action_AddFriend_C.UnbindFromEvents // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void RefreshState(); // Function VM_ContextMenuItem_Action_AddFriend.VM_ContextMenuItem_Action_AddFriend_C.RefreshState // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleEvent_Bool(bool NewParam); // Function VM_ContextMenuItem_Action_AddFriend.VM_ContextMenuItem_Action_AddFriend_C.HandleEvent_Bool // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleEvent_PlatformPlayer(struct UPlatformPlayer* PlatformPlayer); // Function VM_ContextMenuItem_Action_AddFriend.VM_ContextMenuItem_Action_AddFriend_C.HandleEvent_PlatformPlayer // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleEvent_String(struct FString NewValue); // Function VM_ContextMenuItem_Action_AddFriend.VM_ContextMenuItem_Action_AddFriend_C.HandleEvent_String // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleFriendRequestsAddedOrRemoved(); // Function VM_ContextMenuItem_Action_AddFriend.VM_ContextMenuItem_Action_AddFriend_C.HandleFriendRequestsAddedOrRemoved // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleAddFriendsParentalPermissionChanged(bool bHasPermission, struct FString DenyReason); // Function VM_ContextMenuItem_Action_AddFriend.VM_ContextMenuItem_Action_AddFriend_C.HandleAddFriendsParentalPermissionChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_VM_ContextMenuItem_Action_AddFriend(int32_t EntryPoint); // Function VM_ContextMenuItem_Action_AddFriend.VM_ContextMenuItem_Action_AddFriend_C.ExecuteUbergraph_VM_ContextMenuItem_Action_AddFriend // (Final|UbergraphFunction) // @ game+0x1af5410
};

