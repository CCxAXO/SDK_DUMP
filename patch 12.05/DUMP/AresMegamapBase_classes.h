// WidgetBlueprintGeneratedClass AresMegamapBase.AresMegamapBase_C
// Size: 0x350 (Inherited: 0x318)
struct UAresMegamapBase_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UAresMinimapPanel* AresMinimapPanel_40; // 0x320(0x08)
	struct UImage* Map; // 0x328(0x08)
	int32_t VisibleLayers; // 0x330(0x04)
	char pad_334[0x4]; // 0x334(0x04)
	double Zoom; // 0x338(0x08)
	struct FMulticastInlineDelegate OnMegamapMouseButtonDown; // 0x340(0x10)

	void SetMapTexture(struct UTexture2D* New Texture); // Function AresMegamapBase.AresMegamapBase_C.SetMapTexture // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function AresMegamapBase.AresMegamapBase_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetLayerVisibility(enum class EAresMinimapLayer InLayer, bool bIsVisible); // Function AresMegamapBase.AresMegamapBase_C.SetLayerVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void IsLayerVisible(enum class EAresMinimapLayer InLayer, bool& bIsVisible); // Function AresMegamapBase.AresMegamapBase_C.IsLayerVisible // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function AresMegamapBase.AresMegamapBase_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function AresMegamapBase.AresMegamapBase_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnMinimapTextureUpdated(); // Function AresMegamapBase.AresMegamapBase_C.OnMinimapTextureUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_AresMegamapBase(int32_t EntryPoint); // Function AresMegamapBase.AresMegamapBase_C.ExecuteUbergraph_AresMegamapBase // (Final|UbergraphFunction) // @ game+0x1af5410
	void OnMegamapMouseButtonDown__DelegateSignature(struct FGeometry My Geometry, struct FPointerEvent Mouse Event); // Function AresMegamapBase.AresMegamapBase_C.OnMegamapMouseButtonDown__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

