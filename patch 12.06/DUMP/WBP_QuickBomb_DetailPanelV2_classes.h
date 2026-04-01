// WidgetBlueprintGeneratedClass WBP_QuickBomb_DetailPanelV2.WBP_QuickBomb_DetailPanelV2_C
// Size: 0x340 (Inherited: 0x318)
struct UWBP_QuickBomb_DetailPanelV2_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UVerticalBox* DetailsBox; // 0x320(0x08)
	struct FString MatchID; // 0x328(0x10)
	struct UQuickBombGameMode_PrimaryAsset_C* ModeAsset; // 0x338(0x08)

	void CreateDetailElements(struct UQuickBombGameMode_PrimaryAsset_C* ModeAsset, struct UQuickBombGameMode_UIData_C* ModeUIData); // Function WBP_QuickBomb_DetailPanelV2.WBP_QuickBomb_DetailPanelV2_C.CreateDetailElements // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function WBP_QuickBomb_DetailPanelV2.WBP_QuickBomb_DetailPanelV2_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_WBP_QuickBomb_DetailPanelV2(int32_t EntryPoint); // Function WBP_QuickBomb_DetailPanelV2.WBP_QuickBomb_DetailPanelV2_C.ExecuteUbergraph_WBP_QuickBomb_DetailPanelV2 // (Final|UbergraphFunction) // @ game+0x1b42740
};

