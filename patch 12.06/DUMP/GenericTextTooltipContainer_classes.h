// WidgetBlueprintGeneratedClass GenericTextTooltipContainer.GenericTextTooltipContainer_C
// Size: 0x354 (Inherited: 0x318)
struct UGenericTextTooltipContainer_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UNamedSlot* Child; // 0x320(0x08)
	struct UMenuAnchor* TooltipAnchor; // 0x328(0x08)
	struct FText TooltipTextContent; // 0x330(0x18)
	double AutoWrapWidth; // 0x348(0x08)
	enum class EMenuPlacement Placement; // 0x350(0x01)
	enum class EHorizontalAlignment ChildHorizontalAlignment; // 0x351(0x01)
	enum class EVerticalAlignment ChildVerticalAlignment; // 0x352(0x01)
	bool bShouldShowOnConsole; // 0x353(0x01)

	struct UWidget* On_TooltipAnchor_GetMenuContent_1(); // Function GenericTextTooltipContainer.GenericTextTooltipContainer_C.On_TooltipAnchor_GetMenuContent_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1b42740
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function GenericTextTooltipContainer.GenericTextTooltipContainer_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1b42740
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function GenericTextTooltipContainer.GenericTextTooltipContainer_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1b42740
	void PreConstruct(bool IsDesignTime); // Function GenericTextTooltipContainer.GenericTextTooltipContainer_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1b42740
	void ExecuteUbergraph_GenericTextTooltipContainer(int32_t EntryPoint); // Function GenericTextTooltipContainer.GenericTextTooltipContainer_C.ExecuteUbergraph_GenericTextTooltipContainer // (Final|UbergraphFunction|HasDefaults) // @ game+0x1b42740
};

