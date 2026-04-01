// WidgetBlueprintGeneratedClass Widget_QuickBomb_DetailPanel.Widget_QuickBomb_DetailPanel_C
// Size: 0x340 (Inherited: 0x318)
struct UWidget_QuickBomb_DetailPanel_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UVerticalBox* DetailsBox; // 0x320(0x08)
	struct FString MatchID; // 0x328(0x10)
	struct UQuickBombGameMode_PrimaryAsset_C* ModeAsset; // 0x338(0x08)

	void CreateDetailElements(struct UQuickBombGameMode_PrimaryAsset_C* ModeAsset, struct UQuickBombGameMode_UIData_C* ModeUIData); // Function Widget_QuickBomb_DetailPanel.Widget_QuickBomb_DetailPanel_C.CreateDetailElements // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void Construct(); // Function Widget_QuickBomb_DetailPanel.Widget_QuickBomb_DetailPanel_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_Widget_QuickBomb_DetailPanel(int32_t EntryPoint); // Function Widget_QuickBomb_DetailPanel.Widget_QuickBomb_DetailPanel_C.ExecuteUbergraph_Widget_QuickBomb_DetailPanel // (Final|UbergraphFunction) // @ game+0x1b42740
};

