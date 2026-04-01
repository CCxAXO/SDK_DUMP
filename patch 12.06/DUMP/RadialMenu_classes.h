// WidgetBlueprintGeneratedClass RadialMenu.RadialMenu_C
// Size: 0x488 (Inherited: 0x318)
struct URadialMenu_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UCanvasPanel* CanvasPanel_1; // 0x320(0x08)
	struct UImage* ClampedDot; // 0x328(0x08)
	struct UImage* CursorDot; // 0x330(0x08)
	struct UImage* Image; // 0x338(0x08)
	struct UImage* Image_158; // 0x340(0x08)
	struct UOverlay* InstructionsContainer; // 0x348(0x08)
	struct UTextBlock* intendedPingText; // 0x350(0x08)
	struct UOverlay* Items; // 0x358(0x08)
	struct UCanvasPanel* NeedleContainer; // 0x360(0x08)
	struct UImage* RotatingCursor; // 0x368(0x08)
	struct UImage* Wheel; // 0x370(0x08)
	double MouseAngle; // 0x378(0x08)
	double MouseDist; // 0x380(0x08)
	double RadiusSelectableInner; // 0x388(0x08)
	int32_t NumOptions; // 0x390(0x04)
	int32_t LastSelected; // 0x394(0x04)
	bool CenterMouseOnShow; // 0x398(0x01)
	char pad_399[0x7]; // 0x399(0x07)
	struct FVector2D MouseReferencePosition; // 0x3a0(0x10)
	bool ClampMouseCursor; // 0x3b0(0x01)
	char pad_3B1[0x7]; // 0x3b1(0x07)
	struct TMap<struct UTexture*, struct FText> iconToTextMap; // 0x3b8(0x50)
	struct FText basePingName; // 0x408(0x18)
	struct UMaterialInstanceDynamic* WheelMaterial; // 0x420(0x08)
	double RadiusSelectableOuter; // 0x428(0x08)
	struct UMaterialInstanceDynamic* CursorMaterial; // 0x430(0x08)
	struct TArray<enum class NonVerbalCommTypesEnum> VOLinesArray; // 0x438(0x10)
	bool IsPings; // 0x448(0x01)
	char pad_449[0x7]; // 0x449(0x07)
	struct FText BlankText; // 0x450(0x18)
	int32_t PointerIndex; // 0x468(0x04)
	char pad_46C[0x4]; // 0x46c(0x04)
	struct FVector2D PointerPosition; // 0x470(0x10)
	double CursorRadius; // 0x480(0x08)

	void SetInstructionsVisibility(bool IsVisible); // Function RadialMenu.RadialMenu_C.SetInstructionsVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnPaint(struct FPaintContext& Context); // Function RadialMenu.RadialMenu_C.OnPaint // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1b42740
	bool CheckIfGamepadStickReleased(struct FVector2D StickVectorWhenClosed); // Function RadialMenu.RadialMenu_C.CheckIfGamepadStickReleased // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	double CalculateAngleFromVector2D(struct FVector2D A); // Function RadialMenu.RadialMenu_C.CalculateAngleFromVector2D // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void OnShowMobile(struct FPointerEvent MouseEvent); // Function RadialMenu.RadialMenu_C.OnShowMobile // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdatePointerPositionFromMouseEvent(struct FPointerEvent MouseEvent, bool& Success); // Function RadialMenu.RadialMenu_C.UpdatePointerPositionFromMouseEvent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateHighlightedSegment(); // Function RadialMenu.RadialMenu_C.UpdateHighlightedSegment // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnShow(); // Function RadialMenu.RadialMenu_C.OnShow // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdateMouseParams(struct FGeometry MyGeometry); // Function RadialMenu.RadialMenu_C.UpdateMouseParams // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function RadialMenu.RadialMenu_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void CreateRadialPieces(struct TArray<struct UTexture*>& PingIcons, struct TArray<enum class NonVerbalCommTypesEnum>& VOLinesEnum, bool IsPings); // Function RadialMenu.RadialMenu_C.CreateRadialPieces // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function RadialMenu.RadialMenu_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Initialize(); // Function RadialMenu.RadialMenu_C.Initialize // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_RadialMenu(int32_t EntryPoint); // Function RadialMenu.RadialMenu_C.ExecuteUbergraph_RadialMenu // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

