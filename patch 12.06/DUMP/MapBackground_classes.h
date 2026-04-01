// WidgetBlueprintGeneratedClass MapBackground.MapBackground_C
// Size: 0x328 (Inherited: 0x318)
struct UMapBackground_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UImage* BackgroundImage; // 0x320(0x08)

	void OnMapLoaded(struct UMapHandle* Handle); // Function MapBackground.MapBackground_C.OnMapLoaded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SetMap(struct UMapDataAsset* Map); // Function MapBackground.MapBackground_C.SetMap // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function MapBackground.MapBackground_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_MapBackground(int32_t EntryPoint); // Function MapBackground.MapBackground_C.ExecuteUbergraph_MapBackground // (Final|UbergraphFunction) // @ game+0x1b42740
};

