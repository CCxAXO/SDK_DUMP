// BlueprintGeneratedClass VM_CharacterListEntry.VM_CharacterListEntry_C
// Size: 0x1f0 (Inherited: 0x108)
struct UVM_CharacterListEntry_C : UVM_ContentTile_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x108(0x08)
	struct UPregameViewModel* PregameModel; // 0x110(0x08)
	struct UPregameViewController* PregameViewController; // 0x118(0x08)
	bool bIsSelected; // 0x120(0x01)
	char pad_121[0x7]; // 0x121(0x07)
	struct FMulticastInlineDelegate OnCharacterSelectedStateChanged; // 0x128(0x10)
	struct FMulticastInlineDelegate OnCharacterStateChanged; // 0x138(0x10)
	enum class CharacterListEntryState CharacterState; // 0x148(0x01)
	char pad_149[0x7]; // 0x149(0x07)
	struct APregamePlayerController* PregamePlayerController; // 0x150(0x08)
	struct UTexture2D* CharacterPortrait; // 0x158(0x08)
	struct FMulticastInlineDelegate OnCharacterPortraitChanged; // 0x160(0x10)
	struct FText ToolTip; // 0x170(0x18)
	struct FMulticastInlineDelegate OnCharacterTooltipChanged; // 0x188(0x10)
	bool bHasPlayerLockedIn; // 0x198(0x01)
	char pad_199[0x7]; // 0x199(0x07)
	struct FMulticastInlineDelegate OnPlayerLockedInChanged; // 0x1a0(0x10)
	struct FText CharacterName; // 0x1b0(0x18)
	struct FMulticastInlineDelegate OnCharacertNameChanged; // 0x1c8(0x10)
	bool bIsInGame; // 0x1d8(0x01)
	bool IgnoreOwnership; // 0x1d9(0x01)
	bool bHasCustomizedProfile; // 0x1da(0x01)
	char pad_1DB[0x5]; // 0x1db(0x05)
	struct FMulticastInlineDelegate OnHasCustomizedProfileChanged; // 0x1e0(0x10)

	void HandlePresetUpdated(int32_t NewValue); // Function VM_CharacterListEntry.VM_CharacterListEntry_C.HandlePresetUpdated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetDevelopmentName(struct FName& Developer Name); // Function VM_CharacterListEntry.VM_CharacterListEntry_C.GetDevelopmentName // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void GetHasCustomizedProfile(bool& bHasCustomizedProfile); // Function VM_CharacterListEntry.VM_CharacterListEntry_C.GetHasCustomizedProfile // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void SetHasCustomizedProfile(bool HasCustomProfile); // Function VM_CharacterListEntry.VM_CharacterListEntry_C.SetHasCustomizedProfile // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Set Ignore Ownership(bool bShouldIgnore); // Function VM_CharacterListEntry.VM_CharacterListEntry_C.Set Ignore Ownership // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetIsInGame(bool bInGame); // Function VM_CharacterListEntry.VM_CharacterListEntry_C.SetIsInGame // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void IsContentUnlocked(bool& bIsContentUnlocked); // Function VM_CharacterListEntry.VM_CharacterListEntry_C.IsContentUnlocked // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void GetCharacterName(struct FText& CharacterName); // Function VM_CharacterListEntry.VM_CharacterListEntry_C.GetCharacterName // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void SetCharacterName(struct FText CharacterName); // Function VM_CharacterListEntry.VM_CharacterListEntry_C.SetCharacterName // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void IsCharacterDiabledForQueue(bool& bIsDisabledForQueue); // Function VM_CharacterListEntry.VM_CharacterListEntry_C.IsCharacterDiabledForQueue // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void SetIsContentUnlocked(bool bIsContentUnlocked); // Function VM_CharacterListEntry.VM_CharacterListEntry_C.SetIsContentUnlocked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandlePlayerLockedInChanged(bool IsLockedIn); // Function VM_CharacterListEntry.VM_CharacterListEntry_C.HandlePlayerLockedInChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnButtonClicked(struct UCommonButtonBase* Button); // Function VM_CharacterListEntry.VM_CharacterListEntry_C.OnButtonClicked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Refresh(); // Function VM_CharacterListEntry.VM_CharacterListEntry_C.Refresh // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetTooltip(struct FText& ToolTip); // Function VM_CharacterListEntry.VM_CharacterListEntry_C.GetTooltip // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void UpdateTooltip(bool bIsUnlocked, bool bIsDisabledInQueue); // Function VM_CharacterListEntry.VM_CharacterListEntry_C.UpdateTooltip // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetToolTip(struct FText ToolTip); // Function VM_CharacterListEntry.VM_CharacterListEntry_C.SetToolTip // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetCharacterPortrait(struct UTexture2D*& CharacterPortrait); // Function VM_CharacterListEntry.VM_CharacterListEntry_C.GetCharacterPortrait // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void SetCharacterPortrait(struct UTexture2D* CharacterPortrait); // Function VM_CharacterListEntry.VM_CharacterListEntry_C.SetCharacterPortrait // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleUnlockedChanged(); // Function VM_CharacterListEntry.VM_CharacterListEntry_C.HandleUnlockedChanged // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetCharacterState(enum class CharacterListEntryState& CharacterState); // Function VM_CharacterListEntry.VM_CharacterListEntry_C.GetCharacterState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void SetCharacterState(enum class CharacterListEntryState CharacterState); // Function VM_CharacterListEntry.VM_CharacterListEntry_C.SetCharacterState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void IsSelected(bool& bIsSelected); // Function VM_CharacterListEntry.VM_CharacterListEntry_C.IsSelected // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void SetIsSelected(bool bIsSelected); // Function VM_CharacterListEntry.VM_CharacterListEntry_C.SetIsSelected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void GetCharacterHandle(struct UCharacterHandle*& CharacterHandle); // Function VM_CharacterListEntry.VM_CharacterListEntry_C.GetCharacterHandle // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void SetCharacterHandle(struct UCharacterHandle* CharacterHandle); // Function VM_CharacterListEntry.VM_CharacterListEntry_C.SetCharacterHandle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetPreGameModel(struct UPregameViewModel* Model); // Function VM_CharacterListEntry.VM_CharacterListEntry_C.SetPreGameModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetPlayerController(struct APlayerController* PlayerController); // Function VM_CharacterListEntry.VM_CharacterListEntry_C.SetPlayerController // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleCharacterStateChanged(struct UCharacterDataAsset* Character, enum class EPregameCharacterState State); // Function VM_CharacterListEntry.VM_CharacterListEntry_C.HandleCharacterStateChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindPreGameModelEvents(bool bBind); // Function VM_CharacterListEntry.VM_CharacterListEntry_C.BindPreGameModelEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateCharacterState(); // Function VM_CharacterListEntry.VM_CharacterListEntry_C.UpdateCharacterState // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void IsCharacterAvailable(bool& bIsCharacterAvailable); // Function VM_CharacterListEntry.VM_CharacterListEntry_C.IsCharacterAvailable // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void OnViewModelCreated(); // Function VM_CharacterListEntry.VM_CharacterListEntry_C.OnViewModelCreated // (Event|Protected|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_VM_CharacterListEntry(int32_t EntryPoint); // Function VM_CharacterListEntry.VM_CharacterListEntry_C.ExecuteUbergraph_VM_CharacterListEntry // (Final|UbergraphFunction) // @ game+0x1b42740
	void OnHasCustomizedProfileChanged__DelegateSignature(bool bHasCustomizedProfile); // Function VM_CharacterListEntry.VM_CharacterListEntry_C.OnHasCustomizedProfileChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnCharacertNameChanged__DelegateSignature(struct FText CharacterName); // Function VM_CharacterListEntry.VM_CharacterListEntry_C.OnCharacertNameChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnPlayerLockedInChanged__DelegateSignature(bool IsLockedIn); // Function VM_CharacterListEntry.VM_CharacterListEntry_C.OnPlayerLockedInChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnCharacterTooltipChanged__DelegateSignature(struct FText ToolTip); // Function VM_CharacterListEntry.VM_CharacterListEntry_C.OnCharacterTooltipChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnCharacterPortraitChanged__DelegateSignature(struct UTexture2D* Portrait); // Function VM_CharacterListEntry.VM_CharacterListEntry_C.OnCharacterPortraitChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnCharacterStateChanged__DelegateSignature(enum class CharacterListEntryState State); // Function VM_CharacterListEntry.VM_CharacterListEntry_C.OnCharacterStateChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnCharacterSelectedStateChanged__DelegateSignature(bool IsSelected); // Function VM_CharacterListEntry.VM_CharacterListEntry_C.OnCharacterSelectedStateChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

