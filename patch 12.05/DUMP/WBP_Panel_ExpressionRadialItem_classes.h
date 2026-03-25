// WidgetBlueprintGeneratedClass WBP_Panel_ExpressionRadialItem.WBP_Panel_ExpressionRadialItem_C
// Size: 0x461 (Inherited: 0x418)
struct UWBP_Panel_ExpressionRadialItem_C : URadialItemBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x418(0x08)
	struct UCanvasPanel* ContextContainer; // 0x420(0x08)
	struct UTextBlock* ContextualText; // 0x428(0x08)
	struct UImage* Icon; // 0x430(0x08)
	struct UCanvasPanel* IconContainer; // 0x438(0x08)
	bool bIsContextual; // 0x440(0x01)
	char pad_441[0x7]; // 0x441(0x07)
	struct UTexture* IconTexture; // 0x448(0x08)
	enum class ERadialMenuContextIndicator ContextIndicator; // 0x450(0x01)
	char pad_451[0x7]; // 0x451(0x07)
	double Icon Size; // 0x458(0x08)
	enum class EAresGamePhase CurrentGamePhase; // 0x460(0x01)

	void SetItemEnabledContextual(bool Enabled); // Function WBP_Panel_ExpressionRadialItem.WBP_Panel_ExpressionRadialItem_C.SetItemEnabledContextual // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetItemEnabled(bool Enable, bool EnableContextualText); // Function WBP_Panel_ExpressionRadialItem.WBP_Panel_ExpressionRadialItem_C.SetItemEnabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void CenterIcon(struct FGeometry& Geometry); // Function WBP_Panel_ExpressionRadialItem.WBP_Panel_ExpressionRadialItem_C.CenterIcon // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_ExpressionRadialItem.WBP_Panel_ExpressionRadialItem_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_Panel_ExpressionRadialItem.WBP_Panel_ExpressionRadialItem_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function WBP_Panel_ExpressionRadialItem.WBP_Panel_ExpressionRadialItem_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnInitialized(); // Function WBP_Panel_ExpressionRadialItem.WBP_Panel_ExpressionRadialItem_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Panel_ExpressionRadialItem(int32_t EntryPoint); // Function WBP_Panel_ExpressionRadialItem.WBP_Panel_ExpressionRadialItem_C.ExecuteUbergraph_WBP_Panel_ExpressionRadialItem // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

