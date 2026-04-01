// WidgetBlueprintGeneratedClass WBP_Button_SandboxListEntry.WBP_Button_SandboxListEntry_C
// Size: 0x1aec (Inherited: 0x1ae0)
struct UWBP_Button_SandboxListEntry_C : UAresCommonButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1ae0(0x08)
	int32_t Index; // 0x1ae8(0x04)

	struct FString GetListItemTelemetryTarget(); // Function WBP_Button_SandboxListEntry.WBP_Button_SandboxListEntry_C.GetListItemTelemetryTarget // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BP_OnEntryReleased(); // Function WBP_Button_SandboxListEntry.WBP_Button_SandboxListEntry_C.BP_OnEntryReleased // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function WBP_Button_SandboxListEntry.WBP_Button_SandboxListEntry_C.BP_OnItemExpansionChanged // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void BP_OnItemSelectionChanged(bool bIsSelected); // Function WBP_Button_SandboxListEntry.WBP_Button_SandboxListEntry_C.BP_OnItemSelectionChanged // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function WBP_Button_SandboxListEntry.WBP_Button_SandboxListEntry_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnListItemObjectSet(struct UObject* ListItemObject); // Function WBP_Button_SandboxListEntry.WBP_Button_SandboxListEntry_C.OnListItemObjectSet // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void BP_OnClicked(); // Function WBP_Button_SandboxListEntry.WBP_Button_SandboxListEntry_C.BP_OnClicked // (Event|Protected|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Button_SandboxListEntry(int32_t EntryPoint); // Function WBP_Button_SandboxListEntry.WBP_Button_SandboxListEntry_C.ExecuteUbergraph_WBP_Button_SandboxListEntry // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

