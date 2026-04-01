// WidgetBlueprintGeneratedClass ShopAbilitiesContainer.ShopAbilitiesContainer_C
// Size: 0x328 (Inherited: 0x318)
struct UShopAbilitiesContainer_C : UShopAbilitiesContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UHorizontalBox* AbilitiesContainer; // 0x320(0x08)

	void ClearChildren(); // Function ShopAbilitiesContainer.ShopAbilitiesContainer_C.ClearChildren // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void AddChild(struct UUserWidget* content, bool bForceFillSize); // Function ShopAbilitiesContainer.ShopAbilitiesContainer_C.AddChild // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_ShopAbilitiesContainer(int32_t EntryPoint); // Function ShopAbilitiesContainer.ShopAbilitiesContainer_C.ExecuteUbergraph_ShopAbilitiesContainer // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

