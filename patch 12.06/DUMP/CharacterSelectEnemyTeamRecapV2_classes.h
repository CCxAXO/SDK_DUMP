// WidgetBlueprintGeneratedClass CharacterSelectEnemyTeamRecapV2.CharacterSelectEnemyTeamRecapV2_C
// Size: 0x341 (Inherited: 0x318)
struct UCharacterSelectEnemyTeamRecapV2_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UGridPanel* GridPanel_58; // 0x320(0x08)
	struct UPregameViewModel* ViewModel; // 0x328(0x08)
	struct TArray<struct UCharacterSelectRecapPlayer_C*> PlayerWidgets; // 0x330(0x10)
	bool Vertical; // 0x340(0x01)

	void HandleNumPlayersChanged(int32_t NewValue); // Function CharacterSelectEnemyTeamRecapV2.CharacterSelectEnemyTeamRecapV2_C.HandleNumPlayersChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleNumLockedInChanged(int32_t NewValue); // Function CharacterSelectEnemyTeamRecapV2.CharacterSelectEnemyTeamRecapV2_C.HandleNumLockedInChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateNumLockedIn(); // Function CharacterSelectEnemyTeamRecapV2.CharacterSelectEnemyTeamRecapV2_C.UpdateNumLockedIn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateNumPlayers(); // Function CharacterSelectEnemyTeamRecapV2.CharacterSelectEnemyTeamRecapV2_C.UpdateNumPlayers // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Initialize(struct UPregameViewModel* PregameViewModel); // Function CharacterSelectEnemyTeamRecapV2.CharacterSelectEnemyTeamRecapV2_C.Initialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function CharacterSelectEnemyTeamRecapV2.CharacterSelectEnemyTeamRecapV2_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_CharacterSelectEnemyTeamRecapV2(int32_t EntryPoint); // Function CharacterSelectEnemyTeamRecapV2.CharacterSelectEnemyTeamRecapV2_C.ExecuteUbergraph_CharacterSelectEnemyTeamRecapV2 // (Final|UbergraphFunction) // @ game+0x1b42740
};

