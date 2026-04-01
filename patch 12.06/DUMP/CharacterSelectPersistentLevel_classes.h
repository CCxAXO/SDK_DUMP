// BlueprintGeneratedClass CharacterSelectPersistentLevel.CharacterSelectPersistentLevel_C
// Size: 0x488 (Inherited: 0x468)
struct ACharacterSelectPersistentLevel_C : ALevelScriptActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x468(0x08)
	struct FName NoTag; // 0x470(0x0c)
	char pad_47C[0x4]; // 0x47c(0x04)
	struct UUserWidget* CharacterSelectUI; // 0x480(0x08)

	struct UUserWidget* FindOrGetCharacterSelectUI(); // Function CharacterSelectPersistentLevel.CharacterSelectPersistentLevel_C.FindOrGetCharacterSelectUI // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ForceSelectCharacter(struct FString AgentName); // Function CharacterSelectPersistentLevel.CharacterSelectPersistentLevel_C.ForceSelectCharacter // (Exec|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HideHud(); // Function CharacterSelectPersistentLevel.CharacterSelectPersistentLevel_C.HideHud // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ShowHUD(); // Function CharacterSelectPersistentLevel.CharacterSelectPersistentLevel_C.ShowHUD // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_CharacterSelectPersistentLevel(int32_t EntryPoint); // Function CharacterSelectPersistentLevel.CharacterSelectPersistentLevel_C.ExecuteUbergraph_CharacterSelectPersistentLevel // (Final|UbergraphFunction) // @ game+0x1b42740
};

