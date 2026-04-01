// WidgetBlueprintGeneratedClass WBP_Decoration_ModalTitleLines.WBP_Decoration_ModalTitleLines_C
// Size: 0x350 (Inherited: 0x318)
struct UWBP_Decoration_ModalTitleLines_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UHorizontalBox* HB_LineWrap; // 0x320(0x08)
	struct UImage* IMG_LineEnd; // 0x328(0x08)
	struct UImage* IMG_LineLong; // 0x330(0x08)
	bool LeftEndLine; // 0x338(0x01)
	char pad_339[0x3]; // 0x339(0x03)
	struct FSlateColor LineColor; // 0x33c(0x14)

	void StyleLine(struct FSlateColor ColorToUse); // Function WBP_Decoration_ModalTitleLines.WBP_Decoration_ModalTitleLines_C.StyleLine // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function WBP_Decoration_ModalTitleLines.WBP_Decoration_ModalTitleLines_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function WBP_Decoration_ModalTitleLines.WBP_Decoration_ModalTitleLines_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Decoration_ModalTitleLines(int32_t EntryPoint); // Function WBP_Decoration_ModalTitleLines.WBP_Decoration_ModalTitleLines_C.ExecuteUbergraph_WBP_Decoration_ModalTitleLines // (Final|UbergraphFunction) // @ game+0x1af5410
};

