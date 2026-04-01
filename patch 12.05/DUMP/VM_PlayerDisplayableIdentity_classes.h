// BlueprintGeneratedClass VM_PlayerDisplayableIdentity.VM_PlayerDisplayableIdentity_C
// Size: 0xb4 (Inherited: 0x98)
struct UVM_PlayerDisplayableIdentity_C : UVM_PlatformPlayerObserver_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x98(0x08)
	struct FMulticastInlineDelegate OnPlayerIdentitySourceChanged; // 0xa0(0x10)
	enum class EAresIdentitySource IdentitySource; // 0xb0(0x01)
	bool bHasValidIdentity; // 0xb1(0x01)
	enum class EAresIdentityDisplay DesiredIdentitySource; // 0xb2(0x01)
	bool bUseRiotIdAsSecondaryIdentity; // 0xb3(0x01)

	void UpdatePriorityLinkedIdentitySource(); // Function VM_PlayerDisplayableIdentity.VM_PlayerDisplayableIdentity_C.UpdatePriorityLinkedIdentitySource // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandlePlatformNameChanged(struct FString NewValue); // Function VM_PlayerDisplayableIdentity.VM_PlayerDisplayableIdentity_C.HandlePlatformNameChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleRiotNameChanged(struct FDisplayName& DisplayName); // Function VM_PlayerDisplayableIdentity.VM_PlayerDisplayableIdentity_C.HandleRiotNameChanged // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandlePlatformPlayerValueChanged(struct UPlatformPlayer* PlatformPlayer); // Function VM_PlayerDisplayableIdentity.VM_PlayerDisplayableIdentity_C.HandlePlatformPlayerValueChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetIdentitySource(enum class EAresIdentitySource NewIdentitySource, bool bHasValidIdentity); // Function VM_PlayerDisplayableIdentity.VM_PlayerDisplayableIdentity_C.SetIdentitySource // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetDesiredIdentitySource(enum class EAresIdentityDisplay NewDesiredIdentitySource, bool NewUseRiotIdAsSecondaryIdentity); // Function VM_PlayerDisplayableIdentity.VM_PlayerDisplayableIdentity_C.SetDesiredIdentitySource // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ValidateAndSetIdentitySource(enum class EAresIdentitySource NewIdentitySource); // Function VM_PlayerDisplayableIdentity.VM_PlayerDisplayableIdentity_C.ValidateAndSetIdentitySource // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void RefreshAllData(); // Function VM_PlayerDisplayableIdentity.VM_PlayerDisplayableIdentity_C.RefreshAllData // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UnbindFromPlayer(struct UPlatformPlayer* Player); // Function VM_PlayerDisplayableIdentity.VM_PlayerDisplayableIdentity_C.UnbindFromPlayer // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindToPlayer(struct UPlatformPlayer* Player); // Function VM_PlayerDisplayableIdentity.VM_PlayerDisplayableIdentity_C.BindToPlayer // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void RefreshBroadcast(); // Function VM_PlayerDisplayableIdentity.VM_PlayerDisplayableIdentity_C.RefreshBroadcast // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_VM_PlayerDisplayableIdentity(int32_t EntryPoint); // Function VM_PlayerDisplayableIdentity.VM_PlayerDisplayableIdentity_C.ExecuteUbergraph_VM_PlayerDisplayableIdentity // (Final|UbergraphFunction) // @ game+0x1af5410
	void OnPlayerIdentitySourceChanged__DelegateSignature(enum class EAresIdentitySource NewIdentitySource, bool bHasValidIdentity); // Function VM_PlayerDisplayableIdentity.VM_PlayerDisplayableIdentity_C.OnPlayerIdentitySourceChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

