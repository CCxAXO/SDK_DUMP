// WidgetBlueprintGeneratedClass WBP_Panel_List_VisibleIntervention.WBP_Panel_List_VisibleIntervention_C
// Size: 0x4df (Inherited: 0x4de)
struct UWBP_Panel_List_VisibleIntervention_C : UWBP_Panel_List_Social_Padded_C {
	enum class EVisibleInterventionListCategory Category; // 0x4de(0x01)

	void HandleListItemsUpdated(struct TArray<struct UObject*>& NewListItems); // Function WBP_Panel_List_VisibleIntervention.WBP_Panel_List_VisibleIntervention_C.HandleListItemsUpdated // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitializeListEntryWidget(struct UWBP_Panel_ListEntry_Social_Base_C* ListEntryWidget, struct UObject* ListItemObject); // Function WBP_Panel_List_VisibleIntervention.WBP_Panel_List_VisibleIntervention_C.InitializeListEntryWidget // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void InitializeListViewModel(struct USocialListViewModelBase* InViewModel); // Function WBP_Panel_List_VisibleIntervention.WBP_Panel_List_VisibleIntervention_C.InitializeListViewModel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

