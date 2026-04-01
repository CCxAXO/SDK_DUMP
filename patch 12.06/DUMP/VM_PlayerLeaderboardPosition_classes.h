// BlueprintGeneratedClass VM_PlayerLeaderboardPosition.VM_PlayerLeaderboardPosition_C
// Size: 0xb0 (Inherited: 0x98)
struct UVM_PlayerLeaderboardPosition_C : UVM_PlatformPlayerObserver_Base_C {
	int32_t CurrentLeaderboardPosition; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
	struct FMulticastInlineDelegate OnLeaderboardPositionChanged; // 0xa0(0x10)

	void HandleLeaderboardPositionChanged(struct UPlatformPlayer* PlatformPlayer); // Function VM_PlayerLeaderboardPosition.VM_PlayerLeaderboardPosition_C.HandleLeaderboardPositionChanged // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetLeaderboardPosition(int32_t LeaderboardPosition); // Function VM_PlayerLeaderboardPosition.VM_PlayerLeaderboardPosition_C.SetLeaderboardPosition // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateLeaderboardPosition(); // Function VM_PlayerLeaderboardPosition.VM_PlayerLeaderboardPosition_C.UpdateLeaderboardPosition // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetCurrentLeaderboardPosition(int32_t& CurrentLeaderboardPosition); // Function VM_PlayerLeaderboardPosition.VM_PlayerLeaderboardPosition_C.GetCurrentLeaderboardPosition // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void RefreshAllData(); // Function VM_PlayerLeaderboardPosition.VM_PlayerLeaderboardPosition_C.RefreshAllData // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UnbindFromPlayer(struct UPlatformPlayer* Player); // Function VM_PlayerLeaderboardPosition.VM_PlayerLeaderboardPosition_C.UnbindFromPlayer // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindToPlayer(struct UPlatformPlayer* Player); // Function VM_PlayerLeaderboardPosition.VM_PlayerLeaderboardPosition_C.BindToPlayer // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnLeaderboardPositionChanged__DelegateSignature(int32_t CurrentLeaderboardPosition); // Function VM_PlayerLeaderboardPosition.VM_PlayerLeaderboardPosition_C.OnLeaderboardPositionChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

