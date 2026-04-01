// WidgetBlueprintGeneratedClass CharacterSelectLeftPanelV2.CharacterSelectLeftPanelV2_C
// Size: 0x340 (Inherited: 0x318)
struct UCharacterSelectLeftPanelV2_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UCharacterSelectTimerV2_C* CharacterSelectTimerV2; // 0x320(0x08)
	struct UCharacterSelectTeamStateV2_C* TeamState; // 0x328(0x08)
	struct UTextBlock* TeamText; // 0x330(0x08)
	struct UPregameViewController* PregameViewController; // 0x338(0x08)

	void FinishInitialization(); // Function CharacterSelectLeftPanelV2.CharacterSelectLeftPanelV2_C.FinishInitialization // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetTeamText(struct FName Team); // Function CharacterSelectLeftPanelV2.CharacterSelectLeftPanelV2_C.SetTeamText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Initialize(struct UPregameViewController* PregameViewController); // Function CharacterSelectLeftPanelV2.CharacterSelectLeftPanelV2_C.Initialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function CharacterSelectLeftPanelV2.CharacterSelectLeftPanelV2_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_CharacterSelectLeftPanelV2(int32_t EntryPoint); // Function CharacterSelectLeftPanelV2.CharacterSelectLeftPanelV2_C.ExecuteUbergraph_CharacterSelectLeftPanelV2 // (Final|UbergraphFunction) // @ game+0x1b42740
};

