// WidgetBlueprintGeneratedClass ContextMenu.ContextMenu_C
// Size: 0x3a0 (Inherited: 0x330)
struct UContextMenu_C : UAresContextMenuBaseWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x330(0x08)
	struct UVerticalBox* ActionVerticalBox; // 0x338(0x08)
	struct FMulticastInlineDelegate OnAction; // 0x340(0x10)
	struct FMulticastInlineDelegate OnCursorLeave; // 0x350(0x10)
	struct FMulticastInlineDelegate OnActionHovered; // 0x360(0x10)
	struct FMulticastInlineDelegate OnActionUnhovered; // 0x370(0x10)
	struct FMulticastInlineDelegate OnActionPressed; // 0x380(0x10)
	struct FMulticastInlineDelegate OnActionReleased; // 0x390(0x10)

	struct FEventReply OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function ContextMenu.ContextMenu_C.OnMouseButtonUp // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function ContextMenu.ContextMenu_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void AddActionFromWidget(struct UWidget* NewParam); // Function ContextMenu.ContextMenu_C.AddActionFromWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnActionAdded(struct UAresContextMenuActionBaseWidget* ActionWidget); // Function ContextMenu.ContextMenu_C.OnActionAdded // (Event|Public|BlueprintEvent) // @ game+0x1af5410
	void Action(); // Function ContextMenu.ContextMenu_C.Action // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ActionHover(); // Function ContextMenu.ContextMenu_C.ActionHover // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ActionUnhover(); // Function ContextMenu.ContextMenu_C.ActionUnhover // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ActionPressed(); // Function ContextMenu.ContextMenu_C.ActionPressed // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ActionReleased(); // Function ContextMenu.ContextMenu_C.ActionReleased // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Add Spacer(); // Function ContextMenu.ContextMenu_C.Add Spacer // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void Add Header(struct FText Header1, struct FText Header2, bool IsMe); // Function ContextMenu.ContextMenu_C.Add Header // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void PreConstruct(bool IsDesignTime); // Function ContextMenu.ContextMenu_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1af5410
	void OnEnabledDemoAction(); // Function ContextMenu.ContextMenu_C.OnEnabledDemoAction // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnDisabledDemoAction(); // Function ContextMenu.ContextMenu_C.OnDisabledDemoAction // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_ContextMenu(int32_t EntryPoint); // Function ContextMenu.ContextMenu_C.ExecuteUbergraph_ContextMenu // (Final|UbergraphFunction|HasDefaults) // @ game+0x1af5410
	void OnActionReleased__DelegateSignature(struct UContextMenuButton_C* Button); // Function ContextMenu.ContextMenu_C.OnActionReleased__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnActionPressed__DelegateSignature(struct UContextMenuButton_C* Button); // Function ContextMenu.ContextMenu_C.OnActionPressed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnActionUnhovered__DelegateSignature(struct UContextMenuButton_C* Button); // Function ContextMenu.ContextMenu_C.OnActionUnhovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnActionHovered__DelegateSignature(struct UContextMenuButton_C* Button); // Function ContextMenu.ContextMenu_C.OnActionHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnCursorLeave__DelegateSignature(); // Function ContextMenu.ContextMenu_C.OnCursorLeave__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void OnAction__DelegateSignature(struct UContextMenuButton_C* Button); // Function ContextMenu.ContextMenu_C.OnAction__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

