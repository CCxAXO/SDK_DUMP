// WidgetBlueprintGeneratedClass WBP_Panel_EOGItemDisplay.WBP_Panel_EOGItemDisplay_C
// Size: 0x3f0 (Inherited: 0x3e0)
struct UWBP_Panel_EOGItemDisplay_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UWBP_View_EOGItemDisplay_C* WBP_View_EOGItemDisplay; // 0x3e8(0x08)

	struct FString GetListItemTelemetryTarget(); // Function WBP_Panel_EOGItemDisplay.WBP_Panel_EOGItemDisplay_C.GetListItemTelemetryTarget // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BP_OnEntryReleased(); // Function WBP_Panel_EOGItemDisplay.WBP_Panel_EOGItemDisplay_C.BP_OnEntryReleased // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function WBP_Panel_EOGItemDisplay.WBP_Panel_EOGItemDisplay_C.BP_OnItemExpansionChanged // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void BP_OnItemSelectionChanged(bool bIsSelected); // Function WBP_Panel_EOGItemDisplay.WBP_Panel_EOGItemDisplay_C.BP_OnItemSelectionChanged // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void OnListItemObjectSet(struct UObject* ListItemObject); // Function WBP_Panel_EOGItemDisplay.WBP_Panel_EOGItemDisplay_C.OnListItemObjectSet // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Panel_EOGItemDisplay(int32_t EntryPoint); // Function WBP_Panel_EOGItemDisplay.WBP_Panel_EOGItemDisplay_C.ExecuteUbergraph_WBP_Panel_EOGItemDisplay // (Final|UbergraphFunction) // @ game+0x1af5410
};

