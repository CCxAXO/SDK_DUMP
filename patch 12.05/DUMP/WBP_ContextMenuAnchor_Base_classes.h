// WidgetBlueprintGeneratedClass WBP_ContextMenuAnchor_Base.WBP_ContextMenuAnchor_Base_C
// Size: 0x338 (Inherited: 0x318)
struct UWBP_ContextMenuAnchor_Base_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	bool bListenToRightClickInput; // 0x320(0x01)
	bool bCloseMenuAnchorOnMouseLeave; // 0x321(0x01)
	bool bIsTrackingRightMouseButtonDown; // 0x322(0x01)
	char pad_323[0x5]; // 0x323(0x05)
	struct FMulticastInlineDelegate OnContextMenuOpenChanged; // 0x328(0x10)

	void CloseContextMenuViaNavSystem(); // Function WBP_ContextMenuAnchor_Base.WBP_ContextMenuAnchor_Base_C.CloseContextMenuViaNavSystem // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void CloseContextMenuViaMenuAnchor(); // Function WBP_ContextMenuAnchor_Base.WBP_ContextMenuAnchor_Base_C.CloseContextMenuViaMenuAnchor // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void CloseContextMenu(); // Function WBP_ContextMenuAnchor_Base.WBP_ContextMenuAnchor_Base_C.CloseContextMenu // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OpenContextMenuViaNavSystem(); // Function WBP_ContextMenuAnchor_Base.WBP_ContextMenuAnchor_Base_C.OpenContextMenuViaNavSystem // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OpenContextMenuViaMenuAnchor(); // Function WBP_ContextMenuAnchor_Base.WBP_ContextMenuAnchor_Base_C.OpenContextMenuViaMenuAnchor // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OpenContextMenu(); // Function WBP_ContextMenuAnchor_Base.WBP_ContextMenuAnchor_Base_C.OpenContextMenu // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	struct FEventReply OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function WBP_ContextMenuAnchor_Base.WBP_ContextMenuAnchor_Base_C.OnMouseButtonUp // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function WBP_ContextMenuAnchor_Base.WBP_ContextMenuAnchor_Base_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function WBP_ContextMenuAnchor_Base.WBP_ContextMenuAnchor_Base_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_WBP_ContextMenuAnchor_Base(int32_t EntryPoint); // Function WBP_ContextMenuAnchor_Base.WBP_ContextMenuAnchor_Base_C.ExecuteUbergraph_WBP_ContextMenuAnchor_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
	void OnContextMenuOpenChanged__DelegateSignature(bool bIsOpen); // Function WBP_ContextMenuAnchor_Base.WBP_ContextMenuAnchor_Base_C.OnContextMenuOpenChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

