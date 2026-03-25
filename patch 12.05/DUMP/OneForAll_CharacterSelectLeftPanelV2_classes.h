// WidgetBlueprintGeneratedClass OneForAll_CharacterSelectLeftPanelV2.OneForAll_CharacterSelectLeftPanelV2_C
// Size: 0x340 (Inherited: 0x318)
struct UOneForAll_CharacterSelectLeftPanelV2_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UCharacterSelectTimerV2_C* CharacterSelectTimerV2; // 0x320(0x08)
	struct UOneForAll_CharacterSelectTeamStateV2_C* TeamState; // 0x328(0x08)
	struct UTextBlock* TeamText; // 0x330(0x08)
	struct UPregameViewController* PregameViewController; // 0x338(0x08)

	void FinishInitialization(); // Function OneForAll_CharacterSelectLeftPanelV2.OneForAll_CharacterSelectLeftPanelV2_C.FinishInitialization // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetTeamText(struct FName Team); // Function OneForAll_CharacterSelectLeftPanelV2.OneForAll_CharacterSelectLeftPanelV2_C.SetTeamText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Initialize(struct UPregameViewController* PregameViewController); // Function OneForAll_CharacterSelectLeftPanelV2.OneForAll_CharacterSelectLeftPanelV2_C.Initialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function OneForAll_CharacterSelectLeftPanelV2.OneForAll_CharacterSelectLeftPanelV2_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_OneForAll_CharacterSelectLeftPanelV2(int32_t EntryPoint); // Function OneForAll_CharacterSelectLeftPanelV2.OneForAll_CharacterSelectLeftPanelV2_C.ExecuteUbergraph_OneForAll_CharacterSelectLeftPanelV2 // (Final|UbergraphFunction) // @ game+0x1af5410
};

