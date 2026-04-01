// WidgetBlueprintGeneratedClass WBP_Panel_ItemCategoryContainer.WBP_Panel_ItemCategoryContainer_C
// Size: 0x354 (Inherited: 0x320)
struct UWBP_Panel_ItemCategoryContainer_C : UShopItemCategoryContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct UVerticalBox* itemContainer; // 0x328(0x08)
	struct UWBP_InGameTiles_C* WBP_InGameTiles; // 0x330(0x08)
	struct FText categoryNameText; // 0x338(0x18)
	int32_t NumPreviewItems; // 0x350(0x04)

	void setContainerName(); // Function WBP_Panel_ItemCategoryContainer.WBP_Panel_ItemCategoryContainer_C.setContainerName // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function WBP_Panel_ItemCategoryContainer.WBP_Panel_ItemCategoryContainer_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_ItemCategoryContainer.WBP_Panel_ItemCategoryContainer_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ClearChildren(); // Function WBP_Panel_ItemCategoryContainer.WBP_Panel_ItemCategoryContainer_C.ClearChildren // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void AddChild(struct UUserWidget* content, bool bForceFillSize); // Function WBP_Panel_ItemCategoryContainer.WBP_Panel_ItemCategoryContainer_C.AddChild // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Panel_ItemCategoryContainer(int32_t EntryPoint); // Function WBP_Panel_ItemCategoryContainer.WBP_Panel_ItemCategoryContainer_C.ExecuteUbergraph_WBP_Panel_ItemCategoryContainer // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

