// WidgetBlueprintGeneratedClass WBP_List_InfiniteCarousel.WBP_List_InfiniteCarousel_C
// Size: 0x648 (Inherited: 0x630)
struct UWBP_List_InfiniteCarousel_C : UWBP_List_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x630(0x08)
	struct UAresCommonText* PageText; // 0x638(0x08)
	struct UVerticalBox* VerticalBox_1; // 0x640(0x08)

	void HandleEntryInitialized(struct UObject* EntryObject, struct UUserWidget* EntryWidget); // Function WBP_List_InfiniteCarousel.WBP_List_InfiniteCarousel_C.HandleEntryInitialized // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindEntryInitializedEvent(bool bBind); // Function WBP_List_InfiniteCarousel.WBP_List_InfiniteCarousel_C.BindEntryInitializedEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleItemChildClicked(struct UObject* Item); // Function WBP_List_InfiniteCarousel.WBP_List_InfiniteCarousel_C.HandleItemChildClicked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void HandleSelectedIndexChanged(int32_t NewValue); // Function WBP_List_InfiniteCarousel.WBP_List_InfiniteCarousel_C.HandleSelectedIndexChanged // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void BindItemUpdateEvent(bool bBind); // Function WBP_List_InfiniteCarousel.WBP_List_InfiniteCarousel_C.BindItemUpdateEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function WBP_List_InfiniteCarousel.WBP_List_InfiniteCarousel_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void Destruct(); // Function WBP_List_InfiniteCarousel.WBP_List_InfiniteCarousel_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_List_InfiniteCarousel(int32_t EntryPoint); // Function WBP_List_InfiniteCarousel.WBP_List_InfiniteCarousel_C.ExecuteUbergraph_WBP_List_InfiniteCarousel // (Final|UbergraphFunction) // @ game+0x1b42740
};

