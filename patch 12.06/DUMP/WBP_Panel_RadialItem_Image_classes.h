// WidgetBlueprintGeneratedClass WBP_Panel_RadialItem_Image.WBP_Panel_RadialItem_Image_C
// Size: 0x440 (Inherited: 0x418)
struct UWBP_Panel_RadialItem_Image_C : URadialItemBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x418(0x08)
	struct UImage* Icon; // 0x420(0x08)
	struct UCanvasPanel* IconContainer; // 0x428(0x08)
	struct UTexture* IconTexture; // 0x430(0x08)
	double IconSize; // 0x438(0x08)

	void CenterIcon(struct FGeometry& Geometry); // Function WBP_Panel_RadialItem_Image.WBP_Panel_RadialItem_Image_C.CenterIcon // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function WBP_Panel_RadialItem_Image.WBP_Panel_RadialItem_Image_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_Panel_RadialItem_Image.WBP_Panel_RadialItem_Image_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Panel_RadialItem_Image(int32_t EntryPoint); // Function WBP_Panel_RadialItem_Image.WBP_Panel_RadialItem_Image_C.ExecuteUbergraph_WBP_Panel_RadialItem_Image // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

