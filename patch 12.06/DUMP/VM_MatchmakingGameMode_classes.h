// BlueprintGeneratedClass VM_MatchmakingGameMode.VM_MatchmakingGameMode_C
// Size: 0x1a0 (Inherited: 0xa0)
struct UVM_MatchmakingGameMode_C : UAresPartyViewModel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa0(0x08)
	struct FMulticastInlineDelegate OnGameModeNameTextChanged; // 0xa8(0x10)
	struct FMulticastInlineDelegate OnGameModeImageChanged; // 0xb8(0x10)
	struct FMulticastInlineDelegate OnGameModeDescriptionTextChanged; // 0xc8(0x10)
	struct UTexture* GameModeImage; // 0xd8(0x08)
	struct FText GameModeNameText; // 0xe0(0x18)
	struct FText GameModeDescriptionText; // 0xf8(0x18)
	struct FString QueueID; // 0x110(0x10)
	bool bCanChangeGameMode; // 0x120(0x01)
	bool bMatchmaking; // 0x121(0x01)
	bool bPartyLeader; // 0x122(0x01)
	char pad_123[0x5]; // 0x123(0x05)
	struct FMulticastInlineDelegate OnCanChangeGameModeChanged; // 0x128(0x10)
	struct TMap<struct FString, struct UGameModeDataAsset*> QueueToModeMapping; // 0x138(0x50)
	struct UTexture* GameModePortrait; // 0x188(0x08)
	struct FMulticastInlineDelegate OnGameModePortraitChanged; // 0x190(0x10)

	void SetGameModePortrait(struct UTexture* NewGameModePortrait); // Function VM_MatchmakingGameMode.VM_MatchmakingGameMode_C.SetGameModePortrait // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InternalRefreshBroadcast(); // Function VM_MatchmakingGameMode.VM_MatchmakingGameMode_C.InternalRefreshBroadcast // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnGameModeForQueueLoaded(struct UGameModeHandle* GameModeHandle); // Function VM_MatchmakingGameMode.VM_MatchmakingGameMode_C.OnGameModeForQueueLoaded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnGameModeLoaded(struct UGameModeHandle* GameModeHandle); // Function VM_MatchmakingGameMode.VM_MatchmakingGameMode_C.OnGameModeLoaded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void RefreshState(); // Function VM_MatchmakingGameMode.VM_MatchmakingGameMode_C.RefreshState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void RefreshGameModeDisplays(); // Function VM_MatchmakingGameMode.VM_MatchmakingGameMode_C.RefreshGameModeDisplays // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetGameModeDescriptionText(struct FText& NewGameModeDescriptionText); // Function VM_MatchmakingGameMode.VM_MatchmakingGameMode_C.SetGameModeDescriptionText // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetGameModeImage(struct UTexture* NewGameModeImage); // Function VM_MatchmakingGameMode.VM_MatchmakingGameMode_C.SetGameModeImage // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetGameModeNameText(struct FText NewGameModeNameText); // Function VM_MatchmakingGameMode.VM_MatchmakingGameMode_C.SetGameModeNameText // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetCanChangeGameMode(); // Function VM_MatchmakingGameMode.VM_MatchmakingGameMode_C.SetCanChangeGameMode // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetMatchmaking(bool NewIsMatchmaking); // Function VM_MatchmakingGameMode.VM_MatchmakingGameMode_C.SetMatchmaking // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetIsPartyLeader(bool NewIsPartyLeader); // Function VM_MatchmakingGameMode.VM_MatchmakingGameMode_C.SetIsPartyLeader // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void On Matchmaking Queue Loaded(struct UMatchmakingQueueHandle* MatchmakingQueueHandle); // Function VM_MatchmakingGameMode.VM_MatchmakingGameMode_C.On Matchmaking Queue Loaded // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnViewModelCreated(); // Function VM_MatchmakingGameMode.VM_MatchmakingGameMode_C.OnViewModelCreated // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void HandlePartyUpdated(); // Function VM_MatchmakingGameMode.VM_MatchmakingGameMode_C.HandlePartyUpdated // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void HandleGameModeRetrieved(struct FString AssetPath, struct FString QueueID, struct UGameModeDataAsset* GameModeData); // Function VM_MatchmakingGameMode.VM_MatchmakingGameMode_C.HandleGameModeRetrieved // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void HandleContentUpdated(); // Function VM_MatchmakingGameMode.VM_MatchmakingGameMode_C.HandleContentUpdated // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void HandleGameModeRetrievalComplete(); // Function VM_MatchmakingGameMode.VM_MatchmakingGameMode_C.HandleGameModeRetrievalComplete // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void RefreshBroadcast(); // Function VM_MatchmakingGameMode.VM_MatchmakingGameMode_C.RefreshBroadcast // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_VM_MatchmakingGameMode(int32_t EntryPoint); // Function VM_MatchmakingGameMode.VM_MatchmakingGameMode_C.ExecuteUbergraph_VM_MatchmakingGameMode // (Final|UbergraphFunction) // @ game+0x1b42740
	void OnGameModePortraitChanged__DelegateSignature(struct UTexture* GameModePortrait); // Function VM_MatchmakingGameMode.VM_MatchmakingGameMode_C.OnGameModePortraitChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnCanChangeGameModeChanged__DelegateSignature(bool IsSelectable); // Function VM_MatchmakingGameMode.VM_MatchmakingGameMode_C.OnCanChangeGameModeChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnGameModeDescriptionTextChanged__DelegateSignature(struct FText ModeDescription); // Function VM_MatchmakingGameMode.VM_MatchmakingGameMode_C.OnGameModeDescriptionTextChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnGameModeImageChanged__DelegateSignature(struct UTexture* Icon); // Function VM_MatchmakingGameMode.VM_MatchmakingGameMode_C.OnGameModeImageChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnGameModeNameTextChanged__DelegateSignature(struct FText ModeName); // Function VM_MatchmakingGameMode.VM_MatchmakingGameMode_C.OnGameModeNameTextChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

