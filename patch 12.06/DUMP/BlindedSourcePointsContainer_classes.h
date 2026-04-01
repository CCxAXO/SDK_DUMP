// WidgetBlueprintGeneratedClass BlindedSourcePointsContainer.BlindedSourcePointsContainer_C
// Size: 0x348 (Inherited: 0x330)
struct UBlindedSourcePointsContainer_C : UCoordinatedHUDElement {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x330(0x08)
	struct UCanvasPanel* SourcePointCanvas; // 0x338(0x08)
	struct UCoordinatedHUDModel* HUDElement; // 0x340(0x08)

	void SetHUDModel(struct UCoordinatedHUDModel* HUDModel); // Function BlindedSourcePointsContainer.BlindedSourcePointsContainer_C.SetHUDModel // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function BlindedSourcePointsContainer.BlindedSourcePointsContainer_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void OnShowBlindModeUpdated(); // Function BlindedSourcePointsContainer.BlindedSourcePointsContainer_C.OnShowBlindModeUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_BlindedSourcePointsContainer(int32_t EntryPoint); // Function BlindedSourcePointsContainer.BlindedSourcePointsContainer_C.ExecuteUbergraph_BlindedSourcePointsContainer // (Final|UbergraphFunction) // @ game+0x1b42740
};

