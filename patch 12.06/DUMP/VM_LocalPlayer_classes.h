// BlueprintGeneratedClass VM_LocalPlayer.VM_LocalPlayer_C
// Size: 0xb8 (Inherited: 0x90)
struct UVM_LocalPlayer_C : UAresViewModelBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x90(0x08)
	struct FString LocalPlayerId; // 0x98(0x10)
	struct FMulticastInlineDelegate OnLocalPlayerIdChanged; // 0xa8(0x10)

	void UnbindFromEvents(); // Function VM_LocalPlayer.VM_LocalPlayer_C.UnbindFromEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindToEvents(); // Function VM_LocalPlayer.VM_LocalPlayer_C.BindToEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleCurrentPlayerChanged(); // Function VM_LocalPlayer.VM_LocalPlayer_C.HandleCurrentPlayerChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetLocalPlayerId(struct FString& LocalPlayerId); // Function VM_LocalPlayer.VM_LocalPlayer_C.GetLocalPlayerId // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void OnViewModelCreated(); // Function VM_LocalPlayer.VM_LocalPlayer_C.OnViewModelCreated // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void RefreshBroadcast(); // Function VM_LocalPlayer.VM_LocalPlayer_C.RefreshBroadcast // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_VM_LocalPlayer(int32_t EntryPoint); // Function VM_LocalPlayer.VM_LocalPlayer_C.ExecuteUbergraph_VM_LocalPlayer // (Final|UbergraphFunction) // @ game+0x1b42740
	void OnLocalPlayerIdChanged__DelegateSignature(struct FString PlayerID); // Function VM_LocalPlayer.VM_LocalPlayer_C.OnLocalPlayerIdChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

