// WidgetBlueprintGeneratedClass PregamePlayerUI.PregamePlayerUI_C
// Size: 0x348 (Inherited: 0x318)
struct UPregamePlayerUI_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UCharacterListV2_C* CharacterListV2; // 0x320(0x08)
	struct UCharacterSelectLeftPanelV2_C* CharacterSelectLeftPanelV2; // 0x328(0x08)
	struct UCharacterSelectRightPanelV2_C* CharacterSelectRightPanelV2; // 0x330(0x08)
	struct UPlayerFacingPerfTextGroup_C* PlayerFacingPerfTextGroup; // 0x338(0x08)
	struct UUniversalProgressionWidget_C* UPW; // 0x340(0x08)

	void Construct(); // Function PregamePlayerUI.PregamePlayerUI_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnIsLocalPlayerCoachChanged(bool NewValue); // Function PregamePlayerUI.PregamePlayerUI_C.OnIsLocalPlayerCoachChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_PregamePlayerUI(int32_t EntryPoint); // Function PregamePlayerUI.PregamePlayerUI_C.ExecuteUbergraph_PregamePlayerUI // (Final|UbergraphFunction) // @ game+0x1af5410
};

