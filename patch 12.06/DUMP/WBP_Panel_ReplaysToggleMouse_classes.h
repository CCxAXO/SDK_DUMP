// WidgetBlueprintGeneratedClass WBP_Panel_ReplaysToggleMouse.WBP_Panel_ReplaysToggleMouse_C
// Size: 0x348 (Inherited: 0x318)
struct UWBP_Panel_ReplaysToggleMouse_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetAnimation* Anim_Outro; // 0x320(0x08)
	struct UWidgetAnimation* Anim_IntroSheen; // 0x328(0x08)
	struct UImage* IMG_InputBG; // 0x330(0x08)
	struct UImage* IMG_TextBG; // 0x338(0x08)
	struct UWBP_Panel_ActionBindingDIsplay_C* WBP_Panel_ActionBindingDIsplay; // 0x340(0x08)

	void DrawUIrelatedToInputWidth(); // Function WBP_Panel_ReplaysToggleMouse.WBP_Panel_ReplaysToggleMouse_C.DrawUIrelatedToInputWidth // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function WBP_Panel_ReplaysToggleMouse.WBP_Panel_ReplaysToggleMouse_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void CinematicModeUpdatedHandler(); // Function WBP_Panel_ReplaysToggleMouse.WBP_Panel_ReplaysToggleMouse_C.CinematicModeUpdatedHandler // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Panel_ReplaysToggleMouse(int32_t EntryPoint); // Function WBP_Panel_ReplaysToggleMouse.WBP_Panel_ReplaysToggleMouse_C.ExecuteUbergraph_WBP_Panel_ReplaysToggleMouse // (Final|UbergraphFunction) // @ game+0x1b42740
};

