// WidgetBlueprintGeneratedClass WBP_Panel_Header.WBP_Panel_Header_C
// Size: 0x3f0 (Inherited: 0x3e0)
struct UWBP_Panel_Header_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UAresCommonText* TitleText; // 0x3e8(0x08)

	struct FString GetListItemTelemetryTarget(); // Function WBP_Panel_Header.WBP_Panel_Header_C.GetListItemTelemetryTarget // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BP_OnEntryReleased(); // Function WBP_Panel_Header.WBP_Panel_Header_C.BP_OnEntryReleased // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function WBP_Panel_Header.WBP_Panel_Header_C.BP_OnItemExpansionChanged // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void BP_OnItemSelectionChanged(bool bIsSelected); // Function WBP_Panel_Header.WBP_Panel_Header_C.BP_OnItemSelectionChanged // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void OnListItemObjectSet(struct UObject* ListItemObject); // Function WBP_Panel_Header.WBP_Panel_Header_C.OnListItemObjectSet // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Panel_Header(int32_t EntryPoint); // Function WBP_Panel_Header.WBP_Panel_Header_C.ExecuteUbergraph_WBP_Panel_Header // (Final|UbergraphFunction) // @ game+0x1af5410
};

