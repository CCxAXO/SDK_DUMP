// BlueprintGeneratedClass VM_PlayerPartyReadiness.VM_PlayerPartyReadiness_C
// Size: 0xf8 (Inherited: 0x98)
struct UVM_PlayerPartyReadiness_C : UVM_PlatformPlayerObserver_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x98(0x08)
	bool bIsReady; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
	struct FText ReadyStatusText; // 0xa8(0x18)
	struct FMulticastInlineDelegate OnIsReadyChanged; // 0xc0(0x10)
	struct FMulticastInlineDelegate OnReadyStatusTextChanged; // 0xd0(0x10)
	enum class EAresSocialPresenceType ReadyPresenceType; // 0xe0(0x01)
	char pad_E1[0x7]; // 0xe1(0x07)
	struct FMulticastInlineDelegate OnReadyPresenceTypeChanged; // 0xe8(0x10)

	void SetReadyPresenceType(enum class EAresSocialPresenceType NewReadyPresenceType); // Function VM_PlayerPartyReadiness.VM_PlayerPartyReadiness_C.SetReadyPresenceType // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetReadyPresenceType(enum class EAresSocialPresenceType& ReadyPresence); // Function VM_PlayerPartyReadiness.VM_PlayerPartyReadiness_C.GetReadyPresenceType // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void HandlePlayerIsBlockedChanged(bool NewValue); // Function VM_PlayerPartyReadiness.VM_PlayerPartyReadiness_C.HandlePlayerIsBlockedChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetReadyStatusText(struct FText NewReadyStatusText); // Function VM_PlayerPartyReadiness.VM_PlayerPartyReadiness_C.SetReadyStatusText // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetIsReady(bool bNewIsReady); // Function VM_PlayerPartyReadiness.VM_PlayerPartyReadiness_C.SetIsReady // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void DeriveCurrentReadyState(bool& bOutIsReady, struct FText& OutReadyStatusText, enum class EAresSocialPresenceType& OutReadyPresenceType); // Function VM_PlayerPartyReadiness.VM_PlayerPartyReadiness_C.DeriveCurrentReadyState // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetReadyStatusText(struct FText& ReadyStatusText); // Function VM_PlayerPartyReadiness.VM_PlayerPartyReadiness_C.GetReadyStatusText // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void GetIsReady(bool& bIsReady); // Function VM_PlayerPartyReadiness.VM_PlayerPartyReadiness_C.GetIsReady // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void UpdateReadyState(); // Function VM_PlayerPartyReadiness.VM_PlayerPartyReadiness_C.UpdateReadyState // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandlePlayerStateChanged(struct UPlatformPlayer* PlatformPlayer); // Function VM_PlayerPartyReadiness.VM_PlayerPartyReadiness_C.HandlePlayerStateChanged // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void RefreshAllData(); // Function VM_PlayerPartyReadiness.VM_PlayerPartyReadiness_C.RefreshAllData // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UnbindFromPlayer(struct UPlatformPlayer* Player); // Function VM_PlayerPartyReadiness.VM_PlayerPartyReadiness_C.UnbindFromPlayer // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindToPlayer(struct UPlatformPlayer* Player); // Function VM_PlayerPartyReadiness.VM_PlayerPartyReadiness_C.BindToPlayer // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void RefreshBroadcast(); // Function VM_PlayerPartyReadiness.VM_PlayerPartyReadiness_C.RefreshBroadcast // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_VM_PlayerPartyReadiness(int32_t EntryPoint); // Function VM_PlayerPartyReadiness.VM_PlayerPartyReadiness_C.ExecuteUbergraph_VM_PlayerPartyReadiness // (Final|UbergraphFunction) // @ game+0x1af5410
	void OnReadyPresenceTypeChanged__DelegateSignature(enum class EAresSocialPresenceType ReadyPresenceType); // Function VM_PlayerPartyReadiness.VM_PlayerPartyReadiness_C.OnReadyPresenceTypeChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnReadyStatusTextChanged__DelegateSignature(struct FText ReadyStatusText); // Function VM_PlayerPartyReadiness.VM_PlayerPartyReadiness_C.OnReadyStatusTextChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnIsReadyChanged__DelegateSignature(bool bIsReady); // Function VM_PlayerPartyReadiness.VM_PlayerPartyReadiness_C.OnIsReadyChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

