// BlueprintGeneratedClass VM_PlayerCompetitiveTier.VM_PlayerCompetitiveTier_C
// Size: 0x140 (Inherited: 0x98)
struct UVM_PlayerCompetitiveTier_C : UVM_PlatformPlayerObserver_Base_C {
	int32_t CurrentTier; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
	struct FCompetitiveTierData CurrentTierData; // 0xa0(0x88)
	bool bTierDataIsValid; // 0x128(0x01)
	char pad_129[0x7]; // 0x129(0x07)
	struct FMulticastInlineDelegate OnCompetitiveTierChanged; // 0x130(0x10)

	void GetCurrentCompetitiveTierData(struct FCompetitiveTierData& CurrentTierData, bool& bIsValid); // Function VM_PlayerCompetitiveTier.VM_PlayerCompetitiveTier_C.GetCurrentCompetitiveTierData // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void GetDataForTier(int32_t CompetitiveTier, struct FCompetitiveTierData& TierData, bool& bIsValid); // Function VM_PlayerCompetitiveTier.VM_PlayerCompetitiveTier_C.GetDataForTier // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void SetCompetitiveTier(int32_t NewTier); // Function VM_PlayerCompetitiveTier.VM_PlayerCompetitiveTier_C.SetCompetitiveTier // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void RefreshAllData(); // Function VM_PlayerCompetitiveTier.VM_PlayerCompetitiveTier_C.RefreshAllData // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateCompetitiveTier(); // Function VM_PlayerCompetitiveTier.VM_PlayerCompetitiveTier_C.UpdateCompetitiveTier // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleCompetitiveTierChanged(struct UPlatformPlayer* PlatformPlayer); // Function VM_PlayerCompetitiveTier.VM_PlayerCompetitiveTier_C.HandleCompetitiveTierChanged // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UnbindFromPlayer(struct UPlatformPlayer* Player); // Function VM_PlayerCompetitiveTier.VM_PlayerCompetitiveTier_C.UnbindFromPlayer // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindToPlayer(struct UPlatformPlayer* Player); // Function VM_PlayerCompetitiveTier.VM_PlayerCompetitiveTier_C.BindToPlayer // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnCompetitiveTierChanged__DelegateSignature(struct FCompetitiveTierData CurrentTierData, bool bTierDataIsValid); // Function VM_PlayerCompetitiveTier.VM_PlayerCompetitiveTier_C.OnCompetitiveTierChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

