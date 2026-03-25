// WidgetBlueprintGeneratedClass OneForAll_PregameCharacterSelectV2.OneForAll_PregameCharacterSelectV2_C
// Size: 0x360 (Inherited: 0x320)
struct UOneForAll_PregameCharacterSelectV2_C : UCharacterSelectScreen {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UWidgetAnimation* Intro; // 0x328(0x08)
	struct UWidgetAnimation* TeamshotTransition; // 0x330(0x08)
	struct UEditorPregameController_C* EditorPregameController; // 0x338(0x08)
	struct UObserverCharacterSelect_C* ObserverCharacterSelect; // 0x340(0x08)
	struct UWidgetSwitcher* PlayerTypeSwitcher; // 0x348(0x08)
	struct UOneForAll_PregamePlayerUI_C* PregamePlayerUI; // 0x350(0x08)
	struct UPregameViewController* ViewController; // 0x358(0x08)

	void UpdateIsSpectator(); // Function OneForAll_PregameCharacterSelectV2.OneForAll_PregameCharacterSelectV2_C.UpdateIsSpectator // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function OneForAll_PregameCharacterSelectV2.OneForAll_PregameCharacterSelectV2_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnSpectatorChanged(bool NewValue); // Function OneForAll_PregameCharacterSelectV2.OneForAll_PregameCharacterSelectV2_C.OnSpectatorChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void LotterySelectComplete(); // Function OneForAll_PregameCharacterSelectV2.OneForAll_PregameCharacterSelectV2_C.LotterySelectComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_OneForAll_PregameCharacterSelectV2(int32_t EntryPoint); // Function OneForAll_PregameCharacterSelectV2.OneForAll_PregameCharacterSelectV2_C.ExecuteUbergraph_OneForAll_PregameCharacterSelectV2 // (Final|UbergraphFunction) // @ game+0x1af5410
};

