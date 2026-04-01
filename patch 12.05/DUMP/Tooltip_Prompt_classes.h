// WidgetBlueprintGeneratedClass Tooltip_Prompt.Tooltip_Prompt_C
// Size: 0x360 (Inherited: 0x318)
struct UTooltip_Prompt_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UImage* Image_166; // 0x320(0x08)
	struct UTextBlock* leftClickText; // 0x328(0x08)
	struct UOverlay* OverlayContainer; // 0x330(0x08)
	struct UTextBlock* rightClickText; // 0x338(0x08)
	struct UShared_Mouse_Prompt_C* Shared_Mouse_Prompt; // 0x340(0x08)
	struct UShopPurchasableModel* shopModel; // 0x348(0x08)
	struct UInventorySlotModel* InventorySlotModel; // 0x350(0x08)
	struct UShopPlayerModel* PlayerModel; // 0x358(0x08)

	void SetRightClickText(struct FText rightClickText); // Function Tooltip_Prompt.Tooltip_Prompt_C.SetRightClickText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void SetLeftClickText(struct FText leftClickText); // Function Tooltip_Prompt.Tooltip_Prompt_C.SetLeftClickText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Construct(); // Function Tooltip_Prompt.Tooltip_Prompt_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_Tooltip_Prompt(int32_t EntryPoint); // Function Tooltip_Prompt.Tooltip_Prompt_C.ExecuteUbergraph_Tooltip_Prompt // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

