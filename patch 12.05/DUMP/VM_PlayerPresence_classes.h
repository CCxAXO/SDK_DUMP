// BlueprintGeneratedClass VM_PlayerPresence.VM_PlayerPresence_C
// Size: 0xcd (Inherited: 0x98)
struct UVM_PlayerPresence_C : UVM_PlatformPlayerObserver_Base_C {
	struct FMulticastInlineDelegate OnPresenceStateChanged; // 0x98(0x10)
	struct FAresSocialPresenceState CurrentPresenceState; // 0xa8(0x05)
	char pad_AD[0x3]; // 0xad(0x03)
	struct UAresSocialPresenceColorSetDataAsset* PresenceColorSet; // 0xb0(0x08)
	struct FSlateColor FallbackColor; // 0xb8(0x14)
	bool bUsePartyOverrideColor; // 0xcc(0x01)

	void Initialize(struct UAresSocialPresenceColorSetDataAsset* ColorSet, bool bUsePartyColorOverrides); // Function VM_PlayerPresence.VM_PlayerPresence_C.Initialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleIsBlockedChanged(bool bIsBlocked); // Function VM_PlayerPresence.VM_PlayerPresence_C.HandleIsBlockedChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleQueueIDChanged(struct FString NewValue); // Function VM_PlayerPresence.VM_PlayerPresence_C.HandleQueueIDChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetMatchScoreText(struct FText& MatchScoreText); // Function VM_PlayerPresence.VM_PlayerPresence_C.GetMatchScoreText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void GetMapName(struct FText& MapName); // Function VM_PlayerPresence.VM_PlayerPresence_C.GetMapName // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void GetQueueName(struct FText& QueueName); // Function VM_PlayerPresence.VM_PlayerPresence_C.GetQueueName // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void GetWStatusText(enum class EAresSocialPresenceType PresenceType, struct FText& Text); // Function VM_PlayerPresence.VM_PlayerPresence_C.GetWStatusText // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void HandlePartySizeChanged(int32_t NewValue); // Function VM_PlayerPresence.VM_PlayerPresence_C.HandlePartySizeChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetGenericStatusText(enum class EAresSocialPresenceType PresenceType, struct FText& Text); // Function VM_PlayerPresence.VM_PlayerPresence_C.GetGenericStatusText // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void GetDesignTimePresenceColor(struct FAresSocialPresenceState PresenceState, struct FSlateColor& Color); // Function VM_PlayerPresence.VM_PlayerPresence_C.GetDesignTimePresenceColor // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void UpdatePresenceState(); // Function VM_PlayerPresence.VM_PlayerPresence_C.UpdatePresenceState // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void RefreshAllData(); // Function VM_PlayerPresence.VM_PlayerPresence_C.RefreshAllData // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UnbindFromPlayer(struct UPlatformPlayer* Player); // Function VM_PlayerPresence.VM_PlayerPresence_C.UnbindFromPlayer // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindToPlayer(struct UPlatformPlayer* Player); // Function VM_PlayerPresence.VM_PlayerPresence_C.BindToPlayer // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetCurrentPresenceColor(struct FSlateColor& Presence Color); // Function VM_PlayerPresence.VM_PlayerPresence_C.GetCurrentPresenceColor // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void GetCurrentPresenceStatusText(struct FText& Presence Text); // Function VM_PlayerPresence.VM_PlayerPresence_C.GetCurrentPresenceStatusText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void HandlePlayerStateChanged(struct UPlatformPlayer* PlatformPlayer); // Function VM_PlayerPresence.VM_PlayerPresence_C.HandlePlayerStateChanged // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnPresenceStateChanged__DelegateSignature(); // Function VM_PlayerPresence.VM_PlayerPresence_C.OnPresenceStateChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

