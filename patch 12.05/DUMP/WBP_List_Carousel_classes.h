// WidgetBlueprintGeneratedClass WBP_List_Carousel.WBP_List_Carousel_C
// Size: 0x65c (Inherited: 0x630)
struct UWBP_List_Carousel_C : UWBP_List_Base_C {
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

	void HandleContentItemChildClicked(struct UObject* Item); // Function WBP_List_Carousel.WBP_List_Carousel_C.HandleContentItemChildClicked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void HandleContentItemInitialized(struct UObject* EntryObject, struct UUserWidget* EntryWidget); // Function WBP_List_Carousel.WBP_List_Carousel_C.HandleContentItemInitialized // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void TMP_BindToContentItem(bool bBind); // Function WBP_List_Carousel.WBP_List_Carousel_C.TMP_BindToContentItem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdatePaginationControls(); // Function WBP_List_Carousel.WBP_List_Carousel_C.UpdatePaginationControls // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void BindToPaginationWidget(bool bShouldBind); // Function WBP_List_Carousel.WBP_List_Carousel_C.BindToPaginationWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Destruct(); // Function WBP_List_Carousel.WBP_List_Carousel_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void UpdatePageInfo(int32_t CurrentPage, int32_t TotalPages); // Function WBP_List_Carousel.WBP_List_Carousel_C.UpdatePageInfo // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function WBP_List_Carousel.WBP_List_Carousel_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function WBP_List_Carousel.WBP_List_Carousel_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_List_Carousel(int32_t EntryPoint); // Function WBP_List_Carousel.WBP_List_Carousel_C.ExecuteUbergraph_WBP_List_Carousel // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

