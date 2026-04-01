// WidgetBlueprintGeneratedClass MapPreview.MapPreview_C
// Size: 0x340 (Inherited: 0x318)
struct UMapPreview_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UImage* Image; // 0x320(0x08)
	struct UImage* Image_66; // 0x328(0x08)
	struct UImage* MapArt; // 0x330(0x08)
	struct UTextBlock* MapName; // 0x338(0x08)

	void OnMapLoaded(struct UMapHandle* Handle); // Function MapPreview.MapPreview_C.OnMapLoaded // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetMap(struct UMapDataAsset* Map); // Function MapPreview.MapPreview_C.SetMap // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function MapPreview.MapPreview_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_MapPreview(int32_t EntryPoint); // Function MapPreview.MapPreview_C.ExecuteUbergraph_MapPreview // (Final|UbergraphFunction) // @ game+0x1af5410
};

