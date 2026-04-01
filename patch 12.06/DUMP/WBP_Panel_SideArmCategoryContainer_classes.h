// WidgetBlueprintGeneratedClass WBP_Panel_SideArmCategoryContainer.WBP_Panel_SideArmCategoryContainer_C
// Size: 0x364 (Inherited: 0x318)
struct UWBP_Panel_SideArmCategoryContainer_C : UShopSidearmsCategoryContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UInGameStore_Titles_C* InGameStore_Titles; // 0x320(0x08)
	struct UVerticalBox* itemContainer; // 0x328(0x08)
	struct UWBP_InGameTiles_C* WBP_InGameTiles; // 0x330(0x08)
	struct FText categoryNameText; // 0x338(0x18)
	struct FName Category; // 0x350(0x0c)
	int32_t parentWeaponSlot; // 0x35c(0x04)
	int32_t NumPreviewItems; // 0x360(0x04)

	void ClearChildren(); // Function WBP_Panel_SideArmCategoryContainer.WBP_Panel_SideArmCategoryContainer_C.ClearChildren // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_SideArmCategoryContainer.WBP_Panel_SideArmCategoryContainer_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void AddChild(struct UUserWidget* content, bool bForceFillSize); // Function WBP_Panel_SideArmCategoryContainer.WBP_Panel_SideArmCategoryContainer_C.AddChild // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_Panel_SideArmCategoryContainer(int32_t EntryPoint); // Function WBP_Panel_SideArmCategoryContainer.WBP_Panel_SideArmCategoryContainer_C.ExecuteUbergraph_WBP_Panel_SideArmCategoryContainer // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

