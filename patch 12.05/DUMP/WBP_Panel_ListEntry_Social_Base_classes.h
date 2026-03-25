// WidgetBlueprintGeneratedClass WBP_Panel_ListEntry_Social_Base.WBP_Panel_ListEntry_Social_Base_C
// Size: 0x3e8 (Inherited: 0x3e0)
struct UWBP_Panel_ListEntry_Social_Base_C : UAresCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)

	struct FString GetListItemTelemetryTarget(); // Function WBP_Panel_ListEntry_Social_Base.WBP_Panel_ListEntry_Social_Base_C.GetListItemTelemetryTarget // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitializeListEntry(struct UObject* InListItemObject); // Function WBP_Panel_ListEntry_Social_Base.WBP_Panel_ListEntry_Social_Base_C.InitializeListEntry // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BP_OnEntryReleased(); // Function WBP_Panel_ListEntry_Social_Base.WBP_Panel_ListEntry_Social_Base_C.BP_OnEntryReleased // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function WBP_Panel_ListEntry_Social_Base.WBP_Panel_ListEntry_Social_Base_C.BP_OnItemExpansionChanged // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void BP_OnItemSelectionChanged(bool bIsSelected); // Function WBP_Panel_ListEntry_Social_Base.WBP_Panel_ListEntry_Social_Base_C.BP_OnItemSelectionChanged // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void OnListItemObjectSet(struct UObject* ListItemObject); // Function WBP_Panel_ListEntry_Social_Base.WBP_Panel_ListEntry_Social_Base_C.OnListItemObjectSet // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Panel_ListEntry_Social_Base(int32_t EntryPoint); // Function WBP_Panel_ListEntry_Social_Base.WBP_Panel_ListEntry_Social_Base_C.ExecuteUbergraph_WBP_Panel_ListEntry_Social_Base // (Final|UbergraphFunction) // @ game+0x1af5410
};

