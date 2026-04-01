// BlueprintGeneratedClass VM_PlayerPrimaryIdentitySource.VM_PlayerPrimaryIdentitySource_C
// Size: 0xb8 (Inherited: 0x98)
struct UVM_PlayerPrimaryIdentitySource_C : UVM_PlatformPlayerObserver_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x98(0x08)
	enum class EAresIdentitySource PrimaryIdentitySource; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
	struct FMulticastInlineDelegate OnPrimaryIdentitySourceChanged; // 0xa8(0x10)

	void GetPrimaryIdentitySource(enum class EAresIdentitySource& PrimaryIdentitySource); // Function VM_PlayerPrimaryIdentitySource.VM_PlayerPrimaryIdentitySource_C.GetPrimaryIdentitySource // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void SetPrimaryIdentitySource(enum class EAresIdentitySource NewValue); // Function VM_PlayerPrimaryIdentitySource.VM_PlayerPrimaryIdentitySource_C.SetPrimaryIdentitySource // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void RefreshAllData(); // Function VM_PlayerPrimaryIdentitySource.VM_PlayerPrimaryIdentitySource_C.RefreshAllData // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdatePrimaryIdentitySource(); // Function VM_PlayerPrimaryIdentitySource.VM_PlayerPrimaryIdentitySource_C.UpdatePrimaryIdentitySource // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandlePlayerStringChanged(struct FString NewValue); // Function VM_PlayerPrimaryIdentitySource.VM_PlayerPrimaryIdentitySource_C.HandlePlayerStringChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandlePlatformPlayerChanged(struct UPlatformPlayer* PlatformPlayer); // Function VM_PlayerPrimaryIdentitySource.VM_PlayerPrimaryIdentitySource_C.HandlePlatformPlayerChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UnbindFromPlayer(struct UPlatformPlayer* Player); // Function VM_PlayerPrimaryIdentitySource.VM_PlayerPrimaryIdentitySource_C.UnbindFromPlayer // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindToPlayer(struct UPlatformPlayer* Player); // Function VM_PlayerPrimaryIdentitySource.VM_PlayerPrimaryIdentitySource_C.BindToPlayer // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void RefreshBroadcast(); // Function VM_PlayerPrimaryIdentitySource.VM_PlayerPrimaryIdentitySource_C.RefreshBroadcast // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_VM_PlayerPrimaryIdentitySource(int32_t EntryPoint); // Function VM_PlayerPrimaryIdentitySource.VM_PlayerPrimaryIdentitySource_C.ExecuteUbergraph_VM_PlayerPrimaryIdentitySource // (Final|UbergraphFunction) // @ game+0x1af5410
	void OnPrimaryIdentitySourceChanged__DelegateSignature(enum class EAresIdentitySource PrimaryIdentitySource); // Function VM_PlayerPrimaryIdentitySource.VM_PlayerPrimaryIdentitySource_C.OnPrimaryIdentitySourceChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

