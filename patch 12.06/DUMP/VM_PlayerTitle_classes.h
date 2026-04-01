// BlueprintGeneratedClass VM_PlayerTitle.VM_PlayerTitle_C
// Size: 0xc1 (Inherited: 0x98)
struct UVM_PlayerTitle_C : UVM_PlatformPlayerObserver_Base_C {
	struct FText PlayerTitle; // 0x98(0x18)
	struct FMulticastInlineDelegate OnPlayerTitleChanged; // 0xb0(0x10)
	bool bUseUppercaseTitle; // 0xc0(0x01)

	void SetUseUppercaseTitle(bool bUseUppercaseTitle); // Function VM_PlayerTitle.VM_PlayerTitle_C.SetUseUppercaseTitle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetPlayerTitle(struct FText InPlayerTitle); // Function VM_PlayerTitle.VM_PlayerTitle_C.SetPlayerTitle // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void RefreshAllData(); // Function VM_PlayerTitle.VM_PlayerTitle_C.RefreshAllData // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdatePlayerTitle(); // Function VM_PlayerTitle.VM_PlayerTitle_C.UpdatePlayerTitle // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetPlayerTitle(struct FText& OutPlayerTitle); // Function VM_PlayerTitle.VM_PlayerTitle_C.GetPlayerTitle // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void UnbindFromPlayer(struct UPlatformPlayer* Player); // Function VM_PlayerTitle.VM_PlayerTitle_C.UnbindFromPlayer // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleTitleChanged(struct UPlatformPlayer* PlatformPlayer); // Function VM_PlayerTitle.VM_PlayerTitle_C.HandleTitleChanged // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindToPlayer(struct UPlatformPlayer* Player); // Function VM_PlayerTitle.VM_PlayerTitle_C.BindToPlayer // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnPlayerTitleChanged__DelegateSignature(struct FText OutPlayerTitle); // Function VM_PlayerTitle.VM_PlayerTitle_C.OnPlayerTitleChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

