// WidgetBlueprintGeneratedClass WBP_Panel_ArmorCategoryContainer.WBP_Panel_ArmorCategoryContainer_C
// Size: 0x35c (Inherited: 0x318)
struct UWBP_Panel_ArmorCategoryContainer_C : UShopArmorCategoryContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UVerticalBox* itemContainer; // 0x320(0x08)
	struct UWBP_InGameTiles_C* WBP_InGameTiles; // 0x328(0x08)
	struct FText categoryNameText; // 0x330(0x18)
	struct FName Category; // 0x348(0x0c)
	int32_t parentWeaponSlot; // 0x354(0x04)
	int32_t NumPreviewItems; // 0x358(0x04)

	void setContainerName(); // Function WBP_Panel_ArmorCategoryContainer.WBP_Panel_ArmorCategoryContainer_C.setContainerName // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function WBP_Panel_ArmorCategoryContainer.WBP_Panel_ArmorCategoryContainer_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ClearChildren(); // Function WBP_Panel_ArmorCategoryContainer.WBP_Panel_ArmorCategoryContainer_C.ClearChildren // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function WBP_Panel_ArmorCategoryContainer.WBP_Panel_ArmorCategoryContainer_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void AddChild(struct UUserWidget* content, bool bForceFillSize); // Function WBP_Panel_ArmorCategoryContainer.WBP_Panel_ArmorCategoryContainer_C.AddChild // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_Panel_ArmorCategoryContainer(int32_t EntryPoint); // Function WBP_Panel_ArmorCategoryContainer.WBP_Panel_ArmorCategoryContainer_C.ExecuteUbergraph_WBP_Panel_ArmorCategoryContainer // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

