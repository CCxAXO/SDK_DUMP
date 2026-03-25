// BlueprintGeneratedClass VM_CharacterSelectPlayerState.VM_CharacterSelectPlayerState_C
// Size: 0x178 (Inherited: 0x90)
struct UVM_CharacterSelectPlayerState_C : UAresViewModelBase {
	struct UPregamePlayerModel* PlayerModel; // 0x90(0x08)
	struct UPregameViewController* PregameViewController; // 0x98(0x08)
	struct UCharacterDataAsset* Character; // 0xa0(0x08)
	struct UCharacterHandle* CharacterHandle; // 0xa8(0x08)
	struct FMulticastInlineDelegate OnCharacterNameChangedAndLocked; // 0xb0(0x10)
	struct FMulticastInlineDelegate OnCharacterLockedInChanged; // 0xc0(0x10)
	struct FMulticastInlineDelegate OnCharacterPortraitChanged; // 0xd0(0x10)
	struct FMulticastInlineDelegate OnRoleIconChanged; // 0xe0(0x10)
	struct UTexture2D* CharacterPortrait; // 0xf0(0x08)
	enum class ESlateVisibility CharacterImageVis; // 0xf8(0x01)
	char pad_F9[0x7]; // 0xf9(0x07)
	struct FText CharacterName; // 0x100(0x18)
	struct UTexture2D* RoleIcon; // 0x118(0x08)
	enum class ESlateVisibility CharacterNameVis; // 0x120(0x01)
	char pad_121[0x7]; // 0x121(0x07)
	struct UVM_CharacterSelectPlayerName_C* PlayerNameViewModel; // 0x128(0x08)
	struct FMulticastInlineDelegate OnCharacterPlayerStateActiveChanged; // 0x130(0x10)
	bool IsLockedIn; // 0x140(0x01)
	char pad_141[0x7]; // 0x141(0x07)
	struct FMulticastInlineDelegate OnFirstCharacterHovered; // 0x148(0x10)
	struct FString PlayerSubject; // 0x158(0x10)
	struct FMulticastInlineDelegate OnPlayerSubjectChanged; // 0x168(0x10)

	void UpdatePlayerSubject(struct FString PlayerSubject); // Function VM_CharacterSelectPlayerState.VM_CharacterSelectPlayerState_C.UpdatePlayerSubject // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void GetVisibility(enum class ESlateVisibility& OutVisibility); // Function VM_CharacterSelectPlayerState.VM_CharacterSelectPlayerState_C.GetVisibility // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void GetMatchID(struct FString& OutMatchID); // Function VM_CharacterSelectPlayerState.VM_CharacterSelectPlayerState_C.GetMatchID // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void GetPlayerSubject(struct FString& OutPlayerSubject); // Function VM_CharacterSelectPlayerState.VM_CharacterSelectPlayerState_C.GetPlayerSubject // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void GetIsLockedIn(bool& Result); // Function VM_CharacterSelectPlayerState.VM_CharacterSelectPlayerState_C.GetIsLockedIn // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void SetRoleIcon(struct UTexture2D* Image); // Function VM_CharacterSelectPlayerState.VM_CharacterSelectPlayerState_C.SetRoleIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetCharacterPortrait(struct UTexture2D* Image); // Function VM_CharacterSelectPlayerState.VM_CharacterSelectPlayerState_C.SetCharacterPortrait // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetCharacterLockedIn(bool IsLocked); // Function VM_CharacterSelectPlayerState.VM_CharacterSelectPlayerState_C.SetCharacterLockedIn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	struct UWidget* GetRoleTooltip(); // Function VM_CharacterSelectPlayerState.VM_CharacterSelectPlayerState_C.GetRoleTooltip // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void UpdatePlayerName(); // Function VM_CharacterSelectPlayerState.VM_CharacterSelectPlayerState_C.UpdatePlayerName // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitContextMenu(); // Function VM_CharacterSelectPlayerState.VM_CharacterSelectPlayerState_C.InitContextMenu // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitVoiceWidgets(); // Function VM_CharacterSelectPlayerState.VM_CharacterSelectPlayerState_C.InitVoiceWidgets // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateCompetitiveTier(); // Function VM_CharacterSelectPlayerState.VM_CharacterSelectPlayerState_C.UpdateCompetitiveTier // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateNameColor(); // Function VM_CharacterSelectPlayerState.VM_CharacterSelectPlayerState_C.UpdateNameColor // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateCharacterName(struct FText Text); // Function VM_CharacterSelectPlayerState.VM_CharacterSelectPlayerState_C.UpdateCharacterName // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateCharacterWidgets(); // Function VM_CharacterSelectPlayerState.VM_CharacterSelectPlayerState_C.UpdateCharacterWidgets // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ClearPlayerModel(); // Function VM_CharacterSelectPlayerState.VM_CharacterSelectPlayerState_C.ClearPlayerModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UnbindPlayerModel(); // Function VM_CharacterSelectPlayerState.VM_CharacterSelectPlayerState_C.UnbindPlayerModel // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindPlayerModel(struct UPregamePlayerModel* Player); // Function VM_CharacterSelectPlayerState.VM_CharacterSelectPlayerState_C.BindPlayerModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleLockedInUpdated(bool IsLockedIn); // Function VM_CharacterSelectPlayerState.VM_CharacterSelectPlayerState_C.HandleLockedInUpdated // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleCharacterLoaded(struct UCharacterHandle* Handle); // Function VM_CharacterSelectPlayerState.VM_CharacterSelectPlayerState_C.HandleCharacterLoaded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleCharacterUpdated(struct UCharacterDataAsset* NewCharacter); // Function VM_CharacterSelectPlayerState.VM_CharacterSelectPlayerState_C.HandleCharacterUpdated // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Initialize(struct UPregameViewController* PregameViewController); // Function VM_CharacterSelectPlayerState.VM_CharacterSelectPlayerState_C.Initialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnPlayerSubjectChanged__DelegateSignature(); // Function VM_CharacterSelectPlayerState.VM_CharacterSelectPlayerState_C.OnPlayerSubjectChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnFirstCharacterHovered__DelegateSignature(); // Function VM_CharacterSelectPlayerState.VM_CharacterSelectPlayerState_C.OnFirstCharacterHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnCharacterPlayerStateActiveChanged__DelegateSignature(bool IsActive); // Function VM_CharacterSelectPlayerState.VM_CharacterSelectPlayerState_C.OnCharacterPlayerStateActiveChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnCharacterNameChangedAndLocked__DelegateSignature(struct FText NewName); // Function VM_CharacterSelectPlayerState.VM_CharacterSelectPlayerState_C.OnCharacterNameChangedAndLocked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnCharacterLockedInChanged__DelegateSignature(); // Function VM_CharacterSelectPlayerState.VM_CharacterSelectPlayerState_C.OnCharacterLockedInChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnRoleIconChanged__DelegateSignature(struct UTexture2D* Image, bool MatchSize); // Function VM_CharacterSelectPlayerState.VM_CharacterSelectPlayerState_C.OnRoleIconChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnCharacterPortraitChanged__DelegateSignature(struct UTexture2D* Image, bool MatchSize); // Function VM_CharacterSelectPlayerState.VM_CharacterSelectPlayerState_C.OnCharacterPortraitChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

