// WidgetBlueprintGeneratedClass SimpleBorder.SimpleBorder_C
// Size: 0x368 (Inherited: 0x318)
struct USimpleBorder_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UNamedSlot* content; // 0x320(0x08)
	struct UCanvasPanel* SelectionBorder; // 0x328(0x08)
	struct FSlateColor BorderColor; // 0x330(0x14)
	char pad_344[0x4]; // 0x344(0x04)
	double BorderOffset; // 0x348(0x08)
	double ContentOffset; // 0x350(0x08)
	bool IsHidden; // 0x358(0x01)
	char pad_359[0x7]; // 0x359(0x07)
	double MarginSize; // 0x360(0x08)

	void SetMarginSize(double Size); // Function SimpleBorder.SimpleBorder_C.SetMarginSize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetIsHidden(bool IsHidden); // Function SimpleBorder.SimpleBorder_C.SetIsHidden // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetContentOffset(double Offset); // Function SimpleBorder.SimpleBorder_C.SetContentOffset // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetBorderOffset(double Offset); // Function SimpleBorder.SimpleBorder_C.SetBorderOffset // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetBorderColor(struct FSlateColor Color); // Function SimpleBorder.SimpleBorder_C.SetBorderColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void RedrawContentUI(); // Function SimpleBorder.SimpleBorder_C.RedrawContentUI // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void RedrawBorderVisiblityUI(); // Function SimpleBorder.SimpleBorder_C.RedrawBorderVisiblityUI // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void RedrawBorderUI(); // Function SimpleBorder.SimpleBorder_C.RedrawBorderUI // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void RedrawBorderColorUI(); // Function SimpleBorder.SimpleBorder_C.RedrawBorderColorUI // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Redraw(); // Function SimpleBorder.SimpleBorder_C.Redraw // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function SimpleBorder.SimpleBorder_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_SimpleBorder(int32_t EntryPoint); // Function SimpleBorder.SimpleBorder_C.ExecuteUbergraph_SimpleBorder // (Final|UbergraphFunction) // @ game+0x1af5410
};

