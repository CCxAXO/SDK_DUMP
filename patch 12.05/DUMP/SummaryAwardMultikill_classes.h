// WidgetBlueprintGeneratedClass SummaryAwardMultikill.SummaryAwardMultikill_C
// Size: 0x350 (Inherited: 0x318)
struct USummaryAwardMultikill_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UTextBlock* PlayerHighlighLabel1; // 0x320(0x08)
	struct UImage* PlayerHighlight_bg; // 0x328(0x08)
	struct UTextBlock* PlayerHighlightCount1; // 0x330(0x08)
	struct UImage* PlayerHighlightImage1; // 0x338(0x08)
	struct UVerticalBox* VerticalBox_4; // 0x340(0x08)
	int32_t MultkillLabel; // 0x348(0x04)
	int32_t Count; // 0x34c(0x04)

	void Get Icon Texture for Multikill(struct UTexture2D*& IconTexture); // Function SummaryAwardMultikill.SummaryAwardMultikill_C.Get Icon Texture for Multikill // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void Construct(); // Function SummaryAwardMultikill.SummaryAwardMultikill_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_SummaryAwardMultikill(int32_t EntryPoint); // Function SummaryAwardMultikill.SummaryAwardMultikill_C.ExecuteUbergraph_SummaryAwardMultikill // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

