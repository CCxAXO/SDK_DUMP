// WidgetBlueprintGeneratedClass WBP_Panel_List_Social_Padded.WBP_Panel_List_Social_Padded_C
// Size: 0x4de (Inherited: 0x448)
struct UWBP_Panel_List_Social_Padded_C : UWBP_Panel_List_Social_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x448(0x08)
	struct USocialPaddedListPanel_C* SocialPaddedListPanel; // 0x450(0x08)
	struct UWBP_Panel_ListEntry_Social_Base_C* ListEntryClass; // 0x458(0x08)
	int32_t PreviewEntryCount; // 0x460(0x04)
	char pad_464[0x4]; // 0x464(0x04)
	struct TArray<struct UObject*> ViewListItemObjects; // 0x468(0x10)
	struct TMap<struct UObject*, struct UWBP_Panel_ListEntry_Social_Base_C*> ListItemToEntryMap; // 0x478(0x50)
	struct FMargin ListEntryPadding; // 0x4c8(0x10)
	int32_t PrimaryLineCount; // 0x4d8(0x04)
	enum class EAresTouchSwipeDirection SortDirection; // 0x4dc(0x01)
	bool bCollapseWithNoVisibleEntries; // 0x4dd(0x01)

	void UpdateListVisibility(); // Function WBP_Panel_List_Social_Padded.WBP_Panel_List_Social_Padded_C.UpdateListVisibility // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void TryRestoreFocus(int32_t LastFocusedIndex); // Function WBP_Panel_List_Social_Padded.WBP_Panel_List_Social_Padded_C.TryRestoreFocus // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ListEntryWidgetIsFocused(struct UWidget* ListEntryWidget, bool& Return Value); // Function WBP_Panel_List_Social_Padded.WBP_Panel_List_Social_Padded_C.ListEntryWidgetIsFocused // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void FilterListEntryWidgets(struct TArray<struct UObject*>& FilteredListItemObjects, int32_t& OutFilteredFocusedEntryIndex); // Function WBP_Panel_List_Social_Padded.WBP_Panel_List_Social_Padded_C.FilterListEntryWidgets // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ApplyDesignTimePreview(); // Function WBP_Panel_List_Social_Padded.WBP_Panel_List_Social_Padded_C.ApplyDesignTimePreview // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ViewMatchesSortOrder(struct TArray<struct UObject*>& SortedListItemObjects, bool& bResult); // Function WBP_Panel_List_Social_Padded.WBP_Panel_List_Social_Padded_C.ViewMatchesSortOrder // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1af5410
	void SortListEntryWidgets(struct TArray<struct UObject*>& SortedListItemObjects); // Function WBP_Panel_List_Social_Padded.WBP_Panel_List_Social_Padded_C.SortListEntryWidgets // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void RemoveListEntryWidget(struct UObject* ListItemObject, bool& bOutEntryWasFocused); // Function WBP_Panel_List_Social_Padded.WBP_Panel_List_Social_Padded_C.RemoveListEntryWidget // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void RemoveOldListEntryWidgets(struct TArray<struct UObject*>& NewListItemObjects, int32_t& OutRemovedFocusedEntryIndex); // Function WBP_Panel_List_Social_Padded.WBP_Panel_List_Social_Padded_C.RemoveOldListEntryWidgets // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitializeListEntryWidget(struct UWBP_Panel_ListEntry_Social_Base_C* ListEntryWidget, struct UObject* ListItemObject); // Function WBP_Panel_List_Social_Padded.WBP_Panel_List_Social_Padded_C.InitializeListEntryWidget // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	struct UWBP_Panel_ListEntry_Social_Base_C* CreateListEntryWidget(); // Function WBP_Panel_List_Social_Padded.WBP_Panel_List_Social_Padded_C.CreateListEntryWidget // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void AddListEntryWidget(struct UObject* ListItemObject); // Function WBP_Panel_List_Social_Padded.WBP_Panel_List_Social_Padded_C.AddListEntryWidget // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void AddNewListEntryWidgets(struct TArray<struct UObject*>& NewListItemObjects); // Function WBP_Panel_List_Social_Padded.WBP_Panel_List_Social_Padded_C.AddNewListEntryWidgets // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	struct UWidget* BP_GetDesiredFocusTarget(); // Function WBP_Panel_List_Social_Padded.WBP_Panel_List_Social_Padded_C.BP_GetDesiredFocusTarget // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1af5410
	void HandleListItemsUpdated(struct TArray<struct UObject*>& NewListItems); // Function WBP_Panel_List_Social_Padded.WBP_Panel_List_Social_Padded_C.HandleListItemsUpdated // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_List_Social_Padded.WBP_Panel_List_Social_Padded_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Panel_List_Social_Padded(int32_t EntryPoint); // Function WBP_Panel_List_Social_Padded.WBP_Panel_List_Social_Padded_C.ExecuteUbergraph_WBP_Panel_List_Social_Padded // (Final|UbergraphFunction) // @ game+0x1af5410
};

