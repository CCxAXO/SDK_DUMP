// WidgetBlueprintGeneratedClass RadialPiece.RadialPiece_C
// Size: 0x3e8 (Inherited: 0x318)
struct URadialPiece_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UImage* Icon; // 0x320(0x08)
	struct UCanvasPanel* IconContainer; // 0x328(0x08)
	struct UTextBlock* VOText; // 0x330(0x08)
	double StartAngle; // 0x338(0x08)
	double SectorSize; // 0x340(0x08)
	double MouseAngle; // 0x348(0x08)
	double MouseDist; // 0x350(0x08)
	double InnerRadius; // 0x358(0x08)
	double OuterRadius; // 0x360(0x08)
	struct UTexture* IconTexture; // 0x368(0x08)
	struct FText PingText; // 0x370(0x18)
	double IconSize; // 0x388(0x08)
	enum class NonVerbalCommTypesEnum VOLine; // 0x390(0x01)
	bool isIconBased; // 0x391(0x01)
	char pad_392[0x6]; // 0x392(0x06)
	struct TMap<struct UTexture*, struct FLinearColor> IconToColorMap; // 0x398(0x50)

	bool IsHighlighted(double InMouseAngle, double InMouseDist); // Function RadialPiece.RadialPiece_C.IsHighlighted // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function RadialPiece.RadialPiece_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function RadialPiece.RadialPiece_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_RadialPiece(int32_t EntryPoint); // Function RadialPiece.RadialPiece_C.ExecuteUbergraph_RadialPiece // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

