// WidgetBlueprintGeneratedClass KeybindCategoryErrorIndicatorWidget.KeybindCategoryErrorIndicatorWidget_C
// Size: 0x340 (Inherited: 0x318)
struct UKeybindCategoryErrorIndicatorWidget_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318(0x08)
	struct UWidgetAnimation* Pulse; // 0x320(0x08)
	struct UImage* ErrorIcon; // 0x328(0x08)
	struct TArray<struct UAresKeyboardKeyBindWidget_C*> ChildWidgets; // 0x330(0x10)

	void AddMonitoredParentWidget(struct UPanelWidget* Widget); // Function KeybindCategoryErrorIndicatorWidget.KeybindCategoryErrorIndicatorWidget_C.AddMonitoredParentWidget // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void UpdateErrorIconState(); // Function KeybindCategoryErrorIndicatorWidget.KeybindCategoryErrorIndicatorWidget_C.UpdateErrorIconState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void AddMonitoredKeybindWidget(struct UAresKeyboardKeyBindWidget_C* KeyBindWidget); // Function KeybindCategoryErrorIndicatorWidget.KeybindCategoryErrorIndicatorWidget_C.AddMonitoredKeybindWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ChildAdded(struct UAresKeyboardKeyBindWidget_C* ChildWidget); // Function KeybindCategoryErrorIndicatorWidget.KeybindCategoryErrorIndicatorWidget_C.ChildAdded // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ChildConflictStateChanged(bool bIsConflicted, struct FName Character, bool bIsUpdateForCurrentCharacter); // Function KeybindCategoryErrorIndicatorWidget.KeybindCategoryErrorIndicatorWidget_C.ChildConflictStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ExecuteUbergraph_KeybindCategoryErrorIndicatorWidget(int32_t EntryPoint); // Function KeybindCategoryErrorIndicatorWidget.KeybindCategoryErrorIndicatorWidget_C.ExecuteUbergraph_KeybindCategoryErrorIndicatorWidget // (Final|UbergraphFunction) // @ game+0x1af5410
};

