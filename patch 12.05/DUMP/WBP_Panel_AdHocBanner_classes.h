// WidgetBlueprintGeneratedClass WBP_Panel_AdHocBanner.WBP_Panel_AdHocBanner_C
// Size: 0x1af8 (Inherited: 0x1ae0)
struct UWBP_Panel_AdHocBanner_C : UAresClickablePanel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1ae0(0x08)
	struct UVM_AdHoc_Banner_C* VM_V26_AdHoc_Banner; // 0x1ae8(0x08)
	struct UImage* hover; // 0x1af0(0x08)

	void InitBanner(); // Function WBP_Panel_AdHocBanner.WBP_Panel_AdHocBanner_C.InitBanner // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	enum class ESlateVisibility __75185a81-4032-2191-384c-c884254c3846_SourceToDest(); // Function WBP_Panel_AdHocBanner.WBP_Panel_AdHocBanner_C.__75185a81-4032-2191-384c-c884254c3846_SourceToDest // (Final|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1af5410
	void BP_OnHovered(); // Function WBP_Panel_AdHocBanner.WBP_Panel_AdHocBanner_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void BP_OnUnhovered(); // Function WBP_Panel_AdHocBanner.WBP_Panel_AdHocBanner_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void BP_OnClicked(); // Function WBP_Panel_AdHocBanner.WBP_Panel_AdHocBanner_C.BP_OnClicked // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Panel_AdHocBanner(int32_t EntryPoint); // Function WBP_Panel_AdHocBanner.WBP_Panel_AdHocBanner_C.ExecuteUbergraph_WBP_Panel_AdHocBanner // (Final|UbergraphFunction) // @ game+0x1af5410
};

