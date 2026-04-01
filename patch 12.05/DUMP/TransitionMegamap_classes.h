// WidgetBlueprintGeneratedClass TransitionMegamap.TransitionMegamap_C
// Size: 0x378 (Inherited: 0x318)
struct UTransitionMegamap_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UOverlay* Container; // 0x320(0x08)
	struct TMap<struct UMapDataAsset*, struct TSoftClassPtr<UObject>> MapToMegamapWidgetClass; // 0x328(0x50)

	void Init(struct UMapDataAsset* Map); // Function TransitionMegamap.TransitionMegamap_C.Init // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function TransitionMegamap.TransitionMegamap_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_TransitionMegamap(int32_t EntryPoint); // Function TransitionMegamap.TransitionMegamap_C.ExecuteUbergraph_TransitionMegamap // (Final|UbergraphFunction) // @ game+0x1af5410
};

