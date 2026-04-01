// BlueprintGeneratedClass VM_PlayerIsReal.VM_PlayerIsReal_C
// Size: 0xb8 (Inherited: 0x98)
struct UVM_PlayerIsReal_C : UVM_PlatformPlayerObserver_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x98(0x08)
	bool bIsRealPlayer; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
	struct FMulticastInlineDelegate OnIsRealPlayerChanged; // 0xa8(0x10)

	void HandlePlatformPlayerStateChanged(struct UPlatformPlayer* PlatformPlayer); // Function VM_PlayerIsReal.VM_PlayerIsReal_C.HandlePlatformPlayerStateChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Set Is Real Player(bool bNewValue); // Function VM_PlayerIsReal.VM_PlayerIsReal_C.Set Is Real Player // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void RefreshAllData(); // Function VM_PlayerIsReal.VM_PlayerIsReal_C.RefreshAllData // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Update Is Real Player(); // Function VM_PlayerIsReal.VM_PlayerIsReal_C.Update Is Real Player // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetIsRealPlayer(bool& bIsRealPlayer); // Function VM_PlayerIsReal.VM_PlayerIsReal_C.GetIsRealPlayer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void UnbindFromPlayer(struct UPlatformPlayer* Player); // Function VM_PlayerIsReal.VM_PlayerIsReal_C.UnbindFromPlayer // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindToPlayer(struct UPlatformPlayer* Player); // Function VM_PlayerIsReal.VM_PlayerIsReal_C.BindToPlayer // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void RefreshBroadcast(); // Function VM_PlayerIsReal.VM_PlayerIsReal_C.RefreshBroadcast // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_VM_PlayerIsReal(int32_t EntryPoint); // Function VM_PlayerIsReal.VM_PlayerIsReal_C.ExecuteUbergraph_VM_PlayerIsReal // (Final|UbergraphFunction) // @ game+0x1b42740
	void OnIsRealPlayerChanged__DelegateSignature(bool bIsRealPlayer); // Function VM_PlayerIsReal.VM_PlayerIsReal_C.OnIsRealPlayerChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

