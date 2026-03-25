// WidgetBlueprintGeneratedClass WBP_Button_MapPool.WBP_Button_MapPool_C
// Size: 0x1af0 (Inherited: 0x1ae0)
struct UWBP_Button_MapPool_C : UAresCommonButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1ae0(0x08)
	struct UVerticalBox* LineDivider_MapPool; // 0x1ae8(0x08)

	void SetHasIncentive(bool bHasIncentive); // Function WBP_Button_MapPool.WBP_Button_MapPool_C.SetHasIncentive // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BP_OnHovered(); // Function WBP_Button_MapPool.WBP_Button_MapPool_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void BP_OnUnhovered(); // Function WBP_Button_MapPool.WBP_Button_MapPool_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void BP_OnTransitionUnHovered(); // Function WBP_Button_MapPool.WBP_Button_MapPool_C.BP_OnTransitionUnHovered // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void BP_OnTransitionHovered(); // Function WBP_Button_MapPool.WBP_Button_MapPool_C.BP_OnTransitionHovered // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Button_MapPool(int32_t EntryPoint); // Function WBP_Button_MapPool.WBP_Button_MapPool_C.ExecuteUbergraph_WBP_Button_MapPool // (Final|UbergraphFunction) // @ game+0x1af5410
};

