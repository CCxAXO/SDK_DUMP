// BlueprintGeneratedClass VM_PlayerEXPBoost.VM_PlayerEXPBoost_C
// Size: 0xd9 (Inherited: 0x98)
struct UVM_PlayerEXPBoost_C : UVM_PlatformPlayerObserver_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x98(0x08)
	struct FMulticastInlineDelegate OnSubscriptionStatusChanged; // 0xa0(0x10)
	int32_t EXPBoostAmount; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
	struct FMulticastInlineDelegate OnEXPBoostAmountChanged; // 0xb8(0x10)
	struct FMulticastInlineDelegate OnAnyEXPBoostActiveChanged; // 0xc8(0x10)
	bool EXPBoostActive; // 0xd8(0x01)

	void GetAnyEXPBoostActive(bool& EXPBoostActive); // Function VM_PlayerEXPBoost.VM_PlayerEXPBoost_C.GetAnyEXPBoostActive // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetAnyEXPBoostActive(bool AnyEXPBoostActive); // Function VM_PlayerEXPBoost.VM_PlayerEXPBoost_C.SetAnyEXPBoostActive // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void RefreshAllData(); // Function VM_PlayerEXPBoost.VM_PlayerEXPBoost_C.RefreshAllData // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UnbindFromPlayer(struct UPlatformPlayer* Player); // Function VM_PlayerEXPBoost.VM_PlayerEXPBoost_C.UnbindFromPlayer // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindToPlayer(struct UPlatformPlayer* Player); // Function VM_PlayerEXPBoost.VM_PlayerEXPBoost_C.BindToPlayer // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetEXPBoostAmount(int32_t& EXPBoostAmount); // Function VM_PlayerEXPBoost.VM_PlayerEXPBoost_C.GetEXPBoostAmount // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void SetEXPBoostAmount(int32_t NewValue); // Function VM_PlayerEXPBoost.VM_PlayerEXPBoost_C.SetEXPBoostAmount // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateEXPBoostAmount(); // Function VM_PlayerEXPBoost.VM_PlayerEXPBoost_C.UpdateEXPBoostAmount // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleActiveSubscriptionsChanged(); // Function VM_PlayerEXPBoost.VM_PlayerEXPBoost_C.HandleActiveSubscriptionsChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void RefreshBroadcast(); // Function VM_PlayerEXPBoost.VM_PlayerEXPBoost_C.RefreshBroadcast // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_VM_PlayerEXPBoost(int32_t EntryPoint); // Function VM_PlayerEXPBoost.VM_PlayerEXPBoost_C.ExecuteUbergraph_VM_PlayerEXPBoost // (Final|UbergraphFunction) // @ game+0x1af5410
	void OnAnyEXPBoostActiveChanged__DelegateSignature(bool AnyEXPBoostActive); // Function VM_PlayerEXPBoost.VM_PlayerEXPBoost_C.OnAnyEXPBoostActiveChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnEXPBoostAmountChanged__DelegateSignature(int32_t EXPBoostAmount); // Function VM_PlayerEXPBoost.VM_PlayerEXPBoost_C.OnEXPBoostAmountChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnSubscriptionStatusChanged__DelegateSignature(int32_t BoostAmount); // Function VM_PlayerEXPBoost.VM_PlayerEXPBoost_C.OnSubscriptionStatusChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

