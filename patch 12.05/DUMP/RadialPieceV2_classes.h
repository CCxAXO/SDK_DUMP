// WidgetBlueprintGeneratedClass RadialPieceV2.RadialPieceV2_C
// Size: 0x3f9 (Inherited: 0x318)
struct URadialPieceV2_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UCanvasPanel* CanvasPanel_1; // 0x320(0x08)
	struct UCanvasPanel* ContextualContainer; // 0x328(0x08)
	struct UTextBlock* ContextualTextWidget; // 0x330(0x08)
	struct UCanvasPanel* ExhibitContainer; // 0x338(0x08)
	struct UImage* IconWidget; // 0x340(0x08)
	struct UTextBlock* TextWidget; // 0x348(0x08)
	double StartAngle; // 0x350(0x08)
	double SectorSize; // 0x358(0x08)
	double InnerRadius; // 0x360(0x08)
	double OuterRadius; // 0x368(0x08)
	struct FRadialMenuSlotDescriptor SlotDescriptor; // 0x370(0x68)
	double InIconSize; // 0x3d8(0x08)
	struct FText InSlotName; // 0x3e0(0x18)
	bool IsEnabledInGamePhase; // 0x3f8(0x01)

	bool Get Is Contextual Slot(); // Function RadialPieceV2.RadialPieceV2_C.Get Is Contextual Slot // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void Set Contextual Slot Enabled(bool InRound); // Function RadialPieceV2.RadialPieceV2_C.Set Contextual Slot Enabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void IsEnabledDuringCurrentGamePhase(bool& IsEnabled); // Function RadialPieceV2.RadialPieceV2_C.IsEnabledDuringCurrentGamePhase // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ShowTextContent(struct FRadialMenuTextSlotDisplay TextDescriptor); // Function RadialPieceV2.RadialPieceV2_C.ShowTextContent // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ShowIconContent(struct FRadialMenuIconSlotDisplay IconDescriptor, char ContextIndicator); // Function RadialPieceV2.RadialPieceV2_C.ShowIconContent // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	bool IsHighlighted(double InMouseAngle, double InMouseDist); // Function RadialPieceV2.RadialPieceV2_C.IsHighlighted // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function RadialPieceV2.RadialPieceV2_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function RadialPieceV2.RadialPieceV2_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_RadialPieceV2(int32_t EntryPoint); // Function RadialPieceV2.RadialPieceV2_C.ExecuteUbergraph_RadialPieceV2 // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

