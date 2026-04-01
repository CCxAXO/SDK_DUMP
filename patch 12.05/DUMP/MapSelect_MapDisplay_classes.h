// WidgetBlueprintGeneratedClass MapSelect_MapDisplay.MapSelect_MapDisplay_C
// Size: 0x340 (Inherited: 0x318)
struct UMapSelect_MapDisplay_C : UUserWidget {
	struct UImage* MapBanStrikethrough; // 0x318(0x08)
	struct UTextBlock* MapName; // 0x320(0x08)
	struct UOverlay* MapVisuals; // 0x328(0x08)
	struct UTransitionMegamap_C* Megamap; // 0x330(0x08)
	struct UMapUIData* MapUIData; // 0x338(0x08)

	void SetMap(struct UMapDataAsset* MapData, struct UMapUIData* MapUIData); // Function MapSelect_MapDisplay.MapSelect_MapDisplay_C.SetMap // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ShowSummary(); // Function MapSelect_MapDisplay.MapSelect_MapDisplay_C.ShowSummary // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

