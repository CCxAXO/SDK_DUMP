// WidgetBlueprintGeneratedClass ConflictsNotificationWidget.ConflictsNotificationWidget_C
// Size: 0x340 (Inherited: 0x320)
struct UConflictsNotificationWidget_C : UDesignableUserWidget {
	struct USizeBox* ConflictSizeBox; // 0x320(0x08)
	struct UTextBlock* ConflictsListText; // 0x328(0x08)
	struct UKeybindCategoryErrorIndicatorWidget_C* InterfaceControlsCategeryErrorIcon; // 0x330(0x08)
	struct UControlsSettings_C* ControlsSettingsPage; // 0x338(0x08)

	void Initialize(struct UControlsSettings_C* ControlsSettingsPage); // Function ConflictsNotificationWidget.ConflictsNotificationWidget_C.Initialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
	void ListConflictingBindings(struct TArray<struct FConflictList>& ConflictsList, struct FName CharacterName); // Function ConflictsNotificationWidget.ConflictsNotificationWidget_C.ListConflictingBindings // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1af5410
};

