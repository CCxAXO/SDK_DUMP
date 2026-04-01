// WidgetBlueprintGeneratedClass CharacterSelectPlayerState_Base.CharacterSelectPlayerState_Base_C
// Size: 0x348 (Inherited: 0x320)
struct UCharacterSelectPlayerState_Base_C : UDesignableUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UPregamePlayerModel* PlayerModel; // 0x328(0x08)
	struct UPregameViewController* PregameViewController; // 0x330(0x08)
	struct UCharacterDataAsset* Character; // 0x338(0x08)
	struct UCharacterHandle* CharacterHandle; // 0x340(0x08)

	void InitContextMenu(); // Function CharacterSelectPlayerState_Base.CharacterSelectPlayerState_Base_C.InitContextMenu // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateCharacterWidgets(); // Function CharacterSelectPlayerState_Base.CharacterSelectPlayerState_Base_C.UpdateCharacterWidgets // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitVoiceWidgets(); // Function CharacterSelectPlayerState_Base.CharacterSelectPlayerState_Base_C.InitVoiceWidgets // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnCharacterLoaded(struct UCharacterHandle* Handle); // Function CharacterSelectPlayerState_Base.CharacterSelectPlayerState_Base_C.OnCharacterLoaded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateCompetitiveTier(); // Function CharacterSelectPlayerState_Base.CharacterSelectPlayerState_Base_C.UpdateCompetitiveTier // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdatePlayerName(); // Function CharacterSelectPlayerState_Base.CharacterSelectPlayerState_Base_C.UpdatePlayerName // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateNameColor(); // Function CharacterSelectPlayerState_Base.CharacterSelectPlayerState_Base_C.UpdateNameColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateCharacter(); // Function CharacterSelectPlayerState_Base.CharacterSelectPlayerState_Base_C.UpdateCharacter // (Protected|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateLockedIn(); // Function CharacterSelectPlayerState_Base.CharacterSelectPlayerState_Base_C.UpdateLockedIn // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleCharacterChanged(struct UCharacterDataAsset* Character); // Function CharacterSelectPlayerState_Base.CharacterSelectPlayerState_Base_C.HandleCharacterChanged // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleLockedInChanged(bool IsLockedIn); // Function CharacterSelectPlayerState_Base.CharacterSelectPlayerState_Base_C.HandleLockedInChanged // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UnbindFromPlayerModel(); // Function CharacterSelectPlayerState_Base.CharacterSelectPlayerState_Base_C.UnbindFromPlayerModel // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ClearPlayerModel(); // Function CharacterSelectPlayerState_Base.CharacterSelectPlayerState_Base_C.ClearPlayerModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Initialize(struct UPregameViewController* PregameViewController); // Function CharacterSelectPlayerState_Base.CharacterSelectPlayerState_Base_C.Initialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetPlayerModel(struct UPregamePlayerModel* Player); // Function CharacterSelectPlayerState_Base.CharacterSelectPlayerState_Base_C.SetPlayerModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function CharacterSelectPlayerState_Base.CharacterSelectPlayerState_Base_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_CharacterSelectPlayerState_Base(int32_t EntryPoint); // Function CharacterSelectPlayerState_Base.CharacterSelectPlayerState_Base_C.ExecuteUbergraph_CharacterSelectPlayerState_Base // (Final|UbergraphFunction) // @ game+0x1b42740
};

