// WidgetBlueprintGeneratedClass WBP_Button_List.WBP_Button_List_C
// Size: 0x1ae8 (Inherited: 0x1ae0)
struct UWBP_Button_List_C : UAresCommonButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1ae0(0x08)

	struct FString GetListItemTelemetryTarget(); // Function WBP_Button_List.WBP_Button_List_C.GetListItemTelemetryTarget // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BP_OnEntryReleased(); // Function WBP_Button_List.WBP_Button_List_C.BP_OnEntryReleased // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function WBP_Button_List.WBP_Button_List_C.BP_OnItemExpansionChanged // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void BP_OnItemSelectionChanged(bool bIsSelected); // Function WBP_Button_List.WBP_Button_List_C.BP_OnItemSelectionChanged // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void OnListItemObjectSet(struct UObject* ListItemObject); // Function WBP_Button_List.WBP_Button_List_C.OnListItemObjectSet // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Button_List(int32_t EntryPoint); // Function WBP_Button_List.WBP_Button_List_C.ExecuteUbergraph_WBP_Button_List // (Final|UbergraphFunction) // @ game+0x1af5410
};

