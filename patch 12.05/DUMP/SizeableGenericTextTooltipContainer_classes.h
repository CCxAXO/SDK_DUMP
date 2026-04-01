// WidgetBlueprintGeneratedClass SizeableGenericTextTooltipContainer.SizeableGenericTextTooltipContainer_C
// Size: 0x368 (Inherited: 0x318)
struct USizeableGenericTextTooltipContainer_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UNamedSlot* Child; // 0x320(0x08)
	struct UMenuAnchor* TooltipAnchor; // 0x328(0x08)
	struct FText TooltipTextContent; // 0x330(0x18)
	double AutoWrapWidth; // 0x348(0x08)
	enum class EMenuPlacement Placement; // 0x350(0x01)
	bool Alignment; // 0x351(0x01)
	enum class EHorizontalAlignment ChildHorizontalAlignment; // 0x352(0x01)
	enum class EVerticalAlignment ChildVerticalAlignment; // 0x353(0x01)
	char pad_354[0x4]; // 0x354(0x04)
	struct FVector2D TooltipScale; // 0x358(0x10)

	struct UWidget* On_TooltipAnchor_GetMenuContent_1(); // Function SizeableGenericTextTooltipContainer.SizeableGenericTextTooltipContainer_C.On_TooltipAnchor_GetMenuContent_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function SizeableGenericTextTooltipContainer.SizeableGenericTextTooltipContainer_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1af5410
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function SizeableGenericTextTooltipContainer.SizeableGenericTextTooltipContainer_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function SizeableGenericTextTooltipContainer.SizeableGenericTextTooltipContainer_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_SizeableGenericTextTooltipContainer(int32_t EntryPoint); // Function SizeableGenericTextTooltipContainer.SizeableGenericTextTooltipContainer_C.ExecuteUbergraph_SizeableGenericTextTooltipContainer // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

