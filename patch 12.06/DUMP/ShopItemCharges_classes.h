// WidgetBlueprintGeneratedClass ShopItemCharges.ShopItemCharges_C
// Size: 0x348 (Inherited: 0x318)
struct UShopItemCharges_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UUniformGridPanel* DotUniformGridPanel; // 0x320(0x08)
	struct TArray<struct UShopItemChargeDot_C*> DotWidgets; // 0x328(0x10)
	int32_t RowCount; // 0x338(0x04)
	int32_t ColumnCount; // 0x33c(0x04)
	int32_t MaxRowCount; // 0x340(0x04)
	int32_t MinOptimalRowCount; // 0x344(0x04)

	void UpdateDotStates(int32_t OwnedDots); // Function ShopItemCharges.ShopItemCharges_C.UpdateDotStates // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void FindEvenlyBalancedRowCount(int32_t MaxDots, int32_t& OptimalRowCount); // Function ShopItemCharges.ShopItemCharges_C.FindEvenlyBalancedRowCount // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1b42740
	void CalculateGridDimensions(int32_t MaxDots); // Function ShopItemCharges.ShopItemCharges_C.CalculateGridDimensions // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void DeleteDots(); // Function ShopItemCharges.ShopItemCharges_C.DeleteDots // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void SpawnNecessaryDots(int32_t MaxDots); // Function ShopItemCharges.ShopItemCharges_C.SpawnNecessaryDots // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function ShopItemCharges.ShopItemCharges_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void RefreshDots(int32_t MaxDots, int32_t OwnedDots); // Function ShopItemCharges.ShopItemCharges_C.RefreshDots // (BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_ShopItemCharges(int32_t EntryPoint); // Function ShopItemCharges.ShopItemCharges_C.ExecuteUbergraph_ShopItemCharges // (Final|UbergraphFunction) // @ game+0x1b42740
};

