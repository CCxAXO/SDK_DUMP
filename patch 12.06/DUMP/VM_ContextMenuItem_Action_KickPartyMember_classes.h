// BlueprintGeneratedClass VM_ContextMenuItem_Action_KickPartyMember.VM_ContextMenuItem_Action_KickPartyMember_C
// Size: 0x1d8 (Inherited: 0x1d0)
struct UVM_ContextMenuItem_Action_KickPartyMember_C : UAresContextMenuItemActionViewModel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1d0(0x08)

	void DoPerformAction(); // Function VM_ContextMenuItem_Action_KickPartyMember.VM_ContextMenuItem_Action_KickPartyMember_C.DoPerformAction // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void HandleKickCompleted(); // Function VM_ContextMenuItem_Action_KickPartyMember.VM_ContextMenuItem_Action_KickPartyMember_C.HandleKickCompleted // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindToEvents(struct UPlatformPlayer* Player); // Function VM_ContextMenuItem_Action_KickPartyMember.VM_ContextMenuItem_Action_KickPartyMember_C.BindToEvents // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void UnbindFromEvents(struct UPlatformPlayer* Player); // Function VM_ContextMenuItem_Action_KickPartyMember.VM_ContextMenuItem_Action_KickPartyMember_C.UnbindFromEvents // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void RefreshState(); // Function VM_ContextMenuItem_Action_KickPartyMember.VM_ContextMenuItem_Action_KickPartyMember_C.RefreshState // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleEvent_PlatformPlayer(struct UPlatformPlayer* PlatformPlayer); // Function VM_ContextMenuItem_Action_KickPartyMember.VM_ContextMenuItem_Action_KickPartyMember_C.HandleEvent_PlatformPlayer // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleEvent_Bool(bool NewValue); // Function VM_ContextMenuItem_Action_KickPartyMember.VM_ContextMenuItem_Action_KickPartyMember_C.HandleEvent_Bool // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleEvent_String(struct FString NewValue); // Function VM_ContextMenuItem_Action_KickPartyMember.VM_ContextMenuItem_Action_KickPartyMember_C.HandleEvent_String // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_VM_ContextMenuItem_Action_KickPartyMember(int32_t EntryPoint); // Function VM_ContextMenuItem_Action_KickPartyMember.VM_ContextMenuItem_Action_KickPartyMember_C.ExecuteUbergraph_VM_ContextMenuItem_Action_KickPartyMember // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

