// WidgetBlueprintGeneratedClass WBP_Panel_RadialItem_Text_Desktop.WBP_Panel_RadialItem_Text_Desktop_C
// Size: 0x450 (Inherited: 0x418)
struct UWBP_Panel_RadialItem_Text_Desktop_C : URadialItemBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x418(0x08)
	struct UCanvasPanel* Container; // 0x420(0x08)
	struct UTextBlock* Text; // 0x428(0x08)
	double IconSize; // 0x430(0x08)
	struct FText DisplayText; // 0x438(0x18)

	void Center Icon(struct FGeometry& Geometry); // Function WBP_Panel_RadialItem_Text_Desktop.WBP_Panel_RadialItem_Text_Desktop_C.Center Icon // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function WBP_Panel_RadialItem_Text_Desktop.WBP_Panel_RadialItem_Text_Desktop_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_Panel_RadialItem_Text_Desktop.WBP_Panel_RadialItem_Text_Desktop_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Panel_RadialItem_Text_Desktop(int32_t EntryPoint); // Function WBP_Panel_RadialItem_Text_Desktop.WBP_Panel_RadialItem_Text_Desktop_C.ExecuteUbergraph_WBP_Panel_RadialItem_Text_Desktop // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

