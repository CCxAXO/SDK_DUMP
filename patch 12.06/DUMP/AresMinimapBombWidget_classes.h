// WidgetBlueprintGeneratedClass AresMinimapBombWidget.AresMinimapBombWidget_C
// Size: 0x640 (Inherited: 0x481)
struct UAresMinimapBombWidget_C : UAresMinimapWidget_C {
	char pad_481[0x7]; // 0x481(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x488(0x08)
	bool Temp; // 0x490(0x01)
	char pad_491[0xf]; // 0x491(0x0f)
	struct FSlateBrush OnMapBrush; // 0x4a0(0xd0)
	struct FSlateBrush EdgeBrush; // 0x570(0xd0)

	void Construct(); // Function AresMinimapBombWidget.AresMinimapBombWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function AresMinimapBombWidget.AresMinimapBombWidget_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void HandleEdgeStateChange(bool bIsEdgeWidget); // Function AresMinimapBombWidget.AresMinimapBombWidget_C.HandleEdgeStateChange // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_AresMinimapBombWidget(int32_t EntryPoint); // Function AresMinimapBombWidget.AresMinimapBombWidget_C.ExecuteUbergraph_AresMinimapBombWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

