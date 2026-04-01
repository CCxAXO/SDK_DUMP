// WidgetBlueprintGeneratedClass Bracket_Tooltip_Slot.Bracket_Tooltip_Slot_C
// Size: 0x339 (Inherited: 0x318)
struct UBracket_Tooltip_Slot_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UNamedSlot* TooltipSlot; // 0x320(0x08)
	struct TScriptInterface<IBracket_ToolTip_Interface_C> TooltipSlotWidget; // 0x328(0x10)
	enum class E_Bracket_Expand_Directions ExpandedDirection; // 0x338(0x01)

	void SetTooltipSlotWidget(struct UUserWidget*& ToolTipWidget); // Function Bracket_Tooltip_Slot.Bracket_Tooltip_Slot_C.SetTooltipSlotWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ChooseExpandDirection(enum class E_Bracket_Expand_Directions& ExpandDirection); // Function Bracket_Tooltip_Slot.Bracket_Tooltip_Slot_C.ChooseExpandDirection // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function Bracket_Tooltip_Slot.Bracket_Tooltip_Slot_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1af5410
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function Bracket_Tooltip_Slot.Bracket_Tooltip_Slot_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1af5410
	void OnHideCompleted(); // Function Bracket_Tooltip_Slot.Bracket_Tooltip_Slot_C.OnHideCompleted // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnShowCompleted(); // Function Bracket_Tooltip_Slot.Bracket_Tooltip_Slot_C.OnShowCompleted // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_Bracket_Tooltip_Slot(int32_t EntryPoint); // Function Bracket_Tooltip_Slot.Bracket_Tooltip_Slot_C.ExecuteUbergraph_Bracket_Tooltip_Slot // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
};

