// WidgetBlueprintGeneratedClass GameModeIcon.GameModeIcon_C
// Size: 0x340 (Inherited: 0x318)
struct UGameModeIcon_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UMenuAnchor* MenuAnchor_28; // 0x320(0x08)
	struct UImage* ModeIcon; // 0x328(0x08)
	struct UOverlay* Overlay_1; // 0x330(0x08)
	struct UGameModeUIData* ModeUIData; // 0x338(0x08)

	struct UWidget* On_MenuAnchor_GetMenuContent_1(); // Function GameModeIcon.GameModeIcon_C.On_MenuAnchor_GetMenuContent_1 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnGameModeLoaded(struct UGameModeHandle* GameModeHandle); // Function GameModeIcon.GameModeIcon_C.OnGameModeLoaded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetGameMode(struct UGameModeDataAsset* GameMode); // Function GameModeIcon.GameModeIcon_C.SetGameMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function GameModeIcon.GameModeIcon_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1af5410
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function GameModeIcon.GameModeIcon_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_GameModeIcon(int32_t EntryPoint); // Function GameModeIcon.GameModeIcon_C.ExecuteUbergraph_GameModeIcon // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

