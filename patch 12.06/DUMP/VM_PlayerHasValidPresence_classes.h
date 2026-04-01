// BlueprintGeneratedClass VM_PlayerHasValidPresence.VM_PlayerHasValidPresence_C
// Size: 0xb8 (Inherited: 0x98)
struct UVM_PlayerHasValidPresence_C : UVM_PlatformPlayerObserver_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x98(0x08)
	bool bHasValidPresence; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
	struct FMulticastInlineDelegate OnHasValidPresenceChanged; // 0xa8(0x10)

	void HandlePlatformPlayerStateChanged(struct UPlatformPlayer* PlatformPlayer); // Function VM_PlayerHasValidPresence.VM_PlayerHasValidPresence_C.HandlePlatformPlayerStateChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetHasValidPresence(bool bNewValue); // Function VM_PlayerHasValidPresence.VM_PlayerHasValidPresence_C.SetHasValidPresence // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void RefreshAllData(); // Function VM_PlayerHasValidPresence.VM_PlayerHasValidPresence_C.RefreshAllData // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateHasValidPresence(); // Function VM_PlayerHasValidPresence.VM_PlayerHasValidPresence_C.UpdateHasValidPresence // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetHasValidPresence(bool& bHasValidPresence); // Function VM_PlayerHasValidPresence.VM_PlayerHasValidPresence_C.GetHasValidPresence // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void UnbindFromPlayer(struct UPlatformPlayer* Player); // Function VM_PlayerHasValidPresence.VM_PlayerHasValidPresence_C.UnbindFromPlayer // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindToPlayer(struct UPlatformPlayer* Player); // Function VM_PlayerHasValidPresence.VM_PlayerHasValidPresence_C.BindToPlayer // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void RefreshBroadcast(); // Function VM_PlayerHasValidPresence.VM_PlayerHasValidPresence_C.RefreshBroadcast // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_VM_PlayerHasValidPresence(int32_t EntryPoint); // Function VM_PlayerHasValidPresence.VM_PlayerHasValidPresence_C.ExecuteUbergraph_VM_PlayerHasValidPresence // (Final|UbergraphFunction) // @ game+0x1b42740
	void OnHasValidPresenceChanged__DelegateSignature(bool bHasValidPresence); // Function VM_PlayerHasValidPresence.VM_PlayerHasValidPresence_C.OnHasValidPresenceChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

