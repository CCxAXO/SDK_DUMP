// BlueprintGeneratedClass VM_IsLocalPlayer.VM_IsLocalPlayer_C
// Size: 0xc0 (Inherited: 0x90)
struct UVM_IsLocalPlayer_C : UAresViewModelBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x90(0x08)
	bool bIsLocalPlayer; // 0x98(0x01)
	char pad_99[0x7]; // 0x99(0x07)
	struct FMulticastInlineDelegate OnIsLocalPlayerChanged; // 0xa0(0x10)
	struct FString PlayerSubject; // 0xb0(0x10)

	void SetObservedPlayer(struct FString PlayerSubject); // Function VM_IsLocalPlayer.VM_IsLocalPlayer_C.SetObservedPlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Set Is Local Player(bool bNewValue); // Function VM_IsLocalPlayer.VM_IsLocalPlayer_C.Set Is Local Player // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateIsLocalPlayer(); // Function VM_IsLocalPlayer.VM_IsLocalPlayer_C.UpdateIsLocalPlayer // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetIsLocalPlayer(bool& bIsLocalPlayer); // Function VM_IsLocalPlayer.VM_IsLocalPlayer_C.GetIsLocalPlayer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void RefreshBroadcast(); // Function VM_IsLocalPlayer.VM_IsLocalPlayer_C.RefreshBroadcast // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_VM_IsLocalPlayer(int32_t EntryPoint); // Function VM_IsLocalPlayer.VM_IsLocalPlayer_C.ExecuteUbergraph_VM_IsLocalPlayer // (Final|UbergraphFunction) // @ game+0x1af5410
	void OnIsLocalPlayerChanged__DelegateSignature(bool bIsLocalPlayer); // Function VM_IsLocalPlayer.VM_IsLocalPlayer_C.OnIsLocalPlayerChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

