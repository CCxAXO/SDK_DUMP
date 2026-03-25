// BlueprintGeneratedClass VM_ContextMenuItem_Action_RequestToJoinParty.VM_ContextMenuItem_Action_RequestToJoinParty_C
// Size: 0x1d8 (Inherited: 0x1d0)
struct UVM_ContextMenuItem_Action_RequestToJoinParty_C : UAresContextMenuItemActionViewModel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1d0(0x08)

	void DoPerformAction(); // Function VM_ContextMenuItem_Action_RequestToJoinParty.VM_ContextMenuItem_Action_RequestToJoinParty_C.DoPerformAction // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void HandlePartyJoinRequestSuccess(); // Function VM_ContextMenuItem_Action_RequestToJoinParty.VM_ContextMenuItem_Action_RequestToJoinParty_C.HandlePartyJoinRequestSuccess // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindToEvents(struct UPlatformPlayer* Player); // Function VM_ContextMenuItem_Action_RequestToJoinParty.VM_ContextMenuItem_Action_RequestToJoinParty_C.BindToEvents // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void UnbindFromEvents(struct UPlatformPlayer* Player); // Function VM_ContextMenuItem_Action_RequestToJoinParty.VM_ContextMenuItem_Action_RequestToJoinParty_C.UnbindFromEvents // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void RefreshState(); // Function VM_ContextMenuItem_Action_RequestToJoinParty.VM_ContextMenuItem_Action_RequestToJoinParty_C.RefreshState // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleEvent_PlatformPlayer(struct UPlatformPlayer* PlatformPlayer); // Function VM_ContextMenuItem_Action_RequestToJoinParty.VM_ContextMenuItem_Action_RequestToJoinParty_C.HandleEvent_PlatformPlayer // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleEvent_Int(int32_t NewValue); // Function VM_ContextMenuItem_Action_RequestToJoinParty.VM_ContextMenuItem_Action_RequestToJoinParty_C.HandleEvent_Int // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleEvent_String(struct FString NewValue); // Function VM_ContextMenuItem_Action_RequestToJoinParty.VM_ContextMenuItem_Action_RequestToJoinParty_C.HandleEvent_String // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleEvent_Bool(bool NewValue); // Function VM_ContextMenuItem_Action_RequestToJoinParty.VM_ContextMenuItem_Action_RequestToJoinParty_C.HandleEvent_Bool // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandlePartyJoinRequestError(enum class EPartyErrorEnum PartyErrorEnum, struct FString Description); // Function VM_ContextMenuItem_Action_RequestToJoinParty.VM_ContextMenuItem_Action_RequestToJoinParty_C.HandlePartyJoinRequestError // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_VM_ContextMenuItem_Action_RequestToJoinParty(int32_t EntryPoint); // Function VM_ContextMenuItem_Action_RequestToJoinParty.VM_ContextMenuItem_Action_RequestToJoinParty_C.ExecuteUbergraph_VM_ContextMenuItem_Action_RequestToJoinParty // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

