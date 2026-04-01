// BlueprintGeneratedClass VM_CharacterSelectPlayerName.VM_CharacterSelectPlayerName_C
// Size: 0x13c (Inherited: 0x90)
struct UVM_CharacterSelectPlayerName_C : UAresViewModelBase {
	struct FString Subject; // 0x90(0x10)
	struct UPlatformPlayer* PlatformPlayer; // 0xa0(0x08)
	bool AllowAnonymizedNames; // 0xa8(0x01)
	char pad_A9[0x7]; // 0xa9(0x07)
	struct FText GameName; // 0xb0(0x18)
	struct FText Tagline; // 0xc8(0x18)
	struct FMulticastInlineDelegate OnPlayerNameChanged; // 0xe0(0x10)
	struct FText PlayerName; // 0xf0(0x18)
	struct FMulticastInlineDelegate OnTextColorChanged; // 0x108(0x10)
	struct FMulticastInlineDelegate OnTextColorOpacityChanged; // 0x118(0x10)
	struct FSlateColor ColorOpacity; // 0x128(0x14)

	void UpdatePlatformPlayer(struct UPlatformPlayer* Value); // Function VM_CharacterSelectPlayerName.VM_CharacterSelectPlayerName_C.UpdatePlatformPlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateNameFromPlatformPlayer(); // Function VM_CharacterSelectPlayerName.VM_CharacterSelectPlayerName_C.UpdateNameFromPlatformPlayer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdatePlayerForSubject(); // Function VM_CharacterSelectPlayerName.VM_CharacterSelectPlayerName_C.UpdatePlayerForSubject // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateSubjectAndName(struct FString Subject, struct FString GameName, struct FString Tagline); // Function VM_CharacterSelectPlayerName.VM_CharacterSelectPlayerName_C.UpdateSubjectAndName // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateSubject(struct FString Subject); // Function VM_CharacterSelectPlayerName.VM_CharacterSelectPlayerName_C.UpdateSubject // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandlePlatformPlayerNameChanged(struct FDisplayName& DisplayName); // Function VM_CharacterSelectPlayerName.VM_CharacterSelectPlayerName_C.HandlePlatformPlayerNameChanged // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetColorOpacity(struct FSlateColor Color and Opacity); // Function VM_CharacterSelectPlayerName.VM_CharacterSelectPlayerName_C.SetColorOpacity // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetPlayerName(struct FText NewPlayerName); // Function VM_CharacterSelectPlayerName.VM_CharacterSelectPlayerName_C.SetPlayerName // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnTextColorOpacityChanged__DelegateSignature(struct FSlateColor Color and Opacity); // Function VM_CharacterSelectPlayerName.VM_CharacterSelectPlayerName_C.OnTextColorOpacityChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnTextColorChanged__DelegateSignature(struct FColor Color); // Function VM_CharacterSelectPlayerName.VM_CharacterSelectPlayerName_C.OnTextColorChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnPlayerNameChanged__DelegateSignature(struct FText PlayerNameText); // Function VM_CharacterSelectPlayerName.VM_CharacterSelectPlayerName_C.OnPlayerNameChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
};

