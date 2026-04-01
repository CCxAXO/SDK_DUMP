// BlueprintGeneratedClass VM_ContextMenuItem_Action_InviteToParty.VM_ContextMenuItem_Action_InviteToParty_C
// Size: 0x208 (Inherited: 0x1d0)
struct UVM_ContextMenuItem_Action_InviteToParty_C : UAresContextMenuItemActionViewModel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1d0(0x08)
	struct UConfirmModalCallbacks* WarningModalCallbackInfo; // 0x1d8(0x08)
	enum class ESocialIntegrationPlatform ExternalInvitePlatform; // 0x1e0(0x01)
	bool ShowInvite; // 0x1e1(0x01)
	bool EnableInvite; // 0x1e2(0x01)
	char pad_1E3[0x5]; // 0x1e3(0x05)
	struct UTexture2D* InviteIcon; // 0x1e8(0x08)
	struct UTexture2D* QQInviteIcon; // 0x1f0(0x08)
	struct UTexture2D* WInviteIcon; // 0x1f8(0x08)
	struct UWBP_Screen_GenericConfirmation_C* ActiveConfirmationModal; // 0x200(0x08)

	void UpdateIcon(); // Function VM_ContextMenuItem_Action_InviteToParty.VM_ContextMenuItem_Action_InviteToParty_C.UpdateIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateInviteState(); // Function VM_ContextMenuItem_Action_InviteToParty.VM_ContextMenuItem_Action_InviteToParty_C.UpdateInviteState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateEnableInvite(); // Function VM_ContextMenuItem_Action_InviteToParty.VM_ContextMenuItem_Action_InviteToParty_C.UpdateEnableInvite // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void DoPerformAction(); // Function VM_ContextMenuItem_Action_InviteToParty.VM_ContextMenuItem_Action_InviteToParty_C.DoPerformAction // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void BindToEvents(struct UPlatformPlayer* Player); // Function VM_ContextMenuItem_Action_InviteToParty.VM_ContextMenuItem_Action_InviteToParty_C.BindToEvents // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void UnbindFromEvents(struct UPlatformPlayer* Player); // Function VM_ContextMenuItem_Action_InviteToParty.VM_ContextMenuItem_Action_InviteToParty_C.UnbindFromEvents // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void RefreshState(); // Function VM_ContextMenuItem_Action_InviteToParty.VM_ContextMenuItem_Action_InviteToParty_C.RefreshState // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleEvent_PlatformPlayer(struct UPlatformPlayer* PlatformPlayer); // Function VM_ContextMenuItem_Action_InviteToParty.VM_ContextMenuItem_Action_InviteToParty_C.HandleEvent_PlatformPlayer // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleEvent_Bool(bool NewValue); // Function VM_ContextMenuItem_Action_InviteToParty.VM_ContextMenuItem_Action_InviteToParty_C.HandleEvent_Bool // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleEvent_Int(int32_t NewValue); // Function VM_ContextMenuItem_Action_InviteToParty.VM_ContextMenuItem_Action_InviteToParty_C.HandleEvent_Int // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleWarningModalConfirmAction(struct FGuid& ModalID); // Function VM_ContextMenuItem_Action_InviteToParty.VM_ContextMenuItem_Action_InviteToParty_C.HandleWarningModalConfirmAction // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SendInvite(); // Function VM_ContextMenuItem_Action_InviteToParty.VM_ContextMenuItem_Action_InviteToParty_C.SendInvite // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandlePartyInviteSuccess(); // Function VM_ContextMenuItem_Action_InviteToParty.VM_ContextMenuItem_Action_InviteToParty_C.HandlePartyInviteSuccess // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandlePartyInviteErrorEx(enum class EPartyErrorEnum PartyErrorEnum, struct FString Description); // Function VM_ContextMenuItem_Action_InviteToParty.VM_ContextMenuItem_Action_InviteToParty_C.HandlePartyInviteErrorEx // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleExternalInviteSuccess(); // Function VM_ContextMenuItem_Action_InviteToParty.VM_ContextMenuItem_Action_InviteToParty_C.HandleExternalInviteSuccess // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleExternalInviteFailure(struct FString ReasonStringInDebugOnly); // Function VM_ContextMenuItem_Action_InviteToParty.VM_ContextMenuItem_Action_InviteToParty_C.HandleExternalInviteFailure // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleWarningModalCloseAction(struct FGuid& ModalID); // Function VM_ContextMenuItem_Action_InviteToParty.VM_ContextMenuItem_Action_InviteToParty_C.HandleWarningModalCloseAction // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_VM_ContextMenuItem_Action_InviteToParty(int32_t EntryPoint); // Function VM_ContextMenuItem_Action_InviteToParty.VM_ContextMenuItem_Action_InviteToParty_C.ExecuteUbergraph_VM_ContextMenuItem_Action_InviteToParty // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

