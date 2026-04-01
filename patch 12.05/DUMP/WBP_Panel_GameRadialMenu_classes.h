// WidgetBlueprintGeneratedClass WBP_Panel_GameRadialMenu.WBP_Panel_GameRadialMenu_C
// Size: 0x4fa (Inherited: 0x420)
struct UWBP_Panel_GameRadialMenu_C : URadialMenuBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x420(0x08)
	struct UImage* ClampedDot; // 0x428(0x08)
	struct UImage* CursorDot; // 0x430(0x08)
	struct UOverlay* InstructionsContainer; // 0x438(0x08)
	struct UOverlay* Items; // 0x440(0x08)
	struct UCanvasPanel* NeedleContainer; // 0x448(0x08)
	struct UImage* RotatingCursor; // 0x450(0x08)
	struct UImage* Wheel; // 0x458(0x08)
	double SelectionPositionAngle; // 0x460(0x08)
	double SelectionMagnitude; // 0x468(0x08)
	double RadiusSelectableInner; // 0x470(0x08)
	int32_t NumOptions; // 0x478(0x04)
	bool CenterMouseOnShow; // 0x47c(0x01)
	char pad_47D[0x3]; // 0x47d(0x03)
	struct FVector2D MouseReferencePosition; // 0x480(0x10)
	bool ClampMouseCursor; // 0x490(0x01)
	char pad_491[0x7]; // 0x491(0x07)
	struct UMaterialInstanceDynamic* WheelMaterial; // 0x498(0x08)
	double RadiusSelectableOuter; // 0x4a0(0x08)
	struct UMaterialInstanceDynamic* CursorMaterial; // 0x4a8(0x08)
	int32_t PointerIndex; // 0x4b0(0x04)
	char pad_4B4[0x4]; // 0x4b4(0x04)
	struct FVector2D PointerPosition; // 0x4b8(0x10)
	double CursorRadius; // 0x4c8(0x08)
	struct FMulticastInlineDelegate OnHighlightedSegmentChanged; // 0x4d0(0x10)
	struct UUserWidget* InstructionsWidgetClass; // 0x4e0(0x08)
	struct UUserWidget* InstructionsWidget; // 0x4e8(0x08)
	struct UMaterial* UserDefinedWheelMaterial; // 0x4f0(0x08)
	bool IsMenuOpen; // 0x4f8(0x01)
	bool RequiresOpenToUpdate; // 0x4f9(0x01)

	void CreateRadialItemsFromImages(struct TArray<struct UTexture*>& Textures); // Function WBP_Panel_GameRadialMenu.WBP_Panel_GameRadialMenu_C.CreateRadialItemsFromImages // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void CreateRadialItemsFromText(struct TArray<struct FText>& Text); // Function WBP_Panel_GameRadialMenu.WBP_Panel_GameRadialMenu_C.CreateRadialItemsFromText // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	int32_t UpdateSelectedItem(float Angle, float Magnitude); // Function WBP_Panel_GameRadialMenu.WBP_Panel_GameRadialMenu_C.UpdateSelectedItem // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetInstructionsVisibility(bool IsVisible); // Function WBP_Panel_GameRadialMenu.WBP_Panel_GameRadialMenu_C.SetInstructionsVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	bool CheckIfGamepadStickReleased(struct FVector2D StickVectorWhenClosed); // Function WBP_Panel_GameRadialMenu.WBP_Panel_GameRadialMenu_C.CheckIfGamepadStickReleased // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	double CalculateAngleFromVector2D(struct FVector2D A); // Function WBP_Panel_GameRadialMenu.WBP_Panel_GameRadialMenu_C.CalculateAngleFromVector2D // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void Update Selection Params(struct FGeometry MyGeometry); // Function WBP_Panel_GameRadialMenu.WBP_Panel_GameRadialMenu_C.Update Selection Params // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_Panel_GameRadialMenu.WBP_Panel_GameRadialMenu_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_GameRadialMenu.WBP_Panel_GameRadialMenu_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Initialize(); // Function WBP_Panel_GameRadialMenu.WBP_Panel_GameRadialMenu_C.Initialize // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void CreateInstructionsWidget(); // Function WBP_Panel_GameRadialMenu.WBP_Panel_GameRadialMenu_C.CreateInstructionsWidget // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void CloseRadialMenu(); // Function WBP_Panel_GameRadialMenu.WBP_Panel_GameRadialMenu_C.CloseRadialMenu // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OpenRadialMenu(); // Function WBP_Panel_GameRadialMenu.WBP_Panel_GameRadialMenu_C.OpenRadialMenu // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Panel_GameRadialMenu(int32_t EntryPoint); // Function WBP_Panel_GameRadialMenu.WBP_Panel_GameRadialMenu_C.ExecuteUbergraph_WBP_Panel_GameRadialMenu // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
	void OnHighlightedSegmentChanged__DelegateSignature(int32_t SelectedOption, enum class NonVerbalCommTypesEnum SelectedComm); // Function WBP_Panel_GameRadialMenu.WBP_Panel_GameRadialMenu_C.OnHighlightedSegmentChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

