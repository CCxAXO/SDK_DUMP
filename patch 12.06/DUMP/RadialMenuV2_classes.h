// WidgetBlueprintGeneratedClass RadialMenuV2.RadialMenuV2_C
// Size: 0x420 (Inherited: 0x318)
struct URadialMenuV2_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UCanvasPanel* CanvasPanel_1; // 0x320(0x08)
	struct UImage* ClampedDot; // 0x328(0x08)
	struct UImage* CursorDot; // 0x330(0x08)
	struct UImage* Image; // 0x338(0x08)
	struct UImage* Image_158; // 0x340(0x08)
	struct UOverlay* Items; // 0x348(0x08)
	struct UCanvasPanel* NeedleContainer; // 0x350(0x08)
	struct UImage* RotatingCursor; // 0x358(0x08)
	struct UHorizontalBox* SlotNameGradientBox; // 0x360(0x08)
	struct UTextBlock* SlotNameWidget; // 0x368(0x08)
	struct UImage* Wheel; // 0x370(0x08)
	struct URetainerBox* WheelRTT; // 0x378(0x08)
	double MouseAngle; // 0x380(0x08)
	double MouseDist; // 0x388(0x08)
	double RadiusSelectableInner; // 0x390(0x08)
	int32_t NumOptions; // 0x398(0x04)
	int32_t LastSelected; // 0x39c(0x04)
	int32_t LastSelectedWhenDisabled; // 0x3a0(0x04)
	bool CenterMouseOnShow; // 0x3a4(0x01)
	char pad_3A5[0x3]; // 0x3a5(0x03)
	struct FVector2D MouseReferencePosition; // 0x3a8(0x10)
	bool ClampMouseCursor; // 0x3b8(0x01)
	char pad_3B9[0x7]; // 0x3b9(0x07)
	struct FText DefaultSlotName; // 0x3c0(0x18)
	struct UMaterialInstanceDynamic* WheelMaterial; // 0x3d8(0x08)
	double RadiusSelectableOuter; // 0x3e0(0x08)
	struct UMaterialInstanceDynamic* CursorMaterial; // 0x3e8(0x08)
	int32_t PointerIndex; // 0x3f0(0x04)
	char pad_3F4[0x4]; // 0x3f4(0x04)
	struct FVector2D PointerPosition; // 0x3f8(0x10)
	double CursorRadius; // 0x408(0x08)
	struct TArray<None> SlotDisabledStateArray; // 0x410(0x10)

	void GetSlotEnabledDuringCurrentGamePhase(int32_t SlotIndex, bool& IsEnabled); // Function RadialMenuV2.RadialMenuV2_C.GetSlotEnabledDuringCurrentGamePhase // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void UpdateSlotName(); // Function RadialMenuV2.RadialMenuV2_C.UpdateSlotName // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void InitializeMaterial(); // Function RadialMenuV2.RadialMenuV2_C.InitializeMaterial // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnPaint(struct FPaintContext& Context); // Function RadialMenuV2.RadialMenuV2_C.OnPaint // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1b42740
	double CalculateAngleFromVector2D(struct FVector2D A); // Function RadialMenuV2.RadialMenuV2_C.CalculateAngleFromVector2D // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void Update Highlighted Segment(); // Function RadialMenuV2.RadialMenuV2_C.Update Highlighted Segment // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateMouseParams(struct FGeometry MyGeometry); // Function RadialMenuV2.RadialMenuV2_C.UpdateMouseParams // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdatePointerPositionFromMouseEvent(struct FPointerEvent MouseEvent, bool& Success); // Function RadialMenuV2.RadialMenuV2_C.UpdatePointerPositionFromMouseEvent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateSlotDisabledState(int32_t SlotIndex, bool Disabled); // Function RadialMenuV2.RadialMenuV2_C.UpdateSlotDisabledState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ResetLastSelected(); // Function RadialMenuV2.RadialMenuV2_C.ResetLastSelected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnShowMobile(struct FPointerEvent MouseEvent); // Function RadialMenuV2.RadialMenuV2_C.OnShowMobile // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnShow(); // Function RadialMenuV2.RadialMenuV2_C.OnShow // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function RadialMenuV2.RadialMenuV2_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function RadialMenuV2.RadialMenuV2_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void CreateRadialPieces(struct TArray<struct FRadialMenuSlotDescriptor>& SlotDescriptors); // Function RadialMenuV2.RadialMenuV2_C.CreateRadialPieces // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnInitialized(); // Function RadialMenuV2.RadialMenuV2_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void HandleGamePhaseChanged(enum class EAresGamePhase NewGamePhase, int32_t RoundNumberEnded); // Function RadialMenuV2.RadialMenuV2_C.HandleGamePhaseChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_RadialMenuV2(int32_t EntryPoint); // Function RadialMenuV2.RadialMenuV2_C.ExecuteUbergraph_RadialMenuV2 // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

