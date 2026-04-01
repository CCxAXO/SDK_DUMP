// WidgetBlueprintGeneratedClass CharacterSelectRightPanelV2.CharacterSelectRightPanelV2_C
// Size: 0x340 (Inherited: 0x318)
struct UCharacterSelectRightPanelV2_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UCharacterAbilities_C* CharacterAbilities; // 0x320(0x08)
	struct UCharacterSelectEnemyTeamRecapV2_C* CharacterSelectEnemyTeamRecapV2; // 0x328(0x08)
	struct UPregameViewController* PregameViewController; // 0x330(0x08)
	struct UPregamePlayerModel* LocalPlayer; // 0x338(0x08)

	void UpdateCharacter(struct UCharacterDataAsset* Character); // Function CharacterSelectRightPanelV2.CharacterSelectRightPanelV2_C.UpdateCharacter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateLocalPlayer(struct UPregamePlayerModel* Player); // Function CharacterSelectRightPanelV2.CharacterSelectRightPanelV2_C.UpdateLocalPlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Initialize(struct UPregameViewController* PregameViewController); // Function CharacterSelectRightPanelV2.CharacterSelectRightPanelV2_C.Initialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function CharacterSelectRightPanelV2.CharacterSelectRightPanelV2_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_CharacterSelectRightPanelV2(int32_t EntryPoint); // Function CharacterSelectRightPanelV2.CharacterSelectRightPanelV2_C.ExecuteUbergraph_CharacterSelectRightPanelV2 // (Final|UbergraphFunction) // @ game+0x1b42740
};

