// WidgetBlueprintGeneratedClass WBP_Panel_InputShortcut.WBP_Panel_InputShortcut_C
// Size: 0x348 (Inherited: 0x320)
struct UWBP_Panel_InputShortcut_C : UVisibilityOverrideableUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UWidgetAnimation* Anim_IntroSheen; // 0x328(0x08)
	struct UImage* IMG_InputBG; // 0x330(0x08)
	struct UImage* IMG_TextBG; // 0x338(0x08)
	struct UWBP_Panel_ActionBindingDIsplay_C* WBP_Panel_ActionBindingDIsplay; // 0x340(0x08)

	void DrawUIrelatedToInputWidth(); // Function WBP_Panel_InputShortcut.WBP_Panel_InputShortcut_C.DrawUIrelatedToInputWidth // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function WBP_Panel_InputShortcut.WBP_Panel_InputShortcut_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void CinematicModeUpdatedHandler(); // Function WBP_Panel_InputShortcut.WBP_Panel_InputShortcut_C.CinematicModeUpdatedHandler // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Panel_InputShortcut(int32_t EntryPoint); // Function WBP_Panel_InputShortcut.WBP_Panel_InputShortcut_C.ExecuteUbergraph_WBP_Panel_InputShortcut // (Final|UbergraphFunction) // @ game+0x1af5410
};

