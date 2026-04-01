// WidgetBlueprintGeneratedClass WBP_List_Grid.WBP_List_Grid_C
// Size: 0x65c (Inherited: 0x630)
struct UWBP_List_Grid_C : UWBP_List_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x630(0x08)
	struct UWBP_View_PaginationDisplay_C* WBP_View_PaginationDisplay; // 0x638(0x08)
	bool bUsePagination; // 0x640(0x01)
	char pad_641[0x7]; // 0x641(0x07)
	double PaginationWidthOverride; // 0x648(0x08)
	double PaginationHeightOverride; // 0x650(0x08)
	enum class EHorizontalAlignment PaginationHorizontalAlignment; // 0x658(0x01)
	bool bDisplayPaginationFirstAndLastButtons; // 0x659(0x01)
	bool bSyncListModeWithInputType; // 0x65a(0x01)
	bool bDisplayPageText; // 0x65b(0x01)

	void UpdateListModeByInputType(enum class ECommonInputType InputPin); // Function WBP_List_Grid.WBP_List_Grid_C.UpdateListModeByInputType // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void UpdatePaginationControls(); // Function WBP_List_Grid.WBP_List_Grid_C.UpdatePaginationControls // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleCommonInputChanged(enum class ECommonInputType NewInputType); // Function WBP_List_Grid.WBP_List_Grid_C.HandleCommonInputChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindToCommonInput(bool bShouldBind); // Function WBP_List_Grid.WBP_List_Grid_C.BindToCommonInput // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindToPaginationWidget(bool bShouldBind); // Function WBP_List_Grid.WBP_List_Grid_C.BindToPaginationWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Destruct(); // Function WBP_List_Grid.WBP_List_Grid_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void UpdatePageInfo(int32_t CurrentPage, int32_t TotalPages); // Function WBP_List_Grid.WBP_List_Grid_C.UpdatePageInfo // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WBP_List_Grid.WBP_List_Grid_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void K2_BindToViewModel(); // Function WBP_List_Grid.WBP_List_Grid_C.K2_BindToViewModel // (Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_List_Grid(int32_t EntryPoint); // Function WBP_List_Grid.WBP_List_Grid_C.ExecuteUbergraph_WBP_List_Grid // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

