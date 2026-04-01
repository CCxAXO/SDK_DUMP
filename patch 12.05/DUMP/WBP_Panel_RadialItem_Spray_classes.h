// WidgetBlueprintGeneratedClass WBP_Panel_RadialItem_Spray.WBP_Panel_RadialItem_Spray_C
// Size: 0x459 (Inherited: 0x418)
struct UWBP_Panel_RadialItem_Spray_C : URadialItemBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x418(0x08)
	struct UImage* CautionIcon; // 0x420(0x08)
	struct UOverlay* ContentOverlay; // 0x428(0x08)
	struct UImage* Icon; // 0x430(0x08)
	struct UCanvasPanel* itemContainer; // 0x438(0x08)
	struct UTexture* IconTexture; // 0x440(0x08)
	double IconSize; // 0x448(0x08)
	double CautionSize; // 0x450(0x08)
	bool DisplayContextIcon; // 0x458(0x01)

	void ToggleCaution(bool IsWarning); // Function WBP_Panel_RadialItem_Spray.WBP_Panel_RadialItem_Spray_C.ToggleCaution // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void CenterIcon(struct FGeometry& Geometry); // Function WBP_Panel_RadialItem_Spray.WBP_Panel_RadialItem_Spray_C.CenterIcon // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function WBP_Panel_RadialItem_Spray.WBP_Panel_RadialItem_Spray_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function WBP_Panel_RadialItem_Spray.WBP_Panel_RadialItem_Spray_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Panel_RadialItem_Spray(int32_t EntryPoint); // Function WBP_Panel_RadialItem_Spray.WBP_Panel_RadialItem_Spray_C.ExecuteUbergraph_WBP_Panel_RadialItem_Spray // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

